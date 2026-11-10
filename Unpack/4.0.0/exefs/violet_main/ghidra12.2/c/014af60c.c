/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014af60c; name: FUN_014af60c
 */


void FUN_014af60c(long *param_1,long *param_2)

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
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  
  puVar6 = PTR_DAT_047db0f8;
  puVar5 = PTR_DAT_047db0f0;
  puVar4 = PTR_DAT_047d8dd0;
  puVar3 = PTR_DAT_047d3980;
  plVar13 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar13 != plVar2) {
    lVar1 = *param_1;
    puVar11 = *(undefined8 **)param_1[1];
    do {
      lVar12 = *plVar13;
      if (lVar12 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(lVar12 + 8))((undefined8 *)(lVar12 + 8));
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          if (((*PTR_DAT_047d8dc8 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8dc8), iVar7 != 0)) {
            if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
              uVar10 = FUN_01adab84();
              *(undefined8 *)PTR_DAT_047d3988 = uVar10;
              __cxa_guard_release(puVar3);
            }
            *(undefined **)puVar4 = PTR_DAT_047d3988;
            __cxa_guard_release(PTR_DAT_047d8dc8);
          }
          *(undefined **)puVar6 = puVar4;
          __cxa_guard_release(puVar5);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar6) {
            uVar9 = (**(code **)(*(long *)*plVar13 + 0xc0))();
            if (((uVar9 & 1) == 0) && (*(long *)(lVar12 + 0xd0) == *(long *)*puVar11))
            goto LAB_014af6d8;
            break;
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
    plVar13 = plVar2;
LAB_014af6d8:
    if (plVar13 != (long *)param_2[1]) {
      (**(code **)(*(long *)*plVar13 + 0xa8))();
      *(undefined **)(lVar1 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar1 + 0xb0) = 0;
    }
  }
  return;
}


