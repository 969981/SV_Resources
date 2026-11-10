/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d9228c; name: FUN_01d9228c
 */


void FUN_01d9228c(undefined8 param_1,undefined4 param_2,byte *param_3,byte param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 local_70;
  byte local_6c [4];
  undefined1 *local_68;
  byte *pbStack_60;
  size_t local_58;
  long *local_50;
  undefined4 local_44;
  
  puVar1 = PTR_FUN_047d8348;
  if (DAT_04832de8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_44 = param_2;
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_68 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_60 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_58 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_50 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
  }
  else {
    local_58 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_68 = &DAT_cbf29ce484222645;
    pbVar4 = param_3;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_68 = (undefined1 *)(((ulong)local_68 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_50 = (long *)0x0;
    pbStack_60 = param_3;
  }
  local_6c[0] = param_4 & 1;
  local_70 = param_5;
  FUN_01d92c50(param_1,puVar1,0,&local_44,&local_68,local_6c,&local_70);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  return;
}


