/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01910b0c; name: FUN_01910b0c
 */


long FUN_01910b0c(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar4 = PTR_DAT_047d4cc0;
  puVar3 = PTR_DAT_047d4cb8;
  plVar1 = *(long **)(param_1 + 0x1c0);
  plVar2 = *(long **)(param_1 + 0x1c8);
  do {
    if (plVar1 == plVar2) {
      return 0;
    }
    lVar8 = *plVar1;
    puVar9 = (undefined8 *)(lVar8 + 0x28);
    plVar6 = (long *)(**(code **)*puVar9)(puVar9);
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar7 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar7;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) {
        return lVar8;
      }
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


