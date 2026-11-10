/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb4444; name: FUN_00fb4444
 */


void FUN_00fb4444(byte *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  byte bVar3;
  uint *puVar4;
  int *piVar5;
  ulong uVar6;
  ushort *puVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  undefined1 *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long local_d0;
  int *local_c8;
  undefined *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long local_98;
  int *local_90;
  long local_80;
  int *local_78;
  char *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  undefined *local_48;
  
  local_68 = (char *)0xa37af3f3b1f97f1;
  pcStack_60 = "Valid";
  local_58 = 5;
  local_50 = (long *)0x0;
  bVar3 = FUN_00cf7518(param_2,&local_68);
  *param_1 = bVar3 & 1;
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  puVar2 = PTR_DAT_047d5608;
  piVar5 = (int *)param_2[1];
  fVar11 = 0.0;
  if (piVar5 != (int *)0x0) {
    fVar11 = 0.0;
    if (6 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
      fVar11 = 0.0;
      if (uVar6 != 0) {
        puVar4 = (uint *)((long)piVar5 + uVar6);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        local_68 = "Radius";
        puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar4 == (uint *)0x0) {
          fVar11 = 0.0;
        }
        else {
          piVar5 = (int *)*param_2;
          fVar11 = 0.0;
          if (piVar5 != (int *)0x0) {
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar7 = (ushort *)((long)piVar8 - (long)*piVar8);
            uVar1 = *puVar7;
            if (uVar1 < 7) {
              piVar10 = (int *)0x0;
            }
            else {
              piVar10 = (int *)0x0;
              if ((ulong)puVar7[3] != 0) {
                puVar4 = (uint *)((long)piVar8 + (ulong)puVar7[3]);
                piVar10 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = (long)*(char *)((long)piVar10 + uVar6) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar6 * 8) == 4) {
              fVar11 = 0.0;
              if (uVar1 < 0xb) {
                uVar9 = 0;
              }
              else {
                uVar9 = 0;
                if ((ulong)puVar7[5] != 0) {
                  uVar9 = (uint)*(ushort *)((long)piVar8 + (ulong)puVar7[5]);
                }
                if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
                  fVar11 = (float)*(double *)((long)piVar8 + (ulong)puVar7[7]);
                }
              }
              if ((uVar9 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
                 (uVar6 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar9),
                 uVar6 != 0)) {
                fVar11 = *(float *)((long)piVar5 + uVar6);
              }
            }
            else {
              fVar11 = 0.0;
              if (0xe < uVar1) {
                fVar11 = 0.0;
                if ((ulong)puVar7[7] != 0) {
                  fVar11 = (float)*(double *)((long)piVar8 + (ulong)puVar7[7]);
                }
              }
            }
          }
        }
      }
    }
  }
  fVar12 = 0.0;
  *(float *)(param_1 + 4) = fVar11;
  piVar5 = (int *)param_2[1];
  if (((piVar5 != (int *)0x0) && (6 < *(ushort *)((long)piVar5 - (long)*piVar5))) &&
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 != 0)) {
    puVar4 = (uint *)((long)piVar5 + uVar6);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    local_68 = "Height";
    puVar4 = bsearch(&local_68,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      fVar12 = 0.0;
    }
    else {
      piVar5 = (int *)*param_2;
      fVar12 = 0.0;
      if (piVar5 != (int *)0x0) {
        piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar7 = (ushort *)((long)piVar8 - (long)*piVar8);
        uVar1 = *puVar7;
        if (uVar1 < 7) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)0x0;
          if ((ulong)puVar7[3] != 0) {
            puVar4 = (uint *)((long)piVar8 + (ulong)puVar7[3]);
            piVar10 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (long)*(char *)((long)piVar10 + uVar6) & 0xffffffff;
        }
        if (*(long *)(puVar2 + uVar6 * 8) == 4) {
          fVar12 = 0.0;
          if (uVar1 < 0xb) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            if ((ulong)puVar7[5] != 0) {
              uVar9 = (uint)*(ushort *)((long)piVar8 + (ulong)puVar7[5]);
            }
            if ((0xe < uVar1) && ((ulong)puVar7[7] != 0)) {
              fVar12 = (float)*(double *)((long)piVar8 + (ulong)puVar7[7]);
            }
          }
          if ((uVar9 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
             (uVar6 = (ulong)*(ushort *)(((long)piVar5 - (long)*piVar5) + (ulong)uVar9), uVar6 != 0)
             ) {
            fVar12 = *(float *)((long)piVar5 + uVar6);
          }
        }
        else {
          fVar12 = 0.0;
          if (0xe < uVar1) {
            fVar12 = 0.0;
            if ((ulong)puVar7[7] != 0) {
              fVar12 = (float)*(double *)((long)piVar8 + (ulong)puVar7[7]);
            }
          }
        }
      }
    }
  }
  *(float *)(param_1 + 8) = fVar12;
  local_58 = 6;
  local_50 = (long *)0x0;
  local_68 = (char *)0xa1a5a39f1e539c0a;
  pcStack_60 = "Offset";
  FUN_00fb4c10(&local_80,param_2,&local_68);
  fVar11 = 0.0;
  if (local_78 != (int *)0x0) {
    if ((*(ushort *)((long)local_78 - (long)*local_78) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)local_78 - (long)*local_78))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)local_78 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_b8 = &DAT_03c705dc;
    puVar4 = bsearch(&local_b8,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      fVar11 = 0.0;
    }
    else {
      piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
      uVar1 = *puVar7;
      if (uVar1 < 7) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
          piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar6 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
        }
        fVar11 = *(float *)(local_80 + uVar6);
      }
      else {
        fVar11 = 0.0;
        if (0xe < uVar1) {
          fVar11 = 0.0;
          if ((ulong)puVar7[7] != 0) {
            fVar11 = (float)*(double *)((long)piVar5 + (ulong)puVar7[7]);
          }
        }
      }
    }
  }
  local_a8 = 6;
  local_a0 = (long *)0x0;
  local_b8 = (undefined *)0xa1a5a39f1e539c0a;
  pcStack_b0 = "Offset";
  FUN_00fb4c10(&local_98,param_2,&local_b8);
  fVar12 = 0.0;
  if (local_90 != (int *)0x0) {
    if ((*(ushort *)((long)local_90 - (long)*local_90) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)local_90 - (long)*local_90))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)local_90 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_f0 = &DAT_03bf41a8;
    puVar4 = bsearch(&local_f0,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 == (uint *)0x0) {
      fVar12 = 0.0;
    }
    else {
      piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
      uVar1 = *puVar7;
      if (uVar1 < 7) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
          piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar6 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
        }
        fVar12 = *(float *)(local_98 + uVar6);
      }
      else {
        fVar12 = 0.0;
        if (0xe < uVar1) {
          fVar12 = 0.0;
          if ((ulong)puVar7[7] != 0) {
            fVar12 = (float)*(double *)((long)piVar5 + (ulong)puVar7[7]);
          }
        }
      }
    }
  }
  local_e0 = 6;
  local_d8 = (long *)0x0;
  local_f0 = (undefined1 *)0xa1a5a39f1e539c0a;
  pcStack_e8 = "Offset";
  FUN_00fb4c10(&local_d0,param_2,&local_f0);
  if (local_c8 != (int *)0x0) {
    if ((*(ushort *)((long)local_c8 - (long)*local_c8) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[3], uVar6 == 0)) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4 = (uint *)((long)local_c8 + uVar6);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    }
    local_48 = &DAT_03c9820a;
    puVar4 = bsearch(&local_48,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar4 != (uint *)0x0) {
      piVar5 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar7 = (ushort *)((long)piVar5 - (long)*piVar5);
      uVar1 = *puVar7;
      if (uVar1 < 7) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)0x0;
        if ((ulong)puVar7[3] != 0) {
          puVar4 = (uint *)((long)piVar5 + (ulong)puVar7[3]);
          piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar6 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (long)*(char *)((long)piVar8 + uVar6) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar6 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar7[5] == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar7[5]);
        }
        uVar6 = (ulong)*(uint *)(local_d0 + uVar6);
        goto LAB_00fb49f8;
      }
      if (0xe < uVar1) {
        uVar6 = 0;
        if ((ulong)puVar7[7] != 0) {
          uVar6 = (ulong)(uint)(float)*(double *)((long)piVar5 + (ulong)puVar7[7]);
        }
        goto LAB_00fb49f8;
      }
    }
  }
  uVar6 = 0;
LAB_00fb49f8:
  *(ulong *)(param_1 + 0x18) = uVar6;
  *(ulong *)(param_1 + 0x10) = CONCAT44(fVar12,fVar11);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


