/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e0eb4; name: FUN_001e0eb4
 */


long FUN_001e0eb4(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long *plVar3;
  
  sVar2 = strlen(param_2);
  plVar3 = *(long **)(*param_1 + 0x808);
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    iVar1 = FUN_001e0a34(*plVar3,param_2,sVar2);
    if ((iVar1 != 0) && ((*(byte *)(*plVar3 + sVar2) & 0xfe) == 0x3a)) break;
    plVar3 = (long *)plVar3[1];
  }
  return *plVar3;
}


