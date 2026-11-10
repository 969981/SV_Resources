/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011de90; name: FUN_0011de90
 */


undefined8 FUN_0011de90(undefined8 *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  puVar7 = *(uint **)(param_3 + 2);
  uVar10 = *param_3;
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  uVar9 = param_3[4];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar8 = puVar7;
  if (uVar9 == 0) {
    puVar8 = puVar7 + 1;
    uVar10 = *puVar7;
    uVar9 = 0x20;
  }
  uVar4 = uVar10 >> 1;
  uVar13 = (ulong)uVar4;
  uVar9 = uVar9 - 1;
  uVar11 = (ulong)uVar9;
  if ((uVar10 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    lVar12 = 0;
    iVar1 = *(int *)(&DAT_03cb51c0 + (ulong)param_2 * 4);
    do {
      uVar10 = (uint)uVar11;
      uVar9 = (uint)uVar13;
      uVar4 = uVar9;
      if (uVar10 < 0xb) {
        uVar4 = *puVar8 << (ulong)(uVar10 & 0x1f) | uVar9;
      }
      uVar4 = (uVar4 & 0x7ff) + 1 & (uVar4 & 0x7ff ^ 0xffffffff);
      uVar5 = (uint)LZCOUNT(uVar4);
      uVar2 = 0x20 - uVar5;
      if (uVar2 < uVar10 || uVar2 - uVar10 == 0) {
        uVar9 = uVar9 >> (ulong)(uVar2 & 0x1f);
      }
      else {
        uVar9 = *puVar8 >> (ulong)(uVar2 - uVar10 & 0x1f);
        uVar10 = uVar10 + 0x20;
        puVar8 = puVar8 + 1;
      }
      uVar13 = (ulong)uVar9;
      uVar10 = uVar10 - uVar2;
      uVar11 = (ulong)uVar10;
      iVar6 = 0x1f - uVar5;
      if (iVar6 != 0) {
        puVar7 = puVar8;
        if (0xf < uVar4) {
          uVar4 = 0x1c - uVar5;
          if (uVar10 < uVar4) {
            puVar7 = puVar8 + 1;
            Hint_Prefetch(puVar8 + 0x100,0,0,0);
            uVar10 = uVar10 + 0x20;
            uVar13 = (ulong)*puVar8 << (uVar11 & 0x3f) | uVar13;
          }
          uVar9 = (uint)(uVar13 >> ((ulong)uVar4 & 0x3f));
          uVar10 = uVar10 - uVar4;
          iVar6 = (1 << (ulong)(uVar4 & 0x1f)) +
                  (0xfffffffU >> (ulong)(uVar5 & 0x1f) & (uint)uVar13) + 2;
        }
        puVar8 = puVar7;
        if (uVar10 == 0) {
          puVar8 = puVar7 + 1;
          uVar9 = *puVar7;
          uVar10 = 0x20;
        }
        uVar13 = (ulong)(uVar9 >> 1);
        uVar11 = (ulong)(uVar10 - 1);
        *(uint *)((long)param_1 + lVar12) =
             (iVar6 * iVar1 + 0x200 >> 10 ^ -(uVar9 & 1)) + (uVar9 & 1);
      }
      uVar9 = (uint)uVar11;
      uVar4 = (uint)uVar13;
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0x40);
    uVar3 = 1;
  }
  *(uint **)(param_3 + 2) = puVar8;
  *param_3 = uVar4;
  param_3[4] = uVar9;
  return uVar3;
}


