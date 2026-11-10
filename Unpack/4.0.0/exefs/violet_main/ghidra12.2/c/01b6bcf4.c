/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b6bcf4; name: FUN_01b6bcf4
 */


void FUN_01b6bcf4(undefined8 *param_1,int param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar7 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar7;
  puVar4 = PTR_DAT_047d4c00;
  puVar3 = PTR_DAT_047d4bf8;
  plVar1 = *(long **)(lVar7 + 0x1c0);
  plVar2 = *(long **)(lVar7 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar7 = *plVar1;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x28))((undefined8 *)(lVar7 + 0x28));
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
      uVar9 = FUN_01b3fb0c();
      *(undefined8 *)puVar4 = uVar9;
      __cxa_guard_release(puVar3);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar4) goto LAB_01b6bdd4;
    }
  }
  lVar7 = 0;
LAB_01b6bdd4:
  lVar7 = lVar7 + (long)param_2 * 0x20;
  if (param_3 == 2) {
    uVar9 = *(undefined8 *)(lVar7 + 0x1958);
    uVar10 = *(undefined8 *)(lVar7 + 0x1960);
    uVar11 = *(undefined8 *)(lVar7 + 0x1968);
    uVar8 = *(undefined8 *)(lVar7 + 0x1970);
  }
  else if (param_3 == 1) {
    uVar9 = *(undefined8 *)(lVar7 + 0xcd8);
    uVar10 = *(undefined8 *)(lVar7 + 0xce0);
    uVar11 = *(undefined8 *)(lVar7 + 0xce8);
    uVar8 = *(undefined8 *)(lVar7 + 0xcf0);
  }
  else {
    uVar9 = *(undefined8 *)(lVar7 + 0x50);
    uVar10 = *(undefined8 *)(lVar7 + 0x58);
    uVar11 = *(undefined8 *)(lVar7 + 0x60);
    uVar8 = *(undefined8 *)(lVar7 + 0x68);
  }
  param_1[2] = uVar11;
  param_1[3] = uVar8;
  *param_1 = uVar9;
  param_1[1] = uVar10;
  return;
}


