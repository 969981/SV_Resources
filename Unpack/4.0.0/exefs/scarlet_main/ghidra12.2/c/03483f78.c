/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03483f78; name: FUN_03483f78
 */


void FUN_03483f78(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_047e2fd0;
  plVar2 = (long *)param_1[0x23];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,0);
    puVar3 = (undefined8 *)param_1[0x23];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(puVar1 + 0x30))(5,puVar3);
    }
    param_1[0x23] = 0;
  }
  FUN_0350c4d4(param_1);
  plVar2 = (long *)param_1[0x24];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,0);
    puVar3 = (undefined8 *)param_1[0x24];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(puVar1 + 0x30))(5,puVar3);
    }
    param_1[0x24] = 0;
  }
  (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x03484058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 0x30))(5,param_1);
  return;
}


