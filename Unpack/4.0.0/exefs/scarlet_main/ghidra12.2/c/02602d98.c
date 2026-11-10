/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02602d98; name: FUN_02602d98
 */


void FUN_02602d98(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *plStack_28;
  
  local_40 = *param_3;
  uStack_38 = param_3[1];
  uVar3 = *param_2;
  local_30 = param_3[2];
  plVar1 = (long *)param_3[3];
  param_3[3] = 0;
  local_60 = *param_4;
  uStack_58 = param_4[1];
  local_50 = param_4[2];
  plVar2 = (long *)param_4[3];
  param_4[3] = 0;
  plStack_48 = plVar2;
  plStack_28 = plVar1;
  FUN_02601abc(param_1,uVar3,&local_40,&local_60);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02602e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


