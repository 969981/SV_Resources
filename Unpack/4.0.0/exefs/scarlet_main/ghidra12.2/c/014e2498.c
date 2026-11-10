/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e2498; name: FUN_014e2498
 */


void FUN_014e2498(long *param_1,char *param_2,byte *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  size_t sVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  
  lVar8 = *param_1;
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar9 = *(undefined1 **)PTR_DAT_047d3e30;
    param_3 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar5 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar7 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  else {
    puVar9 = &DAT_cbf29ce484222645;
    sVar5 = strlen((char *)param_3);
    bVar2 = *param_3;
    pbVar6 = param_3;
    while (bVar2 != 0) {
      pbVar6 = pbVar6 + 1;
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar6;
    }
    plVar7 = (long *)0x0;
  }
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (*(long *)(param_2 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + lVar8);
    *puVar1 = puVar9;
    puVar1[1] = param_3;
    puVar1[2] = sVar5;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    plVar4 = (long *)puVar1[3];
    puVar1[3] = plVar7;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014e2564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return;
}


