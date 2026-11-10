/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02461774; name: FUN_02461774
 */


long FUN_02461774(undefined8 param_1,byte *param_2)

{
  code *pcVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  undefined1 *local_58;
  byte *pbStack_50;
  size_t local_48;
  long *local_40;
  long *local_38;
  
  pcVar1 = thunk_FUN_02463cf8;
  if (DAT_048497a8 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_58 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_50 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_48 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_40 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x18))();
    }
  }
  else {
    local_48 = strlen((char *)param_2);
    bVar3 = *param_2;
    local_58 = &DAT_cbf29ce484222645;
    pbVar5 = param_2;
    while (bVar3 != 0) {
      pbVar5 = pbVar5 + 1;
      local_58 = (undefined1 *)(((ulong)local_58 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar5;
    }
    local_40 = (long *)0x0;
    pbStack_50 = param_2;
  }
  FUN_02463dd4(&local_38,param_1,pcVar1,0,&local_58);
  plVar2 = (long *)PTR_PTR_047d4508;
  if (local_38 != (long *)0x0) {
    plVar2 = local_38 + 7;
  }
  lVar6 = *plVar2;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return lVar6;
}


