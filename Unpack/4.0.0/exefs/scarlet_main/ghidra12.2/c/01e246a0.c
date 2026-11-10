/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e246a0; name: FUN_01e246a0
 */


bool FUN_01e246a0(long param_1,undefined1 param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 local_14 [4];
  
  local_14[0] = param_2;
  lVar2 = FUN_01e246e0(param_1 + 0x348,param_1 + 0x3b8);
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = FUN_01e247e8(lVar2 + 0x18,local_14);
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}


