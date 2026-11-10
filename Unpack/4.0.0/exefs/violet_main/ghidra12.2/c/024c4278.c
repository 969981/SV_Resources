/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c4278; name: FUN_024c4278
 */


undefined1  [16] FUN_024c4278(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((*PTR_DAT_047d6c20 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c20);
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d6c28;
  *(undefined8 *)PTR_DAT_047d6c30 = uVar2;
  local_40 = *param_1;
  uStack_38 = param_1[1];
  local_30 = param_1[2];
  local_28 = (long *)param_1[3];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  auVar3 = FUN_024c119c(uVar2,&local_40);
  uVar2 = auVar3._8_8_;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  auVar3._8_8_ = uVar2;
  return auVar3;
}


