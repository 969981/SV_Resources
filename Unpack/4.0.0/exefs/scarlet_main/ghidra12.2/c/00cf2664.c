/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf2664; name: FUN_00cf2664
 */


undefined8 FUN_00cf2664(undefined1 param_1 [16],long param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = *(long *)(param_2 + 0x210);
  if (*(int *)(lVar5 + 0x170) != 0) {
    fVar7 = (float)*(int *)(lVar5 + 0x130);
    fVar6 = (fVar7 / (float)*(undefined8 *)(lVar5 + 0x60)) *
            (param_1._0_4_ - (float)*(undefined8 *)(lVar5 + 0x40));
    if (0.0 <= fVar6) {
      uVar4 = 0;
      fVar8 = ((float)*(int *)(lVar5 + 0x134) / (float)*(undefined8 *)(lVar5 + 0x68)) *
              (param_1._8_4_ - (float)*(undefined8 *)(lVar5 + 0x48));
      bVar2 = false;
      bVar3 = false;
      if (fVar8 < (float)*(int *)(lVar5 + 0x134)) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar6) && !NAN(fVar7)) {
          bVar2 = fVar6 < fVar7;
          bVar3 = false;
        }
      }
      if ((bVar2 != bVar3) && (0.0 <= fVar8)) {
        uVar1 = (int)fVar6 + *(int *)(lVar5 + 0x130) * (int)fVar8;
        if ((int)uVar1 < 0) {
          return 0;
        }
        uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0x198) + (ulong)uVar1 * 8);
      }
      return uVar4;
    }
  }
  return 0;
}


