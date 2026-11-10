/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ce354; name: FUN_018ce354
 */


void FUN_018ce354(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_018ce3ac(param_3);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar2 = FUN_01243584(param_1);
  FUN_0124b0ac(uVar2,param_2,param_3);
  return;
}


