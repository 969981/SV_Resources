/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022f43f8; name: FUN_022f43f8
 */


bool FUN_022f43f8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined8 local_18;
  
  cVar1 = FUN_022f4158();
  if (cVar1 != '\0') {
    local_18 = FUN_022f4158(param_1,param_2);
    FUN_0189ecac(param_1,&local_18,param_3 & 1);
  }
  return cVar1 != '\0';
}


