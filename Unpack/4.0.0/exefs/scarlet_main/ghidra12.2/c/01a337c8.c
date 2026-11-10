/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a337c8; name: FUN_01a337c8
 */


void FUN_01a337c8(undefined8 *param_1,long *param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(*param_2 + ((long)param_4 >> 1)));
    }
    puVar2 = (undefined8 *)(*param_3)();
    uVar3 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar3;
    plVar1 = (long *)puVar2[3];
    param_1[2] = puVar2[2];
    param_1[3] = plVar1;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01a3381c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
  }
  return;
}


