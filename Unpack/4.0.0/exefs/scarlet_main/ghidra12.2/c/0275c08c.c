/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275c08c; name: FUN_0275c08c
 */


long FUN_0275c08c(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (((code *)*param_2 == (code *)0x0) ||
     (lVar1 = (*(code *)*param_2)(3,param_2,0,0,&DAT_03d688dc), lVar1 == 0)) {
    lVar1 = FUN_0275fae4(param_1,param_2);
    return lVar1;
  }
  return param_1 + 0x120;
}


