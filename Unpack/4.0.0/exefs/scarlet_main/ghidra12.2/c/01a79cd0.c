/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a79cd0; name: FUN_01a79cd0
 */


undefined1  [16] FUN_01a79cd0(long param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (param_2 != param_1) {
    do {
      auVar6 = FUN_028af8f0(param_3,param_4);
      lVar5 = param_2 - param_1 >> 3;
      lVar2 = (auVar6._8_8_ + 8) - *auVar6._0_8_;
      lVar1 = lVar2 >> 3;
      lVar2 = param_2 - lVar2;
      if (lVar5 <= lVar1) {
        lVar1 = lVar5;
        lVar2 = param_1;
      }
      FUN_028af960(lVar2,param_2);
      if (lVar1 != 0) {
        uVar3 = (param_4 - *param_3 >> 3) - lVar1;
        if ((long)uVar3 < 1) {
          uVar4 = 0x1ff - uVar3;
          uVar3 = 0x3fe - uVar3;
          if (-1 < (long)uVar4) {
            uVar3 = uVar4;
          }
          param_3 = param_3 + -((long)uVar3 >> 9);
          param_4 = *param_3 + ((uVar3 & 0x1ffffffffffffe00) - uVar4) * 8 + 0xff8;
        }
        else {
          param_3 = (long *)((long)param_3 + (uVar3 >> 6 & 0x3fffffffffffff8));
          param_4 = *param_3 + (uVar3 & 0x1ff) * 8;
        }
      }
      param_2 = lVar2;
    } while (lVar2 != param_1);
  }
  auVar6._8_8_ = param_4;
  auVar6._0_8_ = param_3;
  return auVar6;
}


