/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a22d08; name: FUN_02a22d08
 */


void FUN_02a22d08(undefined8 *param_1,long *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint *puVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  ushort *puVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  param_1[5] = &DAT_cbf29ce484222645;
  param_1[6] = &DAT_03c886bc;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x45) = 0;
  puVar2 = PTR_DAT_047d5608;
  piVar7 = (int *)param_2[1];
  if (piVar7 == (int *)0x0) {
    lVar14 = 0;
    piVar7 = (int *)0x0;
LAB_02a23778:
    fVar18 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
  }
  else {
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar7 + uVar8);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_80 = "position";
    puVar3 = bsearch(&local_80,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      piVar10 = (int *)0x0;
      lVar15 = 0;
    }
    else {
      piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
      if (*puVar9 < 7) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar3 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
          piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
          (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar8 == 0)) ||
         (1 < (int)*(char *)((long)piVar10 + uVar8) - 0xfU)) {
        piVar10 = (int *)0x0;
        lVar15 = 0;
      }
      else {
        if (*puVar9 < 0xb) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((ulong)puVar9[5] != 0) {
            uVar8 = (ulong)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
          }
        }
        lVar15 = *param_2 + uVar8;
        piVar10 = (int *)param_2[2];
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
           (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar8 == 0)) {
          lVar14 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar10 + uVar8);
          lVar14 = (long)puVar3 + (ulong)*puVar3;
        }
        piVar7 = (int *)((long)((long)piVar7 + (ulong)puVar9[3]) +
                        (ulong)*(uint *)((long)piVar7 + (ulong)puVar9[3]));
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 9) ||
           (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[4], uVar8 == 0)) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (ulong)*(uint *)((long)piVar7 + uVar8);
        }
        puVar3 = (uint *)(lVar14 + uVar8 * 4 + 4);
        piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
    }
    piVar7 = (int *)param_2[1];
    if (piVar7 == (int *)0x0) {
LAB_02a23614:
      piVar7 = (int *)0x0;
      lVar14 = 0;
    }
    else {
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
         (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 == 0)) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = (uint *)((long)piVar7 + uVar8);
        puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      }
      local_80 = "level_range";
      puVar3 = bsearch(&local_80,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
      if (puVar3 == (uint *)0x0) {
        piVar7 = (int *)0x0;
        lVar14 = 0;
      }
      else {
        piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
        if (*puVar9 < 7) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)0x0;
          if ((ulong)puVar9[3] != 0) {
            puVar3 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
            piVar11 = (int *)((long)puVar3 + (ulong)*puVar3);
          }
        }
        if (((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
            (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) ||
           (1 < (int)*(char *)((long)piVar11 + uVar8) - 0xfU)) goto LAB_02a23614;
        if (*puVar9 < 0xb) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((ulong)puVar9[5] != 0) {
            uVar8 = (ulong)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
          }
        }
        lVar14 = *param_2 + uVar8;
        piVar11 = (int *)param_2[2];
        if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
           (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
          lVar12 = 0;
        }
        else {
          puVar3 = (uint *)((long)piVar11 + uVar8);
          lVar12 = (long)puVar3 + (ulong)*puVar3;
        }
        piVar7 = (int *)((long)((long)piVar7 + (ulong)puVar9[3]) +
                        (ulong)*(uint *)((long)piVar7 + (ulong)puVar9[3]));
        if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 9) ||
           (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[4], uVar8 == 0)) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = (ulong)*(uint *)((long)piVar7 + uVar8);
        }
        puVar3 = (uint *)(lVar12 + uVar8 * 4 + 4);
        piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
    }
    if (piVar10 == (int *)0x0) goto LAB_02a23778;
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 7) ||
       (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar8 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar10 + uVar8);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_80 = "x";
    puVar3 = bsearch(&local_80,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar16 = 0.0;
    }
    else {
      piVar11 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar9 = (ushort *)((long)piVar11 - (long)*piVar11);
      uVar1 = *puVar9;
      if (uVar1 < 7) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar3 = (uint *)((long)piVar11 + (ulong)puVar9[3]);
          piVar13 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar8 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (long)*(char *)((long)piVar13 + uVar8) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar8 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar9[5] == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)*(ushort *)((long)piVar11 + (ulong)puVar9[5]);
        }
        fVar16 = *(float *)(lVar15 + uVar8);
      }
      else {
        fVar16 = 0.0;
        if ((0xe < uVar1) && ((ulong)puVar9[7] != 0)) {
          fVar16 = (float)*(double *)((long)piVar11 + (ulong)puVar9[7]);
        }
      }
    }
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 7) ||
       (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar8 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar10 + uVar8);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_80 = "y";
    puVar3 = bsearch(&local_80,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar17 = 0.0;
    }
    else {
      piVar11 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar9 = (ushort *)((long)piVar11 - (long)*piVar11);
      uVar1 = *puVar9;
      if (uVar1 < 7) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar3 = (uint *)((long)piVar11 + (ulong)puVar9[3]);
          piVar13 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar8 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (long)*(char *)((long)piVar13 + uVar8) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar8 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar9[5] == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)*(ushort *)((long)piVar11 + (ulong)puVar9[5]);
        }
        fVar17 = *(float *)(lVar15 + uVar8);
      }
      else {
        fVar17 = 0.0;
        if ((0xe < uVar1) && ((ulong)puVar9[7] != 0)) {
          fVar17 = (float)*(double *)((long)piVar11 + (ulong)puVar9[7]);
        }
      }
    }
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 7) ||
       (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar8 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar10 + uVar8);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_80 = "z";
    puVar3 = bsearch(&local_80,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
LAB_02a23768:
      fVar18 = 0.0;
    }
    else {
      piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar9 = (ushort *)((long)piVar10 - (long)*piVar10);
      uVar1 = *puVar9;
      if (uVar1 < 7) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar3 = (uint *)((long)piVar10 + (ulong)puVar9[3]);
          piVar11 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar8 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar9[5] == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)*(ushort *)((long)piVar10 + (ulong)puVar9[5]);
        }
        fVar18 = *(float *)(lVar15 + uVar8);
      }
      else {
        if ((uVar1 < 0xf) || ((ulong)puVar9[7] == 0)) goto LAB_02a23768;
        fVar18 = (float)*(double *)((long)piVar10 + (ulong)puVar9[7]);
      }
    }
  }
  param_1[1] = (ulong)(uint)fVar18;
  *param_1 = CONCAT44(fVar17,fVar16);
  if (piVar7 == (int *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
LAB_02a23788:
    fVar16 = 0.0;
  }
  else {
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar7 + uVar8);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_80 = "x";
    puVar3 = bsearch(&local_80,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar16 = 0.0;
    }
    else {
      piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar9 = (ushort *)((long)piVar10 - (long)*piVar10);
      uVar1 = *puVar9;
      if (uVar1 < 7) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar3 = (uint *)((long)piVar10 + (ulong)puVar9[3]);
          piVar11 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
      }
      if (*(long *)(puVar2 + uVar8 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar9[5] == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)*(ushort *)((long)piVar10 + (ulong)puVar9[5]);
        }
        fVar16 = *(float *)(lVar14 + uVar8);
      }
      else {
        fVar16 = 0.0;
        if ((0xe < uVar1) && ((ulong)puVar9[7] != 0)) {
          fVar16 = (float)*(double *)((long)piVar10 + (ulong)puVar9[7]);
        }
      }
    }
    *(int *)(param_1 + 2) = (int)fVar16;
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar7 + uVar8);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_80 = "y";
    puVar3 = bsearch(&local_80,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) goto LAB_02a23788;
    piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
    puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar1 = *puVar9;
    if (uVar1 < 7) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)0x0;
      if ((ulong)puVar9[3] != 0) {
        puVar3 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
        piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
    }
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar8 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (long)*(char *)((long)piVar10 + uVar8) & 0xffffffff;
    }
    if (*(long *)(puVar2 + uVar8 * 8) == 4) {
      if ((uVar1 < 0xb) || ((ulong)puVar9[5] == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
      }
      fVar16 = *(float *)(lVar14 + uVar8);
    }
    else {
      fVar16 = 0.0;
      if ((0xe < uVar1) && ((ulong)puVar9[7] != 0)) {
        fVar16 = (float)*(double *)((long)piVar7 + (ulong)puVar9[7]);
      }
    }
  }
  *(int *)((long)param_1 + 0x14) = (int)fVar16;
  local_80 = (char *)0x942784d52957c1a3;
  pcStack_78 = "biome";
  local_70 = 5;
  local_68 = (long *)0x0;
  piVar7 = (int *)FUN_00f73598(param_2,&local_80);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    iVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    iVar6 = 0;
    if (uVar8 != 0) {
      iVar6 = (int)*(char *)((long)piVar7 + uVar8);
    }
  }
  *(int *)(param_1 + 3) = iVar6;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  local_80 = (char *)0xf6268f7d8017555;
  pcStack_78 = "substance";
  local_70 = 9;
  local_68 = (long *)0x0;
  piVar7 = (int *)FUN_00f73598(param_2,&local_80);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    iVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    iVar6 = 0;
    if (uVar8 != 0) {
      iVar6 = (int)*(char *)((long)piVar7 + uVar8);
    }
  }
  *(int *)((long)param_1 + 0x1c) = iVar6;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  piVar7 = (int *)param_2[1];
  cVar5 = '\0';
  if (piVar7 == (int *)0x0) goto LAB_02a235c4;
  if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 7) ||
     (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 == 0)) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = (uint *)((long)piVar7 + uVar8);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  }
  local_80 = "area_no";
  puVar3 = bsearch(&local_80,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (puVar3 != (uint *)0x0) {
    piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
    puVar9 = (ushort *)((long)piVar7 - (long)*piVar7);
    uVar1 = *puVar9;
    if (uVar1 < 7) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)0x0;
      if ((ulong)puVar9[3] != 0) {
        puVar3 = (uint *)((long)piVar7 + (ulong)puVar9[3]);
        piVar10 = (int *)((long)puVar3 + (ulong)*puVar3);
      }
    }
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
       (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar8 == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (long)*(char *)((long)piVar10 + uVar8) & 0xffffffff;
    }
    if (*(long *)(puVar2 + uVar8 * 8) == 1) {
      if ((uVar1 < 0xb) || ((ulong)puVar9[5] == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)*(ushort *)((long)piVar7 + (ulong)puVar9[5]);
      }
      cVar5 = *(char *)(*param_2 + uVar8);
      goto LAB_02a235c4;
    }
    if ((0xc < uVar1) && ((ulong)puVar9[6] != 0)) {
      cVar5 = *(char *)((long)piVar7 + (ulong)puVar9[6]);
      goto LAB_02a235c4;
    }
  }
  cVar5 = '\0';
LAB_02a235c4:
  plVar4 = (long *)param_1[8];
  *(int *)(param_1 + 4) = (int)cVar5;
  param_1[5] = &DAT_cbf29ce484222645;
  param_1[6] = &DAT_03c886bc;
  param_1[7] = 0;
  param_1[8] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  *(undefined8 *)((long)param_1 + 0x45) = 0;
  param_1[8] = 0;
  return;
}


