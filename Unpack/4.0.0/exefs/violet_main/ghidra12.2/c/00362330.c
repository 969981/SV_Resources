/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00362330; name: FUN_00362330
 */


void FUN_00362330(void)

{
  int iVar1;
  
  if ((*(int *)PTR_DAT_047cceb0 == 0) ||
     (iVar1 = (**(code **)(PTR_PTR_047cceb8 + 0x20))(), iVar1 == 0)) {
    *(undefined4 *)PTR_DAT_047ccec0 = 0;
    return;
  }
  return;
}


