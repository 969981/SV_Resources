/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147d478; name: FUN_0147d478
 */


void FUN_0147d478(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  ushort *puVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long local_a0;
  int *piStack_98;
  undefined8 local_90;
  char *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  int *local_60;
  undefined8 local_58;
  
  local_88 = (char *)0xdc7048e88c466e17;
  pcStack_80 = "MinScale";
  local_78 = 8;
  local_70 = (long *)0x0;
  FUN_00fb4c10(&local_68,param_2,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  puVar2 = PTR_DAT_047d5608;
  uVar5 = 0;
  if (local_60 == (int *)0x0) {
    fVar12 = 0.0;
    fVar11 = 0.0;
  }
  else {
    if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)local_60 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_88 = "x";
    puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar11 = 0.0;
    }
    else {
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
         (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar5 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
        }
        fVar11 = *(float *)(local_68 + uVar5);
      }
      else {
        fVar11 = 0.0;
        if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
          fVar11 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
        }
      }
    }
    if (local_60 == (int *)0x0) {
      uVar5 = 0;
      fVar12 = 0.0;
    }
    else {
      if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
         (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)((long)local_60 + uVar5);
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      }
      local_88 = "y";
      puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (puVar3 == (uint *)0x0) {
        fVar12 = 0.0;
      }
      else {
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
           (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
        }
        if (*(long *)(puVar2 + uVar5 * 8) == 4) {
          if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
          }
          fVar12 = *(float *)(local_68 + uVar5);
        }
        else {
          fVar12 = 0.0;
          if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
            fVar12 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
      if (local_60 != (int *)0x0) {
        if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
           (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_60 + uVar5);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_88 = "z";
        puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
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
             (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
          }
          if (*(long *)(puVar2 + uVar5 * 8) == 4) {
            if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
            }
            uVar5 = (ulong)*(uint *)(local_68 + uVar5);
          }
          else {
            if ((uVar1 < 0xf) || ((ulong)puVar6[7] == 0)) goto LAB_0147e5c0;
            uVar5 = (ulong)(uint)(float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
          goto LAB_0147d76c;
        }
      }
LAB_0147e5c0:
      uVar5 = 0;
    }
  }
LAB_0147d76c:
  param_1[1] = uVar5;
  *param_1 = CONCAT44(fVar12,fVar11);
  local_88 = (char *)0x691ee940c4dbfded;
  pcStack_80 = "MaxScale";
  local_78 = 8;
  local_70 = (long *)0x0;
  FUN_00fb4c10(&local_a0,param_2,&local_88);
  local_68 = local_a0;
  local_60 = piStack_98;
  local_58 = local_90;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  uVar5 = 0;
  if (local_60 == (int *)0x0) {
    fVar12 = 0.0;
    fVar11 = 0.0;
  }
  else {
    if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)local_60 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_88 = "x";
    puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar11 = 0.0;
    }
    else {
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
         (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar5 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
        }
        fVar11 = *(float *)(local_68 + uVar5);
      }
      else {
        fVar11 = 0.0;
        if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
          fVar11 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
        }
      }
    }
    if (local_60 == (int *)0x0) {
      uVar5 = 0;
      fVar12 = 0.0;
    }
    else {
      if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
         (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)((long)local_60 + uVar5);
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      }
      local_88 = "y";
      puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (puVar3 == (uint *)0x0) {
        fVar12 = 0.0;
      }
      else {
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
           (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
        }
        if (*(long *)(puVar2 + uVar5 * 8) == 4) {
          if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
          }
          fVar12 = *(float *)(local_68 + uVar5);
        }
        else {
          fVar12 = 0.0;
          if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
            fVar12 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
      if (local_60 != (int *)0x0) {
        if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
           (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_60 + uVar5);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_88 = "z";
        puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
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
             (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
          }
          if (*(long *)(puVar2 + uVar5 * 8) == 4) {
            if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
            }
            uVar5 = (ulong)*(uint *)(local_68 + uVar5);
          }
          else {
            if ((uVar1 < 0xf) || ((ulong)puVar6[7] == 0)) goto LAB_0147e5d4;
            uVar5 = (ulong)(uint)(float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
          goto LAB_0147da40;
        }
      }
LAB_0147e5d4:
      uVar5 = 0;
    }
  }
