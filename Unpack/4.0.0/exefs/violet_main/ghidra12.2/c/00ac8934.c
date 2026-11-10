/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ac8934; name: FUN_00ac8934
 */


void FUN_00ac8934(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ushort *puVar10;
  uint uVar11;
  int *piVar12;
  float fVar13;
  undefined *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  *(undefined4 *)(param_1 + 0x40) = param_3;
  local_50 = (undefined *)0x81316c1bb8af0852;
  pcStack_48 = "ActionID";
  local_40 = 8;
  local_38 = (long *)0x0;
  piVar4 = (int *)FUN_00d27b5c(param_2,&local_50);
  if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) {
    uVar6 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
    uVar6 = 0;
    if (uVar7 != 0) {
      uVar6 = *(undefined4 *)((long)piVar4 + uVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  puVar3 = PTR_DAT_047d5608;
  piVar4 = (int *)param_2[1];
  if (piVar4 == (int *)0x0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = 0.0;
    if (6 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
      uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
      fVar13 = 0.0;
      if (uVar7 != 0) {
        puVar5 = (uint *)((long)piVar4 + uVar7);
        puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
        local_50 = &DAT_03bfd0d2;
        puVar5 = bsearch(&local_50,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar5 == (uint *)0x0) {
          fVar13 = 0.0;
        }
        else {
          piVar4 = (int *)*param_2;
          fVar13 = 0.0;
          if (piVar4 != (int *)0x0) {
            piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
            puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
            uVar2 = *puVar10;
            if (uVar2 < 7) {
              piVar12 = (int *)0x0;
            }
            else {
              piVar12 = (int *)0x0;
              if ((ulong)puVar10[3] != 0) {
                puVar5 = (uint *)((long)piVar1 + (ulong)puVar10[3]);
                piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
              }
            }
            if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
               (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar7 == 0)) {
              uVar7 = 0;
            }
            else {
              uVar7 = (long)*(char *)((long)piVar12 + uVar7) & 0xffffffff;
            }
            if (*(long *)(puVar3 + uVar7 * 8) == 4) {
              fVar13 = 0.0;
              if (uVar2 < 0xb) {
                uVar11 = 0;
              }
              else {
                uVar11 = 0;
                if ((ulong)puVar10[5] != 0) {
                  uVar11 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar10[5]);
                }
                if ((0xe < uVar2) && ((ulong)puVar10[7] != 0)) {
                  fVar13 = (float)*(double *)((long)piVar1 + (ulong)puVar10[7]);
                }
              }
              if ((uVar11 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
                 (uVar7 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar11),
                 uVar7 != 0)) {
                fVar13 = *(float *)((long)piVar4 + uVar7);
              }
            }
            else {
              fVar13 = 0.0;
              if (0xe < uVar2) {
                fVar13 = 0.0;
                if ((ulong)puVar10[7] != 0) {
                  fVar13 = (float)*(double *)((long)piVar1 + (ulong)puVar10[7]);
                }
              }
            }
          }
        }
      }
    }
    piVar4 = (int *)param_2[1];
    if (piVar4 != (int *)0x0) {
      uVar7 = 0;
      if (6 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
        uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
        uVar7 = 0;
        if (uVar8 != 0) {
          puVar5 = (uint *)((long)piVar4 + uVar8);
          puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
          local_50 = &DAT_03c6fa63;
          puVar5 = bsearch(&local_50,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar5 == (uint *)0x0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            piVar4 = (int *)*param_2;
            if (piVar4 != (int *)0x0) {
              piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
              puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
              uVar2 = *puVar10;
              if (uVar2 < 7) {
                piVar12 = (int *)0x0;
              }
              else {
                piVar12 = (int *)0x0;
                if ((ulong)puVar10[3] != 0) {
                  puVar5 = (uint *)((long)piVar1 + (ulong)puVar10[3]);
                  piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
                }
              }
              if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
                 (uVar7 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar7 == 0)) {
                uVar7 = 0;
              }
              else {
                uVar7 = (long)*(char *)((long)piVar12 + uVar7) & 0xffffffff;
              }
              if (*(long *)(puVar3 + uVar7 * 8) == 4) {
                uVar7 = 0;
                if (uVar2 < 0xb) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = 0;
                  if ((ulong)puVar10[5] != 0) {
                    uVar11 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar10[5]);
                  }
                  if ((0xe < uVar2) && ((ulong)puVar10[7] != 0)) {
                    uVar7 = (ulong)(uint)(float)*(double *)((long)piVar1 + (ulong)puVar10[7]);
                  }
                }
                if ((uVar11 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
                   (uVar8 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar11),
                   uVar8 != 0)) {
                  uVar7 = (ulong)*(uint *)((long)piVar4 + uVar8);
                }
              }
              else {
                uVar7 = 0;
                if (0xe < uVar2) {
                  uVar7 = 0;
                  if ((ulong)puVar10[7] != 0) {
                    uVar7 = (ulong)(uint)(float)*(double *)((long)piVar1 + (ulong)puVar10[7]);
                  }
                }
              }
            }
          }
        }
      }
      piVar4 = (int *)param_2[1];
      uVar8 = 0;
      if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7))
      goto LAB_00ac8d0c;
      uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
      if (uVar8 != 0) {
        puVar5 = (uint *)((long)piVar4 + uVar8);
        puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
        local_50 = &DAT_03bfac03;
        puVar5 = bsearch(&local_50,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar5 != (uint *)0x0) && (piVar4 = (int *)*param_2, piVar4 != (int *)0x0)) {
          piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
          puVar10 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar2 = *puVar10;
          if (uVar2 < 7) {
            piVar12 = (int *)0x0;
          }
          else {
            piVar12 = (int *)0x0;
            if ((ulong)puVar10[3] != 0) {
              puVar5 = (uint *)((long)piVar1 + (ulong)puVar10[3]);
              piVar12 = (int *)((long)puVar5 + (ulong)*puVar5);
            }
          }
          if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
             (uVar8 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar8 == 0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = (long)*(char *)((long)piVar12 + uVar8) & 0xffffffff;
          }
          if (*(long *)(puVar3 + uVar8 * 8) == 4) {
            uVar8 = 0;
            if (uVar2 < 0xb) {
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              if ((ulong)puVar10[5] != 0) {
                uVar11 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar10[5]);
              }
              if ((0xe < uVar2) && ((ulong)puVar10[7] != 0)) {
                uVar8 = (ulong)(uint)(float)*(double *)((long)piVar1 + (ulong)puVar10[7]);
              }
            }
            if ((uVar11 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
               (uVar9 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar11),
               uVar9 != 0)) {
              uVar8 = (ulong)*(uint *)((long)piVar4 + uVar9);
            }
            goto LAB_00ac8d0c;
          }
          if ((0xe < uVar2) && ((ulong)puVar10[7] != 0)) {
            uVar8 = (ulong)(uint)(float)*(double *)((long)piVar1 + (ulong)puVar10[7]);
            goto LAB_00ac8d0c;
          }
        }
      }
      uVar8 = 0;
      goto LAB_00ac8d0c;
    }
  }
  uVar7 = 0;
  uVar8 = uVar7;
LAB_00ac8d0c:
  *(ulong *)(param_1 + 0x58) = uVar8;
  *(ulong *)(param_1 + 0x50) = CONCAT44((int)uVar7,fVar13);
  return;
}


