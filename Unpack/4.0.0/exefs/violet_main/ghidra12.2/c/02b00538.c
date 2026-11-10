/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b00538; name: FUN_02b00538
 */


void FUN_02b00538(void)

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
  lVar5 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar5;
  plVar7 = *(long **)(lVar5 + 0x1c0);
  plVar2 = *(long **)(lVar5 + 0x1c8);
  do {
    if (plVar7 == plVar2) {
      return;
    }
    lVar6 = *plVar7;
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar6 + 0x28))();
    lVar5 = FUN_02b0163c();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
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
    }
    plVar7 = plVar7 + 1;
  } while( true );
}


