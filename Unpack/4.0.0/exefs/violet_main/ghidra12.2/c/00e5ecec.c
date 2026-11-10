/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5ecec; name: FUN_00e5ecec
 */


undefined8 FUN_00e5ecec(long param_1,ushort param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((*(long *)PTR_DAT_047d0860 == 0) || (*(ushort *)(param_1 + 0x18) <= param_2)) ||
      (*(long *)(param_1 + 8) == 0)) ||
     (iVar1 = *(int *)(*(long *)(param_1 + 8) + (ulong)param_2 * 4), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,iVar1,0xb0);
  return uVar2;
}


