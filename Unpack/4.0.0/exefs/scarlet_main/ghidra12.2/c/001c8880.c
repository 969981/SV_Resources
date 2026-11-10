/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c8880; name: FUN_001c8880
 */


undefined8 FUN_001c8880(long *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 1;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    param_1[3] = param_5;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[5] = 0;
    *(uint *)(param_1 + 4) = param_2;
    lVar2 = FUN_001ec2f8(-(ulong)(param_2 >> 0x1f) & 0xffffffe000000000 | (ulong)param_2 << 5);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      uVar1 = 1;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
      if ((0 < (int)param_2) && (FUN_001cb57c(lVar2,FUN_001c8938), param_2 != 1)) {
        lVar3 = (ulong)param_2 - 1;
        lVar2 = 0x20;
        do {
          FUN_001cb57c(*param_1 + lVar2,FUN_001c8938);
          lVar3 = lVar3 + -1;
          lVar2 = lVar2 + 0x20;
        } while (lVar3 != 0);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


