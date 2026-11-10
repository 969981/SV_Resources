/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


