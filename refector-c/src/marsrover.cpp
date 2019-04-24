#include "CMarsHandle.h"

int main() {
    CMarsHandle cMarsHandle;
    cMarsHandle.Init();
    int iXmax;
    int iYmax;
    std::vector<STParaGroup> vecUserInput;
    marsGetCommands(cMarsHandle, iXmax, iYmax, vecUserInput);

    // 主处理逻辑
    executeCommands(cMarsHandle, iXmax, iYmax, vecUserInput);
    return 0;
}

