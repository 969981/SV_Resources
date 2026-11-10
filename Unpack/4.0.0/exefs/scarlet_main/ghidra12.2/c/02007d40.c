/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02007d40; name: FUN_02007d40
 */


undefined1 FUN_02007d40(undefined1 param_1 [16],long param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar5 = *(long *)(param_2 + 0x210);
  if ((ulong)param_3 < (ulong)(*(long *)(lVar5 + 0xe0) - *(long *)(lVar5 + 0xd8) >> 5)) {
    fVar7 = (float)*(int *)(lVar5 + 0x98);
    fVar6 = (fVar7 / (float)*(undefined8 *)(lVar5 + 0x60)) *
            (param_1._0_4_ - (float)*(undefined8 *)(lVar5 + 0x40));
    if (0.0 <= fVar6) {
      uVar4 = 0;
      fVar8 = ((float)*(int *)(lVar5 + 0x9c) / (float)*(undefined8 *)(lVar5 + 0x68)) *
              (param_1._8_4_ - (float)*(undefined8 *)(lVar5 + 0x48));
      bVar2 = false;
      bVar3 = false;
      if (fVar8 < (float)*(int *)(lVar5 + 0x9c)) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar6) && !NAN(fVar7)) {
          bVar2 = fVar6 < fVar7;
          bVar3 = false;
        }
      }
      if ((bVar2 != bVar3) && (0.0 <= fVar8)) {
        uVar1 = (int)fVar6 + *(int *)(lVar5 + 0x98) * (int)fVar8;
        if ((int)uVar1 < 0) {
          return 0;
        }
        uVar4 = *(undefined1 *)
                 (*(long *)(*(long *)(*(long *)(lVar5 + 0xd8) + (ulong)param_3 * 0x20) + 0x20) +
                 (ulong)uVar1);
      }
      return uVar4;
    }
  }
  return 0;
}


