/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e9de4; name: FUN_002e9de4
 */


undefined1  [16] FUN_002e9de4(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = param_1[1];
  uVar1 = uVar3;
  if (param_2 <= uVar3) {
    uVar1 = param_2;
  }
  uVar2 = uVar3 - uVar1;
  if (param_3 <= uVar3 - uVar1) {
    uVar2 = param_3;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = *param_1 + uVar1;
  return auVar4;
}


