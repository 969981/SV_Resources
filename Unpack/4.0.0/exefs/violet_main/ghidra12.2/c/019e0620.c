/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e0620; name: FUN_019e0620
 */


undefined8 FUN_019e0620(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  long *local_28;
  
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
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
    local_50 = strlen((char *)param_1);
    bVar1 = *param_1;
    local_60 = &DAT_cbf29ce484222645;
    pbVar3 = param_1;
    while (bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_1;
  }
  FUN_019e074c(auStack_40,&local_60);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return local_38;
}