LAB_0147da40:
  param_1[3] = uVar5;
  param_1[2] = CONCAT44(fVar12,fVar11);
  local_88 = (char *)0xe5bf0e393a0c9db7;
  pcStack_80 = "MinPos";
  local_78 = 6;
  local_70 = (long *)0x0;
  FUN_00fb4c10(&local_a0,param_2,&local_88);
  local_68 = local_a0;
  local_60 = piStack_98;
  local_58 = local_90;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  uVar5 = 0;
  if (local_60 == (int *)0x0) {
    fVar12 = 0.0;
    fVar11 = 0.0;
  }
  else {
    if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)local_60 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_88 = "x";
    puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar11 = 0.0;
    }
    else {
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
         (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar5 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
        }
        fVar11 = *(float *)(local_68 + uVar5);
      }
      else {
        fVar11 = 0.0;
        if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
          fVar11 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
        }
      }
    }
    if (local_60 == (int *)0x0) {
      uVar5 = 0;
      fVar12 = 0.0;
    }
    else {
      if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
         (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)((long)local_60 + uVar5);
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      }
      local_88 = "y";
      puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (puVar3 == (uint *)0x0) {
        fVar12 = 0.0;
      }
      else {
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
           (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
        }
        if (*(long *)(puVar2 + uVar5 * 8) == 4) {
          if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
          }
          fVar12 = *(float *)(local_68 + uVar5);
        }
        else {
          fVar12 = 0.0;
          if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
            fVar12 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
      if (local_60 != (int *)0x0) {
        if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
           (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
          puVar3 = (uint *)0x0;
        }
        else {
          puVar3 = (uint *)((long)local_60 + uVar5);
          puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        }
        local_88 = "z";
        puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
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
             (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
          }
          if (*(long *)(puVar2 + uVar5 * 8) == 4) {
            if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
            }
            uVar5 = (ulong)*(uint *)(local_68 + uVar5);
          }
          else {
            if ((uVar1 < 0xf) || ((ulong)puVar6[7] == 0)) goto LAB_0147e5e8;
            uVar5 = (ulong)(uint)(float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
          goto LAB_0147dd14;
        }
      }
LAB_0147e5e8:
      uVar5 = 0;
    }
  }
LAB_0147dd14:
  param_1[5] = uVar5;
  param_1[4] = CONCAT44(fVar12,fVar11);
  local_88 = (char *)0x935aa71af17448d;
  pcStack_80 = "MaxPos";
  local_78 = 6;
  local_70 = (long *)0x0;
  FUN_00fb4c10(&local_a0,param_2,&local_88);
  local_68 = local_a0;
  local_60 = piStack_98;
  local_58 = local_90;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  fVar14 = 0.0;
  fVar13 = 0.0;
  fVar12 = 0.0;
  fVar11 = 0.0;
  if (local_60 == (int *)0x0) goto LAB_0147dff4;
  if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
     (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = (uint *)((long)local_60 + uVar5);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  }
  local_88 = "x";
  puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (puVar3 == (uint *)0x0) {
    fVar12 = 0.0;
  }
  else {
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
       (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
    }
    if (*(long *)(puVar2 + uVar5 * 8) == 4) {
      if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
      }
      fVar12 = *(float *)(local_68 + uVar5);
    }
    else {
      fVar12 = 0.0;
      if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
        fVar12 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
      }
    }
  }
  if (local_60 == (int *)0x0) {
    fVar13 = 0.0;
  }
  else {
    if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)local_60 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_88 = "y";
    puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar13 = 0.0;
    }
    else {
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
         (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar5 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
        }
        fVar13 = *(float *)(local_68 + uVar5);
      }
      else {
        fVar13 = 0.0;
        if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
          fVar13 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
        }
      }
    }
    if (local_60 != (int *)0x0) {
      if ((*(ushort *)((long)local_60 - (long)*local_60) < 7) ||
         (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 == 0)) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)((long)local_60 + uVar5);
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      }
      local_88 = "z";
      puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
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
           (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
        }
        if (*(long *)(puVar2 + uVar5 * 8) == 4) {
          if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (ulong)*(ushort *)((long)piVar4 + (ulong)puVar6[5]);
          }
          fVar11 = *(float *)(local_68 + uVar5);
          goto LAB_0147dff4;
        }
        if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
          fVar11 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          goto LAB_0147dff4;
        }
      }
    }
  }
  fVar11 = 0.0;
