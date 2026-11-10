/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03124f68; name: FUN_03124f68
 */


void FUN_03124f68(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  undefined8 *puVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  undefined4 uVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long local_78;
  undefined8 local_70;
  long *local_68;
  
  plVar24 = (long *)PTR_DAT_047e4ed8;
  plVar23 = *(long **)PTR_DAT_047e4ed8;
  if (plVar23 == (long *)0x0) {
    bVar3 = false;
    uVar22 = 0;
  }
  else {
    uVar22 = 0x38d9223e;
    cVar5 = (**(code **)(*plVar23 + 0x30))(plVar23,0x38d9223e);
    bVar3 = cVar5 != '\0';
    (**(code **)(*plVar23 + 0x28))(plVar23,0x38d9223e,0);
  }
  if (*(long *)(param_1 + 0x170) == 0) goto LAB_0312595c;
  local_78 = 0;
  local_70 = -0x8000000000000000;
  lVar27 = (long)*(int *)(*(long *)(param_1 + 0x130) + 0x40);
  lVar25 = tpidr_el0;
  lVar13 = *(long *)(lVar25 + 0x1000b8);
  if (lVar13 == 0) {
    lVar13 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar13;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0x3d0) + 0x10);
  if ((*(long *)(lVar13 + 8) == 0) && (local_68 = (long *)(lVar27 * 0x60), lVar13 != 0)) {
    local_98 = (long *)((ulong)((long)local_68 + 0x3f) & 0xffffffffffffffc0);
    if (local_98 <= *(long **)(lVar13 + 0x28)) {
      lVar6 = *(long *)(lVar13 + 0x38);
      if ((undefined1 *)((long)local_98 + lVar6) <= *(undefined1 **)(lVar13 + 0x40)) {
        *(undefined1 **)(lVar13 + 0x38) = (undefined1 *)((long)local_98 + lVar6);
        goto LAB_031250e0;
      }
    }
    lVar6 = FUN_031cf3b4(lVar13,&local_98);
  }
  else {
    local_68 = (long *)(lVar27 * 0x60);
    lVar6 = (**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
    lVar13 = 0;
  }
LAB_031250e0:
  lVar14 = *(long *)(param_1 + 0x130);
  lVar27 = lVar27 * 0x60;
  iVar20 = *(int *)(lVar14 + 0x40);
  if (0 < iVar20) {
    lVar17 = 0;
    lVar19 = 0;
    puVar16 = (undefined8 *)(lVar6 + 0x30);
    do {
      lVar21 = *(long *)(lVar14 + 0x38);
      if ((*(long *)(lVar21 + lVar17) != 0) || (*(long *)(lVar21 + lVar17 + 0x10) != 0)) {
        lVar21 = lVar21 + lVar17;
        uVar8 = *(undefined8 *)(lVar21 + 0x30);
        puVar16[-5] = *(undefined8 *)(lVar21 + 0x38);
        puVar16[-6] = uVar8;
        uVar8 = *(undefined8 *)(lVar21 + 0x40);
        puVar16[-3] = *(undefined8 *)(lVar21 + 0x48);
        puVar16[-4] = uVar8;
        uVar8 = *(undefined8 *)(lVar21 + 0x50);
        puVar16[-1] = *(undefined8 *)(lVar21 + 0x58);
        puVar16[-2] = uVar8;
        uVar8 = *(undefined8 *)(lVar21 + 0x60);
        puVar16[1] = *(undefined8 *)(lVar21 + 0x68);
        *puVar16 = uVar8;
        uVar8 = *(undefined8 *)(lVar21 + 0x70);
        puVar16[3] = *(undefined8 *)(lVar21 + 0x78);
        puVar16[2] = uVar8;
        uVar8 = *(undefined8 *)(lVar21 + 0x80);
        puVar16[5] = *(undefined8 *)(lVar21 + 0x88);
        puVar16[4] = uVar8;
        iVar20 = *(int *)(lVar14 + 0x40);
      }
      lVar19 = lVar19 + 1;
      lVar17 = lVar17 + 0x100;
      puVar16 = puVar16 + 0xc;
    } while (lVar19 < iVar20);
  }
  bVar4 = *(char *)(param_1 + 0x230) != '\0';
  lVar14 = *(long *)(param_1 + 0x170);
  FUN_030f8a08(lVar14,bVar4);
  FUN_030f8d24(lVar14,bVar4,lVar6,lVar6 + lVar27);
  puVar15 = *(uint **)(lVar14 + 0x90);
  iVar20 = *(int *)(lVar14 + 0x98);
  puVar18 = puVar15 + (long)iVar20 * 0x34;
  if (param_2 == (long *)0x0) {
    if (iVar20 != 0) {
      uVar11 = (long)iVar20 * 0xd0 - 0xd0;
      uVar1 = ((uint)(uVar11 / 0xd0) & 0x3ffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar14 = -((ulong)uVar1 & 7);
        do {
          *(undefined1 *)(puVar15 + 0x32) = 1;
          puVar15 = puVar15 + 0x34;
          bVar4 = lVar14 != -1;
          lVar14 = lVar14 + 1;
        } while (bVar4);
      }
      if (0x5af < uVar11) {
        do {
          *(undefined1 *)(puVar15 + 0x32) = 1;
          *(undefined1 *)(puVar15 + 0x66) = 1;
          *(undefined1 *)(puVar15 + 0x9a) = 1;
          *(undefined1 *)(puVar15 + 0xce) = 1;
          *(undefined1 *)(puVar15 + 0x102) = 1;
          *(undefined1 *)(puVar15 + 0x136) = 1;
          *(undefined1 *)(puVar15 + 0x16a) = 1;
          *(undefined1 *)(puVar15 + 0x19e) = 1;
          puVar15 = puVar15 + 0x1a0;
        } while (puVar18 != puVar15);
      }
    }
  }
  else if (iVar20 != 0) {
    do {
      *(byte *)(puVar15 + 0x32) =
           (byte)(*(uint *)(*param_2 + (long)((int)*puVar15 >> 5) * 4) >> (ulong)(*puVar15 & 0x1f))
           & 1;
      puVar15 = puVar15 + 0x34;
    } while (puVar15 != puVar18);
  }
  FUN_030f9348(*(undefined8 *)(param_1 + 0x170),&local_78);
  if (lVar13 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar6,lVar27);
  }
  else {
    uVar11 = lVar27 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar13 + 0x28) < uVar11) || (*(long *)(lVar13 + 0x38) != uVar11 + lVar6)) {
      if (lVar6 != 0) {
        if (*(ulong *)(lVar13 + 0x28) < uVar11 + 0x40) {
          *(int *)(*(long *)(lVar13 + 0x30) + 0x20) = *(int *)(*(long *)(lVar13 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar13 + 0x10) + 0x18))
                    (*(long **)(lVar13 + 0x10),lVar6 - *(int *)(lVar6 + -4),uVar11 + 0x44);
        }
        else {
          if (*(long *)(lVar13 + 0x38) == uVar11 + lVar6) {
            *(long *)(lVar13 + 0x38) = lVar6;
            goto LAB_0312532c;
          }
          FUN_031cf778(lVar13,lVar6);
        }
      }
    }
    else {
      *(long *)(lVar13 + 0x38) = lVar6;
      if (*(long *)(lVar13 + 0x48) == lVar6) {
LAB_0312532c:
        FUN_031cf578(lVar13);
      }
    }
  }
  lVar27 = 0;
  if (*(long *)(param_1 + 0x170) != 0) {
    lVar27 = *(long *)(param_1 + 0x170) + 0x18;
  }
  FUN_030d65e0(*(undefined8 *)(param_1 + 0x138),lVar27,*(undefined8 *)(param_1 + 0x248),&local_78);
  FUN_030d9424(&local_68,*(undefined8 *)(param_1 + 0x138));
  lVar27 = *(long *)(param_1 + 0x138);
  plVar24 = *(long **)(lVar27 + 0xf0);
  if ((int)plVar24[4] == 0) {
    plVar24 = (long *)0x0;
  }
  else {
    if ((plVar24 != (long *)0x0) && (plVar24[1] != 0)) {
      plVar23 = plVar24 + 2;
      do {
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *plVar23 = *plVar23 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar2 = PTR_DAT_047d1a08;
    local_98 = (long *)&DAT_00000038;
    plVar23 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_98,0);
    if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
      (**(code **)(puVar2 + 0x10))(plVar23,"hkaiModifiedSections");
    }
    plVar23[6] = 0;
    puVar2 = PTR_DAT_047e51a8;
    *(undefined4 *)(plVar23 + 6) = 0;
    plVar23[2] = 1;
    plVar23[3] = 0;
    *plVar23 = (long)(puVar2 + 0x10);
    plVar23[1] = 0xffffffff;
    plVar23[4] = -0x8000000000000000;
    plVar23[5] = (long)&DAT_03d7702c;
    plVar7 = *(long **)(lVar27 + 0xf0);
    *(long **)(lVar27 + 0xf0) = plVar23;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar23 = plVar7 + 2;
      do {
        lVar27 = *plVar23;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar4) {
          *plVar23 = lVar27 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar27 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
  }
  FUN_030d9670(&local_80,*(undefined8 *)(param_1 + 0x138));
  puVar2 = PTR_DAT_047d1a08;
  plVar23 = local_68;
  if (local_68 == (long *)0x0) {
    if (local_80 != (long *)0x0) {
      iVar20 = *(int *)(*(long *)(param_1 + 0x130) + 0x40);
      local_98 = (long *)&DAT_00000028;
      plVar23 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_98,0);
      if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
        (**(code **)(puVar2 + 0x10))(plVar23,"hkaiNavMeshModifiedFaces");
      }
      puVar2 = PTR_DAT_047e51b8;
      plVar23[1] = 0xffffffff;
      plVar23[2] = 1;
      *plVar23 = (long)(puVar2 + 0x10);
      plVar23[3] = 0;
      plVar23[4] = -0x8000000000000000;
      if (iVar20 < 1) {
        uVar11 = 0;
      }
      else {
        FUN_03125d08(plVar23 + 3,iVar20);
        uVar11 = (ulong)*(uint *)(plVar23 + 4);
      }
      iVar12 = (int)uVar11;
      if (iVar12 < iVar20) {
        lVar27 = plVar23[3];
        puVar16 = (undefined8 *)(lVar27 + (long)iVar12 * 0x20);
        *(int *)(plVar23 + 4) = iVar20;
        do {
          *puVar16 = 0;
          puVar16[1] = 0x8000000000000000;
          puVar16[2] = &DAT_03d7702c;
          *(undefined4 *)(puVar16 + 3) = 0;
          puVar16 = puVar16 + 4;
        } while (puVar16 != (undefined8 *)(lVar27 + (long)iVar20 * 0x20));
      }
      else if (iVar20 < iVar12) {
        *(int *)(plVar23 + 4) = iVar20;
        puVar2 = PTR_PTR_047d1a50;
        lVar27 = plVar23[3];
        uVar26 = -(uVar11 >> 0x1f) & 0xffffffe000000000 | uVar11 << 5;
        uVar11 = (long)iVar20 << 5;
        do {
          lVar13 = lVar27 + uVar26;
          lVar6 = *(long *)(lVar13 + -0x10);
          if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(puVar2[8],lVar6,0);
            *(undefined **)(lVar13 + -0x10) = &DAT_03d7702c;
            *(undefined4 *)(lVar13 + -8) = 0;
          }
          *(undefined4 *)(lVar13 + -0x18) = 0;
          if ((-1 < (int)*(uint *)(lVar13 + -0x14)) && (*(long *)(lVar13 + -0x20) != 0)) {
            (**(code **)(*(long *)puVar2 + 0x20))
                      (puVar2,*(long *)(lVar13 + -0x20),(ulong)*(uint *)(lVar13 + -0x14) << 2);
          }
          uVar11 = uVar11 + 0x20;
          lVar27 = lVar27 + -0x20;
          *(undefined8 *)(lVar13 + -0x20) = 0;
          *(undefined4 *)(lVar13 + -0x14) = 0x80000000;
        } while (uVar26 != uVar11);
      }
      if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
        plVar7 = local_68 + 2;
        do {
          lVar27 = *plVar7;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar27 + -1 == 0) {
          lVar27 = *local_68;
          local_68 = plVar23;
          (**(code **)(lVar27 + 0x18))();
          plVar23 = local_68;
        }
      }
      goto LAB_03125458;
    }
