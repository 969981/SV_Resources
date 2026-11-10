/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034783fc; name: FUN_034783fc
 */


void FUN_034783fc(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar3 = PTR_DAT_047e2fd0;
  lVar4 = *param_1;
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == 0) {
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    lVar12 = lVar4;
    do {
      lVar8 = lVar12;
      lVar12 = *(long *)(lVar8 + 0x18);
      if ((lVar12 != 0) && (uVar11 = *(ulong *)(lVar8 + 0x20), uVar11 != 0)) {
        uVar5 = *(uint *)(lVar12 + 0x118);
        if (uVar5 != 0) {
          iVar7 = 0;
          do {
            uVar1 = iVar7 + (uVar5 >> 1);
            uVar10 = *(ulong *)(*(long *)(lVar12 + 0x110) +
                               (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
            if (uVar10 == uVar11) {
              puVar13 = (undefined8 *)(*(long *)(lVar12 + 0x110) + (long)(int)uVar1 * 0x10);
              iVar7 = *(int *)(puVar13 + 1);
              iVar2 = iVar7 + -1;
              if (iVar7 == 0 || iVar2 == 0) {
                iVar7 = *(int *)(uVar11 + 0x10) + -1;
                *(int *)(uVar11 + 0x10) = iVar7;
                if (iVar7 == 0) {
                  FUN_034783fc(uVar11);
                  (**(code **)(puVar3 + 0x30))(0,uVar11);
                }
                uVar5 = *(uint *)(lVar12 + 0x118);
                puVar6 = (undefined8 *)((*(long *)(lVar12 + 0x110) + (ulong)uVar5 * 0x10) - 0x10);
                if (puVar13 < puVar6) {
                  do {
                    puVar9 = puVar13 + 2;
                    *puVar13 = *puVar9;
                    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar13 + 3);
                    puVar13 = puVar9;
                  } while (puVar9 < puVar6);
                  uVar5 = *(uint *)(lVar12 + 0x118);
                }
                *(uint *)(lVar12 + 0x118) = uVar5 - 1;
              }
              else {
                *(int *)(puVar13 + 1) = iVar2;
              }
              break;
            }
            if (uVar10 < uVar11) {
              iVar7 = uVar1 + 1;
            }
            uVar5 = uVar5 - (uVar10 < uVar11) >> 1;
          } while (uVar5 != 0);
        }
        lVar4 = *param_1;
        uVar5 = *(uint *)(param_1 + 1);
      }
      lVar12 = lVar8 + 0x28;
    } while (lVar8 + 0x28 != lVar4 + (ulong)uVar5 * 0x28);
    if (lVar4 == 0) {
      return;
    }
    if (uVar5 != 0) {
      lVar4 = lVar4 + -0x28;
      do {
        if (*(long **)(lVar4 + 0x30) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + 0x30) + 0x10))();
          *(undefined8 *)(lVar4 + 0x30) = 0;
        }
        if (*(long **)(lVar4 + 0x40) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + 0x40) + 0x30))();
          *(undefined8 *)(lVar4 + 0x40) = 0;
        }
        if (*(long **)(lVar4 + 0x28) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + 0x28) + 0x30))();
          *(undefined8 *)(lVar4 + 0x28) = 0;
        }
        lVar4 = lVar4 + 0x28;
      } while (lVar8 != lVar4);
      lVar4 = *param_1;
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,lVar4);
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}


