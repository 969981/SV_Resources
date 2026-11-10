/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ecbd0; name: FUN_001ecbd0
 */


void FUN_001ecbd0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 != 0) && (lVar2 = *(long *)(param_1 + (long)param_2 * 0x18 + 0x298), lVar2 != 0)) {
    lVar1 = param_1 + (long)param_2 * 0x18 + 0x290;
    FUN_001ecde0(lVar1);
    if (*(char *)(lVar2 + 0x108) == '\0') {
      FUN_001ece38(lVar1);
      return;
    }
  }
  return;
}


