/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021a0c58; name: FUN_021a0c58
 */


void FUN_021a0c58(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00e27c6c(param_2,param_1);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_2[3] = uVar1;
  return;
}


