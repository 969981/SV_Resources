/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f456f0; name: FUN_00f456f0
 */


long FUN_00f456f0(char *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)*param_1;
  if (iVar3 < 0) {
    iVar3 = -0x80;
  }
  lVar1 = FUN_0111b030(iVar3);
  iVar3 = (int)param_1[1];
  if (iVar3 < 0) {
    iVar3 = -0x80;
  }
  lVar2 = FUN_0111b030(iVar3);
  return lVar2 + lVar1;
}


