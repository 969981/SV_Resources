/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fbb8f4; name: FUN_00fbb8f4
 */


void FUN_00fbb8f4(undefined8 *param_1,long *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  ushort *puVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char *local_48;
  
  piVar4 = (int *)param_2[1];
  fVar13 = 0.0;
  if (piVar4 == (int *)0x0) {
    fVar12 = 0.0;
    fVar11 = 0.0;
  }
  else {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_48 = "Offset";
    puVar3 = bsearch(&local_48,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    puVar2 = PTR_DAT_047d5608;
    if (puVar3 == (uint *)0x0) {
      fVar11 = 0.0;
    }
    else {
      piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
      if (*puVar6 < 7) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
          piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      fVar11 = 0.0;
      if (((4 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
          (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 != 0)) &&
         ((int)*(char *)((long)piVar7 + uVar5) - 0xfU < 2)) {
        lVar10 = *param_2;
        if ((*puVar6 < 0xb) || ((ulong)puVar6[5] == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
        }
        piVar7 = (int *)param_2[2];
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
           (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar9 == 0)) {
          lVar8 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar7 + uVar9);
          lVar8 = (long)puVar3 + (ulong)*puVar3;
        }
        piVar4 = (int *)((long)((long)piVar4 + (ulong)puVar6[3]) +
                        (ulong)*(uint *)((long)piVar4 + (ulong)puVar6[3]));
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
           (uVar9 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar9 == 0)) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (ulong)*(uint *)((long)piVar4 + uVar9);
        }
        puVar3 = (uint *)(lVar8 + uVar9 * 4 + 4);
        piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
           (uVar9 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar9 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)piVar4 + uVar9);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_48 = "x";
        puVar3 = bsearch(&local_48,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar3 != (uint *)0x0) {
          piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
          puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
          uVar1 = *puVar6;
          if (uVar1 < 7) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)0x0;
            if ((ulong)puVar6[3] != 0) {
              puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
              piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
            }
          }
          if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
             (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar9 == 0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = (long)*(char *)((long)piVar7 + uVar9) & 0xffffffff;
          }
          if (*(long *)(puVar2 + uVar9 * 8) == 4) {
            if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
              uVar9 = 0;
            }
            else {
              uVar9 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
            }
            fVar11 = *(float *)(lVar10 + uVar5 + uVar9);
          }
          else if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
            fVar11 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
    piVar4 = (int *)param_2[1];
    if (piVar4 == (int *)0x0) {
      fVar13 = 0.0;
      fVar12 = 0.0;
    }
    else {
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
         (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)((long)piVar4 + uVar5);
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      }
      local_48 = "Offset";
      puVar3 = bsearch(&local_48,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (puVar3 == (uint *)0x0) {
        fVar12 = 0.0;
      }
      else {
        piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
        if (*puVar6 < 7) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)0x0;
          if ((ulong)puVar6[3] != 0) {
            puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
            piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        fVar12 = 0.0;
        if (((4 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
            (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 != 0)) &&
           ((int)*(char *)((long)piVar7 + uVar5) - 0xfU < 2)) {
          lVar10 = *param_2;
          if ((*puVar6 < 0xb) || ((ulong)puVar6[5] == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
          }
          piVar7 = (int *)param_2[2];
          if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
             (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar9 == 0)) {
            lVar8 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar7 + uVar9);
            lVar8 = (long)puVar3 + (ulong)*puVar3;
          }
          piVar4 = (int *)((long)((long)piVar4 + (ulong)puVar6[3]) +
                          (ulong)*(uint *)((long)piVar4 + (ulong)puVar6[3]));
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
             (uVar9 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar9 == 0)) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (ulong)*(uint *)((long)piVar4 + uVar9);
          }
          puVar3 = (uint *)(lVar8 + uVar9 * 4 + 4);
          piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
             (uVar9 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar9 == 0)) {
            puVar3 = (uint *)0x0;
          }
          else {
            puVar3 = (uint *)((long)piVar4 + uVar9);
            puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
          }
          local_48 = "y";
          puVar3 = bsearch(&local_48,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
          if (puVar3 != (uint *)0x0) {
            piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
            puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
            uVar1 = *puVar6;
            if (uVar1 < 7) {
              piVar7 = (int *)0x0;
            }
            else {
              piVar7 = (int *)0x0;
              if ((ulong)puVar6[3] != 0) {
                puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
                piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
              }
            }
            if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
               (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar9 == 0)) {
              uVar9 = 0;
            }
            else {
              uVar9 = (long)*(char *)((long)piVar7 + uVar9) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar9 * 8) == 4) {
              if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
                uVar9 = 0;
              }
              else {
                uVar9 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
              }
              fVar12 = *(float *)(lVar10 + uVar5 + uVar9);
            }
            else if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
              fVar12 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
            }
          }
        }
      }
      piVar4 = (int *)param_2[1];
      if (piVar4 != (int *)0x0) {
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
           (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)piVar4 + uVar5);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_48 = "Offset";
        puVar3 = bsearch(&local_48,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar3 != (uint *)0x0) {
          piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
          puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
          if (*puVar6 < 7) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)0x0;
            if ((ulong)puVar6[3] != 0) {
              puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
              piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
            }
          }
          if (((4 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
              (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 != 0)) &&
             ((int)*(char *)((long)piVar7 + uVar5) - 0xfU < 2)) {
            lVar10 = *param_2;
            if ((*puVar6 < 0xb) || ((ulong)puVar6[5] == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
            }
            piVar7 = (int *)param_2[2];
            if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
               (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar9 == 0)) {
              lVar8 = 0;
            }
            else {
              puVar3 = (uint *)((long)piVar7 + uVar9);
              lVar8 = (long)puVar3 + (ulong)*puVar3;
            }
            piVar4 = (int *)((long)((long)piVar4 + (ulong)puVar6[3]) +
                            (ulong)*(uint *)((long)piVar4 + (ulong)puVar6[3]));
            if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 9) ||
               (uVar9 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[4], uVar9 == 0)) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar9 = (ulong)*(uint *)((long)piVar4 + uVar9);
            }
            puVar3 = (uint *)(lVar8 + uVar9 * 4 + 4);
            piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
            if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
               (uVar9 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar9 == 0)) {
              puVar3 = (uint *)0x0;
            }
            else {
              puVar3 = (uint *)((long)piVar4 + uVar9);
              puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
            }
            local_48 = "z";
            puVar3 = bsearch(&local_48,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
            if (puVar3 != (uint *)0x0) {
              piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
              puVar6 = (ushort *)((long)piVar4 - (long)*piVar4);
              uVar1 = *puVar6;
              if (uVar1 < 7) {
                piVar7 = (int *)0x0;
              }
              else {
                piVar7 = (int *)0x0;
                if ((ulong)puVar6[3] != 0) {
                  puVar3 = (uint *)((long)piVar4 + (ulong)puVar6[3]);
                  piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
                }
              }
              if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
                 (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar9 == 0)) {
                uVar9 = 0;
              }
              else {
                uVar9 = (long)*(char *)((long)piVar7 + uVar9) & 0xffffffff;
              }
              if (*(long *)(puVar2 + uVar9 * 8) == 4) {
                if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
                }
                fVar13 = *(float *)(lVar10 + uVar5 + uVar9);
                goto LAB_00fbbf28;
              }
              if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
                fVar13 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
                goto LAB_00fbbf28;
              }
            }
          }
        }
      }
      fVar13 = 0.0;
    }
  }
LAB_00fbbf28:
  param_1[1] = (ulong)(uint)fVar13;
  *param_1 = CONCAT44(fVar12,fVar11);
  return;
}


