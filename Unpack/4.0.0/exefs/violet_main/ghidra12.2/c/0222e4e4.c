/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0222e4e4; name: FUN_0222e4e4
 */


long FUN_0222e4e4(undefined8 *param_1,long *param_2)

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
  long *plVar12;
  
  puVar5 = PTR_DAT_047d8e30;
  puVar4 = PTR_DAT_047d8e28;
  puVar3 = PTR_DAT_047d3988;
  puVar2 = PTR_DAT_047d3980;
  plVar11 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if (plVar11 != plVar1) {
    plVar12 = *(long **)*param_1;
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
            if (((uVar8 & 1) == 0) && (*(long *)(lVar10 + 0xd0) == *plVar12)) goto LAB_0222e57c;
            break;
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
    plVar11 = plVar1;
LAB_0222e57c:
    if (plVar11 != (long *)param_2[1]) {
      lVar10 = 0;
      if (*plVar11 != 0) {
        lVar10 = *plVar11 + -0x20;
      }
      return lVar10;
    }
  }
  return 0;
}


