/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011e4c0; name: FUN_0011e4c0
 */


void FUN_0011e4c0(undefined8 *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  puVar6 = *(uint **)(param_3 + 2);
  uVar9 = *param_3;
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  uVar8 = param_3[4];
  *param_1 = 0;
  param_1[1] = 0;
  puVar7 = puVar6;
  if (uVar8 == 0) {
    puVar7 = puVar6 + 1;
    uVar9 = *puVar6;
    uVar8 = 0x20;
  }
  uVar3 = uVar9 >> 1;
  uVar12 = (ulong)uVar3;
  uVar8 = uVar8 - 1;
  uVar10 = (ulong)uVar8;
  if ((uVar9 & 1) != 0) {
    lVar11 = 0;
    iVar1 = *(int *)(&DAT_03cb51c0 + (ulong)param_2 * 4);
    do {
      uVar9 = (uint)uVar10;
      uVar8 = (uint)uVar12;
      uVar3 = uVar8;
      if (uVar9 < 0xb) {
        uVar3 = *puVar7 << (ulong)(uVar9 & 0x1f) | uVar8;
      }
      uVar3 = (uVar3 & 0x7ff) + 1 & (uVar3 & 0x7ff ^ 0xffffffff);
      uVar4 = (uint)LZCOUNT(uVar3);
      uVar2 = 0x20 - uVar4;
      if (uVar2 < uVar9 || uVar2 - uVar9 == 0) {
        uVar8 = uVar8 >> (ulong)(uVar2 & 0x1f);
      }
      else {
        uVar8 = *puVar7 >> (ulong)(uVar2 - uVar9 & 0x1f);
        uVar9 = uVar9 + 0x20;
        puVar7 = puVar7 + 1;
      }
      uVar12 = (ulong)uVar8;
      uVar9 = uVar9 - uVar2;
      uVar10 = (ulong)uVar9;
      iVar5 = 0x1f - uVar4;
      if (iVar5 != 0) {
        puVar6 = puVar7;
        if (0xf < uVar3) {
          uVar3 = 0x1c - uVar4;
          if (uVar9 < uVar3) {
            puVar6 = puVar7 + 1;
            Hint_Prefetch(puVar7 + 0x100,0,0,0);
            uVar9 = uVar9 + 0x20;
            uVar12 = (ulong)*puVar7 << (uVar10 & 0x3f) | uVar12;
          }
          uVar8 = (uint)(uVar12 >> ((ulong)uVar3 & 0x3f));
          uVar9 = uVar9 - uVar3;
          iVar5 = (1 << (ulong)(uVar3 & 0x1f)) +
                  (0xfffffffU >> (ulong)(uVar4 & 0x1f) & (uint)uVar12) + 2;
        }
        puVar7 = puVar6;
        if (uVar9 == 0) {
          puVar7 = puVar6 + 1;
          uVar8 = *puVar6;
          uVar9 = 0x20;
        }
        uVar12 = (ulong)(uVar8 >> 1);
        uVar10 = (ulong)(uVar9 - 1);
        *(uint *)((long)param_1 + lVar11) =
             (iVar5 * iVar1 + 0x200 >> 10 ^ -(uVar8 & 1)) + (uVar8 & 1);
      }
      uVar8 = (uint)uVar10;
      uVar3 = (uint)uVar12;
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x10);
  }
  *(uint **)(param_3 + 2) = puVar7;
  *param_3 = uVar3;
  param_3[4] = uVar8;
  return;
}


