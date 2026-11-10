/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b8acec; name: FUN_01b8acec
 */


void FUN_01b8acec(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *plStack_38;
  
  uVar5 = *param_1;
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar1 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    plStack_38 = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      FUN_01b8c530(param_2,uVar5,&local_50);
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return;
    }
  }
  else {
    local_40 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_50 = &DAT_cbf29ce484222645;
    pbVar4 = param_3;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    plStack_38 = (long *)0x0;
    pbStack_48 = param_3;
  }
  FUN_01b8c530(param_2,uVar5,&local_50);
  return;
}


