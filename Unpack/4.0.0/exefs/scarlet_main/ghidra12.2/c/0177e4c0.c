/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0177e4c0; name: FUN_0177e4c0
 */


void FUN_0177e4c0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
    return;
  }
  puVar1 = (undefined8 *)(param_2 + param_3);
  uVar3 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar3;
  plVar2 = (long *)puVar1[3];
  param_1[2] = puVar1[2];
  param_1[3] = plVar2;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0177e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}


