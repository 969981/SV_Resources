/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9fc78; name: FUN_02b9fc78
 */


undefined4 FUN_02b9fc78(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_1[2] != 0) && (lVar5 = *(long *)(param_1[2] + 0x210), *(int *)(lVar5 + 0x170) != 0)) {
    fVar7 = (float)*(int *)(lVar5 + 0x130);
    fVar6 = (fVar7 / (float)*(undefined8 *)(lVar5 + 0x60)) *
            ((float)*param_1 - (float)*(undefined8 *)(lVar5 + 0x40));
    if (0.0 <= fVar6) {
      uVar4 = 0;
      fVar8 = ((float)*(int *)(lVar5 + 0x134) / (float)*(undefined8 *)(lVar5 + 0x68)) *
              ((float)param_1[1] - (float)*(undefined8 *)(lVar5 + 0x48));
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
        uVar4 = *(undefined4 *)(*(long *)(lVar5 + 0x178) + (ulong)uVar1 * 4);
      }
      return uVar4;
    }
  }
  return 0;
}


