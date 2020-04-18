# ESP32 - IDF Template For VS Code

## How To Use

1. Get the [ESP-IDF Framework And ToolChain Installed For Windows](https://docs.espressif.com/projects/esp-idf/en/stable/get-started/windows-setup.html)
**Note That This is For "Stable" Release Of The ESP-IDF**

2. Get the [VS-Code](https://code.visualstudio.com/) 


3. Once you have [VS-Code](https://code.visualstudio.com/), Go to extenstions (ctrl+shift+x) , and search for [C/C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

4. Once the extension is installed, make a new Directory in your local Drive, or go to 
``` yourlocation/esp-idf/examples/get-started/ ``` 
Once in there you must have the Git Installed already. 

5. Clone this on your drive with ` git clone `

6. Go To File --> Open Folder , and open this Template.

7. Once inside the Template go to `.vscode --> c_cpp_properties`
Edit the part with your path
``` "compilerPath": "C:\\Users\\parth\\.espressif\\tools\\xtensa-esp32-elf\\esp-2019r2-8.2.0\\xtensa-esp32-elf\\bin\\xtensa-esp32-elf-gcc.exe",```

8. finally check your com Port and then edit it under ```tasks.json```
to match your com port ```{
            "label": "Monitor",
            "type": "shell",
            "isBackground": true,
            "options": {
                "cwd": "${workspaceFolder}"
            },
            "command": "idf.py -p COM4 monitor",
            "problemMatcher": []
        },
        {
            "label": "flash",
            "type": "shell",
            "isBackground": true,
            "options": {
                "cwd": "${workspaceFolder}"
            },
            "command": "idf.py -p COM4 flash",
            "problemMatcher": []
        } ```
        change all the **COM4** With your suitable Com Port.





Please check [ESP-IDF docs](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html) for getting started instructions.

*Code in this repository is in the Public Domain (or CC0 licensed, at your option.)
Unless required by applicable law or agreed to in writing, this
software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
CONDITIONS OF ANY KIND, either express or implied.*
