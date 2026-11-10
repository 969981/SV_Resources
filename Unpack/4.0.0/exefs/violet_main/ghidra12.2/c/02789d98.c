/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02789d98; name: FUN_02789d98
 */


undefined8 FUN_02789d98(long param_1,ushort param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((*(long *)PTR_DAT_047d0860 == 0) || (*(ushort *)(param_1 + 0x1a) <= param_2)) ||
      (*(long *)(param_1 + 0x10) == 0)) ||
     (iVar1 = *(int *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 4), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,iVar1,0xb4);
  return uVar2;
}


