/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02237950; name: FUN_02237950
 */


void FUN_02237950(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  char local_38 [8];
  undefined1 auStack_30 [24];
  long *local_18;
  
  local_58 = 0x68d23bb3399f48d5;
  pcStack_50 = "LayerName";
  local_48 = 9;
  local_40 = (long *)0x0;
  FUN_01315eac(local_38,param_1,&local_58);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_38[0] != '\0') {
    if (((*PTR_DAT_047d8a70 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar1 != 0)) {
      FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a70);
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d8a78;
    *(undefined8 *)PTR_DAT_047d8a80 = uVar2;
    FUN_0188deac(uVar2,auStack_30);
    if ((local_38[0] != '\0') && (local_18 != (long *)0x0)) {
      (**(code **)(*local_18 + 0x20))();
    }
  }
  return;
}


