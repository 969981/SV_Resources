/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e9520; name: FUN_027e9520
 */


void FUN_027e9520(long *param_1)

{
  undefined *puVar1;
  
  FUN_0079876c();
  puVar1 = PTR_DAT_047d0ea8;
  param_1[2] = (long)param_1 + 0x1c;
  *(undefined4 *)(param_1 + 3) = 0x5c;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0x1c),0,0x180);
  return;
}


