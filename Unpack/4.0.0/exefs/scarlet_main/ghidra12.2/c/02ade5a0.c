/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ade5a0; name: FUN_02ade5a0
 */


void FUN_02ade5a0(undefined4 param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 local_90 [76];
  undefined1 local_44;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar4 = PTR_DAT_047d48d8;
  puVar3 = PTR_DAT_047d48d0;
  plVar1 = *(long **)(lVar9 + 0x1c0);
  plVar2 = *(long **)(lVar9 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      return;
    }
    lVar9 = *plVar1;
    puVar10 = (undefined8 *)(lVar9 + 0x28);
    plVar6 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) {
        local_90[0] = 0;
        local_44 = 0;
        FUN_02ade750(lVar9,param_1,local_90);
        uVar8 = FUN_00b0d038();
        if ((uVar8 & 1) == 0) {
          return;
        }
        if (((*PTR_DAT_047d62a0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d62a0), iVar5 != 0)) {
          FUN_00100190(&LAB_00b12850,PTR_DAT_047d62a8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d62a0);
        }
        lVar9 = *(long *)PTR_DAT_047d62a8;
        *(long *)PTR_DAT_047d62b0 = lVar9;
        if (lVar9 == 0) {
          return;
        }
        FUN_00b0ddac();
        return;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


