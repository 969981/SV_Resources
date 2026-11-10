/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d62288; name: FUN_01d62288
 */


void FUN_01d62288(undefined8 param_1,byte *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *plStack_38;
  
  uVar1 = 8;
  if (DAT_04831050 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar2 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    plStack_38 = plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      FUN_01d62694(param_1,uVar1,&local_50);
      (**(code **)(*plVar2 + 0x20))(plVar2);
      return;
    }
  }
  else {
    local_40 = strlen((char *)param_2);
    bVar3 = *param_2;
    local_50 = &DAT_cbf29ce484222645;
    pbVar5 = param_2;
    while (bVar3 != 0) {
      pbVar5 = pbVar5 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar5;
    }
    plStack_38 = (long *)0x0;
    pbStack_48 = param_2;
  }
  FUN_01d62694(param_1,uVar1,&local_50);
  return;
}


