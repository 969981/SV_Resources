/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e7e694; name: FUN_00e7e694
 */


undefined8 FUN_00e7e694(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  
  puVar6 = PTR_FUN_047d9428;
  puVar5 = PTR_DAT_047d91a8;
  puVar4 = PTR_DAT_047d91a0;
  puVar3 = PTR_DAT_047d3988;
  puVar2 = PTR_DAT_047d3980;
  plVar11 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if (plVar11 != plVar1) {
    lVar12 = *param_1;
    do {
      if (*plVar11 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar2), iVar7 != 0)) {
            uVar10 = FUN_01adab84();
            *(undefined8 *)puVar3 = uVar10;
            __cxa_guard_release(puVar2);
          }
          *(undefined **)puVar5 = puVar3;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) {
            uVar9 = (**(code **)(*(long *)*plVar11 + 0xc0))();
            if ((uVar9 & 1) == 0) {
              (**(code **)(*(long *)*plVar11 + 0xa8))();
              *(undefined **)(lVar12 + 0xa8) = puVar6;
              *(undefined8 *)(lVar12 + 0xb0) = 0;
            }
            break;
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  return 0;
}


