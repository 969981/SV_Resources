/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01050078; name: FUN_01050078
 */


void FUN_01050078(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *local_d0 [4];
  long *local_b0;
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [96];
  
  FUN_0105016c(local_d0);
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_98 = (code *)0x0;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = uVar3;
  FUN_011794fc(param_1,uVar3,local_d0,&local_a0);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_d0[0] != (long *)0x0) {
    (**(code **)(*local_d0[0] + 0x20))();
  }
  return;
}


