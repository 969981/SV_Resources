/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01702d94; name: FUN_01702d94
 */


void FUN_01702d94(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar9 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar9;
  puVar5 = PTR_DAT_047d4910;
  puVar4 = PTR_DAT_047d4908;
  plVar1 = *(long **)(lVar9 + 0x1c8);
  for (plVar11 = *(long **)(lVar9 + 0x1c0); plVar11 != plVar1; plVar11 = plVar11 + 1) {
    lVar9 = *plVar11;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x28))((undefined8 *)(lVar9 + 0x28));
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      uVar8 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar8;
      __cxa_guard_release(puVar4);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar5) goto LAB_01702e40;
    }
  }
  lVar9 = 0;
LAB_01702e40:
  plVar11 = (long *)(lVar9 + 0x78);
  uVar10 = 1;
  while (plVar11[-4] != param_2) {
    if (*plVar11 == param_2) goto LAB_01702e88;
    uVar10 = uVar10 + 2;
    plVar11 = plVar11 + 8;
    if (uVar10 == 0x1f5) {
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)((long)param_1 + 0x1c) = 1;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
  uVar10 = uVar10 - 1;
LAB_01702e88:
  lVar9 = lVar9 + (uVar10 & 0xffffffff) * 0x20;
  uVar8 = *(undefined8 *)(lVar9 + 0x50);
  uVar2 = *(undefined8 *)(lVar9 + 0x58);
  uVar3 = *(undefined8 *)(lVar9 + 0x68);
  param_1[2] = *(undefined8 *)(lVar9 + 0x60);
  param_1[3] = uVar3;
  *param_1 = uVar8;
  param_1[1] = uVar2;
  return;
}


