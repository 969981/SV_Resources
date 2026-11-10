/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f86894; name: FUN_01f86894
 */


long FUN_01f86894(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  
  puVar7 = PTR_DAT_047d5388;
  puVar6 = PTR_DAT_047d5380;
  puVar5 = PTR_DAT_047d52e8;
  puVar4 = PTR_DAT_047d52e0;
  puVar3 = PTR_DAT_047d3988;
  puVar2 = PTR_DAT_047d3980;
  plVar13 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if (plVar13 != plVar1) {
    do {
      lVar12 = *plVar13;
      if (lVar12 != 0) {
        plVar9 = (long *)(*(code *)**(undefined8 **)(lVar12 + 8))((undefined8 *)(lVar12 + 8));
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar11 = FUN_01adab84();
            *(undefined8 *)puVar3 = uVar11;
            __cxa_guard_release(puVar2);
          }
          *(undefined **)puVar7 = puVar3;
          __cxa_guard_release(puVar6);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar7) {
            uVar10 = (**(code **)(*(long *)*plVar13 + 0xc0))();
            if (((uVar10 & 1) == 0) && (*(long *)(lVar12 + 0x318) != 0)) {
              plVar9 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x318) + 0x28))();
              if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
                uVar11 = FUN_00ff17b4();
                *(undefined8 *)puVar5 = uVar11;
                __cxa_guard_release(puVar4);
              }
              goto joined_r0x01f8696c;
            }
            break;
          }
        }
      }
LAB_01f86928:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
    plVar13 = plVar1;
  }
LAB_01f86988:
  if (plVar13 == (long *)param_2[1]) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*plVar13 != 0) {
      lVar12 = *plVar13 + -0x20;
    }
  }
  return lVar12;
joined_r0x01f8696c:
  if (plVar9 == (long *)0x0) goto LAB_01f86928;
  if (plVar9 == (long *)puVar5) goto LAB_01f86988;
  plVar9 = (long *)*plVar9;
  goto joined_r0x01f8696c;
}


