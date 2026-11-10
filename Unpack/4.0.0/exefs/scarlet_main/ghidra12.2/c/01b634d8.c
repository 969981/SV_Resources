/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b634d8; name: FUN_01b634d8
 */


void FUN_01b634d8(void)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  plVar7 = *(long **)(lVar6 + 0x1c0);
  plVar2 = *(long **)(lVar6 + 0x1c8);
  for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
    lVar6 = *plVar7;
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
    lVar5 = FUN_00d0b86c();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) goto LAB_01b63558;
    }
  }
  lVar6 = 0;
LAB_01b63558:
  lVar5 = 0;
  while( true ) {
    lVar1 = lVar6 + lVar5;
    *(undefined4 *)(lVar1 + 0x41) = 0x10001;
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (lVar5 == 0x708) break;
    *(undefined4 *)(lVar1 + 0x4d) = 0x10001;
    lVar5 = lVar5 + 0x18;
    *(undefined4 *)(lVar1 + 0x54) = 0;
  }
  return;
}


