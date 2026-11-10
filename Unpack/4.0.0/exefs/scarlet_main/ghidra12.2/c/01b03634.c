/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b03634; name: FUN_01b03634
 */


uint FUN_01b03634(long *param_1,byte *param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  long *plVar7;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  cVar3 = DAT_04802aa0;
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(&LAB_008f4e0c,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar7 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    local_38 = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  else {
    local_40 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_50 = &DAT_cbf29ce484222645;
    pbVar6 = param_2;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    plVar7 = (long *)0x0;
    local_38 = (long *)0x0;
    pbStack_48 = param_2;
  }
  if (*param_1 == 0) {
    uVar4 = 0;
  }
  else {
    pcVar1 = (code *)PTR_FUN_047d3e48;
    if (cVar3 == '\0') {
      pcVar1 = (code *)0x0;
    }
    uVar4 = (*pcVar1)(*param_1,&local_50);
    plVar7 = local_38;
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return uVar4 & 1;
}


