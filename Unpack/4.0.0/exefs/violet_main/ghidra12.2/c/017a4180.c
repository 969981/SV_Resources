/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a4180; name: FUN_017a4180
 */


int FUN_017a4180(long param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    return *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20) + -1;
  }
  piVar1 = (int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = (int *)(param_1 + 0x24);
  }
  return *(int *)(param_1 + 8) + ~(*piVar1 * *(int *)(param_1 + 0xc));
}


