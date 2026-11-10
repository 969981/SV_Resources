/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03491c20; name: FUN_03491c20
 */


void FUN_03491c20(long param_1,byte *param_2,undefined8 param_3,byte *param_4,undefined4 *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(param_5[1],*(long **)(param_1 + 8),*param_5);
  }
  bVar2 = *param_2;
  if (bVar2 == 0xff) {
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar10 = *(long *)(param_1 + 0x18);
      do {
        *param_4 = *(byte *)(lVar10 + 0x28);
        if (*(char *)(lVar10 + 0x10) != '\0') {
          (**(code **)(**(long **)(lVar10 + 8) + 0x10))(param_5[1],*(long **)(lVar10 + 8),*param_5);
        }
        uVar5 = *(ulong *)(param_2 + 8);
        if (uVar5 == 0) {
          if (*(int *)(lVar10 + 0x20) != 0) {
            puVar12 = *(undefined8 **)(lVar10 + 0x18);
            do {
              *(undefined8 *)(param_4 + 8) = puVar12[1];
              puVar13 = puVar12 + 2;
              (**(code **)(*(long *)*puVar12 + 0x10))(param_5[1],(long *)*puVar12,*param_5);
              puVar12 = puVar13;
            } while (puVar13 !=
                     (undefined8 *)
                     (*(long *)(lVar10 + 0x18) + (ulong)*(uint *)(lVar10 + 0x20) * 0x10));
          }
        }
        else {
          uVar6 = *(uint *)(lVar10 + 0x20);
          if (uVar6 != 0) {
            lVar11 = *(long *)(lVar10 + 0x18);
            iVar7 = 0;
            do {
              iVar1 = iVar7 + (uVar6 >> 1);
              uVar8 = *(ulong *)(lVar11 + (long)iVar1 * 0x10 + 8);
              if (uVar8 == uVar5) {
                *(ulong *)(param_4 + 8) = uVar5;
                plVar4 = *(long **)(lVar11 + (long)iVar1 * 0x10);
                (**(code **)(*plVar4 + 0x10))(param_5[1],plVar4,*param_5);
                break;
              }
              if (uVar8 < uVar5) {
                iVar7 = iVar1 + 1;
              }
              uVar6 = uVar6 - (uVar8 < uVar5) >> 1;
            } while (uVar6 != 0);
          }
        }
        lVar10 = lVar10 + 0x30;
      } while (lVar10 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30);
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x20);
    if (uVar6 != 0) {
      lVar10 = *(long *)(param_1 + 0x18);
      iVar7 = 0;
      do {
        iVar1 = iVar7 + (uVar6 >> 1);
        lVar11 = (long)iVar1;
        bVar3 = *(byte *)(lVar10 + (long)iVar1 * 0x30 + 0x28);
        if (bVar3 == bVar2) {
          *param_4 = bVar2;
          if (*(char *)(lVar10 + lVar11 * 0x30 + 0x10) != '\0') {
            plVar4 = *(long **)(lVar10 + lVar11 * 0x30 + 8);
            (**(code **)(*plVar4 + 0x10))(param_5[1],plVar4,*param_5);
          }
          uVar5 = *(ulong *)(param_2 + 8);
          if (uVar5 == 0) {
            lVar10 = lVar10 + lVar11 * 0x30;
            puVar9 = (uint *)(lVar10 + 0x20);
            if (*puVar9 == 0) {
              return;
            }
            plVar4 = (long *)(lVar10 + 0x18);
            puVar12 = (undefined8 *)*plVar4;
            do {
              *(undefined8 *)(param_4 + 8) = puVar12[1];
              puVar13 = puVar12 + 2;
              (**(code **)(*(long *)*puVar12 + 0x10))(param_5[1],(long *)*puVar12,*param_5);
              puVar12 = puVar13;
            } while (puVar13 != (undefined8 *)(*plVar4 + (ulong)*puVar9 * 0x10));
            return;
          }
          uVar6 = *(uint *)(lVar10 + lVar11 * 0x30 + 0x20);
          if (uVar6 == 0) {
            return;
          }
          lVar10 = *(long *)(lVar10 + lVar11 * 0x30 + 0x18);
          iVar7 = 0;
          do {
            iVar1 = iVar7 + (uVar6 >> 1);
            uVar8 = *(ulong *)(lVar10 + (long)iVar1 * 0x10 + 8);
            if (uVar8 == uVar5) {
              *(ulong *)(param_4 + 8) = uVar5;
              plVar4 = *(long **)(lVar10 + (long)iVar1 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x03491ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar4 + 0x10))(param_5[1],plVar4,*param_5);
              return;
            }
            if (uVar8 < uVar5) {
              iVar7 = iVar1 + 1;
            }
            uVar6 = uVar6 - (uVar8 < uVar5) >> 1;
          } while (uVar6 != 0);
          return;
        }
        if (bVar3 < bVar2) {
          iVar7 = iVar1 + 1;
        }
        uVar6 = uVar6 - (bVar3 < bVar2) >> 1;
      } while (uVar6 != 0);
    }
  }
  return;
}


