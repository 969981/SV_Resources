/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01091028; name: FUN_01091028
 */


bool FUN_01091028(long param_1,long param_2)

{
  short sVar1;
  bool bVar2;
  long lVar3;
  
  if ((param_2 == 0) || (sVar1 = *(short *)(*(long *)(param_1 + 0x10) + 0x8a), sVar1 == 0)) {
    bVar2 = false;
  }
  else {
    lVar3 = FUN_01091070(param_2,sVar1,
                         (long)*(short *)(*(long *)(*(long *)(param_1 + 8) + 0x1b0) + 8));
    bVar2 = lVar3 < 1;
  }
  return bVar2;
}


