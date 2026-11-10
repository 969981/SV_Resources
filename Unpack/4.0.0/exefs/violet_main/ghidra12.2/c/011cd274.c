/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011cd274; name: FUN_011cd274
 */


void FUN_011cd274(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  
  lVar8 = FUN_00c8c7b4();
  puVar5 = PTR_DAT_047d20a0;
  puVar4 = PTR_DAT_047d2098;
  puVar3 = PTR_DAT_047d2090;
  puVar2 = PTR_DAT_047d2088;
  if (lVar8 == 0) {
    return;
  }
  plVar13 = *(long **)(lVar8 + 0x18);
  do {
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)(param_1 + 0x60);
LAB_011cd304:
      lVar10 = *plVar13;
      if ((((*(long *)(lVar10 + 0x18) != 0) &&
           (piVar12 = *(int **)(lVar10 + 0x58), piVar12 != (int *)0x0)) &&
          (lVar11 = *(long *)(piVar12 + 2), lVar11 != 0)) &&
         (iVar6 = *piVar12, iVar1 = piVar12[1], 0 < iVar1 + iVar6)) {
        lVar14 = 0;
        while( true ) {
          lVar11 = (**(code **)(**(long **)(lVar11 + lVar14) + 0x30))();
          if ((lVar11 != 0) &&
             (iVar7 = strcmp((char *)(lVar11 + 0xb0),(char *)(lVar8 + 0xb0)), iVar7 == 0)) {
            FUN_008995d8(0,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x58) + 8) + lVar14));
            return;
          }
          if ((ulong)(uint)(iVar1 + iVar6) * 8 + -8 == lVar14) break;
          lVar14 = lVar14 + 8;
          lVar11 = *(long *)(*(long *)(lVar10 + 0x58) + 8);
        }
      }
      return;
    }
    if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar2), iVar6 != 0)) {
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        *(undefined8 *)puVar5 = 0;
        __cxa_guard_release(puVar4);
      }
      *(undefined **)puVar3 = puVar5;
      __cxa_guard_release(puVar2);
    }
    for (plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13); plVar9 != (long *)0x0;
        plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar3) {
        plVar13 = plVar13 + 0x1d;
        goto LAB_011cd304;
      }
    }
    plVar13 = (long *)plVar13[3];
  } while( true );
}


