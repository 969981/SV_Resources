/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1f608; name: FUN_01e1f608
 */


undefined1  [16]
FUN_01e1f608(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4,
            int param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  
  fVar8 = param_3._0_4_;
  uVar6 = param_2._0_8_;
  fVar5 = param_2._0_4_;
  if ((param_6 & 1) == 0) {
    if ((fVar5 < fVar8) && (*(char *)(param_4 + 0x11a) == '\0')) {
      fVar8 = *(float *)(param_4 + 0xf8) + fVar8;
      if (fVar8 <= fVar5) {
        fVar8 = fVar5;
      }
      if (param_1._0_4_ <= fVar8) {
        fVar8 = param_1._0_4_;
      }
      uVar6 = (ulong)(uint)fVar8;
      uVar7 = 0;
    }
    else {
      uVar6 = param_1._0_8_;
      uVar7 = param_1._8_8_;
    }
    goto LAB_01e1f618;
  }
  if (fVar5 < fVar8) {
    bVar1 = fVar5 < *(float *)(param_4 + 0xf8) + fVar8;
    uVar3 = (ulong)(fVar5 < *(float *)(param_4 + 0xf8) + fVar8);
  }
  else {
    bVar1 = false;
    uVar3 = 0;
  }
  iVar2 = *(int *)(param_4 + uVar3 * 0xc + (long)param_5 * 4 + 0x124);
  if (iVar2 != 1) {
    if (iVar2 == 3) {
      if (fVar5 < fVar8) {
        fVar5 = fVar8;
      }
      uVar6 = (ulong)(uint)(fVar5 + *(float *)(param_4 + 0xfc));
      uVar7 = 0;
      goto LAB_01e1f618;
    }
    if (iVar2 != 2) {
      uVar7 = param_2._8_8_;
      if (iVar2 == 4) {
        uVar6 = param_3._0_8_;
        uVar7 = param_3._8_8_;
      }
      goto LAB_01e1f618;
    }
    if (bVar1) {
      uVar6 = (ulong)(uint)(*(float *)(param_4 + 0xf8) + fVar8);
      uVar7 = 0;
      goto LAB_01e1f618;
    }
  }
  uVar6 = (ulong)(uint)(*(float *)(param_4 + 0xf4) + fVar5);
  uVar7 = 0;
LAB_01e1f618:
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = uVar6;
  return auVar4;
}


