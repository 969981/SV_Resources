/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035333c4; name: FUN_035333c4
 */


void FUN_035333c4(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ushort *puVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  
  *(undefined1 *)(param_1 + 0x94) = 1;
  uVar7 = FUN_03531af4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80));
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x90);
    uVar6 = (**(code **)(**(long **)(param_1 + 0x78) + 600))();
    if (uVar6 != 0) {
      uVar16 = 0;
      plVar1 = (long *)(param_1 + 0x70);
      do {
        if (uVar16 < *(uint *)(*(long *)(param_1 + 0x78) + 0x108)) {
          plVar15 = *(long **)(*(long *)(*(long *)(param_1 + 0x78) + 0x100) + uVar16 * 8);
        }
        else {
          plVar15 = (long *)0x0;
        }
        iVar3 = *(int *)((long)plVar15 + 0x134);
        if (iVar3 == 3) {
          for (lVar13 = *(long *)(param_1 + 0x88); lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x30)) {
            if (*(long **)(lVar13 + 0x10) == plVar15) {
              if ((int)plVar15[0x23] != 0) {
                uVar12 = 0;
                goto LAB_035335b4;
              }
              break;
            }
          }
LAB_035336a4:
          FUN_03533920(param_1,uVar7,plVar15);
        }
        else {
          if (iVar3 == 2) {
            uVar12 = 0;
            if ((*(ushort *)(plVar15 + 0x27) + 1 & 0xffff) < *(uint *)(plVar15 + 0x23)) {
              uVar12 = *(ushort *)(plVar15 + 0x27) + 1;
            }
            *(short *)(plVar15 + 0x27) = (short)uVar12;
          }
          else if ((iVar3 == 1) && (uVar4 = *(uint *)(plVar15 + 0x23), uVar4 != 0)) {
            lVar13 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
            *(long *)PTR_DAT_047e7068 = lVar13;
            uVar5 = 0;
            uVar12 = (uint)((ulong)lVar13 >> 0x21);
            if (uVar4 != 0) {
              uVar5 = uVar12 / uVar4;
            }
            uVar12 = uVar12 - uVar5 * uVar4;
          }
          else {
            uVar12 = 0;
          }
          puVar8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x38);
          if (puVar8 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar8 + 2) = uVar7;
            *puVar8 = &PTR_LAB_047c9318;
            puVar8[3] = plVar15;
            *(uint *)(puVar8 + 4) = uVar12 & 0xffff;
            *(undefined4 *)((long)puVar8 + 0x24) = 0;
            *(undefined4 *)(puVar8 + 6) = uVar2;
            (**(code **)(*plVar15 + 0x28))(plVar15);
            lVar13 = *plVar1;
            if (lVar13 == 0) {
LAB_03533560:
              puVar8[1] = 0;
              if (*plVar1 == 0) {
                plVar15 = plVar1;
              }
              else {
                plVar15 = (long *)(*(long *)(param_1 + 0x68) + 8);
              }
              *plVar15 = (long)puVar8;
              *(undefined8 **)(param_1 + 0x68) = puVar8;
            }
            else if (*(int *)(puVar8 + 2) < *(int *)(lVar13 + 0x10)) {
              puVar8[1] = lVar13;
              *plVar1 = (long)puVar8;
            }
            else {
              do {
                lVar14 = lVar13;
                lVar13 = *(long *)(lVar14 + 8);
                if (lVar13 == 0) goto LAB_03533560;
              } while (*(int *)(lVar13 + 0x10) <= *(int *)(puVar8 + 2));
              puVar8[1] = lVar13;
              *(undefined8 **)(lVar14 + 8) = puVar8;
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar6);
    }
  }
  return;
LAB_035335b4:
  if (*(uint *)(lVar13 + 0x20) != 0) {
    lVar14 = (ulong)*(uint *)(lVar13 + 0x20) << 1;
    puVar9 = *(ushort **)(lVar13 + 0x18);
    do {
      if ((uint)*puVar9 == (uVar12 & 0xffff)) {
        puVar8 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x38);
        if (puVar8 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar8 + 2) = uVar7;
          *puVar8 = &PTR_LAB_047c9318;
          puVar8[3] = plVar15;
          *(uint *)(puVar8 + 4) = uVar12;
          *(undefined4 *)((long)puVar8 + 0x24) = 0;
          *(undefined4 *)(puVar8 + 6) = uVar2;
          (**(code **)(*plVar15 + 0x28))(plVar15);
          lVar14 = *plVar1;
          if (lVar14 == 0) goto LAB_03533670;
          if (*(int *)(lVar14 + 0x10) <= *(int *)(puVar8 + 2)) goto LAB_0353364c;
          puVar8[1] = lVar14;
          *plVar1 = (long)puVar8;
        }
        break;
      }
      lVar14 = lVar14 + -2;
      puVar9 = puVar9 + 1;
    } while (lVar14 != 0);
  }
  goto LAB_03533694;
  while (*(int *)(lVar14 + 0x10) <= *(int *)(puVar8 + 2)) {
LAB_0353364c:
    lVar10 = lVar14;
    lVar14 = *(long *)(lVar10 + 8);
    if (lVar14 == 0) goto LAB_03533670;
  }
  puVar8[1] = lVar14;
  *(undefined8 **)(lVar10 + 8) = puVar8;
LAB_03533694:
  uVar12 = uVar12 + 1;
  if (*(uint *)(plVar15 + 0x23) <= uVar12) goto LAB_035336a4;
  goto LAB_035335b4;
LAB_03533670:
  puVar8[1] = 0;
  if (*plVar1 == 0) {
    plVar11 = plVar1;
  }
  else {
    plVar11 = (long *)(*(long *)(param_1 + 0x68) + 8);
  }
  *plVar11 = (long)puVar8;
  *(undefined8 **)(param_1 + 0x68) = puVar8;
  goto LAB_03533694;
}


