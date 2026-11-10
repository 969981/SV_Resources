/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147adc0; name: FUN_0147adc0
 */


undefined8 FUN_0147adc0(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  byte *__s;
  size_t sVar3;
  byte *pbVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *plStack_38;
  
  __s = (byte *)FUN_00c646d0(param_1,1,0);
  if (((DAT_04830110 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04830110), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04830110);
  }
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar6 = *(undefined1 **)PTR_DAT_047d3e30;
    __s = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar3 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  else {
    puVar6 = &DAT_cbf29ce484222645;
    sVar3 = strlen((char *)__s);
    bVar1 = *__s;
    pbVar4 = __s;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    plVar5 = (long *)0x0;
  }
  local_50 = puVar6;
  pbStack_48 = __s;
  local_40 = sVar3;
  plStack_38 = plVar5;
  FUN_0147af14(&local_50);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return 0;
}


