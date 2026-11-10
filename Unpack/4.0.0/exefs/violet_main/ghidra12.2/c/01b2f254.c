/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b2f254; name: FUN_01b2f254
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b2f254(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  long *local_28;
  
  if ((DAT_04840ed0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04840ed0);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04840ed0);
    }
  }
  uVar2 = DAT_04840ec0;
  uVar1 = _DAT_03d61c70;
  DAT_04840ed8 = DAT_04840ec0;
  plVar4 = (long *)*param_2;
  local_28 = plVar4;
  if (plVar4 == (long *)0x0) {
    FUN_019c4a94(param_1,_DAT_03d61c70,DAT_04840ec0,&local_28,1,0);
    return;
  }
  (**(code **)(*plVar4 + 0x58))(plVar4);
  FUN_019c4a94(param_1,uVar1,uVar2,&local_28,1,0);
                    /* WARNING: Could not recover jumptable at 0x01b2f2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x60))(plVar4);
  return;
}


