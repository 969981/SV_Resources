/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ee42c; name: FUN_008ee42c
 */


void FUN_008ee42c(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_008f1cbc(param_2,0,3,param_3);
  *param_1 = uVar1;
  uVar1 = FUN_008f1cbc(param_2,4,3,param_3);
  param_1[1] = uVar1;
  return;
}


