/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b7f8e0; name: FUN_01b7f8e0
 */


uint FUN_01b7f8e0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar7 = *(undefined1 **)PTR_DAT_047d3e30;
    param_1 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar4 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    puVar7 = &DAT_cbf29ce484222645;
    sVar4 = strlen((char *)param_1);
    bVar1 = *param_1;
    pbVar5 = param_1;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    plVar6 = (long *)0x0;
  }
  local_50 = puVar7;
  pbStack_48 = param_1;
  local_40 = sVar4;
  local_38 = plVar6;
  uVar2 = FUN_01b8010c(&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return uVar2 & 1;
}


