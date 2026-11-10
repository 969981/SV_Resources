/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f69688; name: FUN_01f69688
 */


void FUN_01f69688(undefined8 *param_1,undefined2 param_2,undefined2 param_3,byte param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auStack_60 [24];
  long *local_48;
  
  FUN_00d8fb98(auStack_60,&DAT_04559b38);
  FUN_01f6c340(param_1,auStack_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  *param_1 = &DAT_04559a08;
  *(undefined2 *)(param_1 + 0xd) = param_2;
  param_1[4] = &PTR_LAB_04559aa0;
  param_1[5] = &PTR_LAB_04559af0;
  *(undefined2 *)((long)param_1 + 0x6a) = param_3;
  *(byte *)((long)param_1 + 0x6c) = param_4 & 1;
  FUN_01df4670(param_1 + 0xe,param_1[1],*param_5);
  FUN_01df4670(param_1 + 0xf,param_1[1],*param_6);
  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}


