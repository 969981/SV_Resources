/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f383c; name: FUN_001f383c
 */


int FUN_001f383c(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_001edb18();
  if ((lVar3 == 0) || (iVar1 = FUN_001f98c0(), iVar1 == 0)) {
    iVar1 = -0x1f5;
  }
  else {
    iVar2 = FUN_001f9894(lVar3,8);
    iVar1 = 0;
    if (iVar2 < -900) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


