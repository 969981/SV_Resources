/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025a1a30; name: FUN_025a1a30
 */


uint FUN_025a1a30(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  puVar1 = PTR_LAB_047dfa28;
  if (DAT_048520d0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_38 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  else {
    local_40 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_50 = &DAT_cbf29ce484222645;
    pbVar5 = param_2;
    while (bVar2 != 0) {
      pbVar5 = pbVar5 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar5;
    }
    local_38 = (long *)0x0;
    pbStack_48 = param_2;
  }
  uVar3 = FUN_025a3608(param_1,puVar1,0,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return uVar3 & 1;
}


