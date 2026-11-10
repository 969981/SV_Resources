/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053e398; name: FUN_0053e398
 */


void FUN_0053e398(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x98,8);
  puVar1 = PTR_DAT_047cde48 + 0x10;
  plVar2[2] = 0;
  plVar2[3] = (long)param_3;
  *plVar2 = (long)puVar1;
  plVar2[1] = 0;
  FUN_0053e85c(plVar2 + 4,param_2,param_3);
  *param_1 = plVar2 + 4;
  param_1[1] = plVar2;
  return;
}


