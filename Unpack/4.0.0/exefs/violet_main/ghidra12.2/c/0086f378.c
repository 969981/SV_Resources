/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0086f378; name: FUN_0086f378
 */


void FUN_0086f378(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_047d1ce8;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0xffffffff;
  puVar2 = PTR_DAT_047d1a08;
  local_38 = 0x38;
  plVar3 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
    (**(code **)(puVar2 + 0x10))(plVar3,&DAT_03c41cd3);
  }
  puVar2 = PTR_DAT_047d1cf0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = 0xffffffff;
  plVar3[2] = 1;
  plVar3[3] = 0;
  plVar3[6] = 0;
  lVar4 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar4 != 0) {
    FUN_012c4338();
    plVar3 = (long *)param_1[3];
  }
  lVar4 = *(long *)(param_2 + 0x18);
  FUN_008702bc(plVar3 + 3,lVar4 + 0x18);
  uVar1 = *(undefined4 *)(lVar4 + 0x34);
  *(undefined8 *)((long)plVar3 + 0x2c) = *(undefined8 *)(lVar4 + 0x2c);
  *(undefined4 *)((long)plVar3 + 0x34) = uVar1;
  return;
}


