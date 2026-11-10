/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00480640; name: FUN_00480640
 */


undefined8 FUN_00480640(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00480320();
  if ((int)uVar1 != 0) {
    FUN_0047e5e0(DAT_047f3bc0);
    lVar2 = *param_1;
    while (lVar2 != 0) {
      FUN_004515c0(DAT_047f3bc8,param_1);
      param_1 = param_1 + 2;
      lVar2 = *param_1;
    }
    FUN_0047e600(DAT_047f3bc0);
    uVar1 = 1;
  }
  return uVar1;
}


