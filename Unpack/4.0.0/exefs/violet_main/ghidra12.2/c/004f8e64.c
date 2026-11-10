/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f8e64; name: FUN_004f8e64
 */


undefined8 FUN_004f8e64(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 5) == -1) {
    return 0;
  }
  uVar1 = FUN_004a49dc(param_1[7],*param_1,param_2);
  return uVar1;
}


