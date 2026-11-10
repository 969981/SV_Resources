/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0190c650; name: FUN_0190c650
 */


uint FUN_0190c650(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *local_48;
  
  if (((DAT_0483b190 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0483b190), iVar3 != 0)) {
    FUN_00100190(&LAB_02a3f0a4,&DAT_0483b180,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b190);
  }
  uVar1 = DAT_0483b180;
  DAT_0483b198 = DAT_0483b180;
  plVar4 = (long *)*param_2;
  local_48 = plVar4;
  if (plVar4 == (long *)0x0) {
    uVar2 = FUN_0190c76c(DAT_0483b180,param_1,&local_48,param_3,param_4,param_5 & 1);
  }
  else {
    (**(code **)(*plVar4 + 0x58))(plVar4);
    uVar2 = FUN_0190c76c(uVar1,param_1,&local_48,param_3,param_4,param_5 & 1);
    (**(code **)(*plVar4 + 0x60))(plVar4);
  }
  return uVar2 & 1;
}


