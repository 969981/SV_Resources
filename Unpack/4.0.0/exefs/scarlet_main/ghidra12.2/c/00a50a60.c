/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a50a60; name: FUN_00a50a60
 */


void FUN_00a50a60(undefined8 param_1)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar5 = PTR_DAT_047d4b10;
  puVar4 = PTR_DAT_047d4b08;
  if (lVar9 != 0) {
    plVar3 = *(long **)(lVar9 + 0x1c8);
    for (plVar2 = *(long **)(lVar9 + 0x1c0); plVar2 != plVar3; plVar2 = plVar2 + 1) {
      lVar9 = *plVar2;
      puVar10 = (undefined8 *)(lVar9 + 0x28);
      plVar7 = (long *)(**(code **)*puVar10)(puVar10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar8 = FUN_01b3fb0c();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(puVar4);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar5) {
          pcVar1 = (char *)(lVar9 + 0x8170);
          if (*pcVar1 == '\0') {
            FUN_00a50ba8(param_1);
            *pcVar1 = '\x01';
            return;
          }
          return;
        }
      }
    }
  }
  return;
}


