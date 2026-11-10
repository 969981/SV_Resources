/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fc570; name: FUN_029fc570
 */


void FUN_029fc570(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)PTR_DAT_047e4f38;
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar2 + 0x1000b8) = lVar3;
  }
  if (*(long *)(lVar3 + (long)iVar1 * 8 + 1000) == 0) {
    return;
  }
  FUN_03231bdc();
  return;
}


