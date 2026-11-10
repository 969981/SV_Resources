/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006fcd80; name: FUN_006fcd80
 */


void FUN_006fcd80(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  cVar1 = *param_2;
  uVar2 = FUN_01cf7e20();
  param_1[2] = 0;
  param_1[3] = uVar2;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = FUN_01cf7e20();
  param_1[6] = 0;
  param_1[7] = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = FUN_01cf7e20();
  param_1[10] = 0;
  param_1[0xb] = uVar2;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((cVar1 != '\0') && (uVar3 = FUN_006fc810(param_1,param_2), (uVar3 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


