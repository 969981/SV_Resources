/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4d4c; name: FUN_001f4d4c
 */


undefined8 FUN_001f4d4c(long *param_1,ulong *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  *param_2 = param_4 / 6;
  if (param_4 < 6) {
    uVar3 = 0;
    *param_1 = 0;
  }
  else {
    puVar4 = (uint *)FUN_001f45a0(param_5,param_4 / 6 << 3);
    *param_1 = (long)puVar4;
    if (puVar4 == (uint *)0x0) {
      uVar3 = 0xfffffc7b;
    }
    else {
      if (*param_2 != 0) {
        uVar1 = FUN_001ed564(param_3);
        *puVar4 = uVar1 & 0xffff;
        uVar1 = FUN_001ed56c(param_3 + 2);
        puVar4[1] = uVar1;
        if (1 < *param_2) {
          lVar5 = 0;
          param_3 = param_3 + 8;
          uVar6 = 1;
          do {
            lVar7 = *param_1;
            uVar1 = FUN_001ed564(param_3 + -2);
            *(uint *)(lVar7 + lVar5 + 8) = uVar1 & 0xffff;
            uVar2 = FUN_001ed56c(param_3);
            *(undefined4 *)(lVar7 + lVar5 + 0xc) = uVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 8;
            param_3 = param_3 + 6;
          } while (uVar6 < *param_2);
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


