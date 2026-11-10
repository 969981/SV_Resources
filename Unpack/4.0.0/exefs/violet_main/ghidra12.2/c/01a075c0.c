/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a075c0; name: FUN_01a075c0
 */


undefined1 FUN_01a075c0(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar3 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar3;
  plVar6 = *(long **)(lVar3 + 0x1c0);
  do {
    lVar4 = *plVar6;
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00d0b86c();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        return *(undefined1 *)(lVar4 + 0x757);
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


