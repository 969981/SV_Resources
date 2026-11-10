/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a834c0; name: FUN_01a834c0
 */


undefined8 FUN_01a834c0(undefined8 param_1)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s;
  long lVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  puVar6 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar6 == (undefined8 *)0x0) || (pcVar9 = (char *)*puVar6, pcVar9 == (char *)0x0)) {
    if ((DAT_04844fb8 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_04844fb8);
      pcVar9 = &DAT_04844fa0;
      if (iVar5 != 0) {
        DAT_04844fa0 = 0;
        DAT_04844fa8 = 0;
        FUN_00100190(FUN_013632b4,&DAT_04844fa0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04844fb8);
      }
    }
    else {
      pcVar9 = &DAT_04844fa0;
    }
  }
  __s = (byte *)FUN_00c646d0(param_1,2,0);
  if (((DAT_04844fe0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04844fe0), iVar5 != 0)) {
    DAT_048464a0 = '\x01';
    __cxa_guard_release(&DAT_04844fe0);
  }
  pcVar1 = FUN_022f70ec;
  if (DAT_048464a0 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)__s);
    bVar3 = *__s;
    local_60 = &DAT_cbf29ce484222645;
    pbVar8 = __s;
    while (bVar3 != 0) {
      pbVar8 = pbVar8 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar8;
    }
    local_48 = (long *)0x0;
    pbStack_58 = __s;
  }
  cVar2 = *pcVar9;
  if (cVar2 == '\x02') {
    if ((*(long *)(pcVar9 + 8) == 0) ||
       (lVar7 = *(long *)(*(long *)(pcVar9 + 8) + 0x10), lVar7 == 0)) {
LAB_01a835cc:
      uVar4 = 0;
      goto LAB_01a835d0;
    }
    lVar7 = lVar7 + -0x28;
  }
  else {
    if (cVar2 == '\x03') {
      uVar4 = FUN_01a83738(pcVar9 + 8,pcVar1,0,&local_60);
      goto LAB_01a835d0;
    }
    if (((cVar2 != '\x01') && (cVar2 != '\0')) || (lVar7 = *(long *)(pcVar9 + 8), lVar7 == 0))
    goto LAB_01a835cc;
  }
  uVar4 = (*pcVar1)(lVar7,&local_60);
LAB_01a835d0:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_00c5d960(param_1,uVar4);
  return 1;
}


