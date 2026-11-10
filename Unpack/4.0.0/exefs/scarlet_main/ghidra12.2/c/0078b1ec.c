/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078b1ec; name: FUN_0078b1ec
 */


bool FUN_0078b1ec(long param_1)

{
  void *__s1;
  bool bVar1;
  int iVar2;
  
  __s1 = (void *)(param_1 + 8);
  iVar2 = memcmp(__s1,&DAT_03d0abac,0x10);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = memcmp(__s1,&DAT_03d0abac,0x10);
    if ((iVar2 == 0) || (iVar2 = memcmp((void *)(param_1 + 0xc),&DAT_03d0abac,0xc), iVar2 == 0)) {
      bVar1 = *(char *)(param_1 + 0xb) == '\x7f';
    }
    else {
      iVar2 = memcmp(__s1,&DAT_03d0abbc,0x10);
      bVar1 = iVar2 == 0;
    }
  }
  return bVar1;
}


