/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025e9ba0; name: FUN_025e9ba0
 */


uint FUN_025e9ba0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *local_40;
  byte *pbStack_38;
  size_t local_30;
  long *local_28;
  
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_40 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_38 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_30 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_28 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
    }
  }
  else {
    local_30 = strlen((char *)param_1);
    bVar1 = *param_1;
    local_40 = &DAT_cbf29ce484222645;
    pbVar4 = param_1;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      local_40 = (undefined1 *)(((ulong)local_40 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    local_28 = (long *)0x0;
    pbStack_38 = param_1;
  }
  uVar2 = FUN_025eadb0(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar2 & 1;
}


