/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03414880; name: FUN_03414880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_03414880(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  int iVar22;
  uint uVar23;
  long *plVar24;
  
  uVar13 = *(uint *)(param_1 + 0x20);
  if (uVar13 != 0) {
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = (uint)param_2 / uVar13;
    }
    uVar7 = (ulong)((uint)param_2 - uVar11 * uVar13);
    plVar24 = *(long **)(*(long *)(param_1 + 0x18) + uVar7 * 8);
    if (plVar24 != (long *)0x0) {
      if (plVar24[0xd] == param_2) {
        plVar8 = (long *)0x0;
      }
      else {
        do {
          plVar8 = plVar24;
          plVar24 = (long *)plVar8[0xe];
          if (plVar24 == (long *)0x0) {
            return 0xf;
          }
        } while (plVar24[0xd] != param_2);
      }
      uVar13 = *(uint *)(plVar24 + 0xce);
      if (uVar13 != 0) {
        uVar11 = *(uint *)(param_1 + 0x50);
        uVar10 = 0;
        do {
          uVar17 = *(ulong *)(plVar24[0xcd] + uVar10 * 8);
          uVar5 = uVar17;
          uVar3 = param_2;
          if (uVar17 <= param_2) {
            uVar5 = param_2;
            uVar3 = uVar17;
          }
          if (uVar11 != 0) {
            lVar18 = *(long *)(param_1 + 0x48);
            iVar22 = 0;
            uVar23 = uVar11;
LAB_03414910:
            iVar1 = iVar22 + (uVar23 >> 1);
            puVar6 = (ulong *)(lVar18 + (long)iVar1 * 0x18);
            uVar17 = *puVar6;
            uVar2 = puVar6[1];
            if (uVar17 != uVar3 || uVar2 != uVar5) goto code_r0x0341492c;
            puVar15 = (undefined8 *)(lVar18 + (long)iVar1 * 0x18);
            puVar21 = (undefined8 *)((lVar18 + (ulong)uVar11 * 0x18) - 0x18);
            if (puVar15 < puVar21) {
              do {
                puVar12 = puVar15 + 3;
                *puVar15 = *puVar12;
                puVar15[1] = puVar15[4];
                *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar15 + 5);
                puVar15 = puVar12;
              } while (puVar12 < puVar21);
              uVar11 = *(uint *)(param_1 + 0x50);
            }
            uVar11 = uVar11 - 1;
            *(uint *)(param_1 + 0x50) = uVar11;
            uVar13 = *(uint *)(plVar24 + 0xce);
          }
LAB_034149a0:
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar13);
      }
      uVar13 = *(uint *)(plVar24 + 0xd0);
      *(undefined4 *)(plVar24 + 0xce) = 0;
      if (uVar13 != 0) {
        lVar18 = *(long *)PTR_DAT_047e6cc0;
        uVar10 = 0;
        do {
          uVar11 = *(uint *)(lVar18 + 0x38);
          if (uVar11 != 0) {
            lVar16 = *(long *)(plVar24[0xcf] + uVar10 * 8);
            uVar23 = 0;
            uVar14 = (uint)lVar16;
            if (uVar11 != 0) {
              uVar23 = uVar14 / uVar11;
            }
            for (plVar19 = *(long **)(*(long *)(lVar18 + 0x30) +
                                     (ulong)(uVar14 - uVar23 * uVar11) * 8); plVar19 != (long *)0x0;
                plVar19 = (long *)*plVar19) {
              if (plVar19[1] == lVar16) {
                if ((plVar19[2] != 0) && (lVar16 = *(long *)(plVar19[2] + 0x58), lVar16 != 0)) {
                  uVar11 = *(uint *)(lVar16 + 0xd8);
                  if (uVar11 != 0) {
                    lVar20 = *(long *)(lVar16 + 0xd0);
                    iVar22 = 0;
                    uVar23 = uVar11;
                    goto LAB_03414a28;
                  }
                }
                break;
              }
            }
          }
LAB_03414a9c:
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar13);
      }
      *(undefined4 *)(plVar24 + 0xd0) = 0;
      if (plVar8 == (long *)0x0) {
        *(long *)(*(long *)(param_1 + 0x18) + uVar7 * 8) = plVar24[0xe];
      }
      else {
        plVar8[0xe] = plVar24[0xe];
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      FUN_03415fd0(plVar24);
      plVar8 = (long *)(param_1 + 0x60);
      plVar19 = (long *)*plVar8;
      if (plVar19 == (long *)0x0) {
LAB_03414b64:
        if (_DAT_0001a410 == (long *)0x0) {
          _DAT_0001a410 = plVar24;
          *plVar24 = 0;
        }
        else {
          *plVar24 = (long)_DAT_0001a410;
          _DAT_0001a410 = plVar24;
        }
        _DAT_0001a408 = _DAT_0001a408 + 1;
      }
      else {
        if ((plVar24 < plVar19) || (plVar19 + 0x3480 <= plVar24)) {
          do {
            plVar9 = plVar19;
            plVar19 = (long *)plVar9[0x3480];
            if (plVar19 == (long *)0x0) goto LAB_03414b64;
          } while (plVar24 < plVar19 || plVar19 + 0x3480 <= plVar24);
        }
        else {
          plVar9 = (long *)0x0;
        }
        if (plVar19[0x3482] == 0) {
          plVar19[0x3482] = (long)plVar24;
          *plVar24 = 0;
        }
        else {
          *plVar24 = plVar19[0x3482];
          plVar19[0x3482] = (long)plVar24;
        }
        iVar22 = (int)plVar19[0x3481] + 1;
        *(int *)(plVar19 + 0x3481) = iVar22;
        if (iVar22 == 0x40) {
          if ((long *)*plVar8 != plVar19) {
            plVar8 = plVar9 + 0x3480;
          }
          *plVar8 = plVar19[0x3480];
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
        }
      }
      *(undefined1 *)(param_1 + 0x8c) = 1;
      return 1;
    }
  }
  return 0xf;
code_r0x0341492c:
  bVar4 = uVar2 < uVar5;
  if (uVar17 != uVar3) {
    bVar4 = uVar17 < uVar3;
  }
  if (bVar4 != 0) {
    iVar22 = iVar1 + 1;
  }
  uVar23 = uVar23 - bVar4 >> 1;
  if (uVar23 == 0) goto LAB_034149a0;
  goto LAB_03414910;
LAB_03414a28:
  uVar14 = iVar22 + (uVar23 >> 1);
  uVar5 = *(ulong *)(lVar20 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar14 << 4));
  if (uVar5 != param_2) goto code_r0x03414a40;
  puVar15 = (undefined8 *)(lVar20 + (long)(int)uVar14 * 0x10);
  puVar21 = (undefined8 *)((lVar20 + (ulong)uVar11 * 0x10) - 0x10);
  if (puVar15 < puVar21) {
    do {
      puVar12 = puVar15 + 2;
      *puVar15 = *puVar12;
      *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar15 + 3);
      puVar15 = puVar12;
    } while (puVar12 < puVar21);
    uVar11 = *(uint *)(lVar16 + 0xd8);
  }
  *(uint *)(lVar16 + 0xd8) = uVar11 - 1;
  uVar13 = *(uint *)(plVar24 + 0xd0);
  goto LAB_03414a9c;
code_r0x03414a40:
  if (uVar5 < param_2) {
    iVar22 = uVar14 + 1;
  }
  uVar23 = uVar23 - (uVar5 < param_2) >> 1;
  if (uVar23 == 0) goto LAB_03414a9c;
  goto LAB_03414a28;
}


