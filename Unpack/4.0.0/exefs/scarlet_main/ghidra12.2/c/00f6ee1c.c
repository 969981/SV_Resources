/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6ee1c; name: FUN_00f6ee1c
 */


void FUN_00f6ee1c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_2[3];
  lVar5 = param_2[4];
  lVar3 = param_2[5];
  lVar4 = param_2[6];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = lVar3;
  param_1[6] = lVar4;
  param_1[3] = lVar2;
  param_1[4] = lVar5;
  if (param_2[1] - *param_2 != 0) {
    FUN_00f6f088(param_1,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar5 = param_1[1];
    if (lVar2 != lVar3) {
      puVar1 = param_1 + 3;
      FUN_00f6ef9c(puVar1,lVar5,lVar2);
      lVar4 = lVar5 + 0x18;
      if (lVar2 + 0x18 != lVar3) {
        FUN_00f6ef9c(puVar1,lVar5 + 0x18);
        lVar4 = lVar5 + 0x30;
        if (lVar2 + 0x30 != lVar3) {
          FUN_00f6ef9c(puVar1,lVar5 + 0x30);
          lVar4 = lVar5 + 0x48;
          if (lVar2 + 0x48 != lVar3) {
            FUN_00f6ef9c(puVar1,lVar5 + 0x48);
            lVar4 = lVar5 + 0x60;
            if (lVar2 + 0x60 != lVar3) {
              FUN_00f6ef9c(puVar1,lVar5 + 0x60);
              lVar4 = lVar5 + 0x78;
              if (lVar2 + 0x78 != lVar3) {
                FUN_00f6ef9c(puVar1,lVar5 + 0x78);
                lVar4 = lVar5 + 0x90;
                if (lVar2 + 0x90 != lVar3) {
                  FUN_00f6ef9c(puVar1,lVar5 + 0x90);
                  lVar4 = lVar5 + 0xa8;
                  for (lVar2 = lVar2 + 0xa8; lVar2 != lVar3; lVar2 = lVar2 + 0x18) {
                    FUN_00f6ef9c(puVar1,lVar4,lVar2);
                    lVar4 = lVar4 + 0x18;
                  }
                }
              }
            }
          }
        }
      }
      lVar5 = lVar4;
    }
    param_1[1] = lVar5;
  }
  return;
}


