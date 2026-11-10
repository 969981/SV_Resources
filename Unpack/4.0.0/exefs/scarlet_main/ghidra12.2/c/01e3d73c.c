/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3d73c; name: FUN_01e3d73c
 */


void FUN_01e3d73c(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  int *piVar7;
  ulong uVar8;
  ushort *puVar9;
  uint uVar10;
  int *piVar11;
  float fVar12;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar4 = PTR_DAT_047d5608;
  if (((*(long *)(param_1 + 0x970) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x970) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x930) == 0 || ((*(byte *)(*(long *)(param_1 + 0x930) + 0x1e8) & 1) != 0)
      ))) {
    piVar7 = *(int **)(param_1 + 0x918);
    fVar12 = 0.0;
    if (((piVar7 != (int *)0x0) && (6 < *(ushort *)((long)piVar7 - (long)*piVar7))) &&
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 != 0)) {
      puVar5 = (uint *)((long)piVar7 + uVar8);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      piVar7 = *(int **)(param_1 + 0x910);
      local_98 = "WaterDraft";
      puVar5 = bsearch(&local_98,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar5 != (uint *)0x0) && (piVar7 != (int *)0x0)) {
        piVar2 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar3 = *puVar9;
        if (uVar3 < 7) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)0x0;
          if ((ulong)puVar9[3] != 0) {
            puVar5 = (uint *)((long)piVar2 + (ulong)puVar9[3]);
            piVar11 = (int *)((long)puVar5 + (ulong)*puVar5);
          }
        }
        if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
           (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
        }
        if (*(long *)(puVar4 + uVar8 * 8) == 4) {
          fVar12 = 0.0;
          if (uVar3 < 0xb) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            if ((ulong)puVar9[5] != 0) {
              uVar10 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar9[5]);
            }
            if ((0xe < uVar3) && ((ulong)puVar9[7] != 0)) {
              fVar12 = (float)*(double *)((long)piVar2 + (ulong)puVar9[7]);
            }
          }
          if ((uVar10 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
             (uVar8 = (ulong)*(ushort *)(((long)piVar7 - (long)*piVar7) + (ulong)uVar10), uVar8 != 0
             )) {
            fVar12 = *(float *)((long)piVar7 + uVar8);
          }
        }
        else if ((0xe < uVar3) && ((ulong)puVar9[7] != 0)) {
          fVar12 = (float)*(double *)((long)piVar2 + (ulong)puVar9[7]);
        }
      }
    }
  }
  else {
    fVar12 = 0.0;
  }
  *(float *)(param_1 + 0x14e0) = fVar12;
  if (((*(long *)(param_1 + 0x970) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x970) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x930) == 0 || ((*(byte *)(*(long *)(param_1 + 0x930) + 0x1e8) & 1) != 0)
      ))) {
    piVar7 = *(int **)(param_1 + 0x918);
    fVar12 = 0.0;
    if (((piVar7 != (int *)0x0) && (6 < *(ushort *)((long)piVar7 - (long)*piVar7))) &&
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 != 0)) {
      puVar5 = (uint *)((long)piVar7 + uVar8);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      piVar7 = *(int **)(param_1 + 0x910);
      local_98 = "Altitude";
      puVar5 = bsearch(&local_98,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar5 != (uint *)0x0) && (piVar7 != (int *)0x0)) {
        piVar2 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar3 = *puVar9;
        if (uVar3 < 7) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)0x0;
          if ((ulong)puVar9[3] != 0) {
            puVar5 = (uint *)((long)piVar2 + (ulong)puVar9[3]);
            piVar11 = (int *)((long)puVar5 + (ulong)*puVar5);
          }
        }
        if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
           (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
        }
        if (*(long *)(puVar4 + uVar8 * 8) == 4) {
          fVar12 = 0.0;
          if (uVar3 < 0xb) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            if ((ulong)puVar9[5] != 0) {
              uVar10 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar9[5]);
            }
            if ((0xe < uVar3) && ((ulong)puVar9[7] != 0)) {
              fVar12 = (float)*(double *)((long)piVar2 + (ulong)puVar9[7]);
            }
          }
          if ((uVar10 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
             (uVar8 = (ulong)*(ushort *)(((long)piVar7 - (long)*piVar7) + (ulong)uVar10), uVar8 != 0
             )) {
            fVar12 = *(float *)((long)piVar7 + uVar8);
          }
        }
        else if ((0xe < uVar3) && ((ulong)puVar9[7] != 0)) {
          fVar12 = (float)*(double *)((long)piVar2 + (ulong)puVar9[7]);
        }
      }
    }
  }
  else {
    fVar12 = 0.0;
  }
  puVar1 = (undefined8 *)(param_1 + 0x910);
  *(float *)(param_1 + 0x14e4) = fVar12;
  if (((*(long *)(param_1 + 0x970) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x970) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x930) == 0 || ((*(byte *)(*(long *)(param_1 + 0x930) + 0x1e8) & 1) != 0)
      ))) {
    local_78 = *puVar1;
    local_70 = *(undefined8 *)(param_1 + 0x918);
    uStack_68 = *(undefined8 *)(param_1 + 0x920);
  }
  else {
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
  }
  local_98 = (char *)0xdb3ba94fb41c2ef3;
  pcStack_90 = "LookAroundType";
  local_88 = 0xe;
  local_80 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_78,&local_98);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = *(undefined4 *)((long)piVar7 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x14e8) = uVar6;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (((*(long *)(param_1 + 0x970) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x970) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x930) == 0 || ((*(byte *)(*(long *)(param_1 + 0x930) + 0x1e8) & 1) != 0)
      ))) {
    piVar7 = *(int **)(param_1 + 0x918);
    fVar12 = 0.0;
    if (((piVar7 != (int *)0x0) && (6 < *(ushort *)((long)piVar7 - (long)*piVar7))) &&
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar8 != 0)) {
      puVar5 = (uint *)((long)piVar7 + uVar8);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
      piVar7 = *(int **)(param_1 + 0x910);
      local_98 = "FootIkLimit";
      puVar5 = bsearch(&local_98,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar5 != (uint *)0x0) && (piVar7 != (int *)0x0)) {
        piVar2 = (int *)((long)puVar5 + (ulong)*puVar5);
        puVar9 = (ushort *)((long)piVar2 - (long)*piVar2);
        uVar3 = *puVar9;
        if (uVar3 < 7) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)0x0;
          if ((ulong)puVar9[3] != 0) {
            puVar5 = (uint *)((long)piVar2 + (ulong)puVar9[3]);
            piVar11 = (int *)((long)puVar5 + (ulong)*puVar5);
          }
        }
        if ((*(ushort *)((long)piVar11 - (long)*piVar11) < 5) ||
           (uVar8 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2], uVar8 == 0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (long)*(char *)((long)piVar11 + uVar8) & 0xffffffff;
        }
        if (*(long *)(puVar4 + uVar8 * 8) == 4) {
          fVar12 = 0.0;
          if (uVar3 < 0xb) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            if ((ulong)puVar9[5] != 0) {
              uVar10 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar9[5]);
            }
            if ((0xe < uVar3) && ((ulong)puVar9[7] != 0)) {
              fVar12 = (float)*(double *)((long)piVar2 + (ulong)puVar9[7]);
            }
          }
          if ((uVar10 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
             (uVar8 = (ulong)*(ushort *)(((long)piVar7 - (long)*piVar7) + (ulong)uVar10), uVar8 != 0
             )) {
            fVar12 = *(float *)((long)piVar7 + uVar8);
          }
        }
        else if ((0xe < uVar3) && ((ulong)puVar9[7] != 0)) {
          fVar12 = (float)*(double *)((long)piVar2 + (ulong)puVar9[7]);
        }
      }
    }
  }
  else {
    fVar12 = 0.0;
  }
  *(float *)(param_1 + 0x14ec) = fVar12;
  if (((*(long *)(param_1 + 0x970) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x970) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x930) == 0 || ((*(byte *)(*(long *)(param_1 + 0x930) + 0x1e8) & 1) != 0)
      ))) {
    local_b0 = *puVar1;
    local_a8 = *(undefined8 *)(param_1 + 0x918);
    uStack_a0 = *(undefined8 *)(param_1 + 0x920);
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = 0;
  }
  local_98 = (char *)0x42537cc7b62e5f73;
  pcStack_90 = "LookAroundData";
  local_88 = 0xe;
  local_80 = (long *)0x0;
  FUN_00d996a8(&local_78,&local_b0,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x52df90c5b69bfbbe;
  pcStack_90 = "Ground";
  local_88 = 6;
  local_80 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_78,&local_98);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = *(undefined4 *)((long)piVar7 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x14f0) = uVar6;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x51b8652aab57eb0;
  pcStack_90 = "Water";
  local_88 = 5;
  local_80 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_78,&local_98);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = *(undefined4 *)((long)piVar7 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x14f4) = uVar6;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x52a14e26d97220f6;
  pcStack_90 = "Sky";
  local_88 = 3;
  local_80 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_78,&local_98);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = *(undefined4 *)((long)piVar7 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x14f8) = uVar6;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (((*(long *)(param_1 + 0x970) == 0) ||
      ((*(byte *)(*(long *)(param_1 + 0x970) + 0x1e8) & 1) != 0)) &&
     ((*(long *)(param_1 + 0x930) == 0 || ((*(byte *)(*(long *)(param_1 + 0x930) + 0x1e8) & 1) != 0)
      ))) {
    local_b0 = *puVar1;
    local_a8 = *(undefined8 *)(param_1 + 0x918);
    uStack_a0 = *(undefined8 *)(param_1 + 0x920);
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = 0;
  }
  local_98 = (char *)0x2184fc431fca1043;
  pcStack_90 = "MotionCategoryData";
  local_88 = 0x12;
  local_80 = (long *)0x0;
  FUN_00d996a8(&local_78,&local_b0,&local_98);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x52df90c5b69bfbbe;
  pcStack_90 = "Ground";
  local_88 = 6;
  local_80 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_78,&local_98);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = *(undefined4 *)((long)piVar7 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x14fc) = uVar6;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x51b8652aab57eb0;
  pcStack_90 = "Water";
  local_88 = 5;
  local_80 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_78,&local_98);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = *(undefined4 *)((long)piVar7 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x1500) = uVar6;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = (char *)0x52a14e26d97220f6;
  pcStack_90 = "Sky";
  local_88 = 3;
  local_80 = (long *)0x0;
  piVar7 = (int *)FUN_00d27b5c(&local_78,&local_98);
  if ((piVar7 == (int *)0x0) || (*(ushort *)((long)piVar7 - (long)*piVar7) < 7)) {
    uVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
    uVar6 = 0;
    if (uVar8 != 0) {
      uVar6 = *(undefined4 *)((long)piVar7 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x1504) = uVar6;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


