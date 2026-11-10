/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078a1c0; name: FUN_0078a1c0
 */


void FUN_0078a1c0(long *param_1,long param_2)

{
  *param_1 = (long)(PTR_DAT_047d08c0 + 0x10);
  memcpy(param_1 + 1,(void *)(param_2 + 8),0x10);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0x18);
  return;
}


