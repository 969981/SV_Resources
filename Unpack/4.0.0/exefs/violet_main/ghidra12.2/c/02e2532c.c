/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e2532c; name: FUN_02e2532c
 */


void FUN_02e2532c(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  
  plVar13 = (long *)param_3[1];
  uVar7 = (**(code **)(*plVar13 + 0x3b8))(plVar13);
  plVar8 = plVar13;
  if ((uVar7 & 1) != 0) {
    uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
    uVar5 = (**(code **)(*(long *)param_3[1] + 0x98))();
    plVar8 = (long *)FUN_01079790(uVar14,uVar5);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      uVar5 = (**(code **)(*plVar8 + 0x1f0))();
      plVar8 = (long *)FUN_01079790(uVar14,uVar5);
    }
  }
  lVar15 = param_3[1];
  puVar9 = (undefined8 *)(*(code *)**(undefined8 **)(lVar15 + 0x28))();
  puVar3 = PTR_DAT_047d3f08;
  puVar2 = PTR_DAT_047d3f00;
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar6 != 0))
  {
    uVar14 = FUN_01b07aa4();
    *(undefined8 *)puVar3 = uVar14;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  for (; puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)*puVar9) {
    if (puVar9 == (undefined8 *)puVar3) {
      if (*(char *)(lVar15 + 0x714) != '\0') {
        plVar8 = (long *)param_3[1];
      }
      break;
    }
  }
  uVar7 = FUN_0142fef4(*(undefined8 *)(param_1 + 0x38),*param_3,plVar8,
                       *(undefined1 *)(param_3[2] + 8),(char)param_3[3]);
  uVar7 = uVar7 & 0xffffffff;
  if ((char)param_3[3] == '\0') {
    uVar7 = FUN_016f9f38(param_1,param_2 + 1,*param_3,plVar13,*(undefined1 *)(param_3[2] + 8),uVar7)
    ;
    uVar7 = uVar7 & 0xffffffff;
  }
  if ((*(char *)(param_3[2] + 8) == '\t') &&
     (uVar10 = (**(code **)(*plVar13 + 0x220))(plVar13,0x2a), (uVar10 & 1) != 0)) {
    uVar11 = ((&DAT_03d629b0)[uVar7 & 0xff] & 0x1ffffff) << 1;
    if (0xfff < uVar11) {
      uVar11 = 0x1000;
    }
    if (uVar11 == 0 && (uVar7 & 0xff) != 0) {
      uVar11 = 1;
    }
    uVar1 = 0xffffffff;
    do {
      uVar12 = uVar1;
      if (uVar12 == 0x1f) {
        uVar7 = 0;
        goto LAB_02e25460;
      }
      uVar1 = uVar12 + 1;
    } while ((uVar11 >> (ulong)(uVar1 & 0x1f) & 1) == 0);
    if (uVar1 < 0xc) {
      uVar7 = (ulong)(uVar12 + 2);
    }
    else {
      uVar7 = 0xd;
    }
  }
LAB_02e25460:
  lVar15 = *param_3;
  puVar9 = (undefined8 *)(*(code *)**(undefined8 **)(lVar15 + 0x28))();
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar6 != 0)) {
    uVar14 = FUN_01b07aa4();
    *(undefined8 *)puVar3 = uVar14;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  do {
    if (puVar9 == (undefined8 *)0x0) {
LAB_02e254a8:
      uVar4 = FUN_02e0c9d8(*(undefined8 *)(param_1 + 0x38),0x52,*param_3,plVar13,
                           *(undefined1 *)(param_3[2] + 8),uVar7);
      if ((char)param_3[3] == '\0') {
        uVar4 = FUN_02e0c9d8(*(undefined8 *)(param_1 + 0x38),0x53,*param_3,param_3[1],
                             *(undefined1 *)(param_3[2] + 8));
      }
      *param_2 = uVar4;
      return;
    }
    if (puVar9 == (undefined8 *)puVar3) {
      if (*(char *)(lVar15 + 0x714) != '\0') {
        uVar11 = 7;
        if (*(char *)(lVar15 + 0x715) != 'c') {
          uVar11 = (uint)uVar7;
        }
        uVar7 = (ulong)uVar11;
      }
      goto LAB_02e254a8;
    }
    puVar9 = (undefined8 *)*puVar9;
  } while( true );
}


