/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b008e8; name: FUN_02b008e8
 */


void FUN_02b008e8(uint param_1,byte param_2)

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
  plVar7 = *(long **)(lVar4 + 0x1c0);
  plVar1 = *(long **)(lVar4 + 0x1c8);
  do {
    if (plVar7 == plVar1) {
      return;
    }
    lVar6 = *plVar7;
    plVar3 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x28))((undefined8 *)(lVar6 + 0x28));
    lVar4 = FUN_02b0163c();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        lVar4 = 0;
        goto LAB_02b00980;
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
LAB_02b00980:
  lVar5 = lVar6 + lVar4;
  if (*(byte *)(lVar5 + 0x40) == param_1) {
    lVar5 = lVar5 + 0x40;
LAB_02b009e0:
    if (lVar5 != lVar6 + 0x754) {
      *(byte *)(lVar5 + 2) = param_2 & 1;
    }
    return;
  }
  if (*(byte *)(lVar5 + 0x4c) == param_1) {
    lVar5 = lVar5 + 0x4c;
    goto LAB_02b009e0;
  }
  if (*(byte *)(lVar5 + 0x58) == param_1) {
    lVar5 = lVar5 + 0x58;
    goto LAB_02b009e0;
  }
  if (lVar4 == 0x6f0) {
    return;
  }
  if (*(byte *)(lVar5 + 100) == param_1) {
    lVar5 = lVar5 + 100;
    goto LAB_02b009e0;
  }
  lVar4 = lVar4 + 0x30;
  goto LAB_02b00980;
}


