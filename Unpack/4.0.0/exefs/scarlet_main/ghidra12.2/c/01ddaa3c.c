/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddaa3c; name: FUN_01ddaa3c
 */


void FUN_01ddaa3c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 - 1U < 10) {
    uVar1 = *(undefined4 *)(&DAT_03d5ef58 + (long)(int)(param_4 - 1U) * 4);
  }
  else {
    uVar1 = 0;
  }
  FUN_011b87e8(param_1,param_2,*param_3,uVar1,0,0);
  return;
}


