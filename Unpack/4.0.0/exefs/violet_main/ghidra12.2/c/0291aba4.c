/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291aba4; name: FUN_0291aba4
 */


void FUN_0291aba4(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x2c) == 1) || (*(int *)(param_1 + 0x68) == -1)) {
    FUN_011e2fb0(param_2);
    return;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x98))();
  *(undefined4 *)(param_2 + 8) = uVar1;
  FUN_015d8d70(param_2,*(undefined1 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
  return;
}


