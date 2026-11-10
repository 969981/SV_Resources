/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b25748; name: FUN_02b25748
 */


long FUN_02b25748(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  
  puVar7 = PTR_DAT_047d5388;
  puVar6 = PTR_DAT_047d5380;
  puVar5 = PTR_DAT_047d5360;
  puVar4 = PTR_DAT_047d5358;
  puVar3 = PTR_DAT_047d3988;
  puVar2 = PTR_DAT_047d3980;
  plVar14 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar14 != plVar1) {
    do {
      lVar13 = *plVar14;
      if (lVar13 != 0) {
        puVar9 = (undefined8 *)(*(code *)**(undefined8 **)(lVar13 + 8))((undefined8 *)(lVar13 + 8));
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar2), iVar8 != 0)) {
            uVar12 = FUN_01adab84();
            *(undefined8 *)puVar3 = uVar12;
            __cxa_guard_release(puVar2);
          }
          *(undefined **)puVar7 = puVar3;
          __cxa_guard_release(puVar6);
        }
        for (; puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)*puVar9) {
          if (puVar9 == (undefined8 *)puVar7) {
            uVar10 = (**(code **)(*(long *)*plVar14 + 0xc0))();
            if (((uVar10 & 1) == 0) && (*(long *)(lVar13 + 0x318) != 0)) {
              plVar11 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x318) + 0x28))();
              if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
                uVar12 = FUN_00ff17b4();
                *(undefined8 *)puVar5 = uVar12;
                __cxa_guard_release(puVar4);
              }
              goto joined_r0x02b25820;
            }
            break;
          }
        }
      }
LAB_02b257f0:
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar1);
    plVar14 = plVar1;
  }
LAB_02b258b0:
  if (plVar14 == (long *)param_1[1]) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*plVar14 != 0) {
      lVar13 = *plVar14 + -0x20;
    }
  }
  return lVar13;
joined_r0x02b25820:
  if (plVar11 == (long *)0x0) goto LAB_02b257f0;
  if (plVar11 == (long *)puVar5) goto LAB_02b258b0;
  plVar11 = (long *)*plVar11;
  goto joined_r0x02b25820;
}


