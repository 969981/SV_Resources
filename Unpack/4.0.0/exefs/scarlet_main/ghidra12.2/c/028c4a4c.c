/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028c4a4c; name: FUN_028c4a4c
 */


void FUN_028c4a4c(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)*param_2;
  }
  FUN_00f8dd38(param_1,uVar1,param_3 & 1);
  return;
}


