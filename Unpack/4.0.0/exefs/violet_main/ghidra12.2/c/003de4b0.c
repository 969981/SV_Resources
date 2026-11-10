/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003de4b0; name: FUN_003de4b0
 */


undefined8 FUN_003de4b0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((param_2 == (int *)0x0) || (*param_2 != 0x10)) || (*(long *)(param_2 + 2) == 0)) {
    return 0;
  }
  uVar1 = FUN_003e01b0(*(long *)(param_2 + 2),param_1);
  return uVar1;
}


