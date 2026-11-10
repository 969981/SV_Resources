/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02367a88; name: FUN_02367a88
 */


void FUN_02367a88(char *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2);
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1[2] = param_3[2];
      plVar3 = (long *)param_3[3];
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      plVar2 = (long *)puVar1[3];
      puVar1[3] = plVar3;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02367b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x20))();
        return;
      }
    }
    return;
  }
  if ((*param_1 == '\0') && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2);
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    plVar3 = (long *)param_3[3];
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar2 = (long *)puVar1[3];
    puVar1[3] = plVar3;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02367b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))();
      return;
    }
  }
  return;
}


