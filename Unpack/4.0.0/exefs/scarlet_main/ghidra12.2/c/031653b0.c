/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031653b0; name: FUN_031653b0
 */


void FUN_031653b0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 3) {
    if ((iVar3 < 1) || (iVar3 != 1)) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
  }
  else {
    lVar8 = *param_1;
    puVar1 = (undefined8 *)(lVar8 + (ulong)(iVar3 - 1) * 0x10);
    uVar9 = puVar1[1];
    *(undefined8 *)(lVar8 + 0x10) = *puVar1;
    *(undefined8 *)(lVar8 + 0x18) = uVar9;
    iVar3 = (int)param_1[1];
    lVar8 = *param_1;
    *(int *)(param_1 + 1) = iVar3 + -1;
    uVar9 = *(undefined8 *)(lVar8 + 0x14);
    uVar4 = *(uint *)(lVar8 + 0x1c);
    uVar5 = *(uint *)(lVar8 + 0x10);
    uVar6 = iVar3 - 3U >> 1;
    if (uVar6 == 0) {
      uVar7 = 1;
LAB_031654b4:
      if (uVar7 == ((iVar3 - 2U & 1) - 1 & iVar3 - 2U >> 1)) {
        lVar8 = *param_1;
        uVar6 = uVar7 << 1;
        if (*(uint *)(lVar8 + (-(ulong)((uVar7 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                              (ulong)uVar6 << 4)) < uVar5) {
          puVar2 = (undefined8 *)(lVar8 + (long)(int)uVar6 * 0x10);
          puVar1 = (undefined8 *)(lVar8 + (long)(int)uVar7 * 0x10);
          puVar1[1] = puVar2[1];
          *puVar1 = *puVar2;
          uVar7 = uVar6;
        }
      }
      puVar10 = (uint *)(*param_1 + (long)(int)uVar7 * 0x10);
    }
    else {
      uVar7 = 2;
      if (*(uint *)(lVar8 + 0x30) <= *(uint *)(lVar8 + 0x20)) {
        uVar7 = 3;
      }
      uVar11 = (ulong)uVar7;
      if (*(uint *)(lVar8 + uVar11 * 0x10) < uVar5) {
        uVar7 = 1;
        uVar13 = uVar11;
        do {
          puVar1 = (undefined8 *)(lVar8 + (long)(int)uVar7 * 0x10);
          uVar7 = (uint)uVar13;
          puVar2 = (undefined8 *)(lVar8 + uVar11 * 0x10);
          puVar1[1] = puVar2[1];
          *puVar1 = *puVar2;
          if (uVar6 < uVar7) goto LAB_031654b4;
          lVar8 = *param_1;
          uVar12 = uVar7 << 1;
          if (*(uint *)(lVar8 + ((long)(int)uVar12 | 1U) * 0x10) <=
              *(uint *)(lVar8 + (-(ulong)((uVar7 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                                (ulong)uVar12 << 4))) {
            uVar12 = (uint)((long)(int)uVar12 | 1U);
          }
          uVar13 = (ulong)uVar12;
          uVar11 = (ulong)(int)uVar12;
        } while (*(uint *)(lVar8 + (-(ulong)(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar13 << 4)) <
                 uVar5);
      }
      else {
        uVar7 = 1;
      }
      puVar10 = (uint *)(lVar8 + (long)(int)uVar7 * 0x10);
    }
    *puVar10 = uVar5;
    puVar10[3] = uVar4;
    *(undefined8 *)(puVar10 + 1) = uVar9;
  }
  return;
}


