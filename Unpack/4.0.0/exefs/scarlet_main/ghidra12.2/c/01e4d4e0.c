/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e4d4e0; name: FUN_01e4d4e0
 */


void FUN_01e4d4e0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  ushort uVar2;
  byte bVar3;
  int *piVar4;
  uint *puVar5;
  long *plVar6;
  undefined4 uVar7;
  ulong uVar8;
  ushort *puVar9;
  uint uVar10;
  int *piVar11;
  float fVar12;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  char *local_50;
  char *local_48;
  undefined8 local_40;
  long *local_38;
  
  *(undefined4 *)(param_1 + 0x40) = param_3;
  local_50 = (char *)0x81316c1bb8af0852;
  local_48 = "ActionID";
  local_40 = 8;
  local_38 = (long *)0x0;
  piVar4 = (int *)FUN_00d27b5c(param_2,&local_50);
  if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) {
    uVar7 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = *(undefined4 *)((long)piVar4 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = uVar7;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = (char *)0xeb13935dc09ebfaf;
  local_48 = "ActionPointType";
  local_40 = 0xf;
  local_38 = (long *)0x0;
  piVar4 = (int *)FUN_00d27b5c(param_2,&local_50);
  if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) {
    uVar7 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = *(undefined4 *)((long)piVar4 + uVar8);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = uVar7;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  piVar4 = (int *)param_2[1];
  fVar12 = 0.0;
  if (((piVar4 != (int *)0x0) && (6 < *(ushort *)((long)piVar4 - (long)*piVar4))) &&
     (uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar8 != 0)) {
    puVar5 = (uint *)((long)piVar4 + uVar8);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    local_50 = "SearchRadius";
    puVar5 = bsearch(&local_50,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar5 != (uint *)0x0) && (piVar4 = (int *)*param_2, piVar4 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar5 + (ulong)*puVar5);
      puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar9;
      if (uVar2 < 7) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar5 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
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
      if (*(long *)(PTR_DAT_047d5608 + uVar8 * 8) == 4) {
        fVar12 = 0.0;
        if (uVar2 < 0xb) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          if ((ulong)puVar9[5] != 0) {
            uVar10 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar9[5]);
          }
          if ((0xe < uVar2) && ((ulong)puVar9[7] != 0)) {
            fVar12 = (float)*(double *)((long)piVar1 + (ulong)puVar9[7]);
          }
        }
        if ((uVar10 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
           (uVar8 = (ulong)*(ushort *)(((long)piVar4 - (long)*piVar4) + (ulong)uVar10), uVar8 != 0))
        {
          fVar12 = *(float *)((long)piVar4 + uVar8);
        }
      }
      else if ((0xe < uVar2) && ((ulong)puVar9[7] != 0)) {
        fVar12 = (float)*(double *)((long)piVar1 + (ulong)puVar9[7]);
      }
    }
  }
  *(float *)(param_1 + 0x4c) = fVar12;
  local_70 = 0xc9520d7e3dbe57f4;
  pcStack_68 = "TargetNode";
  local_60 = 10;
  local_58 = (long *)0x0;
  FUN_00cee868(&local_50,param_2,&local_70);
  plVar6 = *(long **)(param_1 + 0x68);
  *(char **)(param_1 + 0x50) = local_50;
  *(char **)(param_1 + 0x58) = local_48;
  *(undefined8 *)(param_1 + 0x60) = local_40;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = local_38;
  local_38 = (long *)0x0;
  *(long **)(param_1 + 0x68) = plVar6;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_50 = (char *)0x7f15048946769e71;
  local_48 = "IsFoundOnly";
  local_40 = 0xb;
  local_38 = (long *)0x0;
  bVar3 = FUN_00cf7518(param_2,&local_50);
  *(byte *)(param_1 + 0x70) = bVar3 & 1;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = (char *)0xbb02d5fd8eff9a6e;
  local_48 = "IsInverseYaw";
  local_40 = 0xc;
  local_38 = (long *)0x0;
  bVar3 = FUN_00cf7518(param_2,&local_50);
  *(byte *)(param_1 + 0x71) = bVar3 & 1;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


