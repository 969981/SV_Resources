/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023b5f18; name: FUN_023b5f18
 */


void FUN_023b5f18(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  param_2[2] = 0;
  *param_2 = uVar2;
  param_2[1] = 0;
  FUN_00c43ef0(param_2 + 1,param_1 + 1);
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  plVar1 = (long *)param_1[6];
  param_2[6] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b5f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


