/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b72990; name: FUN_01b72990
 */


undefined4 FUN_01b72990(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  puVar2 = PTR_DAT_047d4c68;
  puVar1 = PTR_DAT_047d4c60;
  plVar8 = *(long **)(lVar6 + 0x1c0);
  do {
    lVar6 = *plVar8;
    puVar7 = (undefined8 *)(lVar6 + 0x28);
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
      uVar5 = FUN_01b3fb0c();
      *(undefined8 *)puVar2 = uVar5;
      __cxa_guard_release(puVar1);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)puVar2) {
        return *(undefined4 *)(lVar6 + 0x60);
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}


