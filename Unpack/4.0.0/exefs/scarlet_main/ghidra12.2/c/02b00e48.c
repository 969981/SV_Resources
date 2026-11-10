/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b00e48; name: FUN_02b00e48
 */


long FUN_02b00e48(void)

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
  lVar5 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar5;
  plVar8 = *(long **)(lVar5 + 0x1c0);
  plVar2 = *(long **)(lVar5 + 0x1c8);
  do {
    if (plVar8 == plVar2) {
      return 0;
    }
    lVar7 = *plVar8;
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x28))();
    lVar5 = FUN_02b0163c();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        lVar5 = 0;
        lVar6 = 0;
        while( true ) {
          lVar1 = lVar7 + lVar5;
          if (*(char *)(lVar1 + 0x41) != '\0') {
            lVar6 = lVar6 + 1;
          }
          if (*(char *)(lVar1 + 0x4d) != '\0') {
            lVar6 = lVar6 + 1;
          }
          if (*(char *)(lVar1 + 0x59) != '\0') {
            lVar6 = lVar6 + 1;
          }
          if (lVar5 == 0x6f0) break;
          if (*(char *)(lVar1 + 0x65) != '\0') {
            lVar6 = lVar6 + 1;
          }
          lVar5 = lVar5 + 0x30;
        }
        return lVar6;
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}


