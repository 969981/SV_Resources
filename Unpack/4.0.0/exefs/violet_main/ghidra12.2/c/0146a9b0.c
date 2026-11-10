/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146a9b0; name: FUN_0146a9b0
 */


bool FUN_0146a9b0(byte *param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  
  uVar1 = (ulong)(*param_1 >> 1);
  if ((*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 1) {
    iVar3 = std::string::compare((ulong)param_1,0,(char *)0xffffffffffffffff,0x3bf34eb);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


