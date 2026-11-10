/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb2398; name: FUN_01eb2398
 */


long FUN_01eb2398(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = FUN_01eb2440();
  iVar3 = (int)*(char *)(param_1 + 10);
  if (*(char *)(param_1 + 10) < -0x40) {
    iVar3 = -0x7c;
  }
  lVar2 = FUN_0111b030(iVar3);
  return lVar2 + lVar1;
}


