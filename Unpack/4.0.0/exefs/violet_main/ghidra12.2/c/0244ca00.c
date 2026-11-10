/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0244ca00; name: FUN_0244ca00
 */


void FUN_0244ca00(undefined8 *param_1,long param_2)

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
  param_1[6] = uVar2;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_00c96b7c(param_1 + 7,param_2 + 0x18);
  *param_1 = &LAB_0244cc74;
  param_1[1] = &LAB_0244cc78;
  param_1[2] = &LAB_0244cc7c;
  param_1[3] = &LAB_0244cd6c;
  return;
}


