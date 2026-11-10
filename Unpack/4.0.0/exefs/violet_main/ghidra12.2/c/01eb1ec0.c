/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb1ec0; name: FUN_01eb1ec0
 */


long FUN_01eb1ec0(char *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)*param_1;
  if (*param_1 < -0x40) {
    iVar3 = -0x7c;
  }
  lVar1 = FUN_0111b030(iVar3);
  iVar3 = (int)param_1[1];
  if (param_1[1] < -0x40) {
    iVar3 = -0x7c;
  }
  lVar2 = FUN_0111b030(iVar3);
  return lVar2 + lVar1;
}


