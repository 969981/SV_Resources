/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df6e88; name: FUN_01df6e88
 */


long FUN_01df6e88(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  
  puVar8 = PTR_DAT_047d9158;
  puVar7 = PTR_DAT_047d9150;
  puVar6 = PTR_DAT_047d8dd0;
  puVar5 = PTR_DAT_047d8dc8;
  puVar4 = PTR_DAT_047d3988;
  puVar3 = PTR_DAT_047d3980;
  plVar13 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  if (plVar13 != plVar2) {
    do {
      if (*plVar13 != 0) {
        plVar10 = (long *)(*(code *)**(undefined8 **)(*plVar13 + 8))();
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            if (((*puVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar3), iVar9 != 0)) {
              uVar12 = FUN_01adab84();
              *(undefined8 *)puVar4 = uVar12;
              __cxa_guard_release(puVar3);
            }
            *(undefined **)puVar6 = puVar4;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
          if (plVar10 == (long *)puVar8) {
            uVar11 = (**(code **)(*(long *)*plVar13 + 0xc0))();
            if ((uVar11 & 1) == 0) goto LAB_01df6f24;
            break;
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
    plVar13 = plVar2;
LAB_01df6f24:
    if (plVar13 != (long *)param_1[1]) {
      lVar1 = 0;
      if (*plVar13 != 0) {
        lVar1 = *plVar13 + -0x20;
      }
      return lVar1;
    }
  }
  return 0;
}


