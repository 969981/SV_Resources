/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e3e60; name: FUN_017e3e60
 */


int FUN_017e3e60(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (((*PTR_DAT_047d8550 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  *(undefined8 *)PTR_DAT_047d8560 = *(undefined8 *)PTR_DAT_047d8558;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar4 = PTR_DAT_047d8f00;
  puVar3 = PTR_DAT_047d8ef8;
  plVar1 = *(long **)(lVar9 + 0x1c0);
  plVar2 = *(long **)(lVar9 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar9 = *plVar1;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar8 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar8;
      __cxa_guard_release(puVar3);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar4) goto LAB_017e3f74;
    }
  }
  lVar9 = 0;
LAB_017e3f74:
  iVar5 = FUN_017e4040(*(undefined8 *)(lVar9 + 0xa10),0);
  iVar6 = FUN_017e4050(lVar9 + 0x40,iVar5);
  return iVar5 * 0x1e - iVar6;
}


