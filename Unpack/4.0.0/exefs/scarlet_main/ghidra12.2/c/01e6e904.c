/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6e904; name: FUN_01e6e904
 */


void FUN_01e6e904(long param_1)

{
  ulong uVar1;
  
  if (((*(char *)(param_1 + 0xa9) != '\0') && (*(char *)(param_1 + 0xa8) != '\0')) &&
     (uVar1 = FUN_01e6e944(param_1,param_1 + 0xaa), (uVar1 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  return;
}


