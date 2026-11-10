/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014976a0; name: FUN_014976a0
 */


void FUN_014976a0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  char local_c8 [8];
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  long *local_88;
  undefined1 auStack_80 [96];
  
  local_a0 = 0xa5d87c9ff14c683c;
  local_98 = (code *)0x3c2f425;
  local_90 = 9;
  local_88 = (long *)0x0;
  FUN_01315eac(local_c8,param_1,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_c8[0] != '\0') {
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar5 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar5;
    if (*(long *)(lVar5 + 0x48) == 0) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar3 = FUN_00cf8198();
    }
    memset(&local_a0,0,0x80);
    plVar4 = *(long **)(*(long *)(lVar5 + 0x200) + 0x60);
    iVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4,local_b8,uVar3,1,&LAB_01080c70,lVar5,0,0,0);
    if ((iVar2 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar5 + 0x220),auStack_c0,iVar2,uVar3,0,&local_a0,0),
       pcVar1 = local_98, local_98 != (code *)0x0)) {
      local_90 = 0;
      local_88 = (long *)0x0;
      local_a0 = 0;
      local_98 = (code *)0x0;
      (*pcVar1)(auStack_80);
    }
    if ((local_c8[0] != '\0') && (local_a8 != (long *)0x0)) {
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  return;
}


