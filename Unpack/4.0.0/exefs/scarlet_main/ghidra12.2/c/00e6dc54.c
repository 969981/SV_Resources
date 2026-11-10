/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e6dc54; name: FUN_00e6dc54
 */


void FUN_00e6dc54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x90) != 0)) {
    FUN_00f21154(lVar1);
    FUN_00f21784(lVar1);
    FUN_00f212b8(lVar1);
    FUN_00f21a44(lVar1);
    FUN_00f2150c(lVar1);
  }
  FUN_00e6dcb0(param_1);
  return;
}


