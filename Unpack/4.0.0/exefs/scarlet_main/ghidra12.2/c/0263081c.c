/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0263081c; name: FUN_0263081c
 */


void FUN_0263081c(undefined1 *param_1,undefined8 param_2,byte *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  undefined1 local_50 [16];
  
  puVar1 = &LAB_02ba3eec;
  if (DAT_04855900 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_68 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_60 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_58 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_70 = &DAT_cbf29ce484222645;
    pbVar4 = param_3;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_3;
  }
  local_50 = FUN_02631e7c(param_2,puVar1,0,&local_70);
  *param_1 = 1;
  FUN_02631ee0(param_1 + 8,local_50);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


