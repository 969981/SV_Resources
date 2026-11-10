/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b2f35c; name: FUN_01b2f35c
 */


void FUN_01b2f35c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *local_28;
  
  if ((DAT_04840ed0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04840ed0);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840ed0);
    }
  }
  uVar1 = DAT_04840ec0;
  DAT_04840ed8 = DAT_04840ec0;
  plVar3 = (long *)*param_3;
  local_28 = plVar3;
  if (plVar3 == (long *)0x0) {
    FUN_019c4a94(param_1,param_2,DAT_04840ec0,&local_28,1,0);
    return;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3);
  FUN_019c4a94(param_1,param_2,uVar1,&local_28,1,0);
                    /* WARNING: Could not recover jumptable at 0x01b2f3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x60))(plVar3);
  return;
}


