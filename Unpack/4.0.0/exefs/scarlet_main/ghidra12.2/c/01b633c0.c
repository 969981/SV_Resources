/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b633c0; name: FUN_01b633c0
 */


void FUN_01b633c0(undefined1 param_1)

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
        *(undefined1 *)(lVar4 + 0x756) = param_1;
        return;
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}


