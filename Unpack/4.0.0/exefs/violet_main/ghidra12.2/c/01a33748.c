/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a33748; name: FUN_01a33748
 */


void FUN_01a33748(undefined8 *param_1,long param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_cbf29ce484222645;
    param_1[1] = &DAT_03c886bc;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(param_2 + ((long)param_4 >> 1)));
    }
    puVar2 = (undefined8 *)(*param_3)();
    uVar3 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar3;
    plVar1 = (long *)puVar2[3];
    param_1[2] = puVar2[2];
    param_1[3] = plVar1;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01a33798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
  }
  return;
}


