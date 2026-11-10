/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d08c30; name: FUN_01d08c30
 */


undefined4 FUN_01d08c30(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  byte local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  long *plStack_28;
  
  FUN_01f7b518(&local_40,&DAT_03bfd378);
  uVar1 = FUN_01f7b560(param_1,&local_40);
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  if ((uVar1 & 1) == 0) {
    FUN_01f7b518(&local_40,&DAT_03c852c6);
    uVar1 = FUN_01f7b560(param_1,&local_40);
    if ((local_40 & 1) != 0) {
      (**(code **)(*plStack_28 + 0x18))
                (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
    }
    if ((uVar1 & 1) == 0) {
      FUN_01f7b518(&local_40,&DAT_03c7e56a);
      uVar1 = FUN_01f7b560(param_1,&local_40);
      if ((local_40 & 1) != 0) {
        (**(code **)(*plStack_28 + 0x18))
                  (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
      }
      if ((uVar1 & 1) == 0) {
        FUN_01f7b518(&local_40,&DAT_03c5d76d);
        uVar1 = FUN_01f7b560(param_1,&local_40);
        if ((local_40 & 1) != 0) {
          (**(code **)(*plStack_28 + 0x18))
                    (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
        }
        if ((uVar1 & 1) == 0) {
          FUN_01f7b518(&local_40,&DAT_03c50af6);
          uVar1 = FUN_01f7b560(param_1,&local_40);
          if ((local_40 & 1) != 0) {
            (**(code **)(*plStack_28 + 0x18))
                      (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
          }
          if ((uVar1 & 1) == 0) {
            FUN_01f7b518(&local_40,&DAT_03c04234);
            uVar1 = FUN_01f7b560(param_1,&local_40);
            if ((local_40 & 1) != 0) {
              (**(code **)(*plStack_28 + 0x18))
                        (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
            }
            if ((uVar1 & 1) == 0) {
              FUN_01f7b518(&local_40,&DAT_03bf663a);
              uVar1 = FUN_01f7b560(param_1,&local_40);
              if ((local_40 & 1) != 0) {
                (**(code **)(*plStack_28 + 0x18))
                          (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
              }
              if ((uVar1 & 1) == 0) {
                FUN_01f7b518(&local_40,"zh-Hans");
                uVar1 = FUN_01f7b560(param_1,&local_40);
                if ((local_40 & 1) != 0) {
                  (**(code **)(*plStack_28 + 0x18))
                            (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1
                            );
                }
                if ((uVar1 & 1) == 0) {
                  FUN_01f7b518(&local_40,"zh-Hant");
                  uVar1 = FUN_01f7b560(param_1,&local_40);
                  if ((local_40 & 1) != 0) {
                    (**(code **)(*plStack_28 + 0x18))
                              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe
                               ,1);
                  }
                  uVar2 = 10;
                  if ((uVar1 & 1) == 0) {
                    uVar2 = 2;
                  }
                }
                else {
                  uVar2 = 9;
                }
              }
              else {
                uVar2 = 8;
              }
            }
            else {
              uVar2 = 7;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


