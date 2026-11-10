/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0188dfe8; name: FUN_0188dfe8
 */


void FUN_0188dfe8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 0x38) == 0)) || (*(int *)(lVar1 + 0x4c) == 0)) {
    return;
  }
  FUN_00d9d890();
  return;
}


