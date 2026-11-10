/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f4dc4; name: FUN_018f4dc4
 */


void FUN_018f4dc4(long param_1)

{
  undefined1 **ppuVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  char local_a8;
  undefined7 uStack_a7;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  long *local_88;
  long *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  long *local_50;
  undefined1 *local_48;
  char *local_40;
  undefined8 local_38;
  long *local_30;
  long *local_28;
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar5 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar5;
  FUN_00f7176c(&local_28,uVar5,param_1 + 0x110);
  if (local_28 != (long *)0x0) {
    local_68 = 0x4b8f43fd750f58b6;
    puStack_60 = &DAT_03ca0492;
    local_58 = 4;
    local_50 = (long *)0x0;
    FUN_01315eac(&local_a8,param_1,&local_68);
    local_70 = &DAT_03c886bc;
    bVar3 = local_a8 != '\0';
    ppuVar1 = &local_70;
    local_48 = &DAT_cbf29ce484222645;
    if (bVar3) {
      ppuVar1 = &local_98;
      local_48 = local_a0;
    }
    local_40 = *ppuVar1;
    local_38 = 0;
    if (bVar3) {
      local_38 = local_90;
    }
    local_30 = (long *)0x0;
    if (bVar3) {
      local_30 = local_88;
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x18))();
    }
    if (local_a8 != '\0') {
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      local_a8 = '\0';
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    plVar2 = local_28;
    if (*local_40 != '\0') {
      FUN_00cbf4c0(&local_a8,&local_48);
      FUN_00e53d00(&local_78,plVar2,&local_a8);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x60))();
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if ((long *)CONCAT71(uStack_a7,local_a8) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT71(uStack_a7,local_a8) + 0x20))();
      }
    }
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x60))();
    }
  }
  return;
}


