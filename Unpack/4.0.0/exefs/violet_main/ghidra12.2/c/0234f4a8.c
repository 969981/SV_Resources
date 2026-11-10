/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0234f4a8; name: FUN_0234f4a8
 */


void FUN_0234f4a8(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *local_98;
  byte *pbStack_90;
  size_t local_88;
  long *local_80;
  undefined1 auStack_78 [24];
  long *local_60;
  long *local_48;
  
  puVar1 = PTR_FUN_047de8f8;
  if (DAT_04849100 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_98 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_90 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_88 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_80 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x18))();
    }
  }
  else {
    local_88 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_98 = &DAT_cbf29ce484222645;
    pbVar4 = param_3;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_80 = (long *)0x0;
    pbStack_90 = param_3;
  }
  FUN_02354e00(auStack_78,param_2,puVar1,0,&local_98);
  FUN_02354e50(param_1,auStack_78);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return;
}


