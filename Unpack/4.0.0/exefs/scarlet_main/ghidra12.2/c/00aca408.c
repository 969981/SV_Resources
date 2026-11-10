/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00aca408; name: FUN_00aca408
 */


void FUN_00aca408(long param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  ushort uVar2;
  byte bVar3;
  int *piVar4;
  long *plVar5;
  uint *puVar6;
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
  local_50 = (char *)0xbc01f8c1138da1a8;
  local_48 = "WaitType";
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
  *(undefined4 *)(param_1 + 0x48) = uVar7;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = (char *)0x4c4c0abcfb97386c;
  local_48 = "TimeType";
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
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = (char *)0x48a43b2d37d198dc;
  local_48 = "IsAutoBlink";
  local_40 = 0xb;
  local_38 = (long *)0x0;
  bVar3 = FUN_00cf7518(param_2,&local_50);
  *(byte *)(param_1 + 0x50) = bVar3 & 1;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_70 = 0x766d139b068c180e;
  pcStack_68 = "NodeName";
  local_60 = 8;
  local_58 = (long *)0x0;
  FUN_00cee868(&local_50,param_2,&local_70);
  plVar5 = *(long **)(param_1 + 0x70);
  *(char **)(param_1 + 0x58) = local_50;
  *(char **)(param_1 + 0x60) = local_48;
  *(undefined8 *)(param_1 + 0x68) = local_40;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  plVar5 = local_38;
  local_38 = (long *)0x0;
  *(long **)(param_1 + 0x70) = plVar5;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_50 = (char *)0x911a41ea0ea4b8f6;
  local_48 = "LocationType";
  local_40 = 0xc;
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
  *(undefined4 *)(param_1 + 0x78) = uVar7;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  piVar4 = (int *)param_2[1];
  fVar12 = 0.0;
  if (((piVar4 != (int *)0x0) && (6 < *(ushort *)((long)piVar4 - (long)*piVar4))) &&
     (uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar8 != 0)) {
    puVar6 = (uint *)((long)piVar4 + uVar8);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    local_50 = "EffectiveDistance";
    puVar6 = bsearch(&local_50,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar6 != (uint *)0x0) && (piVar4 = (int *)*param_2, piVar4 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar6 + (ulong)*puVar6);
      puVar9 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar9;
      if (uVar2 < 7) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)0x0;
        if ((ulong)puVar9[3] != 0) {
          puVar6 = (uint *)((long)piVar1 + (ulong)puVar9[3]);
          piVar11 = (int *)((long)puVar6 + (ulong)*puVar6);
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
  *(float *)(param_1 + 0x7c) = fVar12;
  return;
}


