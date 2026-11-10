/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01767b98; name: FUN_01767b98
 */


bool FUN_01767b98(long param_1)

{
  bool bVar1;
  
  if ((((*(long *)(param_1 + 0x18) == 0) || (*(short *)(*(long *)(param_1 + 0x18) + 0x1a) == 0)) ||
      (*(long *)(param_1 + 0x28) == 0)) || (*(short *)(*(long *)(param_1 + 0x28) + 0x1a) == 0)) {
    FUN_01767c24(param_1);
  }
  if (((*(long *)(param_1 + 0x18) == 0) || (*(short *)(*(long *)(param_1 + 0x18) + 0x1a) == 0)) ||
     (*(long *)(param_1 + 0x28) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(short *)(*(long *)(param_1 + 0x28) + 0x1a) != 0;
  }
  return bVar1;
}


