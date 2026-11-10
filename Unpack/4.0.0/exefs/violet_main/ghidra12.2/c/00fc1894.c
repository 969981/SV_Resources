/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fc1894; name: FUN_00fc1894
 */


void FUN_00fc1894(float *param_1,long *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  ushort *puVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  char *local_38;
  
  puVar2 = PTR_DAT_047d5608;
  fVar9 = 0.0;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "Pokemon";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  *param_1 = fVar8;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "Player";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  param_1[1] = fVar8;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "FavoritePlace";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  param_1[2] = fVar8;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "HatePlace";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  param_1[3] = fVar8;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "Meals";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  param_1[4] = fVar8;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "Sleep";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  param_1[5] = fVar8;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "Ball";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  param_1[6] = fVar8;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "PlayerChase";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  param_1[7] = fVar8;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "Rummaging";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  param_1[8] = fVar8;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "Stain";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  param_1[9] = fVar8;
  piVar4 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar4 != (int *)0x0) {
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar4 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_38 = "Whistle";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 == (uint *)0x0) {
      fVar8 = 0.0;
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
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else {
        fVar8 = 0.0;
        if (0xe < uVar1) {
          fVar8 = 0.0;
          if ((ulong)puVar6[7] != 0) {
            fVar8 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
          }
        }
      }
    }
  }
  param_1[10] = fVar8;
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
    local_38 = "PhotoBgm";
    puVar3 = bsearch(&local_38,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
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
        fVar9 = *(float *)(*param_2 + uVar5);
      }
      else if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
        fVar9 = (float)*(double *)((long)piVar4 + (ulong)puVar6[7]);
      }
    }
  }
  param_1[0xb] = fVar9;
  return;
}


