/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018df248; name: FUN_018df248
 */


void FUN_018df248(long param_1)

{
  undefined1 **ppuVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  char local_70;
  undefined7 uStack_6f;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  long *local_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  long *plStack_30;
  long *local_28;
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar6;
  FUN_00f7176c(&local_28,uVar6,param_1 + 0x110);
  if (local_28 != (long *)0x0) {
    local_90 = 0xd93d5c8fc3002a08;
    pcStack_88 = "SubSceneName";
    local_80 = 0xc;
    local_78 = (long *)0x0;
    FUN_01315eac(&local_70,param_1,&local_90);
    local_98 = &DAT_03c886bc;
    bVar4 = local_70 != '\0';
    ppuVar1 = &local_98;
    local_48 = &DAT_cbf29ce484222645;
    if (bVar4) {
      ppuVar1 = &local_60;
      local_48 = local_68;
    }
    puStack_40 = *ppuVar1;
    local_38 = 0;
    if (bVar4) {
      local_38 = local_58;
    }
    plVar2 = (long *)0x0;
    if (bVar4) {
      plVar2 = local_50;
    }
    plStack_30 = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    if (local_70 != '\0') {
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      local_70 = '\0';
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    FUN_00c5cf04(&local_70,local_28,&local_48);
    plVar3 = (long *)CONCAT71(uStack_6f,local_70);
    if (plVar3 != (long *)0x0) {
      FUN_01861fd8(plVar3);
      (**(code **)(*plVar3 + 0x60))(plVar3);
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x60))();
    }
  }
  return;
}


