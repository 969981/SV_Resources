/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184a520; name: FUN_0184a520
 */


undefined8 FUN_0184a520(byte *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined1 *local_40;
  byte *pbStack_38;
  size_t local_30;
  long *local_28;
  
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
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
  uVar3 = FUN_0184a630(&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar3;
}


