/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e55524; name: FUN_01e55524
 */


void FUN_01e55524(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  uint *puVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  char *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  *(undefined4 *)(param_1 + 0x40) = param_3;
  local_50 = (char *)0x81316c1bb8af0852;
  pcStack_48 = "ActionID";
  local_40 = 8;
  local_38 = (long *)0x0;
  piVar3 = (int *)FUN_00d27b5c(param_2,&local_50);
  if ((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 7)) {
    uVar10 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
    uVar10 = 0;
    if (uVar5 != 0) {
      uVar10 = *(undefined4 *)((long)piVar3 + uVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = (char *)0xc6844e65835cb7d1;
  pcStack_48 = "FindTargetXZType";
  local_40 = 0x10;
  local_38 = (long *)0x0;
  piVar3 = (int *)FUN_00d27b5c(param_2,&local_50);
  if ((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 7)) {
    uVar10 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
    uVar10 = 0;
    if (uVar5 != 0) {
      uVar10 = *(undefined4 *)((long)piVar3 + uVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = uVar10;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  piVar3 = (int *)param_2[1];
  fVar11 = 0.0;
  if (((piVar3 != (int *)0x0) && (6 < *(ushort *)((long)piVar3 - (long)*piVar3))) &&
     (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar5 != 0)) {
    puVar4 = (uint *)((long)piVar3 + uVar5);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    local_50 = "MoveSpeedRate";
    puVar4 = bsearch(&local_50,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar4 != (uint *)0x0) && (piVar3 = (int *)*param_2, piVar3 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar6;
      if (uVar2 < 7) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
          piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
         (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar5 * 8) == 4) {
        fVar11 = 0.0;
        if (uVar2 < 0xb) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if ((ulong)puVar6[5] != 0) {
            uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
          }
          if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
            fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
          }
        }
        if ((uVar7 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar5 = (ulong)*(ushort *)(((long)piVar3 - (long)*piVar3) + (ulong)uVar7), uVar5 != 0))
        {
          fVar11 = *(float *)((long)piVar3 + uVar5);
        }
      }
      else if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
        fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
      }
    }
  }
  *(float *)(param_1 + 0x4c) = fVar11;
  local_50 = (char *)0x9fc11dc407598bc;
  pcStack_48 = "MoveType";
  local_40 = 8;
  local_38 = (long *)0x0;
  piVar3 = (int *)FUN_00d27b5c(param_2,&local_50);
  if (((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 7)) ||
     (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar5 == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)((long)piVar3 + uVar5);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (iVar9 == 2) {
    uVar10 = 0x40000000;
  }
  else {
    if (iVar9 != 1) {
      return;
    }
    uVar10 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar10;
  return;
}


