/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01054b94; name: FUN_01054b94
 */


int FUN_01054b94(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x210);
  if (plVar3 == *(long **)(param_1 + 0x218)) {
    return -1;
  }
  iVar2 = 0;
  while( true ) {
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (*plVar3 != 0) {
      plVar1 = (long *)(*plVar3 + 0x30);
    }
    if (*plVar1 == *param_2) break;
    plVar3 = plVar3 + 1;
    iVar2 = iVar2 + 1;
    if (*(long **)(param_1 + 0x218) == plVar3) {
      return -1;
    }
  }
  return iVar2;
}


