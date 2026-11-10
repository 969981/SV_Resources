/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023c2c7c; name: FUN_023c2c7c
 */


void FUN_023c2c7c(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_00d334b4(param_1 + 4,param_2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *param_1 = &LAB_023c0cf0;
  param_1[1] = &LAB_023c0d00;
  param_1[6] = uVar2;
  param_1[2] = &LAB_023c0e70;
  param_1[3] = &LAB_023c0f48;
  return;
}


