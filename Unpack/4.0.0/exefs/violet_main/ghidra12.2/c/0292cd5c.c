/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292cd5c; name: FUN_0292cd5c
 */


int FUN_0292cd5c(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x38);
  if (plVar3 == (long *)0x0) {
    iVar2 = 4;
  }
  else {
    iVar2 = 4;
    do {
      iVar1 = FUN_0292cda0(plVar3 + 3);
      plVar3 = (long *)*plVar3;
      iVar2 = iVar1 + iVar2;
    } while (plVar3 != (long *)0x0);
  }
  return iVar2;
}


