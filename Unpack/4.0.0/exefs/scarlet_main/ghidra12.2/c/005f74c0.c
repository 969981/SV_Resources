/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f74c0; name: FUN_005f74c0
 */


void FUN_005f74c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_01cf7e20();
  param_1[6] = 0;
  param_1[7] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = FUN_005f7520(param_1,param_2);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


