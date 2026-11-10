/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01315b58; name: FUN_01315b58
 */


void FUN_01315b58(long *param_1,long *param_2)

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
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  puVar6 = PTR_DAT_047da9e0;
  puVar5 = PTR_DAT_047da9d8;
  puVar4 = PTR_DAT_047d3988;
  puVar3 = PTR_DAT_047d3980;
  plVar12 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  if (plVar12 != plVar2) {
    lVar1 = *param_1;
    plVar13 = *(long **)param_1[1];
    do {
      lVar11 = *plVar12;
      if (lVar11 != 0) {
        plVar8 = (long *)(*(code *)**(undefined8 **)(lVar11 + 8))((undefined8 *)(lVar11 + 8));
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
            uVar9 = (**(code **)(*(long *)*plVar12 + 0xc0))();
            if (((uVar9 & 1) == 0) && (*(long *)(lVar11 + 0xd0) == *plVar13)) goto LAB_01315bf4;
            break;
          }
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar2);
    plVar12 = plVar2;
LAB_01315bf4:
    if (plVar12 != (long *)param_2[1]) {
      (**(code **)(*(long *)*plVar12 + 0xa8))();
      *(undefined **)(lVar1 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar1 + 0xb0) = 0;
    }
  }
  return;
}


