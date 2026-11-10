/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c94f50; name: FUN_01c94f50
 */


void FUN_01c94f50(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char local_30 [8];
  long local_28;
  
  FUN_01c94fc4(local_30,param_2,*(undefined8 *)param_1[1],param_1[2]);
  plVar2 = (long *)*param_1;
  plVar1 = (long *)*plVar2;
  *plVar2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *plVar2 = local_28;
  return;
}


