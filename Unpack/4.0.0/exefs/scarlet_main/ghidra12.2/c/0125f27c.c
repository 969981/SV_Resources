/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0125f27c; name: FUN_0125f27c
 */


long FUN_0125f27c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  
  puVar6 = PTR_DAT_047d7d18;
  puVar5 = PTR_DAT_047d7d10;
  puVar4 = PTR_DAT_047d3988;
  puVar3 = PTR_DAT_047d3980;
  plVar11 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar11 != plVar2) {
    do {
      if (*plVar11 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
            uVar10 = FUN_01adab84();
            *(undefined8 *)puVar4 = uVar10;
            __cxa_guard_release(puVar3);
          }
          *(undefined **)puVar6 = puVar4;
          __cxa_guard_release(puVar5);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar6) {
            uVar9 = (**(code **)(*(long *)*plVar11 + 0xc0))();
            if ((uVar9 & 1) == 0) goto LAB_0125f304;
            break;
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar2);
    plVar11 = plVar2;
LAB_0125f304:
    if (plVar11 != (long *)param_1[1]) {
      lVar1 = 0;
      if (*plVar11 != 0) {
        lVar1 = *plVar11 + -0x20;
      }
      return lVar1;
    }
  }
  return 0;
}


