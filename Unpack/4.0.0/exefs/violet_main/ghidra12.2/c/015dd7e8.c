/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015dd7e8; name: FUN_015dd7e8
 */


void FUN_015dd7e8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_00c96b7c(param_1 + 4,param_2);
  param_1[6] = *(undefined8 *)(param_2 + 0x10);
  param_1[7] = *(undefined8 *)(param_2 + 0x18);
  param_1[8] = *(undefined8 *)(param_2 + 0x20);
  plVar1 = *(long **)(param_2 + 0x28);
  param_1[9] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *param_1 = &LAB_00d9e368;
  param_1[1] = FUN_022dbd9c;
  param_1[2] = FUN_022dbebc;
  param_1[3] = FUN_022dbf24;
  return;
}


