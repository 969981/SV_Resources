/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078b1a8; name: FUN_0078b1a8
 */


bool FUN_0078b1a8(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = memcmp((void *)(param_1 + 8),&DAT_03d0abac,0x10);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = memcmp((void *)(param_1 + 0xc),&DAT_03d0abac,0xc);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


