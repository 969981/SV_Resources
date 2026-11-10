/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02999320; name: FUN_02999320
 */


void FUN_02999320(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_18 [2];
  
  local_18[0] = param_2[2];
  uVar1 = FUN_015d9a7c(*(undefined8 *)(param_1 + 0x38),param_2[1],*param_2);
  FUN_02984930(uVar1,local_18);
  return;
}


