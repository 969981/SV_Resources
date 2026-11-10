/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a79de0; name: FUN_01a79de0
 */


undefined8
FUN_01a79de0(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = param_6;
  auVar7._0_8_ = param_5;
  if (param_4 != param_2) {
    lVar6 = ((param_4 - *param_3 >> 3) + ((long)param_3 - (long)param_1) * 0x40) -
            (param_2 - *param_1 >> 3);
    while (0 < lVar6) {
      lVar4 = (*param_1 + 0x1000) - param_2 >> 3;
      lVar2 = lVar6;
      lVar3 = param_2 + lVar6 * 8;
      if (lVar4 <= lVar6) {
        lVar2 = lVar4;
        lVar3 = *param_1 + 0x1000;
      }
      auVar7 = FUN_028af7f0(param_2,lVar3,auVar7._0_8_,auVar7._8_8_);
      param_6 = auVar7._8_8_;
      lVar6 = lVar6 - lVar2;
      if (lVar2 != 0) {
        uVar1 = lVar2 + (param_2 - *param_1 >> 3);
        if ((long)uVar1 < 1) {
          uVar5 = 0x1ff - uVar1;
          uVar1 = 0x3fe - uVar1;
          if (-1 < (long)uVar5) {
            uVar1 = uVar5;
          }
          param_1 = param_1 + -((long)uVar1 >> 9);
          param_2 = *param_1 + ((uVar1 & 0x1ffffffffffffe00) - uVar5) * 8 + 0xff8;
        }
        else {
          param_1 = (long *)((long)param_1 + (uVar1 >> 6 & 0x3fffffffffffff8));
          param_2 = *param_1 + (uVar1 & 0x1ff) * 8;
        }
      }
    }
  }
  return param_6;
}


