/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00103a10; name: FUN_00103a10
 */


uint FUN_00103a10(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x400;
  if (param_1 < 0x5622) {
    iVar2 = 0x200;
  }
  iVar1 = 0x800;
  if (param_1 < 0xac44) {
    iVar1 = iVar2;
  }
  return ((uint)(iVar1 * param_2) >> 3 & 0xfffffc0) + 0xaf & 0x1fffffe0;
}


