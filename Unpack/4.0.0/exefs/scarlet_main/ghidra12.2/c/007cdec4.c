/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cdec4; name: FUN_007cdec4
 */


void FUN_007cdec4(long param_1,undefined4 param_2)

{
  long lVar1;
  
  *(short *)(param_1 + 200) = (short)param_2;
  FUN_007e5348(param_1 + 0x178);
  lVar1 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  if (*(long *)(lVar1 + 0x98) == 0) {
    return;
  }
  FUN_007f42f8(*(long *)(lVar1 + 0x98),param_2);
  return;
}


