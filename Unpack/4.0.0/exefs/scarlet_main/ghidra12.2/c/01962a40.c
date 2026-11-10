/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01962a40; name: FUN_01962a40
 */


void FUN_01962a40(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = param_6;
  auVar8._0_8_ = param_5;
  if (param_4 != param_2) {
    lVar6 = ((long)param_3 - (long)param_1 >> 3) * 0x55 +
            (param_4 - *param_3 >> 4) * -0x5555555555555555 +
            (param_2 - *param_1 >> 4) * 0x5555555555555555;
    while (0 < lVar6) {
      lVar2 = *param_3;
      if (lVar2 == param_4) {
        param_3 = param_3 + -1;
        lVar2 = *param_3;
        param_4 = lVar2 + 0xff0;
      }
      lVar4 = (param_4 - lVar2 >> 4) * -0x5555555555555555;
      lVar7 = param_4 + -0x30;
      lVar5 = lVar6;
      lVar1 = param_4 + lVar6 * -0x30;
      if (lVar4 <= lVar6) {
        lVar5 = lVar4;
        lVar1 = lVar2;
      }
      auVar8 = FUN_01e01160(lVar1,param_4,auVar8._0_8_,auVar8._8_8_);
      lVar6 = lVar6 - lVar5;
      param_4 = lVar7;
      if (lVar5 + -1 != 0) {
        uVar3 = (lVar7 - *param_3 >> 4) * -0x5555555555555555 - (lVar5 + -1);
        if ((long)uVar3 < 1) {
          lVar2 = 0x54 - uVar3;
          lVar5 = SUB168(SEXT816(lVar2) * SEXT816(-0x6060606060606061),8);
          param_3 = param_3 + ((lVar5 >> 5) - (lVar5 >> 0x3f));
          param_4 = *param_3 + ((lVar2 / 0x55) * 0x55 - lVar2) * 0x30 + 0xfc0;
        }
        else {
          param_3 = param_3 + uVar3 / 0x55;
          param_4 = *param_3 + (uVar3 % 0x55) * 0x30;
        }
      }
    }
  }
  return;
}


