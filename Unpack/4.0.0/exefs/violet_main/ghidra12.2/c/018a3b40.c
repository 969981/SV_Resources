/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a3b40; name: FUN_018a3b40
 */


void FUN_018a3b40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  char local_68 [8];
  undefined1 auStack_60 [24];
  long *local_48;
  
  local_90 = 0x68d23bb3399f48d5;
  pcStack_88 = "LayerName";
  local_80 = 9;
  local_78 = (long *)0x0;
  FUN_01315eac(local_68,param_1,&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_68[0] != '\0') {
    local_b8 = 0xa5d87c9ff14c683c;
    pcStack_b0 = "EventName";
    local_a8 = 9;
    local_a0 = (long *)0x0;
    FUN_01315eac(&local_90,param_1,&local_b8);
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    puVar3 = PTR_DAT_047d8a80;
    puVar2 = PTR_DAT_047d8a78;
    puVar1 = PTR_DAT_047d8a70;
    if ((char)local_90 != '\0') {
      if (((*PTR_DAT_047d8a70 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8a70);
      }
      uVar6 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar3 = uVar6;
      FUN_01314f00(&local_b8,uVar6,auStack_60);
      if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8a70);
      }
      uVar6 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar3 = uVar6;
      FUN_014f6d58(uVar6,&pcStack_b0,&pcStack_88);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (((char)local_90 != '\0') && (local_70 != (long *)0x0)) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    local_90 = 0xa64abbe5b55e89e0;
    pcStack_88 = "Wait";
    local_80 = 4;
    local_78 = (long *)0x0;
    uVar4 = FUN_0141f968(param_1,&local_90);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if ((uVar4 & 0xff) == 0 || uVar4 < 0x100) {
      if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8a70);
      }
      uVar6 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar3 = uVar6;
      FUN_0159baf4(uVar6,auStack_60,0,0);
    }
    else {
      if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8a70);
      }
      uVar6 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar3 = uVar6;
      FUN_01314f00(&local_90,uVar6,auStack_60);
      FUN_018a3e98(&local_90);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if ((local_68[0] != '\0') && (local_48 != (long *)0x0)) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


