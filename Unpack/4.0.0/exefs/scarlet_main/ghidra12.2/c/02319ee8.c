/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02319ee8; name: FUN_02319ee8
 */


void FUN_02319ee8(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  undefined1 auStack_68 [32];
  long *local_48;
  
  puVar1 = PTR_FUN_047de518;
  if (DAT_048476e8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_88 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_80 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_78 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_70 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  else {
    local_78 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_88 = &DAT_cbf29ce484222645;
    pbVar4 = param_3;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_70 = (long *)0x0;
    pbStack_80 = param_3;
  }
  FUN_0231c208(auStack_68,param_2,puVar1,0,&local_88);
  FUN_0231c230(param_1,auStack_68);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


