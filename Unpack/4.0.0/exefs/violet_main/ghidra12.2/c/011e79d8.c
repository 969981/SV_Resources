/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011e79d8; name: FUN_011e79d8
 */


void FUN_011e79d8(undefined8 param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *local_d0;
  byte *pbStack_c8;
  size_t local_c0;
  long *local_b8;
  byte local_b0 [64];
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  long *local_38;
  
  local_70 = *(long *)(param_2 + 0x90);
  lStack_68 = *(long *)(param_2 + 0x98);
  local_60 = *(long *)(param_2 + 0xa0);
  local_58 = *(long **)(param_2 + 0xa8);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  if (-1 < param_4) {
    puVar5 = &DAT_cbf29ce484222645;
    snprintf((char *)local_b0,0x40,"_instance%d",param_4);
    local_c0 = strlen((char *)local_b0);
    if (local_b0[0] != 0) {
      pbVar3 = (byte *)((ulong)local_b0 | 1);
      do {
        puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)local_b0[0]) * 0x100000001b3);
        local_b0[0] = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (local_b0[0] != 0);
    }
    local_b8 = (long *)0x0;
    local_d0 = puVar5;
    pbStack_c8 = local_b0;
    FUN_01221800(&local_38,(long *)(param_2 + 0x90),&local_d0);
    plVar2 = local_38;
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 6;
    }
    lVar4 = *plVar1;
    plVar1 = (long *)PTR_PTR_047d4508;
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 7;
    }
    lVar6 = *plVar1;
    if (local_38 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = local_38[8];
      (**(code **)(*local_38 + 0x18))(local_38);
    }
    plVar1 = local_58;
    local_58 = (long *)0x0;
    local_70 = lVar4;
    lStack_68 = lVar6;
    local_60 = lVar7;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    local_58 = plVar2;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
  }
  if (*(long *)(param_3 + 0x20) == -0x3112734805235247) {
    snprintf((char *)local_b0,0x20,"_id%d",*(int *)(param_2 + 0xe8));
    FUN_02bb0460(param_1,param_3,&local_70,local_b0);
  }
  else {
    FUN_01221800(param_1,param_3,&local_70);
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


