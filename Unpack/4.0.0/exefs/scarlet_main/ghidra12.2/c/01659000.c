/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01659000; name: FUN_01659000
 */


undefined8 FUN_01659000(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1[8] == 0) {
    uVar2 = 10;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x838))(param_1,0);
    uVar2 = 0;
    if (iVar1 != param_2) {
      uVar2 = 1;
      iVar1 = (**(code **)(*param_1 + 0x838))(param_1,1);
      if (iVar1 != param_2) {
        uVar2 = 2;
        iVar1 = (**(code **)(*param_1 + 0x838))(param_1,2);
        if (iVar1 != param_2) {
          uVar2 = 3;
          iVar1 = (**(code **)(*param_1 + 0x838))(param_1,3);
          if (iVar1 != param_2) {
            uVar2 = 4;
            iVar1 = (**(code **)(*param_1 + 0x838))(param_1,4);
            if (iVar1 != param_2) {
              uVar2 = 5;
              iVar1 = (**(code **)(*param_1 + 0x838))(param_1,5);
              if (iVar1 != param_2) {
                uVar2 = 6;
                iVar1 = (**(code **)(*param_1 + 0x838))(param_1,6);
                if (iVar1 != param_2) {
                  uVar2 = 7;
                  iVar1 = (**(code **)(*param_1 + 0x838))(param_1,7);
                  if (iVar1 != param_2) {
                    uVar2 = 8;
                    iVar1 = (**(code **)(*param_1 + 0x838))(param_1,8);
                    if (iVar1 != param_2) {
                      uVar2 = 9;
                      iVar1 = (**(code **)(*param_1 + 0x838))(param_1,9);
                      if (iVar1 != param_2) {
                        (**(code **)(*param_1 + 0x838))(param_1,10);
                        return 10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}


