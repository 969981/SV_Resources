/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02adb2a0; name: FUN_02adb2a0
 */


undefined8 FUN_02adb2a0(uint param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  puVar4 = PTR_DAT_047d48d8;
  puVar3 = PTR_DAT_047d48d0;
  plVar1 = *(long **)(lVar8 + 0x1c0);
  plVar2 = *(long **)(lVar8 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      return 0;
    }
    lVar8 = *plVar1;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) {
        if (param_1 < 3) {
          lVar8 = *(long *)(lVar8 + (ulong)param_1 * 0x20 + 600);
        }
        else {
          lVar8 = *(long *)(lVar8 + (long)(int)param_1 * 0x20 + 0x920);
          if (lVar8 == 0) {
            return 0;
          }
        }
        return *(undefined8 *)(lVar8 + 8);
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


