/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001da464; name: FUN_001da464
 */


undefined8 FUN_001da464(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0xd8) != 0)) {
    plVar2 = (long *)FUN_001d14d8(*(long *)(param_1 + 0xd8));
    for (lVar4 = *plVar2; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
      sVar3 = strlen((char *)(lVar4 + 0x18));
      iVar1 = FUN_001e0a34((char *)(lVar4 + 0x18),param_2,sVar3);
      if (iVar1 != 0) {
        FUN_001db818(param_1,"Server %s is blacklisted\n",param_2);
        return 1;
      }
    }
  }
  return 0;
}


