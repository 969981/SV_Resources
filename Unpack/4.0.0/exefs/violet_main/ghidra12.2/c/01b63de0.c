/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b63de0; name: FUN_01b63de0
 */


void FUN_01b63de0(uint param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar4 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar4;
  plVar1 = *(long **)(lVar4 + 0x1c8);
  for (plVar7 = *(long **)(lVar4 + 0x1c0); plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar6 = *plVar7;
    plVar3 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
    lVar4 = FUN_00d0b86c();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) goto LAB_01b63e68;
    }
  }
  lVar6 = 0;
LAB_01b63e68:
  lVar4 = 0;
  do {
    lVar5 = lVar6 + lVar4;
    if (*(byte *)(lVar5 + 0x40) == param_1) {
      lVar5 = lVar5 + 0x40;
LAB_01b63ec8:
      if (lVar5 != lVar6 + 0x754) {
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      }
      return;
    }
    if (*(byte *)(lVar5 + 0x4c) == param_1) {
      lVar5 = lVar5 + 0x4c;
      goto LAB_01b63ec8;
    }
    if (*(byte *)(lVar5 + 0x58) == param_1) {
      lVar5 = lVar5 + 0x58;
      goto LAB_01b63ec8;
    }
    if (lVar4 == 0x6f0) {
      return;
    }
    if (*(byte *)(lVar5 + 100) == param_1) {
      lVar5 = lVar5 + 100;
      goto LAB_01b63ec8;
    }
    lVar4 = lVar4 + 0x30;
  } while( true );
}


