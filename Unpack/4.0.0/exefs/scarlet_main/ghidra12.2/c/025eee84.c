/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025eee84; name: FUN_025eee84
 */


void FUN_025eee84(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  undefined1 auStack_40 [16];
  
  if (param_2 == (byte *)0x0) {
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
    local_50 = strlen((char *)param_2);
    bVar1 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar3 = param_2;
    while (bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_2;
  }
  FUN_025efc10(auStack_40,&local_60);
  FUN_025eb780(param_1,auStack_40);
  FUN_025eb7d8(auStack_40);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


