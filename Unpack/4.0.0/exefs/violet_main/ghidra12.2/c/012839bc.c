/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012839bc; name: FUN_012839bc
 */


long FUN_012839bc(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  puVar5 = PTR_DAT_047d9280;
  puVar4 = PTR_DAT_047d9278;
  puVar3 = PTR_DAT_047d9270;
  puVar2 = PTR_DAT_047d9268;
  plVar10 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar10 != plVar1) {
    do {
      plVar7 = (long *)(*(code *)**(undefined8 **)(*plVar10 + 8))();
      if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar2), iVar6 != 0)) {
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
          uVar9 = FUN_01e19d1c();
          *(undefined8 *)puVar4 = uVar9;
          __cxa_guard_release(puVar3);
        }
        *(undefined **)puVar5 = puVar4;
        __cxa_guard_release(puVar2);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar5) goto LAB_01283a28;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
    plVar10 = plVar1;
  }
LAB_01283a28:
  if (plVar10 == (long *)param_1[1]) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*plVar10 != 0) {
      lVar8 = *plVar10 + -0x20;
    }
  }
  return lVar8;
}


