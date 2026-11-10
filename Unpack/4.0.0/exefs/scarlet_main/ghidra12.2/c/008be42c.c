/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008be42c; name: FUN_008be42c
 */


long FUN_008be42c(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (param_1 + 0x10 == lVar2) {
      return 0;
    }
    iVar1 = strcmp((char *)(lVar2 + 0x10),param_2);
    if (iVar1 == 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2;
}


