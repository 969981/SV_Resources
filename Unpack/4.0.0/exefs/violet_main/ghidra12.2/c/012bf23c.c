/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bf23c; name: FUN_012bf23c
 */


void FUN_012bf23c(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90 [12];
  
  lVar6 = *(long *)(*(long *)PTR_DAT_047d3f70 + 0xe8);
  plVar3 = (long *)(*(code *)**(undefined8 **)(lVar6 + 8))((undefined8 *)(lVar6 + 8));
  lVar4 = FUN_012e29ac();
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (plVar3 == (long *)lVar4) goto LAB_012bf29c;
  }
  lVar6 = 0;
LAB_012bf29c:
  FUN_012bf370(*(undefined8 *)(param_1 + 0x1f0));
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  local_b0 = &LAB_02c7c0c0;
  local_a8 = FUN_02c7c0d4;
  uVar5 = *(undefined8 *)PTR_DAT_047d6c28;
  *(undefined8 *)PTR_DAT_047d6c30 = uVar5;
  local_a0 = &LAB_02c7c0d8;
  puStack_98 = &LAB_02c7c0e4;
  local_90[0] = param_1;
  FUN_012dae2c(uVar5,lVar6,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(local_90);
  }
  return;
}


