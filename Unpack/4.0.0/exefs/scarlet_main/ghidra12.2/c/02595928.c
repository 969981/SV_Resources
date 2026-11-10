/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02595928; name: FUN_02595928
 */


void FUN_02595928(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined1 auStack_60 [32];
  
  puVar1 = PTR_LAB_047df820;
  if (DAT_04852030 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_3 == (byte *)0x0) {
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
    local_70 = strlen((char *)param_3);
    bVar2 = *param_3;
    local_80 = &DAT_cbf29ce484222645;
    pbVar4 = param_3;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_3;
  }
  FUN_02596278(auStack_60,param_2,puVar1,0,&local_80);
  FUN_02592dc0(param_1,auStack_60);
  FUN_0219b5bc(auStack_60);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


