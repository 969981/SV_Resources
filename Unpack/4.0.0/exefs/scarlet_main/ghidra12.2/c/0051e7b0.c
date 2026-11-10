/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051e7b0; name: FUN_0051e7b0
 */


void FUN_0051e7b0(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte local_70 [16];
  undefined8 local_60;
  int local_58;
  
  FUN_0051e180(param_1,param_1 + 0x20,param_1 + 0x40,param_3);
  puVar1 = PTR_LAB_047cba48;
  if (param_1 + 0x60 != param_2) {
    lVar6 = 0;
    lVar5 = param_1 + 0x60;
    lVar4 = param_1 + 0x40;
    do {
      lVar3 = lVar5;
      uVar2 = FUN_0051e02c(param_3,lVar3,lVar4);
      if ((uVar2 & 1) != 0) {
        local_58 = 0;
        FUN_004fe9d4(local_70,lVar3);
        lVar5 = lVar6;
        do {
          lVar4 = param_1 + lVar5;
                    /* try { // try from 0051e84c to 0051e867 has its CatchHandler @ 0051e8cc */
          FUN_004fe9d4(lVar4 + 0x60,lVar4 + 0x40);
          if (lVar5 == -0x40) {
            lVar5 = param_1;
            goto LAB_0051e880;
          }
          uVar2 = FUN_0051e02c(param_3,local_70,lVar4 + 0x20);
          lVar5 = lVar5 + -0x20;
        } while ((uVar2 & 1) != 0);
        lVar5 = param_1 + lVar5 + 0x60;
LAB_0051e880:
                    /* try { // try from 0051e880 to 0051e887 has its CatchHandler @ 0051e8c8 */
        FUN_004fe9d4(lVar5,local_70);
        if ((local_58 == 9) && ((local_70[0] & 1) != 0)) {
          FUN_0049e790(puVar1,local_60);
        }
      }
      lVar6 = lVar6 + 0x20;
      lVar5 = lVar3 + 0x20;
      lVar4 = lVar3;
    } while (lVar3 + 0x20 != param_2);
  }
  return;
}


