/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01244df8; name: FUN_01244df8
 */


void FUN_01244df8(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_78 [8];
  long *local_70;
  undefined1 local_68;
  
  *param_2 = 0;
  plVar12 = (long *)*param_3;
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x110);
  uVar4 = (**(code **)(*plVar12 + 0x98))(plVar12);
  uVar8 = FUN_0297b7a4(uVar14,uVar4);
  if (((uVar8 & 1) == 0) && (uVar8 = (**(code **)(*plVar12 + 0x200))(plVar12), (uVar8 & 1) != 0)) {
    FUN_0298dbd0(*(undefined8 *)(param_1 + 0x20),plVar12,param_3[2]);
    FUN_015a07e0(param_1,param_3[2]);
    FUN_0297f270(param_1,param_3[2],plVar12);
    FUN_01689990(param_1,uVar14,uVar4);
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x49c) >> 1 & 1) != 0) {
      lVar15 = *(long *)(param_1 + 0x10);
      uVar5 = (**(code **)(*plVar12 + 0x98))(plVar12);
      piVar9 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x290) + 8) + 0x50),
                                   uVar5);
      if (((piVar9 != (int *)0x0) && (*piVar9 == 1)) &&
         (uVar8 = (**(code **)(*plVar12 + 0x200))(plVar12), (uVar8 & 1) != 0)) {
        FUN_012519ac(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1f80));
      }
    }
    if (*(char *)(param_3 + 1) != '\0') {
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = (**(code **)(*plVar12 + 0x98))(plVar12);
      FUN_01636f5c(uVar14,uVar5,plVar12,0);
    }
    plVar13 = plVar12 + 5;
    puVar10 = (undefined8 *)(**(code **)*plVar13)(plVar13);
    puVar3 = PTR_DAT_047d3f08;
    puVar2 = PTR_DAT_047d3f00;
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar7 != 0)) {
      uVar14 = FUN_01b07aa4();
      *(undefined8 *)puVar3 = uVar14;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if (puVar10 == (undefined8 *)puVar3) {
        if ((*(char *)((long)plVar12 + 0x714) != '\0') &&
           (uVar8 = (**(code **)(*plVar12 + 0x588))(plVar12), (uVar8 & 1) != 0)) {
          local_68 = 0;
          local_70 = plVar12;
          FUN_029426a8(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1480),auStack_78,&local_70);
        }
        break;
      }
    }
    uVar5 = (**(code **)(*plVar12 + 0x478))(plVar12);
    (**(code **)(*plVar12 + 0x470))(plVar12);
    uVar8 = FUN_016c0434(param_1,uVar4,uVar5);
    FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x94,uVar4,0);
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) {
      lVar15 = *(long *)(param_1 + 0x20);
      plVar11 = (long *)FUN_01021c94(*(undefined8 *)
                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0x10) + 0x30),uVar4);
      (**(code **)(*plVar11 + 0x550))(plVar11,8,1);
      FUN_0129aff0(*(undefined8 *)(lVar15 + 0x18),0x37,uVar4,8,1);
    }
    FUN_01460214(param_1,plVar12);
    FUN_02936d2c(*(undefined8 *)(param_1 + 0x38),uVar4);
    puVar10 = (undefined8 *)(**(code **)plVar12[5])(plVar13);
    if (((*puVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar7 != 0)) {
      uVar14 = FUN_01b07aa4();
      *(undefined8 *)puVar3 = uVar14;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if (puVar10 == (undefined8 *)puVar3) {
        if (*(char *)((long)plVar12 + 0x714) == '\0') break;
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        uVar6 = (**(code **)(*plVar12 + 0x98))(plVar12);
        FUN_0125044c(uVar14,uVar6);
        sVar1 = (short)plVar12[0xe2];
        if (sVar1 == 0x3f3) {
          if ((short)plVar12[0xe3] == *(short *)((long)plVar12 + 0x712)) break;
          uVar14 = *(undefined8 *)(param_1 + 0x20);
          uVar6 = (**(code **)(*plVar12 + 0x98))(plVar12);
          FUN_0197fe48(uVar14,uVar6,*(undefined2 *)((long)plVar12 + 0x712),0);
          sVar1 = (short)plVar12[0xe2];
        }
        if ((sVar1 == 0x3fd) && ((short)plVar12[0xe3] != *(short *)((long)plVar12 + 0x712))) {
          uVar14 = *(undefined8 *)(param_1 + 0x20);
          uVar6 = (**(code **)(*plVar12 + 0x98))(plVar12);
          FUN_0197fe48(uVar14,uVar6,*(undefined2 *)((long)plVar12 + 0x712),0);
        }
        break;
      }
    }
    FUN_0157ac20(*(undefined8 *)(param_1 + 0x20),uVar4);
    FUN_01248894(*(undefined8 *)(param_1 + 0x48),uVar4);
    FUN_0159fdf4(param_1,plVar12);
    FUN_0297f3d4(param_1,plVar12);
    if ((uVar8 & 1) != 0) {
      FUN_01537580(*(undefined8 *)(param_1 + 0x20),uVar5);
    }
    FUN_0297f878(param_1,uVar4);
    FUN_0172b7f0(param_1,uVar4,uVar5);
    FUN_02936f48(*(undefined8 *)(param_1 + 0x38),uVar4);
    *param_2 = 1;
  }
  return;
}


