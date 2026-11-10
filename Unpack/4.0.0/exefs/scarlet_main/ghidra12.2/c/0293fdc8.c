/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293fdc8; name: FUN_0293fdc8
 */


void FUN_0293fdc8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01582534();
  lVar2 = FUN_015d9a7c(uVar1,*param_3,*(undefined4 *)(param_3 + 4));
  if (lVar2 != 0) {
    FUN_02984438();
    uVar1 = FUN_01245ab0(param_1);
    FUN_0129aff0(uVar1,0x47,*(undefined4 *)(param_3 + 4),*param_3);
  }
  uVar1 = FUN_01243584(param_1);
  FUN_02984440(uVar1,*(undefined4 *)(param_3 + 4),*param_3);
  return;
}


