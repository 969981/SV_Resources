/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b8010c; name: FUN_01b8010c
 */


uint FUN_01b8010c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *plStack_28;
  
  if ((DAT_0483aff0 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_0483aff0);
    if (iVar4 != 0) {
      FUN_00100190(&LAB_02a3d9c0,&DAT_0483afe0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483aff0);
    }
  }
  uVar2 = DAT_0483afe0;
  DAT_0483aff8 = DAT_0483afe0;
  local_40 = *param_1;
  uStack_38 = param_1[1];
  local_30 = param_1[2];
  plVar1 = (long *)param_1[3];
  plStack_28 = plVar1;
  if (plVar1 == (long *)0x0) {
    uVar3 = FUN_01fb0538(DAT_0483afe0,&local_40);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar3 = FUN_01fb0538(uVar2,&local_40);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return uVar3 & 1;
}


