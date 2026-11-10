/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02129ef4; name: FUN_02129ef4
 */


void FUN_02129ef4(long param_1,long *param_2,float *param_3)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  
  plVar2 = (long *)PTR_DAT_047d8b70;
  plVar7 = (long *)*param_2;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 6;
  }
  local_60 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 7;
  }
  lStack_58 = *plVar1;
  if (plVar7 == (long *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = plVar7[8];
  }
  local_48 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_48 = plVar7;
  uVar5 = FUN_01180d38(param_1,&local_60);
  fVar3 = *param_3;
  if ((uVar5 & 0xff) != 0) {
    fVar3 = (float)(uVar5 >> 0x20);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  plVar1 = plVar2;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + 0x30);
  }
  local_60 = *plVar1;
  puVar6 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_60);
  *(float *)(puVar6 + 2) = fVar3;
  puVar4 = PTR_LAB_047dcdf0;
  *puVar6 = PTR_LAB_047dcdf0;
  FUN_015ad5e0(&local_68,param_2,&DAT_03c212d3);
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 6;
  }
  local_60 = *plVar2;
  puVar6 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_60);
  *(float *)(puVar6 + 2) = fVar3 * fVar3;
  *puVar6 = puVar4;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


