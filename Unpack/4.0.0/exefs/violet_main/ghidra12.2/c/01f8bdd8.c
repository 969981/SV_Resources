/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8bdd8; name: FUN_01f8bdd8
 */


long FUN_01f8bdd8(long *param_1)

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
  
  puVar7 = PTR_DAT_047daf10;
  puVar6 = PTR_DAT_047daf08;
  puVar5 = PTR_DAT_047d8d38;
  puVar4 = PTR_DAT_047d8d30;
  puVar3 = PTR_DAT_047d3988;
  puVar2 = PTR_DAT_047d3980;
  plVar13 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar13 != plVar1) {
    do {
      lVar12 = *plVar13;
      if (lVar12 != 0) {
        plVar9 = (long *)(*(code *)**(undefined8 **)(lVar12 + 8))((undefined8 *)(lVar12 + 8));
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
            if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
              uVar11 = FUN_01adab84();
              *(undefined8 *)puVar3 = uVar11;
              __cxa_guard_release(puVar2);
            }
            *(undefined **)puVar5 = puVar3;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar7) {
            uVar10 = (**(code **)(*(long *)*plVar13 + 0xc0))();
            if (((uVar10 & 1) == 0) && (*(int *)(lVar12 + 0x108) == 2)) goto LAB_01f8bea4;
            break;
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
    plVar13 = plVar1;
LAB_01f8bea4:
    if (plVar13 != (long *)param_1[1]) {
      lVar12 = 0;
      if (*plVar13 != 0) {
        lVar12 = *plVar13 + -0x20;
      }
      return lVar12;
    }
  }
  return 0;
}


