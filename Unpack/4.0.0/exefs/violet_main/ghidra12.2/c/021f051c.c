/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f051c; name: FUN_021f051c
 */


void FUN_021f051c(long param_1,code *param_2)

{
  undefined2 uVar1;
  
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x38) = uVar1;
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x3a) = uVar1;
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x3c) = uVar1;
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x3e) = uVar1;
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x40) = uVar1;
  uVar1 = (*param_2)(0x20);
  *(undefined2 *)(param_1 + 0x42) = uVar1;
  return;
}


