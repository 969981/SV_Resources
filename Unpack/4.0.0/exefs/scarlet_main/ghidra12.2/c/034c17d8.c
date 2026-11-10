/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c17d8; name: FUN_034c17d8
 */


void FUN_034c17d8(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  if ((*(ushort *)(param_1 + 0x145) >> 6 & 1) != 0) {
    return;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x120) != 0) {
      lVar6 = *(long *)(param_1 + 0x118);
      do {
        (**(code **)(**(long **)(lVar6 + 8) + 0x10))();
        lVar6 = lVar6 + 0x10;
      } while (lVar6 != *(long *)(param_1 + 0x118) + (ulong)*(uint *)(param_1 + 0x120) * 0x10);
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (*(long **)(param_1 + 0x128) == (long *)0x0) {
      return;
    }
    (**(code **)(**(long **)(param_1 + 0x128) + 0x10))();
    *(undefined8 *)(param_1 + 0x128) = 0;
    return;
  }
  if ((*(ushort *)(param_1 + 0x145) >> 7 & 1) != 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x120);
  if (uVar2 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    uVar7 = iVar4 + (uVar2 >> 1);
    uVar9 = *(ulong *)(*(long *)(param_1 + 0x118) +
                      (-(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar7 << 4));
    if (uVar9 == param_2) {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x118) + (long)(int)uVar7 * 0x10 + 8) + 0x10))();
      uVar2 = *(uint *)(param_1 + 0x120);
      if (uVar2 == 0) {
        return;
      }
      lVar6 = *(long *)(param_1 + 0x118);
      iVar4 = 0;
      uVar7 = uVar2;
      do {
        uVar1 = iVar4 + (uVar7 >> 1);
        uVar9 = *(ulong *)(lVar6 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4
                                   ));
        if (uVar9 == param_2) {
          puVar5 = (undefined8 *)((lVar6 + (ulong)uVar2 * 0x10) - 0x10);
          puVar8 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 0x10);
          if (puVar8 < puVar5) {
            do {
              puVar3 = puVar8 + 2;
              *puVar8 = *puVar3;
              puVar8[1] = puVar8[3];
              puVar8 = puVar3;
            } while (puVar3 < puVar5);
            uVar2 = *(uint *)(param_1 + 0x120);
          }
          *(uint *)(param_1 + 0x120) = uVar2 - 1;
          return;
        }
        if (uVar9 < param_2) {
          iVar4 = uVar1 + 1;
        }
        uVar7 = uVar7 - (uVar9 < param_2) >> 1;
      } while (uVar7 != 0);
      return;
    }
    if (uVar9 < param_2) {
      iVar4 = uVar7 + 1;
    }
    uVar2 = uVar2 - (uVar9 < param_2) >> 1;
  } while (uVar2 != 0);
  return;
}


