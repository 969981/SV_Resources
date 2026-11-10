/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0241bf90; name: FUN_0241bf90
 */


void FUN_0241bf90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[3];
  param_2[2] = param_1[2];
  param_2[3] = uVar2;
  *param_2 = uVar4;
  param_2[1] = uVar1;
  uVar4 = param_1[4];
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = uVar4;
  FUN_00c96b7c(param_2 + 5,param_1 + 5);
  param_2[7] = param_1[7];
  param_2[8] = param_1[8];
  param_2[9] = param_1[9];
  plVar3 = (long *)param_1[10];
  param_2[10] = plVar3;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0241c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))();
  return;
}


