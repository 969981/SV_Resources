/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008bd458; name: FUN_008bd458
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_008bd458(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (((*PTR_DAT_047d21e8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d21e8), puVar1 = PTR_DAT_047d2208, iVar2 != 0)) {
    if (((*PTR_DAT_047d2200 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d2200), iVar2 != 0)) {
      *(undefined8 *)puVar1 = 0;
      __cxa_guard_release(PTR_DAT_047d2200);
    }
    *(undefined **)PTR_DAT_047d21f0 = puVar1;
    __cxa_guard_release(PTR_DAT_047d21e8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    for (plVar3 = (long *)(**(code **)*puVar6)(puVar6); plVar3 != (long *)0x0;
        plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)PTR_DAT_047d21f0) {
        plVar3 = (long *)FUN_00896e78(0x70);
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
        FUN_0089e868(plVar3);
        plVar4 = plVar3 + 1;
        lVar5 = *plVar4;
        plVar7 = puVar6 + 1;
        *plVar4 = *plVar7;
        *(long **)(lVar5 + 8) = plVar7;
        *(long **)(*plVar7 + 8) = plVar4;
        *plVar7 = lVar5;
        return plVar3;
      }
    }
  }
  plVar3 = (long *)FUN_00896e78(0x50);
  if (plVar3 != (long *)0x0) {
    FUN_0089da30(plVar3);
    puVar1 = PTR_DAT_047d22a0;
    plVar3[9] = 0;
    *plVar3 = (long)(puVar1 + 0x10);
    plVar4 = plVar3 + 1;
    lVar5 = *plVar4;
    *plVar4 = _DAT_00000008;
    *(undefined8 *)(lVar5 + 8) = 8;
    *(long **)(_DAT_00000008 + 8) = plVar4;
    _DAT_00000008 = lVar5;
  }
  return plVar3;
}


