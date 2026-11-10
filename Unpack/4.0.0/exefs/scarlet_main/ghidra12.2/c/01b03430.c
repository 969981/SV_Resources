/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b03430; name: FUN_01b03430
 */


void FUN_01b03430(long *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  cVar3 = DAT_04802a98;
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(&LAB_008f4e0c,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    local_48 = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    local_50 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar5 = param_2;
    while (bVar2 != 0) {
      pbVar5 = pbVar5 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar5;
    }
    plVar6 = (long *)0x0;
    local_48 = (long *)0x0;
    pbStack_58 = param_2;
  }
  if (*param_1 != 0) {
    pcVar1 = (code *)PTR_FUN_047d3e40;
    if (cVar3 == '\0') {
      pcVar1 = (code *)0x0;
    }
    (*pcVar1)(*param_1,&local_60,param_3,param_4);
    plVar6 = local_48;
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  return;
}


