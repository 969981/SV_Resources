/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01962760; name: FUN_01962760
 */


undefined8
FUN_01962760(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = param_6;
  auVar6._0_8_ = param_5;
  if (param_4 != param_2) {
    lVar5 = ((long)param_3 - (long)param_1 >> 3) * 0x55 +
            (param_4 - *param_3 >> 4) * -0x5555555555555555 +
            (param_2 - *param_1 >> 4) * 0x5555555555555555;
    while (0 < lVar5) {
      lVar3 = ((*param_1 + 0xff0) - param_2 >> 4) * -0x5555555555555555;
      lVar2 = lVar5;
      lVar4 = param_2 + lVar5 * 0x30;
      if (lVar3 <= lVar5) {
        lVar2 = lVar3;
        lVar4 = *param_1 + 0xff0;
      }
      auVar6 = FUN_019628d0(param_2,lVar4,auVar6._0_8_,auVar6._8_8_);
      param_6 = auVar6._8_8_;
      lVar5 = lVar5 - lVar2;
      if (lVar2 != 0) {
        uVar1 = lVar2 + (param_2 - *param_1 >> 4) * -0x5555555555555555;
        if ((long)uVar1 < 1) {
          lVar2 = 0x54 - uVar1;
          lVar4 = SUB168(SEXT816(lVar2) * SEXT816(-0x6060606060606061),8);
          param_1 = param_1 + ((lVar4 >> 5) - (lVar4 >> 0x3f));
          param_2 = *param_1 + ((lVar2 / 0x55) * 0x55 - lVar2) * 0x30 + 0xfc0;
        }
        else {
          param_1 = param_1 + uVar1 / 0x55;
          param_2 = *param_1 + (uVar1 % 0x55) * 0x30;
        }
      }
    }
  }
  return param_6;
}


