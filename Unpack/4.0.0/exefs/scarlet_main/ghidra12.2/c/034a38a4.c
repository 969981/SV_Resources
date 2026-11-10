/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a38a4; name: FUN_034a38a4
 */


void FUN_034a38a4(long param_1,ulong param_2)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined4 *puVar11;
  
  puVar2 = (uint *)(param_1 + 699);
  if (((*puVar2 >> 0xc & 1) == 0) && (*puVar2 = *puVar2 | 0x1000, (param_2 & 0xfffffffd) == 0)) {
    lVar6 = *(long *)(param_1 + 0x230);
    if (lVar6 != 0) {
      uVar4 = *(uint *)(lVar6 + 0x30);
      if (uVar4 != 0) {
        plVar8 = *(long **)(lVar6 + 0x28);
        plVar10 = plVar8 + uVar4;
        if (*plVar8 != param_1 + 0x10) {
          lVar9 = (ulong)uVar4 * 8;
          do {
            lVar9 = lVar9 + -8;
            if (lVar9 == 0) {
              plVar8 = plVar10;
              break;
            }
            plVar3 = plVar8 + 1;
            plVar1 = plVar8 + 1;
            plVar8 = plVar3;
          } while (*plVar1 != param_1 + 0x10);
        }
        if (plVar10 != plVar8) {
          if (uVar4 < 2) {
            iVar7 = 0;
          }
          else {
            *plVar8 = plVar10[-1];
            iVar7 = *(int *)(lVar6 + 0x30) + -1;
          }
          *(int *)(lVar6 + 0x30) = iVar7;
        }
      }
      *(undefined8 *)(param_1 + 0x230) = 0;
    }
    lVar6 = *(long *)(param_1 + 0x238);
    if (lVar6 != 0) {
      uVar4 = *(uint *)(lVar6 + 0x30);
      if (uVar4 != 0) {
        plVar8 = *(long **)(lVar6 + 0x28);
        plVar10 = plVar8 + uVar4;
        if (*plVar8 != param_1 + 0x10) {
          lVar9 = (ulong)uVar4 * 8;
          do {
            lVar9 = lVar9 + -8;
            if (lVar9 == 0) {
              plVar8 = plVar10;
              break;
            }
            plVar3 = plVar8 + 1;
            plVar1 = plVar8 + 1;
            plVar8 = plVar3;
          } while (*plVar1 != param_1 + 0x10);
        }
        if (plVar10 != plVar8) {
          if (uVar4 < 2) {
            iVar7 = 0;
          }
          else {
            *plVar8 = plVar10[-1];
            iVar7 = *(int *)(lVar6 + 0x30) + -1;
          }
          *(int *)(lVar6 + 0x30) = iVar7;
        }
      }
      *(undefined8 *)(param_1 + 0x238) = 0;
    }
    puVar5 = PTR_DAT_047e2fd0;
    lVar6 = *(long *)(param_1 + 0x108);
    if (lVar6 != 0) {
      if ((*(byte *)(lVar6 + 0x28) >> 1 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x188);
        do {
          if (*(long *)(lVar6 + 0x88) != 0) {
            puVar11 = (undefined4 *)(*(long *)(lVar6 + 0x88) + 0x38);
            goto LAB_034a3a1c;
          }
          lVar6 = *(long *)(lVar6 + 0x98);
        } while (lVar6 != 0);
        puVar11 = (undefined4 *)0x0;
LAB_034a3a1c:
        plVar10 = *(long **)(puVar11 + 2);
        if (plVar10 != (long *)0x0) {
          if (*(ushort *)(plVar10 + 2) - 1 == 0) {
            if (*plVar10 != 0) {
              *(undefined4 *)(plVar10 + 1) = 0;
              (**(code **)(puVar5 + 0x30))(0);
              *plVar10 = 0;
              *(undefined4 *)((long)plVar10 + 0xc) = 0;
            }
            (**(code **)(puVar5 + 0x30))(0,plVar10);
          }
          else {
            *(short *)(plVar10 + 2) = (short)(*(ushort *)(plVar10 + 2) - 1);
          }
        }
        *(undefined8 *)(puVar11 + 2) = 0;
        *puVar11 = 0;
        lVar6 = *(long *)(param_1 + 0x108);
      }
      FUN_034b2990(*(undefined8 *)PTR_DAT_047e7040,lVar6,param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    if (((*puVar2 >> 0xe & 1) != 0) && (*(int *)(param_1 + 0x318) == 0)) {
      *(undefined4 *)(param_1 + 0x318) = 0xffffffff;
    }
    *puVar2 = *puVar2 & 0xfffffeff | 0x400;
  }
  return;
}


