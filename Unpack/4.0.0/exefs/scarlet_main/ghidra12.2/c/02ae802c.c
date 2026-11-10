/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ae802c; name: FUN_02ae802c
 */


bool FUN_02ae802c(uint param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar4 = PTR_DAT_047d4900;
  puVar3 = PTR_DAT_047d48f8;
  plVar1 = *(long **)(lVar9 + 0x1c0);
  plVar2 = *(long **)(lVar9 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar9 = *plVar1;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
      uVar8 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar8;
      __cxa_guard_release(puVar3);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar4) goto LAB_02ae8108;
    }
  }
  lVar9 = 0;
LAB_02ae8108:
  if (param_1 < 0x80) {
    bVar5 = *(char *)(lVar9 + (ulong)param_1 + 0xe2c) != '\0';
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


