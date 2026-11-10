/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00805c10; name: FUN_00805c10
 */


void FUN_00805c10(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d1700;
  puVar1 = PTR_DAT_047d0a10;
  *param_1 = (long)(PTR_DAT_047d16f8 + 0x10);
  param_1[0x1b] = (long)(puVar2 + 0x10);
  param_1[0x1f] = (long)(puVar1 + 0x10);
  FUN_018dd490(param_1 + 0x25);
  FUN_007a5e24(param_1);
  return;
}


