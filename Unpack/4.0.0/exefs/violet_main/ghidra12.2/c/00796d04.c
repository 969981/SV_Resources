/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00796d04; name: FUN_00796d04
 */


int FUN_00796d04(long param_1)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0x48);
  iVar1 = uVar2 + 2;
  if ((uVar2 + 1 & 0x10000) == 0) {
    iVar1 = uVar2 + 1;
  }
  *(short *)(param_1 + 0x48) = (short)iVar1;
  return iVar1;
}


