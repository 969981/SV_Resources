/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032419c0; name: FUN_032419c0
 */


void FUN_032419c0(long param_1,uint param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  
  auVar4._8_4_ = 0x7f7fffee;
  auVar4._0_8_ = 0x7f7fffee7f7fffee;
  auVar4._12_4_ = 0x7f7fffee;
  auVar6._8_4_ = 0xff7fffee;
  auVar6._0_8_ = 0xff7fffeeff7fffee;
  auVar6._12_4_ = 0xff7fffee;
  param_3[1] = auVar4._8_8_;
  *param_3 = 0x7f7fffee7f7fffee;
  param_3[3] = auVar6._8_8_;
  param_3[2] = 0xff7fffeeff7fffee;
  if (0 < (int)param_2) {
    if (param_2 == 1) {
      uVar2 = 0;
    }
    else {
      auVar4._8_4_ = 0x7f7fffee;
      auVar4._0_8_ = 0x7f7fffee7f7fffee;
      auVar4._12_4_ = 0x7f7fffee;
      uVar2 = 0;
      auVar6._8_4_ = 0xff7fffee;
      auVar6._0_8_ = 0xff7fffeeff7fffee;
      auVar6._12_4_ = 0xff7fffee;
      do {
        pauVar1 = (undefined1 (*) [16])(param_1 + uVar2 * 0x10);
        uVar2 = uVar2 + 2;
        auVar4 = NEON_fmin(auVar4,*pauVar1,4);
        param_3[1] = auVar4._8_8_;
        *param_3 = auVar4._0_8_;
        auVar6 = NEON_fmax(auVar6,*pauVar1,4);
        param_3[3] = auVar6._8_8_;
        param_3[2] = auVar6._0_8_;
        auVar4 = NEON_fmin(auVar4,pauVar1[1],4);
        param_3[1] = auVar4._8_8_;
        *param_3 = auVar4._0_8_;
        auVar6 = NEON_fmax(auVar6,pauVar1[1],4);
        param_3[3] = auVar6._8_8_;
        param_3[2] = auVar6._0_8_;
      } while (((ulong)param_2 & 0xfffffffe) != uVar2);
    }
    auVar5 = auVar6._0_12_;
    auVar3 = auVar4._0_12_;
    if ((param_2 & 1) != 0) {
      auVar4 = NEON_fmin(auVar4,*(undefined1 (*) [16])(param_1 + uVar2 * 0x10),4);
      auVar3 = auVar4._0_12_;
      param_3[1] = auVar4._8_8_;
      *param_3 = auVar4._0_8_;
      auVar4 = NEON_fmax(auVar6,*(undefined1 (*) [16])(param_1 + uVar2 * 0x10),4);
      auVar5 = auVar4._0_12_;
      param_3[3] = auVar4._8_8_;
      param_3[2] = auVar4._0_8_;
    }
    param_3[1] = (ulong)auVar3._8_4_;
    *param_3 = auVar3._0_8_;
    param_3[3] = (ulong)auVar5._8_4_;
    param_3[2] = auVar5._0_8_;
  }
  return;
}


