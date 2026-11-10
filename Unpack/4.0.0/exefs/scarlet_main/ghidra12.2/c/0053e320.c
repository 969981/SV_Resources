/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0053e320; name: FUN_0053e320
 */


void FUN_0053e320(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)(*(long *)(*param_2 + 8) + 0x48) + 0x238);
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x98,8);
  puVar1 = PTR_DAT_047cde48 + 0x10;
  plVar2[2] = 0;
  plVar2[3] = (long)plVar3;
  *plVar2 = (long)puVar1;
  plVar2[1] = 0;
  FUN_0053e63c(plVar2 + 4,param_2);
  *param_1 = plVar2 + 4;
  param_1[1] = plVar2;
  return;
}