LAB_03125734:
    puVar2 = PTR_DAT_047d1a08;
    if (plVar24 != (long *)0x0) {
      iVar20 = *(int *)(*(long *)(param_1 + 0x130) + 0x40);
      local_98 = (long *)&DAT_00000028;
      plVar23 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_98,0);
      if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
        (**(code **)(puVar2 + 0x10))(plVar23,"hkaiNavMeshModifiedFaces");
      }
      puVar2 = PTR_DAT_047e51b8;
      plVar23[1] = 0xffffffff;
      plVar23[2] = 1;
      *plVar23 = (long)(puVar2 + 0x10);
      plVar23[3] = 0;
      plVar23[4] = -0x8000000000000000;
      if (iVar20 < 1) {
        uVar11 = 0;
      }
      else {
        FUN_03125d08(plVar23 + 3,iVar20);
        uVar11 = (ulong)*(uint *)(plVar23 + 4);
      }
      iVar12 = (int)uVar11;
      if (iVar12 < iVar20) {
        lVar27 = plVar23[3];
        puVar16 = (undefined8 *)(lVar27 + (long)iVar12 * 0x20);
        *(int *)(plVar23 + 4) = iVar20;
        do {
          *puVar16 = 0;
          puVar16[1] = 0x8000000000000000;
          puVar16[2] = &DAT_03d7702c;
          *(undefined4 *)(puVar16 + 3) = 0;
          puVar16 = puVar16 + 4;
        } while (puVar16 != (undefined8 *)(lVar27 + (long)iVar20 * 0x20));
      }
      else if (iVar20 < iVar12) {
        *(int *)(plVar23 + 4) = iVar20;
        puVar2 = PTR_PTR_047d1a50;
        lVar27 = plVar23[3];
        uVar26 = -(uVar11 >> 0x1f) & 0xffffffe000000000 | uVar11 << 5;
        uVar11 = (long)iVar20 << 5;
        do {
          lVar25 = lVar27 + uVar26;
          lVar13 = *(long *)(lVar25 + -0x10);
          if ((lVar13 != 0) && (*(int *)(lVar13 + 4) != -2)) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(puVar2[8],lVar13,0);
            *(undefined **)(lVar25 + -0x10) = &DAT_03d7702c;
            *(undefined4 *)(lVar25 + -8) = 0;
          }
          *(undefined4 *)(lVar25 + -0x18) = 0;
          if ((-1 < (int)*(uint *)(lVar25 + -0x14)) && (*(long *)(lVar25 + -0x20) != 0)) {
            (**(code **)(*(long *)puVar2 + 0x20))
                      (puVar2,*(long *)(lVar25 + -0x20),(ulong)*(uint *)(lVar25 + -0x14) << 2);
          }
          uVar11 = uVar11 + 0x20;
          lVar27 = lVar27 + -0x20;
          *(undefined8 *)(lVar25 + -0x20) = 0;
          *(undefined4 *)(lVar25 + -0x14) = 0x80000000;
        } while (uVar26 != uVar11);
      }
      if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
        plVar7 = local_68 + 2;
        do {
          lVar27 = *plVar7;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar27 + -1 == 0) {
          lVar27 = *local_68;
          local_68 = plVar23;
          (**(code **)(lVar27 + 0x18))();
          plVar23 = local_68;
        }
      }
      goto LAB_031255cc;
    }
  }
  else {
LAB_03125458:
    local_68 = plVar23;
    puVar2 = PTR_DAT_047d1a08;
    plVar23 = local_80;
    if (local_80 == (long *)0x0) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x130) + 0x40);
      local_98 = (long *)&DAT_00000028;
      plVar23 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_98,0);
      if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
        (**(code **)(puVar2 + 0x10))(plVar23,"hkaiNavMeshModifiedAabbs");
      }
      plVar23[2] = 1;
      plVar23[3] = 0;
      *plVar23 = (long)(PTR_DAT_047e51c0 + 0x10);
      plVar23[1] = 0xffffffff;
      plVar23[4] = -0x8000000000000000;
      if ((int)uVar1 < 1) {
        plVar23[3] = 0;
        plVar23[4] = -0x8000000000000000;
        if (uVar1 != 0) {
          puVar9 = (undefined8 *)0x0;
          puVar16 = (undefined8 *)((long)(int)uVar1 << 4);
          goto LAB_03125a4c;
        }
      }
      else {
        puVar9 = (undefined8 *)
                 (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar1 << 4)
        ;
        plVar23[3] = (long)puVar9;
        puVar16 = puVar9 + (ulong)uVar1 * 2;
        *(uint *)(plVar23 + 4) = uVar1;
        *(uint *)((long)plVar23 + 0x24) = uVar1;
LAB_03125a4c:
        do {
          puVar10 = puVar9 + 2;
          *puVar9 = 0;
          puVar9[1] = 0x8000000000000000;
          puVar9 = puVar10;
        } while (puVar10 != puVar16);
      }
      if ((local_80 != (long *)0x0) && (local_80[1] != 0)) {
        plVar7 = local_80 + 2;
        do {
          lVar27 = *plVar7;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar27 + -1 == 0) {
          lVar27 = *local_80;
          local_80 = plVar23;
          (**(code **)(lVar27 + 0x18))();
          plVar23 = local_80;
        }
      }
    }
    local_80 = plVar23;
    lVar27 = *(long *)(lVar25 + 0x1000b8);
    if (lVar27 == 0) {
      lVar27 = FUN_00e5d3b4();
      *(long *)(lVar25 + 0x1000b8) = lVar27;
    }
    plVar23 = *(long **)(lVar27 + 0x3e0);
    if (plVar23 != (long *)0x0) {
      lVar27 = *plVar23;
      if (*(code **)(lVar27 + 0x18) != (code *)0x0) {
        (**(code **)(lVar27 + 0x18))
                  ("dynamicNavMeshModifiedCallback",0x1e,*(undefined8 *)(lVar27 + 0x28));
      }
      puVar16 = (undefined8 *)plVar23[2];
      uVar11 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar23[3]) && (plVar23[2] = uVar11, puVar16 != (undefined8 *)0x0)) {
        *puVar16 = "TtdynamicNavMeshModifiedCallback";
        uVar8 = nn::os::GetSystemTick();
        puVar16[1] = uVar8;
      }
      if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar23[6] != 0)) {
        puVar16 = (undefined8 *)plVar23[2];
        uVar11 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
        if ((uVar11 <= (ulong)plVar23[3]) && (plVar23[2] = uVar11, puVar16 != (undefined8 *)0x0)) {
          *puVar16 = &DAT_03c4e575;
          puVar16[1] = *(undefined8 *)(plVar23[6] + 8);
        }
      }
    }
    local_98 = local_68;
    local_90 = local_80;
    plStack_88 = plVar23;
    FUN_0310e114(param_1 + 0x70,param_1,&local_98);
    if (plVar23 != (long *)0x0) {
      lVar27 = *plVar23;
      if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (plVar23[6] != 0)) {
        puVar16 = (undefined8 *)plVar23[2];
        uVar11 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
        if ((uVar11 <= (ulong)plVar23[3]) && (plVar23[2] = uVar11, puVar16 != (undefined8 *)0x0)) {
          *puVar16 = &DAT_03c4e575;
          puVar16[1] = *(undefined8 *)(plVar23[6] + 8);
        }
      }
      puVar16 = (undefined8 *)plVar23[2];
      uVar11 = (long)puVar16 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar23[3]) && (plVar23[2] = uVar11, puVar16 != (undefined8 *)0x0)) {
        *puVar16 = &DAT_03c2d363;
        uVar8 = nn::os::GetSystemTick();
        puVar16[1] = uVar8;
      }
      if (*(code **)(lVar27 + 0x20) != (code *)0x0) {
        (**(code **)(lVar27 + 0x20))(*(undefined8 *)(lVar27 + 0x28));
      }
    }
    plVar23 = local_68;
    if (local_68 == (long *)0x0) goto LAB_03125734;
