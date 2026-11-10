/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038dfd0; name: FUN_0038dfd0
 */


undefined1  [16] FUN_0038dfd0(long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  iVar5 = (int)((ulong)param_4 >> 0x20);
  uVar6 = param_2 >> 0x20;
  if (iVar5 == 3) {
    uVar7 = uVar6;
    if (-1 < (int)param_4) {
LAB_0038dffc:
      uVar4 = (int)param_2 - (int)param_4;
      uVar1 = uVar4 + 1000000000;
      if (-1 < (int)uVar4) {
        uVar1 = uVar4;
      }
      if (1 < param_1 + 0x8000000000000001U) {
        if ((param_3 != 0x8000000000000000) &&
           ((0 < (long)param_3 || (param_1 < (long)(param_3 + 0x7fffffffffffffff))))) {
          if (param_3 == 0x7fffffffffffffff) {
            auVar9._8_8_ = 0x100000000;
            auVar9._0_8_ = 0x8000000000000000;
            return auVar9;
          }
          if ((-1 < (long)param_3) && (param_1 <= (long)(param_3 | 0x8000000000000000))) {
            auVar10._8_8_ = 0x100000000;
            auVar10._0_8_ = 0x8000000000000000;
            return auVar10;
          }
          param_1 = param_1 - param_3;
          lVar3 = -0x8000000000000000;
          if (param_1 != -0x7fffffffffffffff || -1 < (int)uVar4) {
            lVar3 = param_1 - (ulong)(uVar4 >> 0x1f);
          }
          uVar2 = 0;
          if (param_1 != -0x7fffffffffffffff || -1 < (int)uVar4) {
            uVar2 = uVar1;
          }
          else {
            uVar7 = 1;
          }
          auVar11._8_8_ = (ulong)uVar2 | uVar7 << 0x20;
          auVar11._0_8_ = lVar3;
          return auVar11;
        }
        param_2 = 0;
        uVar6 = 1;
        param_1 = 0x7fffffffffffffff;
      }
      auVar8._8_8_ = param_2 & 0xffffffff | uVar6 << 0x20;
      auVar8._0_8_ = param_1;
      return auVar8;
    }
  }
  else if ((int)(param_2 >> 0x20) == iVar5) {
    uVar7 = 3;
    goto LAB_0038dffc;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


