/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0170a380; name: FUN_0170a380
 */


bool FUN_0170a380(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0170a3c4();
  if ((uVar2 & 1) == 0) {
    bVar1 = *(char *)(param_1 + 0x81) == '\0';
  }
  else {
    FUN_018cff08(param_1,1);
    bVar1 = false;
  }
  return bVar1;
}


