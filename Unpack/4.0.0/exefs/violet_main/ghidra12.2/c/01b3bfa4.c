/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b3bfa4; name: FUN_01b3bfa4
 */


void FUN_01b3bfa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *local_38;
  
  if ((DAT_0483b1b0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483b1b0);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a3f278,&DAT_0483b1a0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483b1b0);
    }
  }
  uVar1 = DAT_0483b1a0;
  DAT_0483b1b8 = DAT_0483b1a0;
  plVar3 = (long *)*param_5;
  local_38 = plVar3;
  if (plVar3 == (long *)0x0) {
    FUN_01fb3fcc(param_1,param_2,param_3,param_4,DAT_0483b1a0,&local_38,param_6);
    return;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3);
  FUN_01fb3fcc(param_1,param_2,param_3,param_4,uVar1,&local_38,param_6);
                    /* WARNING: Could not recover jumptable at 0x01b3c044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x60))(plVar3);
  return;
}


