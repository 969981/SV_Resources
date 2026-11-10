/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052cea4; name: FUN_0052cea4
 */


void FUN_0052cea4(long param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 0052ceb0 to 0052ceb3 has its CatchHandler @ 0052cec0 */
  uVar1 = FUN_0052c420(param_1,*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}


