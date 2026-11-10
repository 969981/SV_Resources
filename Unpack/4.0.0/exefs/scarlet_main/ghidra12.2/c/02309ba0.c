/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02309ba0; name: FUN_02309ba0
 */


undefined8 FUN_02309ba0(undefined8 param_1,byte *param_2,undefined4 param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  long *local_48;
  undefined4 local_24;
  
  puVar1 = PTR_FUN_047de380;
  if (DAT_04846548 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_78 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_80 = &DAT_cbf29ce484222645;
    pbVar4 = param_2;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_2;
  }
  local_24 = param_3;
  FUN_0230a5f0(auStack_60,param_1,puVar1,0,&local_80,&local_24);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return local_58;
}


