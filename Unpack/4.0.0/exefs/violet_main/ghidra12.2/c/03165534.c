/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03165534; name: FUN_03165534
 */


void FUN_03165534(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  
  lVar9 = *param_1;
  uVar7 = *(undefined8 *)(lVar9 + 0x14);
  uVar3 = *(uint *)(lVar9 + 0x1c);
  uVar4 = *(uint *)(lVar9 + 0x10);
  lVar10 = param_1[1];
  uVar5 = (int)lVar10 - 2U >> 1;
  if (uVar5 == 0) {
    uVar6 = 1;
LAB_031655f4:
    uVar5 = (int)lVar10 - 1;
    if (uVar6 == ((uVar5 & 1) - 1 & uVar5 >> 1)) {
      lVar10 = *param_1;
      uVar5 = uVar6 << 1;
      if (*(uint *)(lVar10 + (-(ulong)((uVar6 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                             (ulong)uVar5 << 4)) < uVar4) {
        puVar2 = (undefined8 *)(lVar10 + (long)(int)uVar5 * 0x10);
        puVar1 = (undefined8 *)(lVar10 + (long)(int)uVar6 * 0x10);
        puVar1[1] = puVar2[1];
        *puVar1 = *puVar2;
        uVar6 = uVar5;
      }
    }
    puVar8 = (uint *)(*param_1 + (long)(int)uVar6 * 0x10);
  }
  else {
    uVar6 = 2;
    if (*(uint *)(lVar9 + 0x30) <= *(uint *)(lVar9 + 0x20)) {
      uVar6 = 3;
    }
    uVar11 = (ulong)uVar6;
    if (*(uint *)(lVar9 + uVar11 * 0x10) < uVar4) {
      uVar6 = 1;
      uVar13 = uVar11;
      do {
        puVar1 = (undefined8 *)(lVar9 + (long)(int)uVar6 * 0x10);
        uVar6 = (uint)uVar13;
        puVar2 = (undefined8 *)(lVar9 + uVar11 * 0x10);
        puVar1[1] = puVar2[1];
        *puVar1 = *puVar2;
        if (uVar5 < uVar6) goto LAB_031655f4;
        lVar9 = *param_1;
        uVar12 = uVar6 << 1;
        if (*(uint *)(lVar9 + ((long)(int)uVar12 | 1U) * 0x10) <=
            *(uint *)(lVar9 + (-(ulong)((uVar6 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                              (ulong)uVar12 << 4))) {
          uVar12 = (uint)((long)(int)uVar12 | 1U);
        }
        uVar13 = (ulong)uVar12;
        uVar11 = (ulong)(int)uVar12;
      } while (*(uint *)(lVar9 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4)) <
               uVar4);
    }
    else {
      uVar6 = 1;
    }
    puVar8 = (uint *)(lVar9 + (long)(int)uVar6 * 0x10);
  }
  *puVar8 = uVar4;
  puVar8[3] = uVar3;
  *(undefined8 *)(puVar8 + 1) = uVar7;
  return;
}