LAB_031255cc:
    local_68 = plVar23;
    puVar2 = PTR_DAT_047d1a08;
    if (plVar24 == (long *)0x0) {
      local_98 = (long *)&DAT_00000038;
      plVar24 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_98,0);
      if (*(code **)(puVar2 + 0x10) != (code *)0x0) {
        (**(code **)(puVar2 + 0x10))(plVar24,"hkaiModifiedSections");
      }
      plVar24[6] = 0;
      puVar2 = PTR_DAT_047e51a8;
      plVar24[2] = 1;
      plVar24[3] = 0;
      plVar24[4] = -0x8000000000000000;
      plVar24[5] = (long)&DAT_03d7702c;
      *plVar24 = (long)(puVar2 + 0x10);
      plVar24[1] = 0xffffffff;
      *(undefined4 *)(plVar24 + 6) = 0;
    }
    plVar23 = local_68;
    iVar20 = *(int *)(*(long *)(param_1 + 0x438) + 0x28);
    if (iVar20 != 0) {
      lVar27 = (long)iVar20 << 3;
      puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x438) + 0x20);
      do {
        FUN_030ac290(*puVar16,plVar23,plVar24);
        lVar27 = lVar27 + -8;
        puVar16 = puVar16 + 1;
      } while (lVar27 != 0);
    }
    iVar20 = *(int *)(*(long *)(param_1 + 0x478) + 0x28);
    if (iVar20 != 0) {
      lVar27 = (long)iVar20 << 3;
      puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x478) + 0x20);
      do {
        FUN_0310117c(*puVar16,plVar24);
        lVar27 = lVar27 + -8;
        puVar16 = puVar16 + 1;
      } while (lVar27 != 0);
    }
  }
  if ((local_80 != (long *)0x0) && (local_80[1] != 0)) {
    plVar23 = local_80 + 2;
    do {
      lVar27 = *plVar23;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *plVar23 = lVar27 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar27 + -1 == 0) {
      (**(code **)(*local_80 + 0x18))();
    }
  }
  if ((plVar24 != (long *)0x0) && (plVar24[1] != 0)) {
    plVar23 = plVar24 + 2;
    do {
      lVar27 = *plVar23;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *plVar23 = lVar27 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar27 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  if ((local_68 != (long *)0x0) && (local_68[1] != 0)) {
    plVar24 = local_68 + 2;
    do {
      lVar27 = *plVar24;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar4) {
        *plVar24 = lVar27 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar27 + -1 == 0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  lVar27 = local_78;
  puVar2 = PTR_PTR_047d1a50;
  if ((int)local_70 != 0) {
    lVar25 = (long)(int)local_70 * 0x38;
    do {
      lVar13 = lVar27 + lVar25;
      *(undefined4 *)(lVar13 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar13 + -4)) && (*(long *)(lVar13 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar13 + -0x10),(ulong)*(uint *)(lVar13 + -4) << 5);
      }
      *(undefined8 *)(lVar13 + -0x10) = 0;
      *(undefined4 *)(lVar13 + -4) = 0x80000000;
      *(undefined4 *)(lVar13 + -0x18) = 0;
      if ((-1 < (int)*(uint *)(lVar13 + -0x14)) && (*(long *)(lVar13 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar13 + -0x20),(ulong)*(uint *)(lVar13 + -0x14) << 2);
      }
      *(undefined8 *)(lVar13 + -0x20) = 0;
      *(undefined4 *)(lVar13 + -0x14) = 0x80000000;
      *(undefined4 *)(lVar13 + -0x28) = 0;
      if ((-1 < (int)*(uint *)(lVar13 + -0x24)) && (*(long *)(lVar13 + -0x30) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar13 + -0x30),(ulong)*(uint *)(lVar13 + -0x24) << 2);
      }
      lVar25 = lVar25 + -0x38;
      *(undefined8 *)(lVar13 + -0x30) = 0;
      *(undefined4 *)(lVar13 + -0x24) = 0x80000000;
    } while (lVar25 != 0);
  }
  lVar27 = local_70;
  uVar11 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar27) && (local_78 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar11 * 0x38);
  }
  plVar24 = (long *)PTR_DAT_047e4ed8;
LAB_0312595c:
  plVar24 = (long *)*plVar24;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x28))(plVar24,uVar22,bVar3);
  }
  return;
}


