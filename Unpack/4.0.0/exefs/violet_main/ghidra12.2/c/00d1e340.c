/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d1e340; name: FUN_00d1e340
 */


uint FUN_00d1e340(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((DAT_048383f8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_048383f8);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048383f8);
    }
  }
  uVar1 = DAT_048383e8;
  DAT_04838400 = DAT_048383e8;
  local_40 = *param_1;
  uStack_38 = param_1[1];
  local_30 = param_1[2];
  local_28 = (long *)param_1[3];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  uVar2 = FUN_00d1e420(uVar1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar2 & 1;
}


