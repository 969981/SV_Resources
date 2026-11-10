/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034db9b8; name: FUN_034db9b8
 */


void FUN_034db9b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ushort *puVar3;
  uint uVar4;
  ushort uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  long lVar13;
  
  plVar6 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar6 != (long *)0x0) {
    for (lVar11 = *plVar6; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
      puVar12 = *(ushort **)(lVar11 + 0x20);
      if (puVar12 != (ushort *)0x0) {
        uVar5 = *puVar12;
        if ((ulong)uVar5 != 0) {
          puVar3 = puVar12 + uVar5;
          lVar13 = (long)puVar12 + ((ulong)((uint)uVar5 * 2 + 5) & 0x3fffc);
          do {
            lVar7 = *(long *)(lVar13 + 8);
            puVar12 = puVar12 + 1;
            if (lVar7 != 0) {
              uVar4 = *(uint *)(lVar7 + 0x30);
              if (uVar4 != 0) {
                plVar9 = *(long **)(lVar7 + 0x28);
                plVar6 = plVar9 + uVar4;
                if (*plVar9 != lVar11) {
                  lVar10 = (ulong)uVar4 * 8;
                  do {
                    lVar10 = lVar10 + -8;
                    if (lVar10 == 0) {
                      plVar9 = plVar6;
                      break;
                    }
                    plVar2 = plVar9 + 1;
                    plVar1 = plVar9 + 1;
                    plVar9 = plVar2;
                  } while (*plVar1 != lVar11);
                }
                if (plVar6 != plVar9) {
                  if (uVar4 < 2) {
                    iVar8 = 0;
                  }
                  else {
                    *plVar9 = plVar6[-1];
                    iVar8 = *(int *)(lVar7 + 0x30) + -1;
                  }
                  *(int *)(lVar7 + 0x30) = iVar8;
                }
              }
              *(undefined8 *)(lVar13 + 8) = 0;
              (**(code **)(**(long **)(lVar11 + 0x18) + 0x18))();
            }
            lVar13 = lVar13 + 0x10;
          } while (puVar12 != puVar3);
        }
      }
    }
  }
  return;
}


