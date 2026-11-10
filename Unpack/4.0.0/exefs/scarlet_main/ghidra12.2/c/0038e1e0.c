/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038e1e0; name: FUN_0038e1e0
 */


undefined1  [16] FUN_0038e1e0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar7 = (uint)(param_2 >> 0x20);
  lVar6 = param_1;
  if (uVar7 != param_3) {
    if (param_1 + 0x8000000000000001U < 2) {
      param_2 = param_2 & 0xffffffff | (ulong)param_3 << 0x20;
    }
    else if (param_3 == 3) {
      auVar8 = FUN_0038e500(uVar7);
      auVar8 = FUN_0038dfd0(param_1,param_2,auVar8._0_8_,auVar8._8_8_);
      param_2 = auVar8._8_8_;
      lVar6 = auVar8._0_8_;
    }
    else {
      auVar8 = FUN_0038e500(param_3);
      uVar5 = auVar8._8_8_;
      lVar6 = auVar8._0_8_;
      if (uVar7 == 3) {
        if ((param_2 >> 0x20 != 3) || ((int)param_2 < 0)) {
LAB_0038e424:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar7 = auVar8._8_4_ + (int)param_2;
        uVar1 = uVar7 + 0xc4653600;
        if ((int)uVar7 < 1000000000) {
          uVar1 = uVar7;
        }
        param_2 = uVar5 & 0xffffffff;
        if (1 < lVar6 + 0x8000000000000001U) {
          if ((param_1 < 0) || (lVar6 < 0x7fffffffffffffff - param_1)) {
            if ((param_1 < 1) && (lVar6 <= -0x8000000000000000 - param_1)) {
              param_2 = 0;
              lVar6 = -0x8000000000000000;
            }
            else {
              param_1 = lVar6 + param_1;
              lVar6 = 0x7fffffffffffffff;
              if (param_1 != 0x7ffffffffffffffe || (int)uVar7 < 1000000000) {
                lVar6 = param_1 + (ulong)(999999999 < (int)uVar7);
              }
              uVar2 = 0;
              if (param_1 != 0x7ffffffffffffffe || (int)uVar7 < 1000000000) {
                uVar2 = uVar1;
              }
              param_2 = (ulong)uVar2;
            }
          }
          else {
            param_2 = 0;
            lVar6 = 0x7fffffffffffffff;
          }
        }
        param_2 = uVar5 & 0xffffffff00000000 | param_2;
      }
      else {
        auVar9 = FUN_0038e500(uVar7);
        auVar9 = FUN_0038dfd0(param_1,param_2,auVar9._0_8_,auVar9._8_8_);
        lVar4 = auVar9._0_8_;
        if ((auVar9._8_8_ >> 0x20 != 3) || (auVar9._8_4_ < 0)) goto LAB_0038e424;
        uVar7 = auVar9._8_4_ + auVar8._8_4_;
        uVar1 = uVar7 + 0xc4653600;
        if ((int)uVar7 < 1000000000) {
          uVar1 = uVar7;
        }
        param_2 = uVar5 & 0xffffffff;
        if (1 < lVar6 + 0x8000000000000001U) {
          lVar3 = 0x7fffffffffffffff;
          if ((lVar4 == 0x7fffffffffffffff) ||
             ((((-1 < lVar4 && (0x7fffffffffffffff - lVar4 <= lVar6)) ||
               (lVar3 = -0x8000000000000000, lVar4 == -0x8000000000000000)) ||
              ((lVar4 < 1 && (lVar6 <= -0x8000000000000000 - lVar4)))))) {
            lVar6 = lVar3;
            param_2 = 0;
          }
          else {
            lVar4 = lVar4 + lVar6;
            lVar6 = 0x7fffffffffffffff;
            if (lVar4 != 0x7ffffffffffffffe || (int)uVar7 < 1000000000) {
              lVar6 = lVar4 + (ulong)(999999999 < (int)uVar7);
            }
            uVar2 = 0;
            if (lVar4 != 0x7ffffffffffffffe || (int)uVar7 < 1000000000) {
              uVar2 = uVar1;
            }
            param_2 = (ulong)uVar2;
          }
        }
        param_2 = uVar5 & 0xffffffff00000000 | param_2;
      }
    }
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = lVar6;
  return auVar8;
}


