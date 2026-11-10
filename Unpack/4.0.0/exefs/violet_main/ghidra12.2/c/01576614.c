/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01576614; name: FUN_01576614
 */


void FUN_01576614(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = PTR_DAT_047d89f8;
  if (((*PTR_DAT_047d89f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar5 != 0))
  {
    FUN_00100190(&LAB_00a2f384,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89f8);
  }
  puVar3 = PTR_DAT_047d8a08;
  puVar2 = PTR_DAT_047d8a00;
  uVar6 = *(undefined8 *)PTR_DAT_047d8a00;
  local_b0 = &LAB_0147e858;
  local_a8 = FUN_00a2f38c;
  *(undefined8 *)PTR_DAT_047d8a08 = uVar6;
  local_a0 = &LAB_00a2f394;
  puStack_98 = &LAB_00a2f398;
  FUN_01576890(uVar6,&local_b0);
  pcVar4 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar4)(auStack_90);
  }
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar5 != 0)) {
    FUN_00100190(&LAB_00a2f384,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89f8);
  }
  *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
  FUN_01576744();
  FUN_01576820();
  FUN_01576750();
  return;
}


