/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ad6a4; name: FUN_028ad6a4
 */


void FUN_028ad6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  FUN_00dc8750(param_2,param_3,param_4,param_5,1,0,0,0,0,0,0,lVar1 + 0xb8,0x80000,3);
  return;
}


