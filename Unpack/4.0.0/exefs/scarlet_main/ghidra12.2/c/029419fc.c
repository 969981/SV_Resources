/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029419fc; name: FUN_029419fc
 */


void FUN_029419fc(long param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  *param_2 = 0;
  plVar8 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_3);
  plVar9 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3[1]);
  iVar3 = FUN_0154b6c8(*(undefined8 *)(param_1 + 8));
  if ((iVar3 == 0) && ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) == 0))
  {
    plVar10 = (long *)(**(code **)plVar8[5])(plVar8 + 5);
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar3 != 0)) {
      uVar14 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar14;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)PTR_DAT_047d3f08) {
        if (((short)plVar8[0xe2] != 0x97) && ((short)plVar8[0xe2] != 0x84)) {
          return;
        }
        break;
      }
    }
  }
  uVar11 = (**(code **)(*plVar8 + 0x3b8))(plVar8);
  if ((((uVar11 & 1) == 0) && (uVar11 = (**(code **)(*plVar9 + 0x3b8))(plVar9), (uVar11 & 1) == 0))
     && (uVar11 = (**(code **)(*plVar8 + 0x308))(plVar8), (uVar11 & 1) == 0)) {
    puVar12 = (undefined8 *)(**(code **)plVar9[5])(plVar9 + 5);
    puVar2 = PTR_DAT_047d3f08;
    puVar1 = PTR_DAT_047d3f00;
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar3 != 0)) {
      uVar14 = FUN_01b07aa4();
      *(undefined8 *)puVar2 = uVar14;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar10 = (long *)0x0, puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)*puVar12) {
      if (puVar12 == (undefined8 *)puVar2) {
        plVar10 = plVar9;
        break;
      }
    }
    puVar12 = (undefined8 *)(**(code **)plVar8[5])(plVar8 + 5);
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar3 != 0)) {
      uVar14 = FUN_01b07aa4();
      *(undefined8 *)puVar2 = uVar14;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)*puVar12) {
      if (puVar12 == (undefined8 *)puVar2) {
        if (plVar10 != (long *)0x0) {
          uVar11 = (**(code **)(*plVar10 + 0x88))(plVar10,0x3f3);
          if ((uVar11 & 1) != 0) {
            if (*(char *)((long)plVar10 + 0x714) != '\0') {
              return;
            }
            if (*(char *)((long)plVar8 + 0x714) != '\0') {
              return;
            }
          }
          uVar11 = (**(code **)(*plVar10 + 0x88))(plVar10,0x3fd);
          if ((uVar11 & 1) != 0) {
            if (*(char *)((long)plVar10 + 0x714) != '\0') {
              return;
            }
            if (*(char *)((long)plVar8 + 0x714) != '\0') {
              return;
            }
          }
        }
        if ((*(char *)((long)plVar8 + 0x714) != '\0') && (*(char *)((long)plVar8 + 0x715) == 'c')) {
          return;
        }
        break;
      }
    }
    uVar4 = (**(code **)(*plVar8 + 0xf0))(plVar8);
    uVar11 = (**(code **)(*plVar8 + 0x5a0))(plVar8,plVar9);
    if ((uVar11 & 1) != 0) {
      FUN_0292f7a4(*(undefined8 *)(param_1 + 0x38),plVar8);
      if (*(char *)(param_3 + 2) != '\0') {
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        uVar5 = (**(code **)(*plVar8 + 0x98))(plVar8);
        FUN_018ce0ec(uVar14,uVar5,0);
      }
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = (**(code **)(*plVar8 + 0x98))(plVar8);
      uVar6 = (**(code **)(*plVar9 + 0x98))(plVar9);
      FUN_0298dca8(uVar14,uVar5,uVar6);
      uVar5 = (**(code **)(*plVar8 + 0x98))(plVar8);
      uVar6 = (**(code **)(*plVar9 + 0x98))(plVar9);
      FUN_014607f0(*(undefined8 *)(param_1 + 0x20),uVar5);
      FUN_014606c4(*(undefined8 *)(param_1 + 0x20),uVar5);
      FUN_0124f1ec(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),plVar8);
      FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xaf,uVar5,uVar6);
      FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),*param_3,param_3 + 3);
      if (*(char *)(param_3 + 2) != '\0') {
        lVar13 = *(long *)(param_1 + 0x20);
        iVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
        if (iVar3 != 0) {
          FUN_0129aff0(*(undefined8 *)(lVar13 + 0x18),200,iVar3);
        }
      }
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if ((uVar4 & 0xffff) != (uVar7 & 0xffff)) {
        FUN_02983848(param_1,plVar8);
        FUN_02983880(param_1,plVar8,uVar4,uVar7);
      }
      *param_2 = 1;
    }
  }
  return;
}


