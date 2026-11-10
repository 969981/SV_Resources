/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ad714; name: FUN_028ad714
 */


void FUN_028ad714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  FUN_028ad770(8,param_2,param_3,param_4,9,0,0,0,lVar1 + 0x800b8,0x80000);
  return;
}


