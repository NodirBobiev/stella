import os, argparse

def get_files(dir_path):
    filenames, filepaths = [], []
    for filename in os.listdir(dir_path):
        filepath = os.path.join(dir_path, filename)
        if os.path.isfile(filepath):
            filenames.append(filename)
            filepaths.append(filepath)

    return filenames, filepaths

def wrap(testname, filepath):
    return "add_test(NAME " + testname + " COMMAND stella-interpreter typecheck " + filepath + ")"

def set_tests_properties(tests):
    return "set_tests_properties(\n\t" + "\n\t".join(tests) + "\n\tPROPERTIES WILL_FAIL TRUE)"

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Test maker for CMakeList.txt")

    parser.add_argument("dir", action="store", help="Path to tests dir")
    parser.add_argument("--fail", action="store_true", help="Set tests properties to fail")
    parser.add_argument("--enum", action="store", help="Enumerate tests to avoid confusion. Requires starting number")
    args = parser.parse_args()

    filenames, filepaths = get_files(args.dir)
    
    testnames = [x for x in filenames]
    
    if args.enum:
        testnames = [f'{i}-{filename}' for i, filename in enumerate(filenames, int(args.enum))]

    output = ""
    for testname, filepath in zip(testnames, filepaths):
        output += wrap(testname, filepath) + "\n"
    
    if args.fail:
        output += set_tests_properties(testnames) + "\n"
    
    print(output)
