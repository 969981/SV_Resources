/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019836fc; name: FUN_019836fc
 */


void FUN_019836fc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  void *__dest;
  
  puVar1 = (undefined8 *)*param_2;
  piVar2 = (int *)param_2[1];
  __dest = (void *)FUN_00ccbb30(param_1,0);
  memcpy(__dest,(void *)*puVar1,(long)*piVar2);
  FUN_00ccbb18(param_1,0);
  return;
}


