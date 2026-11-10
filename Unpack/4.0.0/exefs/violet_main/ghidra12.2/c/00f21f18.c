/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f21f18; name: FUN_00f21f18
 */


bool FUN_00f21f18(long param_1,long param_2,char param_3)

{
  int local_30 [4];
  byte local_14 [4];
  
  if (((param_2 == 0) || (param_3 == -1)) ||
     (FUN_00f42ddc(local_30,*(undefined8 *)PTR_DAT_047d0860,local_14,param_2), local_30[0] != 0)) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x98) + (ulong)local_14[0]) == param_3;
}


