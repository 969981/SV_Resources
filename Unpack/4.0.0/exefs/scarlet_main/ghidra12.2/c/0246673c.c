/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0246673c; name: thunk_FUN_02466740
 */


void thunk_FUN_02466740(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_02465bb0();
  if (param_3 < uVar1) {
    FUN_024667dc(param_1,*(undefined8 *)(param_2 + 0x30),param_3,*(undefined4 *)(param_2 + 0x38),
                 *(undefined8 *)(param_2 + 0x40));
    return;
  }
  *param_1 = 0;
  return;
}


