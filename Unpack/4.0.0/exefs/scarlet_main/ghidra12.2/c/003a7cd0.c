/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a7cd0; name: FUN_003a7cd0
 */


undefined8 FUN_003a7cd0(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte abStack_c0 [128];
  
  uVar1 = 0;
  if ((param_3 < 0x41) && (uVar8 = *(ulong *)(param_2 + 0x10), param_3 <= uVar8)) {
    uVar9 = *(ulong *)(param_2 + 8);
    uVar10 = 0;
    if (param_3 + 0x100 <= uVar8) {
      uVar10 = uVar8 - (param_3 + 0x100);
    }
    memset(abStack_c0,0,param_3);
    uVar2 = 0;
    if (uVar10 < uVar8) {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar3 = 0;
      uVar2 = 0;
      uVar5 = 0;
      do {
        uVar6 = uVar10 ^ uVar9 - param_3;
        uVar7 = (long)(uVar6 - 1 & (uVar6 ^ 0xffffffffffffffff)) >> 0x3f;
        uVar3 = (uVar7 | uVar3) & (long)((uVar10 - uVar9 ^ uVar9 | uVar10 ^ uVar9) ^ uVar10) >> 0x3f
        ;
        uVar6 = uVar5 + 1;
        abStack_c0[uVar5] = *(byte *)(lVar4 + uVar10) & (byte)uVar3 | abStack_c0[uVar5];
        uVar2 = uVar7 & uVar5 | uVar2;
        uVar5 = uVar6 & (long)((uVar6 - param_3 ^ param_3 | uVar6 ^ param_3) ^ uVar6) >> 0x3f;
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
    }
    if (param_3 != 0) {
      uVar8 = 0;
      do {
        uVar10 = uVar2 + 1;
        *(byte *)(param_1 + uVar8) = abStack_c0[uVar2];
        uVar8 = uVar8 + 1;
        uVar2 = uVar10 & (long)((uVar10 - param_3 ^ param_3 | uVar10 ^ param_3) ^ uVar10) >> 0x3f;
      } while (param_3 != uVar8);
    }
    uVar1 = 1;
  }
  return uVar1;
}


