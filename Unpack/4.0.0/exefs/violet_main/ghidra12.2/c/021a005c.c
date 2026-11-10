/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a005c; name: FUN_021a005c
 */


void FUN_021a005c(undefined8 *param_1,long param_2)

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
  FUN_01f8472c(param_1 + 4,param_2);
  param_1[6] = *(undefined8 *)(param_2 + 0x10);
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_00e27c6c(param_1 + 7,param_2 + 0x18);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  param_1[10] = uVar2;
  *param_1 = &LAB_021a0164;
  param_1[1] = &LAB_021a0174;
  param_1[2] = &LAB_021a03c0;
  param_1[3] = &LAB_021a04bc;
  return;
}


