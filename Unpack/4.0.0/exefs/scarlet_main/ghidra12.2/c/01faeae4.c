/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01faeae4; name: FUN_01faeae4
 */


long FUN_01faeae4(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_047d8e30;
  puVar4 = PTR_DAT_047d8e28;
  puVar3 = PTR_DAT_047d3988;
  puVar2 = PTR_DAT_047d3980;
  plVar11 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar11 != plVar1) {
    do {
      lVar10 = *plVar11;
      if (lVar10 != 0) {
        plVar7 = (long *)(*(code *)**(undefined8 **)(lVar10 + 8))((undefined8 *)(lVar10 + 8));
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar2), iVar6 != 0)) {
            uVar9 = FUN_01adab84();
            *(undefined8 *)puVar3 = uVar9;
            __cxa_guard_release(puVar2);
          }
          *(undefined **)puVar5 = puVar3;
          __cxa_guard_release(puVar4);
        }
        for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)puVar5) {
            uVar8 = (**(code **)(*(long *)*plVar11 + 0xc0))();
            if (((uVar8 & 1) == 0) && (*(char *)(lVar10 + 0x229) == '\0')) goto LAB_01faeb74;
            break;
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
    plVar11 = plVar1;
LAB_01faeb74:
    if (plVar11 != (long *)param_1[1]) {
      lVar10 = 0;
      if (*plVar11 != 0) {
        lVar10 = *plVar11 + -0x20;
      }
      return lVar10;
    }
  }
  return 0;
}


