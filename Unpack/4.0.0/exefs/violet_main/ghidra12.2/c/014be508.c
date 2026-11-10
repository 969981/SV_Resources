/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014be508; name: FUN_014be508
 */


long FUN_014be508(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long local_70 [3];
  long *local_58;
  
  puVar3 = PTR_DAT_047dccc0;
  puVar2 = PTR_DAT_047dccb8;
  plVar10 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if (plVar10 != plVar1) {
    plVar11 = *(long **)*param_1;
    do {
      lVar8 = *plVar10;
      if (lVar8 != 0) {
        plVar5 = (long *)(*(code *)**(undefined8 **)(lVar8 + 8))((undefined8 *)(lVar8 + 8));
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          uVar7 = FUN_020fb54c();
          *(undefined8 *)puVar3 = uVar7;
          __cxa_guard_release(puVar2);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar3) {
            uVar6 = (**(code **)(*(long *)*plVar10 + 0xc0))();
            if ((uVar6 & 1) == 0) {
              FUN_014be650(local_70,lVar8 + -0x20);
              lVar8 = local_70[0];
              lVar9 = *plVar11;
              if (local_58 != (long *)0x0) {
                (**(code **)(*local_58 + 0x20))();
              }
              if (lVar8 == lVar9) goto LAB_014be5c8;
            }
            break;
          }
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
    plVar10 = plVar1;
LAB_014be5c8:
    if (plVar10 != (long *)param_2[1]) {
      lVar8 = 0;
      if (*plVar10 != 0) {
        lVar8 = *plVar10 + -0x20;
      }
      return lVar8;
    }
  }
  return 0;
}


