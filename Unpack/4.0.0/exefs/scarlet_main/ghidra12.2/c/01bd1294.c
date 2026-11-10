/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bd1294; name: FUN_01bd1294
 */


void FUN_01bd1294(char *param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined4 *)(*(long *)(param_1 + 8) + param_2);
      *puVar1 = *param_3;
      *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_3 + 10);
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8);
      FUN_00d0a71c(puVar1 + 0xe,param_3 + 0xe);
      *(undefined8 *)(puVar1 + 0x16) = *(undefined8 *)(param_3 + 0x16);
      *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(param_3 + 0x14);
      FUN_00d0a71c(puVar1 + 0x1a,param_3 + 0x1a);
      FUN_00c6c994(puVar1 + 0x1e,param_3 + 0x1e);
      plVar3 = *(long **)(param_3 + 0x22);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      plVar2 = *(long **)(puVar1 + 0x22);
      *(long **)(puVar1 + 0x22) = plVar3;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01bd1414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x20))();
        return;
      }
    }
    return;
  }
  if ((*param_1 == '\0') && (*(long *)(param_1 + 8) != 0)) {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 8) + param_2);
    *puVar1 = *param_3;
    *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8);
    FUN_00d0a71c(puVar1 + 0xe,param_3 + 0xe);
    *(undefined8 *)(puVar1 + 0x16) = *(undefined8 *)(param_3 + 0x16);
    *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(param_3 + 0x14);
    FUN_00d0a71c(puVar1 + 0x1a,param_3 + 0x1a);
    FUN_00c6c994(puVar1 + 0x1e,param_3 + 0x1e);
    plVar3 = *(long **)(param_3 + 0x22);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    plVar2 = *(long **)(puVar1 + 0x22);
    *(long **)(puVar1 + 0x22) = plVar3;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01bd1364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))();
      return;
    }
  }
  return;
}


