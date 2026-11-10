/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d4bdb0; name: FUN_01d4bdb0
 */


undefined8 * FUN_01d4bdb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1 != param_2) {
    do {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      plVar3 = (long *)param_1[3];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      plVar2 = (long *)param_3[3];
      param_3[3] = plVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      puVar1 = param_1 + 4;
      param_1 = param_1 + 5;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)puVar1;
      param_3 = param_3 + 5;
    } while (param_1 != param_2);
  }
  return param_3;
}


