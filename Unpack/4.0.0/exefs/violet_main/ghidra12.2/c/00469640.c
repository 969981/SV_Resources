/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00469640; name: FUN_00469640
 */


int FUN_00469640(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x18));
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  return iVar1 >> 3;
}


