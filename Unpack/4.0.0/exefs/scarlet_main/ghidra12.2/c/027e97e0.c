/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e97e0; name: FUN_027e97e0
 */


bool FUN_027e97e0(long param_1)

{
  int iVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    return false;
  }
  iVar1 = memcmp((void *)(*(long *)(param_1 + 0x20) + 5),&DAT_03d0b80b,0x10);
  return iVar1 != 0;
}


