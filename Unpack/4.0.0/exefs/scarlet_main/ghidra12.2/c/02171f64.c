/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02171f64; name: FUN_02171f64
 */


undefined4 FUN_02171f64(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  FUN_02171b9c();
  param_1 = param_1 + 0x2b4;
  uVar1 = FUN_0131cbf0(L"Scyther",param_1);
  if ((((uVar1 & 1) == 0) && (uVar1 = FUN_0131cbf0(L"Scizor",param_1), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_0131cbf0(L"Sceptile",param_1), (uVar1 & 1) == 0)) {
    uVar1 = FUN_0131cbf0(L"Uxie",param_1);
    uVar2 = 2;
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_0131cbf0(&DAT_03d316bc,param_1);
      uVar2 = 2;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


