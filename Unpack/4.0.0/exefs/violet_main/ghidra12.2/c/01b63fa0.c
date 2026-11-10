/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b63fa0; name: FUN_01b63fa0
 */


long FUN_01b63fa0(void)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  plVar8 = *(long **)(lVar6 + 0x1c0);
  plVar2 = *(long **)(lVar6 + 0x1c8);
  for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
    lVar6 = *plVar8;
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
    lVar5 = FUN_00d0b86c();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) goto LAB_01b64020;
    }
  }
  lVar6 = 0;
LAB_01b64020:
  lVar5 = 0;
  lVar7 = 0;
  while( true ) {
    lVar1 = lVar6 + lVar5;
    if (*(char *)(lVar1 + 0x41) != '\0') {
      lVar7 = lVar7 + 1;
    }
    if (*(char *)(lVar1 + 0x4d) != '\0') {
      lVar7 = lVar7 + 1;
    }
    if (*(char *)(lVar1 + 0x59) != '\0') {
      lVar7 = lVar7 + 1;
    }
    if (lVar5 == 0x6f0) break;
    if (*(char *)(lVar1 + 0x65) != '\0') {
      lVar7 = lVar7 + 1;
    }
    lVar5 = lVar5 + 0x30;
  }
  return lVar7;
}


