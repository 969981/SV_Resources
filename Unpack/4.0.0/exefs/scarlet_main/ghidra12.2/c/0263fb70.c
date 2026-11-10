/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0263fb70; name: FUN_0263fb70
 */


void FUN_0263fb70(undefined8 param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined1 auStack_48 [8];
  
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar6 = *(undefined1 **)PTR_DAT_047d3e30;
    param_2 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar3 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  else {
    puVar6 = &DAT_cbf29ce484222645;
    sVar3 = strlen((char *)param_2);
    bVar1 = *param_2;
    pbVar4 = param_2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    plVar5 = (long *)0x0;
  }
  local_80 = puVar6;
  pbStack_78 = param_2;
  local_70 = sVar3;
  local_68 = plVar5;
  FUN_0264e05c(auStack_48,&local_80,param_3,param_4,param_5,param_6);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  FUN_0264e0a0(param_1,auStack_48);
  FUN_0263fdb4(auStack_48);
  return;
}


