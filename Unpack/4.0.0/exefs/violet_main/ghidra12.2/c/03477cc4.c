/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03477cc4; name: FUN_03477cc4
 */


void FUN_03477cc4(long param_1,long param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_w25;
  float *pfVar8;
  uint uVar9;
  
  cVar2 = *(char *)(param_1 + 0xe1);
  *(undefined1 *)(param_1 + 0xe1) = 1;
  uVar1 = *param_3;
  uVar6 = *(uint *)(param_1 + 0x98);
  if (uVar1 == 0) {
    if (uVar6 != 0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      goto LAB_03477de0;
    }
    unaff_w25 = 0;
  }
  else {
    bVar3 = false;
    while( true ) {
      uVar7 = uVar6;
      if (uVar1 < uVar6) {
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0xb8) = 0;
        uVar7 = 0;
      }
      uVar9 = (uint)(uVar1 < uVar6);
      uVar6 = 0;
      uVar5 = (ulong)uVar1;
      pfVar8 = (float *)(param_2 + 0xc);
      do {
        if ((pfVar8[-1] != 0.0) && (0.0 < *pfVar8)) {
          uVar4 = FUN_03476aac(param_1 + 0x70,*(undefined8 *)(pfVar8 + -3));
          uVar9 = uVar9 | uVar4;
          uVar6 = uVar6 + (~uVar4 & 1);
        }
        uVar5 = uVar5 - 1;
        pfVar8 = pfVar8 + 4;
      } while (uVar5 != 0);
      if (uVar7 <= uVar6) break;
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if (!bVar3) {
        unaff_w25 = uVar9;
      }
      bVar3 = true;
    }
    if (!bVar3) {
      unaff_w25 = uVar9;
    }
  }
  if ((cVar2 != '\0') && ((unaff_w25 & 1) == 0)) {
    return;
  }
LAB_03477de0:
  FUN_03477638(param_1);
  return;
}


