/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b922c; name: FUN_019b922c
 */


undefined8 FUN_019b922c(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((param_1[8] == 0) ||
     (uVar1 = FUN_010e161c(*(undefined8 *)(param_1[8] + 0x290)), (uVar1 & 0xff) == 10)) {
    return 0xff;
  }
                    /* WARNING: Could not recover jumptable at 0x019b9270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x838))(param_1,uVar1);
  return uVar2;
}


