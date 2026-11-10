/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023773e0; name: FUN_023773e0
 */


void FUN_023773e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  uVar2 = *param_1;
  uVar4 = param_1[1];
  param_2[5] = 0;
  param_2[2] = uVar1;
  param_2[3] = uVar3;
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[4] = 0;
  FUN_00c43ef0(param_2 + 4,param_1 + 4);
  param_2[6] = param_1[6];
  param_2[7] = param_1[7];
  param_2[8] = param_1[8];
  plVar5 = (long *)param_1[9];
  param_2[9] = plVar5;
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02377458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))();
  return;
}


