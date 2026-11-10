/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014901a0; name: FUN_014901a0
 */


undefined8 FUN_014901a0(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *__s;
  size_t sVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *plStack_48;
  
  __s = (byte *)FUN_00c646d0(param_1,1,0);
  iVar2 = FUN_00cc4dc0(param_1,2);
  if (((DAT_04809ee8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04809ee8), iVar3 != 0)) {
    __cxa_guard_release(&DAT_04809ee8);
  }
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar7 = *(undefined1 **)PTR_DAT_047d3e30;
    __s = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar4 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    puVar7 = &DAT_cbf29ce484222645;
    sVar4 = strlen((char *)__s);
    bVar1 = *__s;
    pbVar5 = __s;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    plVar6 = (long *)0x0;
  }
  local_60 = puVar7;
  pbStack_58 = __s;
  local_50 = sVar4;
  plStack_48 = plVar6;
  FUN_01490318(&local_60,iVar2 != 0);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  return 0;
}


