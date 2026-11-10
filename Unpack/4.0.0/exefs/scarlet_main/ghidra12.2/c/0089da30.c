/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089da30; name: FUN_0089da30
 */


void FUN_0089da30(long *param_1)

{
  undefined *puVar1;
  
  FUN_0088d0a0();
  puVar1 = PTR_DAT_047d22f0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


