/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278dc58; name: FUN_0278dc58
 */


void FUN_0278dc58(undefined4 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  plVar3 = (long *)FUN_0278dcb0(param_2);
  if (plVar3 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x18))();
    *param_1 = uVar2;
    uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
    *(undefined2 *)(param_1 + 1) = uVar1;
  }
  return;
}


