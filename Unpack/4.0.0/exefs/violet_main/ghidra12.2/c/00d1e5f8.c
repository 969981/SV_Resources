/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d1e5f8; name: FUN_00d1e5f8
 */


bool FUN_00d1e5f8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_1;
  plVar2 = (long *)FUN_00d1e658(*param_2);
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (*plVar2 != 0) {
    plVar1 = (long *)(*plVar2 + 0x30);
  }
  plVar2 = (long *)PTR_DAT_047d8b70;
  if (*(long *)(lVar3 + 0x38) != 0) {
    plVar2 = (long *)(*(long *)(lVar3 + 0x38) + 0x30);
  }
  return *plVar1 == *plVar2;
}


