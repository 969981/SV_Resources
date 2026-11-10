/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d3c30; name: FUN_001d3c30
 */


long FUN_001d3c30(long *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  long *plVar4;
  
  sVar2 = strlen(param_2);
  lVar3 = *param_1;
  if (((*(byte *)((long)param_1 + 0x3fc) >> 4 & 1) == 0) ||
     ((*(byte *)(lVar3 + 0xf40) >> 4 & 1) == 0)) {
    plVar4 = (long *)(lVar3 + 0x808);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x810);
  }
  plVar4 = (long *)*plVar4;
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    iVar1 = FUN_001e0a34(*plVar4,param_2,sVar2);
    if ((iVar1 != 0) && ((*(byte *)(*plVar4 + sVar2) & 0xfe) == 0x3a)) break;
    plVar4 = (long *)plVar4[1];
  }
  return *plVar4;
}


