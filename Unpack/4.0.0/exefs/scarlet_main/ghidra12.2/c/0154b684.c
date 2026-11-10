/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0154b684; name: FUN_0154b684
 */


bool FUN_0154b684(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  FUN_0154b6d4(param_2);
  uVar3 = FUN_0154b6dc();
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_0154b6c8(param_1);
    bVar1 = iVar2 == 3;
  }
  return bVar1;
}


