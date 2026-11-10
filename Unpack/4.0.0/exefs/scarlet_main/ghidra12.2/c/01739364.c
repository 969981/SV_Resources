/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01739364; name: FUN_01739364
 */


void FUN_01739364(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_38;
  
  lVar1 = FUN_01739408(param_1 + 0x78);
  if (lVar1 == 0) {
    return;
  }
  FUN_01739524(param_1,param_2);
  FUN_01739604(&local_38,param_1 + 0x78,lVar1);
  lVar1 = local_38;
  local_38 = 0;
  if (lVar1 != 0) {
    FUN_01739780((long)register0x00000008 + -0x30);
  }
  return;
}


