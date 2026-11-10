/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c2724; name: FUN_024c2724
 */


void FUN_024c2724(double param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  byte *pbVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
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
  local_60 = puVar6;
  pbStack_58 = param_2;
  local_50 = sVar3;
  local_48 = plVar5;
  FUN_024c4188((float)param_1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


