/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ffba8; name: FUN_018ffba8
 */


void FUN_018ffba8(long *param_1)

{
  undefined *puVar1;
  
  FUN_007e87cc();
  puVar1 = PTR_DAT_047d0870;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = -1;
  *(undefined2 *)((long)param_1 + 0x5a) = 0;
  param_1[0xe] = -1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


