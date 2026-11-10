/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9eee0; name: FUN_01d9eee0
 */


int FUN_01d9eee0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_0168d1c0();
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 1;
  }
  iVar1 = iVar1 >> 1;
  if ((1 << (ulong)(uVar2 & 0x1f) & 0x702U) == 0) {
    iVar1 = param_1;
  }
  if ((uVar2 & 0xff) < 0xb) {
    param_1 = iVar1;
  }
  return param_1;
}