LAB_0147dff4:
  fVar10 = 0.0;
  param_1[7] = (ulong)(uint)fVar11;
  param_1[6] = CONCAT44(fVar13,fVar12);
  piVar4 = (int *)param_2[1];
  if (piVar4 != (int *)0x0) {
    fVar10 = 0.0;
    if (6 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
      uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
      fVar10 = 0.0;
      if (uVar5 != 0) {
        puVar3 = (uint *)((long)piVar4 + uVar5);
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        local_88 = "MinStrength";
        puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar3 == (uint *)0x0) {
          fVar10 = 0.0;
        }
        else {
          piVar4 = (int *)*param_2;
          fVar10 = 0.0;
          if (piVar4 != (int *)0x0) {
            piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
            puVar6 = (ushort *)((long)piVar7 - (long)*piVar7);
            uVar1 = *puVar6;
            if (uVar1 < 7) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)0x0;
              if ((ulong)puVar6[3] != 0) {
                puVar3 = (uint *)((long)piVar7 + (ulong)puVar6[3]);
                piVar9 = (int *)((long)puVar3 + (ulong)*puVar3);
              }
            }
            if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
               (uVar5 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar5 == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (long)*(char *)((long)piVar9 + uVar5) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar5 * 8) == 4) {
              fVar10 = 0.0;
              if (uVar1 < 0xb) {
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                if ((ulong)puVar6[5] != 0) {
                  uVar8 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar6[5]);
                }
                if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
                  fVar10 = (float)*(double *)((long)piVar7 + (ulong)puVar6[7]);
                }
              }
              if ((uVar8 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
                 (uVar5 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar8),
                 uVar5 != 0)) {
                fVar10 = *(float *)((long)piVar4 + uVar5);
              }
            }
            else {
              fVar10 = 0.0;
              if (0xe < uVar1) {
                fVar10 = 0.0;
                if ((ulong)puVar6[7] != 0) {
                  fVar10 = (float)*(double *)((long)piVar7 + (ulong)puVar6[7]);
                }
              }
            }
          }
        }
      }
    }
  }
  *(float *)(param_1 + 8) = fVar10;
  piVar4 = (int *)param_2[1];
  fVar11 = 0.0;
  if (piVar4 != (int *)0x0) {
    fVar11 = 0.0;
    if (6 < *(ushort *)((long)piVar4 - (long)*piVar4)) {
      uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
      fVar11 = 0.0;
      if (uVar5 != 0) {
        puVar3 = (uint *)((long)piVar4 + uVar5);
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
        local_88 = "MaxStrength";
        puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar3 == (uint *)0x0) {
          fVar11 = 0.0;
        }
        else {
          piVar4 = (int *)*param_2;
          fVar11 = 0.0;
          if (piVar4 != (int *)0x0) {
            piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
            puVar6 = (ushort *)((long)piVar7 - (long)*piVar7);
            uVar1 = *puVar6;
            if (uVar1 < 7) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)0x0;
              if ((ulong)puVar6[3] != 0) {
                puVar3 = (uint *)((long)piVar7 + (ulong)puVar6[3]);
                piVar9 = (int *)((long)puVar3 + (ulong)*puVar3);
              }
            }
            if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
               (uVar5 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar5 == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (long)*(char *)((long)piVar9 + uVar5) & 0xffffffff;
            }
            if (*(long *)(puVar2 + uVar5 * 8) == 4) {
              fVar11 = 0.0;
              if (uVar1 < 0xb) {
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                if ((ulong)puVar6[5] != 0) {
                  uVar8 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar6[5]);
                }
                if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
                  fVar11 = (float)*(double *)((long)piVar7 + (ulong)puVar6[7]);
                }
              }
              if ((uVar8 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
                 (uVar5 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar8),
                 uVar5 != 0)) {
                fVar11 = *(float *)((long)piVar4 + uVar5);
              }
            }
            else {
              fVar11 = 0.0;
              if (0xe < uVar1) {
                fVar11 = 0.0;
                if ((ulong)puVar6[7] != 0) {
                  fVar11 = (float)*(double *)((long)piVar7 + (ulong)puVar6[7]);
                }
              }
            }
          }
        }
      }
    }
  }
  *(float *)((long)param_1 + 0x44) = fVar11;
  piVar4 = (int *)param_2[1];
  if (((piVar4 != (int *)0x0) && (6 < *(ushort *)((long)piVar4 - (long)*piVar4))) &&
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 != 0)) {
    puVar3 = (uint *)((long)piVar4 + uVar5);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    local_88 = "JointInterval";
    puVar3 = bsearch(&local_88,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar3 != (uint *)0x0) && (piVar4 = (int *)*param_2, piVar4 != (int *)0x0)) {
      piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar6 = (ushort *)((long)piVar7 - (long)*piVar7);
      uVar1 = *puVar6;
      if (uVar1 < 7) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar3 = (uint *)((long)piVar7 + (ulong)puVar6[3]);
          piVar9 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 5) ||
         (uVar5 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar9 + uVar5) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar5 * 8) == 4) {
        fVar14 = 0.0;
        if (uVar1 < 0xb) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((ulong)puVar6[5] != 0) {
            uVar8 = (uint)*(ushort *)((long)piVar7 + (ulong)puVar6[5]);
          }
          if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
            fVar14 = (float)*(double *)((long)piVar7 + (ulong)puVar6[7]);
          }
        }
        if ((uVar8 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
           (uVar5 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar8), uVar5 != 0))
        {
          fVar14 = *(float *)((long)piVar4 + uVar5);
        }
      }
      else if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
        fVar14 = (float)*(double *)((long)piVar7 + (ulong)puVar6[7]);
      }
    }
  }
  *(float *)(param_1 + 9) = fVar14;
  return;
}


