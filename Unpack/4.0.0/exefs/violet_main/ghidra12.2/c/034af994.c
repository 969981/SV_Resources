/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034af994; name: FUN_034af994
 */


void FUN_034af994(long param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    uVar8 = *param_3 & *(ulong *)(lVar9 + 8);
    if (uVar8 == 0) {
      uVar3 = *(uint *)(lVar9 + 0x18);
      if (uVar3 != 0) {
        puVar6 = *(undefined8 **)(lVar9 + 0x10);
        uVar8 = (ulong)uVar3;
        do {
          if (puVar6[1] == param_2) {
            puVar7 = *(undefined8 **)(lVar9 + 0x10) + (ulong)uVar3 * 2 + -2;
            if (puVar6 < puVar7) {
              do {
                puVar5 = puVar6 + 2;
                *puVar6 = *puVar5;
                puVar6[1] = puVar6[3];
                puVar6 = puVar5;
              } while (puVar5 < puVar7);
              uVar3 = *(uint *)(lVar9 + 0x18);
            }
            *(uint *)(lVar9 + 0x18) = uVar3 - 1;
            return;
          }
          puVar6 = puVar6 + 2;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    else {
      uVar3 = *(uint *)(lVar9 + 0x18);
      uVar10 = (ulong)uVar3;
      if (uVar3 != 0) {
        puVar4 = (ulong *)(*(long *)(lVar9 + 0x10) + 8);
        do {
          if (*puVar4 == param_2) {
            puVar4[-1] = uVar8;
            return;
          }
          puVar4 = puVar4 + 2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar11 = *(uint *)(lVar9 + 0x1c);
      if (uVar11 <= uVar3) {
        iVar1 = uVar11 + (uVar11 >> 1);
        if (uVar11 == 0) {
          iVar1 = 1;
        }
        uVar11 = iVar1 + uVar11;
        lVar2 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))
                          (0,*(undefined8 *)(lVar9 + 0x10),(ulong)uVar11 << 4);
        if (lVar2 == 0) {
          return;
        }
        *(long *)(lVar9 + 0x10) = lVar2;
        *(uint *)(lVar9 + 0x1c) = uVar11;
      }
      if (uVar3 < uVar11) {
        uVar3 = *(uint *)(lVar9 + 0x18);
        *(uint *)(lVar9 + 0x18) = uVar3 + 1;
        if (*(long *)(lVar9 + 0x10) != 0) {
          puVar4 = (ulong *)(*(long *)(lVar9 + 0x10) + (ulong)uVar3 * 0x10);
          *puVar4 = uVar8;
          puVar4[1] = param_2;
        }
      }
    }
  }
  return;
}


