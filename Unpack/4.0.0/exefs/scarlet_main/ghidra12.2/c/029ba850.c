/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ba850; name: FUN_029ba850
 */


void FUN_029ba850(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar3 = (long *)param_2[3];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar1 = (long *)param_1[3];
  param_1[3] = plVar3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  uVar2 = param_2[7];
  param_1[5] = param_2[5];
  param_1[7] = uVar2;
  uVar2 = param_2[4];
  param_1[6] = param_2[6];
  param_1[4] = uVar2;
  return;
}


