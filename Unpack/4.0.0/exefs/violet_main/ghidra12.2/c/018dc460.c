/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dc460; name: FUN_018dc460
 */


void FUN_018dc460(long *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  
  cVar3 = DAT_04802a90;
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(&LAB_008f4e0c,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_68 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_60 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    local_58 = plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    local_60 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_70 = &DAT_cbf29ce484222645;
    pbVar5 = param_2;
    while (bVar2 != 0) {
      pbVar5 = pbVar5 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar5;
    }
    plVar6 = (long *)0x0;
    local_58 = (long *)0x0;
    pbStack_68 = param_2;
  }
  if (*param_1 != 0) {
    pcVar1 = (code *)PTR_FUN_047d3e38;
    if (cVar3 == '\0') {
      pcVar1 = (code *)0x0;
    }
    (*pcVar1)(*param_1,&local_70,param_3,param_4,param_5 & 1);
    plVar6 = local_58;
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  return;
}


