/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f4aa0; name: FUN_028f4aa0
 */


void FUN_028f4aa0(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[0x38] = param_1[0x38] & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
  plVar1 = param_1;
  if ((long *)param_1[0x36] != (long *)0x0) {
    plVar1 = (long *)param_1[0x36];
  }
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  }
  plVar1 = param_1;
  if ((long *)param_1[0x35] != (long *)0x0) {
    plVar1 = (long *)param_1[0x35];
  }
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  }
  puVar2 = (undefined8 *)param_1[0x81];
  for (puVar3 = (undefined8 *)param_1[0x80]; puVar3 != puVar2; puVar3 = puVar3 + 1) {
    FUN_028f4b50(*puVar3,param_2);
  }
  return;
}


