/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03165674; name: FUN_03165674
 */


void FUN_03165674(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < 2) {
    return;
  }
  uVar7 = (ulong)(uVar3 >> 1);
  do {
    lVar9 = *param_1;
    puVar8 = (uint *)(lVar9 + uVar7 * 0x10);
    uVar11 = *(undefined8 *)(puVar8 + 1);
    uVar4 = puVar8[3];
    uVar5 = *puVar8;
    uVar6 = uVar3 - 2 >> 1;
    uVar10 = (uint)uVar7;
    if (uVar6 < uVar7) {
LAB_031656b8:
      if (uVar10 == ((uVar3 - 1 & 1) - 1 & uVar3 - 1 >> 1)) {
        lVar9 = *param_1;
        uVar3 = uVar10 << 1;
        if (*(uint *)(lVar9 + (-(ulong)((uVar10 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                              (ulong)uVar3 << 4)) < uVar5) {
          puVar2 = (undefined8 *)(lVar9 + (long)(int)uVar3 * 0x10);
          puVar1 = (undefined8 *)(lVar9 + (long)(int)uVar10 * 0x10);
          puVar1[1] = puVar2[1];
          *puVar1 = *puVar2;
          uVar10 = uVar3;
        }
      }
      puVar8 = (uint *)(*param_1 + (long)(int)uVar10 * 0x10);
    }
    else {
      uVar13 = uVar10 << 1;
      if (*(uint *)(lVar9 + ((long)(int)uVar13 | 1U) * 0x10) <=
          *(uint *)(lVar9 + (ulong)uVar13 * 0x10)) {
        uVar13 = (uint)((long)(int)uVar13 | 1U);
      }
      if (*(uint *)(lVar9 + (-(ulong)(uVar13 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar13 << 4)) <
          uVar5) {
        uVar12 = uVar7 & 0xffffffff;
        uVar14 = (ulong)uVar13;
        do {
          puVar1 = (undefined8 *)(lVar9 + (long)(int)uVar12 * 0x10);
          uVar10 = (uint)uVar14;
          puVar2 = (undefined8 *)(lVar9 + (long)(int)uVar13 * 0x10);
          puVar1[1] = puVar2[1];
          *puVar1 = *puVar2;
          if (uVar6 < uVar10) goto LAB_031656b8;
          lVar9 = *param_1;
          uVar13 = uVar10 << 1;
          if (*(uint *)(lVar9 + ((long)(int)uVar13 | 1U) * 0x10) <=
              *(uint *)(lVar9 + (-(ulong)((uVar10 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                                (ulong)uVar13 << 4))) {
            uVar13 = (uint)((long)(int)uVar13 | 1U);
          }
          uVar12 = uVar14;
          uVar14 = (ulong)uVar13;
        } while (*(uint *)(lVar9 + (-(ulong)(uVar13 >> 0x1f) & 0xfffffff000000000 |
                                   (ulong)uVar13 << 4)) < uVar5);
      }
      puVar8 = (uint *)(lVar9 + (long)(int)uVar10 * 0x10);
    }
    *puVar8 = uVar5;
    puVar8[3] = uVar4;
    *(undefined8 *)(puVar8 + 1) = uVar11;
    if ((long)uVar7 < 2) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 1);
    uVar7 = uVar7 - 1;
  } while( true );
}


