/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03499f44; name: FUN_03499f44
 */


undefined4 FUN_03499f44(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 local_68;
  long *plStack_60;
  long local_58;
  undefined4 local_50;
  long *local_48;
  ulong local_40;
  long local_38;
  
  puVar4 = PTR_DAT_047e7040;
  puVar7 = *(undefined8 **)(param_2 + 0x88);
  local_70 = *puVar7;
  local_68 = puVar7[1];
  plStack_60 = (long *)puVar7[2];
  local_58 = 0;
  plVar9 = *(long **)PTR_DAT_047e7040;
  local_50 = *(undefined4 *)(puVar7 + 4);
  local_48 = (long *)0x0;
  local_40 = 0;
  local_38 = 0;
  if ((plStack_60 != (long *)0x0 && plVar9 != (long *)0x0) && (lVar8 = *plStack_60, lVar8 != 0)) {
    plVar10 = (long *)*plVar9;
    uVar6 = *(uint *)(plVar9 + 1);
    plVar9 = plVar10;
    if ((uVar6 != 0) && (*plVar10 != lVar8)) {
      lVar12 = (ulong)uVar6 * 8;
      plVar11 = plVar10;
      do {
        lVar12 = lVar12 + -8;
        if (lVar12 == 0) {
          plVar9 = plVar10 + uVar6;
          goto LAB_03499ff8;
        }
        plVar9 = plVar11 + 1;
        plVar1 = plVar11 + 1;
        plVar11 = plVar9;
      } while (*plVar1 != lVar8);
    }
LAB_03499ff8:
    if (((plVar9 != (long *)0x0) && (plVar10 + uVar6 != plVar9)) && (*(short *)(lVar8 + 0x40) != -1)
       ) {
      *(short *)(lVar8 + 0x40) = *(short *)(lVar8 + 0x40) + 1;
      local_38 = *plStack_60;
      puVar7 = *(undefined8 **)(param_2 + 0x88);
    }
  }
  FUN_03499b7c(param_1,puVar7[3],&local_58);
  if (local_58 == 0) {
    uVar5 = 2;
  }
  else {
    *(undefined8 **)(param_2 + 0x88) = &local_70;
    uVar5 = FUN_034a83a4(param_1,param_2);
  }
  if (local_38 != 0) {
    FUN_034b2c38(*(undefined8 *)puVar4);
  }
  puVar4 = PTR_DAT_047e2fd0;
  plVar9 = local_48;
  if ((uint)local_40 != 0) {
    plVar10 = local_48;
    uVar6 = (uint)local_40;
    do {
      *(int *)(*plVar10 + 0x84) = *(int *)(*plVar10 + 0x84) + -1;
      puVar7 = (undefined8 *)*plVar10;
      iVar2 = *(int *)((long)puVar7 + 0x74) + -1;
      *(int *)((long)puVar7 + 0x74) = iVar2;
      if (iVar2 == 0) {
        (**(code **)*puVar7)(puVar7);
        (**(code **)(puVar4 + 0x30))(0,puVar7);
        plVar9 = local_48;
        uVar6 = (uint)local_40;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar9 + uVar6);
  }
  uVar3 = local_40 >> 0x20;
  local_40 = uVar3 << 0x20;
  if (plVar9 != (long *)0x0) {
    local_40 = uVar3 << 0x20;
    (**(code **)(puVar4 + 0x30))(0);
    local_48 = (long *)0x0;
    local_40 = local_40 & 0xffffffff;
  }
  lVar8 = local_58;
  if ((local_58 != 0) &&
     (iVar2 = *(int *)(local_58 + 0x10) + -1, *(int *)(local_58 + 0x10) = iVar2, iVar2 == 0)) {
    FUN_034783fc(local_58);
    (**(code **)(puVar4 + 0x30))(0,lVar8);
  }
  return uVar5;
}


