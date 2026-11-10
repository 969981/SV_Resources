/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ca9bc; name: FUN_007ca9bc
 */


void FUN_007ca9bc(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_007ca8dc(param_1 + 6,(int)param_1[0x17]);
  if (lVar1 != param_1[0x18]) {
    do {
      (**(code **)(*param_1 + 0x80))(param_1,lVar1);
      lVar1 = FUN_007ca8dc(param_1 + 6,(int)param_1[0x17]);
    } while (lVar1 != param_1[0x18]);
  }
  return;
}


