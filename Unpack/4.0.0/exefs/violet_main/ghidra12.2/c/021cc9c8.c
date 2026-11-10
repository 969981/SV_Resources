/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021cc9c8; name: FUN_021cc9c8
 */


void FUN_021cc9c8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *plStack_38;
  
  local_50 = *param_3;
  uStack_48 = param_3[1];
  local_40 = param_3[2];
  plVar1 = (long *)param_3[3];
  plStack_38 = plVar1;
  if (plVar1 == (long *)0x0) {
    uVar2 = FUN_012d6ef8(param_2,&local_50);
    FUN_028e747c(param_1,param_2,uVar2);
    return;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
  uVar2 = FUN_012d6ef8(param_2,&local_50);
  FUN_028e747c(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x021cca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


