[第一人称射击游戏教程](https://docs.unrealengine.com/4.27/zh-CN/ProgrammingAndScripting/ProgrammingWithCPP/CPPTutorials/FirstPersonShooter/)



因文件数量问题丢失一些文件夹。主要代码在Source里。

一些子目录在引擎和游戏项目目录中都有：

Binaries --包含可执行文件或编译期间创建的其他文件。
Build --包含构建引擎或游戏所需的文件，包括创建特定于平台的构建版所需的文件。
Config --配置文件，设置用来控制引擎行为的值。游戏项目Config文件中设置的值会覆盖引擎Config目录中设置的值。
Content --引擎或游戏的内容。包括贴图、声音等资源。
DerivedDataCache --包含加载时针对引用内容生成的派生数据文件。引用内容没有相应的缓存文件会导致加载时间显著延长。
Intermediate --包含构建引擎或游戏时生成的临时文件。在游戏目录中，着色器存储在Intermediate目录中。
Saved --包含自动保存、配置(*.ini)文件和日志文件。此外引擎Saved目录还包含崩溃日志、硬件信息和Swarm选项与数据。
Source --包含引擎或游戏中的所有源文件，包括引擎源代码、工具和游戏类等。
引擎目录中的源文件组织结构如下：
Developer --编辑器和引擎共同使用的文件。
Editor --仅供编辑器使用的文件。
Programs --引擎或编辑器使用的外部工具。
Runtime --仅供引擎使用的文件。
游戏项目目录中的源文件按模块分组，一个模块一个目录。每个模块包含以下内容：
Classes --包含所有游戏类文件。
Private --包含所有 “.cpp” 文件，包括游戏类实现文件和模块实现文件。
Public --包含模块头文件。
