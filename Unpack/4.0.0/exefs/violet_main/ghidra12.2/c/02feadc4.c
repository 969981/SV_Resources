/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02feadc4; name: FUN_02feadc4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02feadc4(long param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 uVar8;
  long **pplVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  long **pplVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  ulong uVar25;
  long lVar26;
  uint *puVar27;
  long *plVar28;
  undefined2 uVar29;
  uint uVar30;
  undefined8 *puVar31;
  short sVar32;
  uint uVar33;
  ulong uVar34;
  long *plVar35;
  uint *puVar36;
  long lVar37;
  long lVar38;
  undefined8 *puVar39;
  long lVar40;
  long *local_820;
  long *local_7e0;
  undefined8 local_7d8;
  uint *local_7d0;
  undefined8 local_7c8;
  long *local_7c0;
  undefined1 *local_7b8;
  undefined8 local_7b0;
  undefined1 auStack_7a8 [28];
  undefined4 local_78c;
  undefined4 local_6f0;
  undefined4 local_5ec;
  undefined4 local_4e8;
  undefined4 local_498;
  undefined4 local_444;
  undefined4 local_424;
  undefined4 local_300;
  undefined4 local_2b0;
  undefined4 local_244;
  undefined4 local_120;
  undefined4 local_d0;
  undefined4 local_ac;
  undefined4 local_a8;
  long *plStack_a0;
  undefined2 local_98;
  undefined1 local_96;
  long *local_90;
  undefined8 *local_88;
  uint *local_80;
  uint local_78;
  uint local_74;
  
  lVar40 = tpidr_el0;
  lVar14 = *(long *)(lVar40 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar40 + 0x1000b8) = lVar14;
  }
  plVar35 = *(long **)(lVar14 + 0x3e0);
  puVar27 = (uint *)(param_2 + 0x22);
  uVar33 = *(uint *)(param_2 + 0x22);
  uVar34 = (ulong)uVar33 & 0x1ff;
  DataMemoryBarrier(2,3);
  uVar19 = *puVar27;
  if (uVar19 == uVar33) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar27,0x10);
    if (bVar7) {
      *puVar27 = uVar33 + 0x200 & 0xfffffe00 | puVar27[uVar34 + 1];
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_02feae4c;
    puVar27 = puVar27 + uVar34 + 1;
  }
  else {
    ClearExclusiveLocal();
LAB_02feae4c:
    do {
      uVar34 = (ulong)(uVar19 & 0x1ff);
      DataMemoryBarrier(2,3);
      uVar33 = *puVar27;
      if (uVar33 == uVar19) {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar27,0x10);
        if (bVar7) {
          *puVar27 = uVar19 + 0x200 & 0xfffffe00 | *(uint *)((long)param_2 + uVar34 * 4 + 0x114);
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02feae88;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02feae88:
        bVar7 = false;
      }
      uVar19 = uVar33;
    } while (!bVar7);
    puVar27 = (uint *)((long)param_2 + uVar34 * 4 + 0x114);
  }
  *puVar27 = 0x1ff;
  DataMemoryBarrier(2,3);
  piVar24 = *(int **)(*param_2 + uVar34 * 8);
  lVar40 = *(long *)(piVar24 + 2);
  plVar15 = (long *)(*(ulong *)(lVar40 + 0x7e8) & 0xfffffffffffffffc);
  if (plVar15 != (long *)0x0) {
    do {
      uVar25 = plVar15[1];
      if ((uVar25 & 3) == 0) {
        (**(code **)(*plVar15 + 0x20))(plVar15,lVar40,uVar34);
      }
      plVar15 = (long *)(uVar25 & 0xfffffffffffffffc);
    } while (plVar15 != (long *)0x0);
    lVar40 = *(long *)(piVar24 + 2);
  }
  lVar37 = (long)*piVar24;
  lVar38 = *(long *)(*(long *)(param_1 + 0x10) + 0x100);
  lVar14 = *(long *)(lVar40 + 0x698);
  FUN_02f428b0(lVar40,piVar24);
  if (plVar35 != (long *)0x0) {
    lVar26 = *plVar35;
    if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
      (**(code **)(lVar26 + 0x18))("PreSolve",8,*(undefined8 *)(lVar26 + 0x28));
      if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
        (**(code **)(lVar26 + 0x18))("SetupDeactivation",0x11,*(undefined8 *)(lVar26 + 0x28));
      }
    }
    puVar39 = (undefined8 *)plVar35[2];
    uVar34 = (long)puVar39 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
      *puVar39 = "LtPreSolve";
      puVar39[2] = "StSetupDeactivation";
      uVar8 = nn::os::GetSystemTick();
      puVar39[1] = uVar8;
    }
    if (((*(byte *)(lVar26 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar39 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
        *puVar39 = &DAT_03c4e575;
        puVar39[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
  }
  puVar39 = (undefined8 *)PTR_DAT_047d1a08;
  if (lVar14 == 0) {
    local_820 = (long *)0x0;
  }
  else {
    iVar21 = *(int *)(lVar40 + 0x188);
    local_7e0 = (long *)0x140;
    local_820 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_7e0,0);
    if (*(code **)((long)puVar39 + 0x10) != (code *)0x0) {
      (**(code **)((long)puVar39 + 0x10))(local_820,"hknpDeactivationStepInfo");
    }
    FUN_02f5e3bc(local_820,iVar21,1);
    FUN_02eb1718(local_820[4],0,iVar21 + 7U & 0xfffffffc,0);
    *(long *)(piVar24 + 0x12e) = local_820[4];
  }
  if (plVar35 != (long *)0x0) {
    lVar26 = *plVar35;
    if (((*(byte *)(lVar26 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar20 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = &DAT_03c4e575;
        puVar20[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
    puVar20 = (undefined8 *)plVar35[2];
    uVar34 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = "StSetupConstraints";
      uVar8 = nn::os::GetSystemTick();
      puVar20[1] = uVar8;
    }
    if (*(code **)(lVar26 + 0x20) != (code *)0x0) {
      (**(code **)(lVar26 + 0x20))(*(undefined8 *)(lVar26 + 0x28));
    }
    if (*(code **)(lVar26 + 0x18) != (code *)0x0) {
      (**(code **)(lVar26 + 0x18))("SetupConstraints",0x10,*(undefined8 *)(lVar26 + 0x28));
    }
  }
  plVar15 = (long *)(lVar38 + lVar37 * 0x500);
  if (*(int *)(*(long *)(lVar40 + 0x488) + 0x28) != 0) {
    lVar26 = lVar38 + lVar37 * 0x500;
    local_7d8 = *(long **)(piVar24 + 0x138);
    puVar27 = *(uint **)(*(long *)(lVar26 + 0x310) + (long)*(int *)(lVar26 + 0x318) * 8 + -8);
    local_7e0 = (long *)(lVar26 + 0x300);
    local_7c8 = (uint *)(CONCAT44(*puVar27,*puVar27 >> 0x10) & 0xffffffffffff);
    *(uint *)(lVar26 + 0x308) = *(int *)(lVar26 + 0x308) - (*puVar27 & 0xffff);
    local_90 = (long *)0x0;
    if (lVar14 == 0) {
      pplVar9 = (long **)0x0;
    }
    else {
      lVar38 = lVar38 + lVar37 * 0x500;
      local_88 = *(undefined8 **)(piVar24 + 0x138);
      pplVar9 = &local_90;
      local_80 = *(uint **)(*(long *)(lVar38 + 0x10) + (long)*(int *)(lVar38 + 0x18) * 8 + -8);
      local_78 = *local_80 >> 0x10;
      local_74 = *local_80 & 0xffff;
      *(uint *)(lVar38 + 8) = *(int *)(lVar38 + 8) - (*local_80 & 0xffff);
      local_90 = plVar15;
    }
    uVar29 = (undefined2)local_7c8;
    uVar33 = local_7c8._4_4_;
    iVar2 = *(int *)(lVar26 + 0x308);
    local_7b8 = (undefined1 *)((ulong)local_7b8 & 0xffffffff00000000);
    lVar38 = *(long *)(piVar24 + 2);
    iVar10 = *(int *)(*(long *)(lVar38 + 0x488) + 0x2c);
    iVar21 = -0x80000000;
    if (iVar10 != -1) {
      iVar21 = iVar10 + 1;
    }
    local_7d0 = puVar27;
    FUN_02fad350(piVar24,lVar38,lVar38 + 0x530,*(undefined8 *)(*(long *)(lVar38 + 0x488) + 8),iVar21
                 ,*(undefined8 *)(*(long *)(lVar38 + 0x488) + 0x38),&local_7e0,pplVar9);
    iVar21 = ((int)local_7e0[1] - (iVar2 + uVar33)) + local_7c8._4_4_;
    if (iVar21 != 0) {
      if (puVar27 == local_7d0) {
LAB_02feb2a4:
        sVar32 = (short)uVar33;
        puVar27 = local_7d0;
        uVar33 = local_7c8._4_4_;
      }
      else {
        if (uVar33 == (*puVar27 & 0xffff)) {
          puVar27 = *(uint **)(puVar27 + 2);
          uVar29 = 0;
          uVar33 = 0;
        }
        sVar32 = (short)uVar33;
        if (puVar27 == local_7d0) goto LAB_02feb2a4;
        uVar33 = *puVar27;
      }
      sVar32 = (short)uVar33 - sVar32;
      lVar38 = *(long *)(param_1 + 0x10);
      puVar39 = (undefined8 *)**(undefined8 **)(lVar38 + 0xc0);
      iVar2 = (int)local_7b8;
      iVar10 = *(int *)((long)puVar39 + 0x1c);
      if (*(int *)((long)puVar39 + 0xc) == 0) {
        *puVar39 = puVar27;
        *(undefined2 *)(puVar39 + 1) = uVar29;
        *(short *)((long)puVar39 + 10) = sVar32;
        *(int *)((long)puVar39 + 0xc) = iVar21;
        puVar39[2] = 0;
        *(undefined1 *)(puVar39 + 3) = 1;
        *(undefined1 *)((long)puVar39 + 0x1b) = local_96;
        *(undefined2 *)((long)puVar39 + 0x19) = local_98;
        *(int *)((long)puVar39 + 0x1c) = (int)local_7b8;
      }
      else {
        if ((int)local_7c8 < 0xf81) {
          puVar20 = (undefined8 *)((long)local_7d0 + (long)(int)local_7c8 + 0x20);
        }
        else {
          puVar20 = (undefined8 *)FUN_031c36f4(&local_7e0);
        }
        *puVar20 = puVar27;
        *(undefined2 *)(puVar20 + 1) = uVar29;
        *(short *)((long)puVar20 + 10) = sVar32;
        *(int *)((long)puVar20 + 0xc) = iVar21;
        puVar20[2] = 0;
        *(undefined1 *)(puVar20 + 3) = 1;
        *(undefined1 *)((long)puVar20 + 0x1b) = local_96;
        *(undefined2 *)((long)puVar20 + 0x19) = local_98;
        *(int *)((long)puVar20 + 0x1c) = iVar2;
        if (*(int *)((long)puVar39 + 0xc) == 0) {
          uVar8 = puVar20[3];
          puVar39[1] = puVar20[1];
          puVar39[3] = uVar8;
          uVar8 = *puVar20;
          puVar39[2] = puVar20[2];
          *puVar39 = uVar8;
        }
        else {
          puVar20[2] = puVar39[2];
          puVar39[2] = puVar20;
        }
        local_7c8 = (uint *)CONCAT44(local_7c8._4_4_ + 1,(int)local_7c8 + 0x20);
        **(undefined8 **)(lVar38 + 0xc0) = puVar20;
      }
      *(int *)(**(long **)(lVar38 + 0xc0) + 0x1c) = iVar10 + iVar2;
    }
    puVar20 = local_88;
    puVar39 = (undefined8 *)PTR_DAT_047d1a08;
    if (lVar14 != 0) {
      if (local_74 == 0) {
        plVar28 = local_90 + 3;
        iVar21 = (int)*plVar28;
        if (iVar21 < 2) goto LAB_02feb458;
        iVar10 = *(int *)(local_88 + 0xb);
        lVar37 = *(long *)(local_90[2] + (long)(iVar21 + -2) * 8);
        lVar38 = local_88[1];
        *(undefined8 *)(lVar38 + (long)iVar10 * 8) =
             *(undefined8 *)(local_90[2] + (long)(iVar21 + -1) * 8);
        *(int *)(local_88 + 0xb) = iVar10 + 1;
        if (*(int *)((long)local_88 + 0x5c) <= iVar10 + 1) {
          (**(code **)(*(long *)*local_88 + 0x28))
                    ((long *)*local_88,lVar38 + (long)(iVar10 + -5) * 8,6);
          *(int *)(puVar20 + 0xb) = iVar10 + -5;
        }
        *(undefined8 *)(lVar37 + 8) = 0;
        uVar33 = 0xffffffff;
      }
      else {
LAB_02feb458:
        plVar28 = local_90 + 1;
        local_80[2] = 0;
        local_80[3] = 0;
        *local_80 = *local_80 & 0xffff0000 | local_74 & 0xffff;
        *local_80 = *local_80 & 0xffff | local_78 << 0x10;
        uVar33 = local_74;
      }
      *(uint *)plVar28 = (int)*plVar28 + uVar33;
      local_90 = (long *)0x0;
      local_80 = (uint *)0x0;
    }
    puVar20 = local_7d8;
    if (local_7c8._4_4_ == 0) {
      plVar28 = local_7e0 + 3;
      iVar21 = (int)*plVar28;
      if (iVar21 < 2) goto LAB_02feb524;
      iVar10 = *(int *)(local_7d8 + 0xb);
      lVar37 = *(long *)(local_7e0[2] + (long)(iVar21 + -2) * 8);
      lVar38 = local_7d8[1];
      *(undefined8 *)(lVar38 + (long)iVar10 * 8) =
           *(undefined8 *)(local_7e0[2] + (long)(iVar21 + -1) * 8);
      *(int *)(local_7d8 + 0xb) = iVar10 + 1;
      if (*(int *)((long)local_7d8 + 0x5c) <= iVar10 + 1) {
        (**(code **)(*(long *)*local_7d8 + 0x28))
                  ((long *)*local_7d8,lVar38 + (long)(iVar10 + -5) * 8,6);
        *(int *)(puVar20 + 0xb) = iVar10 + -5;
      }
      *(undefined8 *)(lVar37 + 8) = 0;
      uVar33 = 0xffffffff;
    }
    else {
LAB_02feb524:
      plVar28 = local_7e0 + 1;
      local_7d0[2] = 0;
      local_7d0[3] = 0;
      *local_7d0 = *local_7d0 & 0xffff0000 | local_7c8._4_4_ & 0xffff;
      *local_7d0 = *local_7d0 & 0xffff | (int)local_7c8 << 0x10;
      uVar33 = local_7c8._4_4_;
    }
    puVar20 = local_88;
    *(uint *)plVar28 = (int)*plVar28 + uVar33;
    local_7e0 = (long *)0x0;
    local_7d0 = (uint *)0x0;
    if (local_90 != (long *)0x0) {
      if (local_74 == 0) {
        plVar28 = local_90 + 3;
        iVar21 = (int)*plVar28;
        if (iVar21 < 2) goto LAB_02feb5f4;
        iVar10 = *(int *)(local_88 + 0xb);
        lVar37 = *(long *)(local_90[2] + (long)(iVar21 + -2) * 8);
        lVar38 = local_88[1];
        *(undefined8 *)(lVar38 + (long)iVar10 * 8) =
             *(undefined8 *)(local_90[2] + (long)(iVar21 + -1) * 8);
        *(int *)(local_88 + 0xb) = iVar10 + 1;
        if (*(int *)((long)local_88 + 0x5c) <= iVar10 + 1) {
          (**(code **)(*(long *)*local_88 + 0x28))
                    ((long *)*local_88,lVar38 + (long)(iVar10 + -5) * 8,6);
          *(int *)(puVar20 + 0xb) = iVar10 + -5;
        }
        *(undefined8 *)(lVar37 + 8) = 0;
        uVar33 = 0xffffffff;
      }
      else {
LAB_02feb5f4:
        plVar28 = local_90 + 1;
        local_80[2] = 0;
        local_80[3] = 0;
        *local_80 = *local_80 & 0xffff0000 | local_74 & 0xffff;
        *local_80 = *local_80 & 0xffff | local_78 << 0x10;
        uVar33 = local_74;
      }
      puVar20 = local_7d8;
      *(uint *)plVar28 = (int)*plVar28 + uVar33;
      if (local_7e0 != (long *)0x0) {
        if (local_7c8._4_4_ == 0) {
          plVar28 = local_7e0 + 3;
          iVar21 = (int)*plVar28;
          if (iVar21 < 2) goto LAB_02feb6bc;
          iVar10 = *(int *)(local_7d8 + 0xb);
          lVar37 = *(long *)(local_7e0[2] + (long)(iVar21 + -2) * 8);
          lVar38 = local_7d8[1];
          *(undefined8 *)(lVar38 + (long)iVar10 * 8) =
               *(undefined8 *)(local_7e0[2] + (long)(iVar21 + -1) * 8);
          *(int *)(local_7d8 + 0xb) = iVar10 + 1;
          if (*(int *)((long)local_7d8 + 0x5c) <= iVar10 + 1) {
            (**(code **)(*(long *)*local_7d8 + 0x28))
                      ((long *)*local_7d8,lVar38 + (long)(iVar10 + -5) * 8,6);
            *(int *)(puVar20 + 0xb) = iVar10 + -5;
          }
          *(undefined8 *)(lVar37 + 8) = 0;
          uVar33 = 0xffffffff;
        }
        else {
LAB_02feb6bc:
          plVar28 = local_7e0 + 1;
          local_7d0[2] = 0;
          local_7d0[3] = 0;
          *local_7d0 = *local_7d0 & 0xffff0000 | local_7c8._4_4_ & 0xffff;
          *local_7d0 = *local_7d0 & 0xffff | (int)local_7c8 << 0x10;
          uVar33 = local_7c8._4_4_;
        }
        *(uint *)plVar28 = (int)*plVar28 + uVar33;
        local_7e0 = (long *)0x0;
        local_7d0 = (uint *)0x0;
      }
    }
  }
  if (plVar35 == (long *)0x0) {
    lVar38 = *(long *)(param_1 + 0x10);
    iVar21 = *(int *)(lVar38 + 0xb8);
    if (0 < iVar21) {
      lVar37 = 0;
      iVar10 = 0;
      lVar26 = 0x1c;
      do {
        uVar33 = *(int *)(*(long *)(*(long *)(lVar38 + 0xc0) + lVar37 * 8) + 0x1c) + 0x3fU &
                 0xffffffc0;
        if (uVar33 != 0) {
          *(int *)(*(long *)(lVar38 + 0xb0) + lVar26) = iVar10;
          *(uint *)(*(long *)(lVar38 + 0xe0) + lVar37 * 4) = uVar33;
          iVar21 = *(int *)(lVar38 + 0xb8);
          iVar10 = uVar33 + iVar10;
        }
        lVar37 = lVar37 + 1;
        lVar26 = lVar26 + 0x20;
      } while (lVar37 < iVar21);
      if (0 < iVar10) {
        local_7e0 = (long *)(long)(iVar10 + 0x30);
        uVar8 = (*(code *)*puVar39)(0,&local_7e0,0);
        *(undefined8 *)(lVar38 + 0xf0) = uVar8;
      }
    }
    lVar38 = *(long *)(param_1 + 0x10);
    iVar21 = *(int *)(lVar38 + 0x18);
    if (0 < iVar21) {
      lVar37 = 0;
      iVar10 = 0;
      lVar26 = 0x1c;
      do {
        uVar33 = *(int *)(*(long *)(*(long *)(lVar38 + 0x20) + lVar37 * 8) + 0x1c) + 0x3fU &
                 0xffffffc0;
        if (uVar33 != 0) {
          *(int *)(*(long *)(lVar38 + 0x10) + lVar26) = iVar10;
          *(uint *)(*(long *)(lVar38 + 0x40) + lVar37 * 4) = uVar33;
          iVar21 = *(int *)(lVar38 + 0x18);
          iVar10 = uVar33 + iVar10;
        }
        lVar37 = lVar37 + 1;
        lVar26 = lVar26 + 0x20;
      } while (lVar37 < iVar21);
      if (0 < iVar10) {
        local_7e0 = (long *)(long)(iVar10 + 0x30);
        uVar8 = (*(code *)*puVar39)(0,&local_7e0,0);
        *(undefined8 *)(lVar38 + 0x50) = uVar8;
      }
    }
    lVar38 = *(long *)(param_1 + 0x10);
    iVar21 = *(int *)(lVar38 + 0x68);
    if (0 < iVar21) {
      lVar37 = 0;
      iVar10 = 0;
      lVar26 = 0x1c;
      do {
        uVar33 = *(int *)(*(long *)(*(long *)(lVar38 + 0x70) + lVar37 * 8) + 0x1c) + 0x3fU &
                 0xffffffc0;
        if (uVar33 != 0) {
          *(int *)(*(long *)(lVar38 + 0x60) + lVar26) = iVar10;
          *(uint *)(*(long *)(lVar38 + 0x90) + lVar37 * 4) = uVar33;
          iVar21 = *(int *)(lVar38 + 0x68);
          iVar10 = uVar33 + iVar10;
        }
        lVar37 = lVar37 + 1;
        lVar26 = lVar26 + 0x20;
      } while (lVar37 < iVar21);
      if (0 < iVar10) {
        local_7e0 = (long *)(long)(iVar10 + 0x30);
        uVar8 = (*(code *)*puVar39)(0,&local_7e0,0);
        *(undefined8 *)(lVar38 + 0xa0) = uVar8;
      }
    }
    puVar16 = *(undefined4 **)(*(long *)(piVar24 + 0x150) + (long)piVar24[0x152] * 8 + -8);
    uVar3 = *puVar16;
    uVar4 = *puVar16;
    *(undefined4 **)(piVar24 + 0x1d0) = puVar16;
    *(short *)(piVar24 + 0x1d2) = (short)((uint)uVar3 >> 0x10);
    *(short *)((long)piVar24 + 0x74a) = (short)uVar4;
    piVar24[0x1d3] = -piVar24[0x14e];
    FUN_02f1f8bc(piVar24,lVar40,lVar40 + 0x180);
  }
  else {
    lVar38 = *plVar35;
    if (((*(byte *)(lVar38 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar20 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = &DAT_03c4e575;
        puVar20[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
    puVar20 = (undefined8 *)plVar35[2];
    uVar34 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = &DAT_03c3697b;
      uVar8 = nn::os::GetSystemTick();
      puVar20[1] = uVar8;
    }
    if (*(code **)(lVar38 + 0x20) != (code *)0x0) {
      (**(code **)(lVar38 + 0x20))(*(undefined8 *)(lVar38 + 0x28));
      if (*(code **)(lVar38 + 0x20) != (code *)0x0) {
        (**(code **)(lVar38 + 0x20))(*(undefined8 *)(lVar38 + 0x28));
      }
    }
    lVar38 = *(long *)(param_1 + 0x10);
    iVar21 = *(int *)(lVar38 + 0xb8);
    if (0 < iVar21) {
      lVar37 = 0;
      iVar10 = 0;
      lVar26 = 0x1c;
      do {
        uVar33 = *(int *)(*(long *)(*(long *)(lVar38 + 0xc0) + lVar37 * 8) + 0x1c) + 0x3fU &
                 0xffffffc0;
        if (uVar33 != 0) {
          *(int *)(*(long *)(lVar38 + 0xb0) + lVar26) = iVar10;
          *(uint *)(*(long *)(lVar38 + 0xe0) + lVar37 * 4) = uVar33;
          iVar21 = *(int *)(lVar38 + 0xb8);
          iVar10 = uVar33 + iVar10;
        }
        lVar37 = lVar37 + 1;
        lVar26 = lVar26 + 0x20;
      } while (lVar37 < iVar21);
      if (0 < iVar10) {
        local_7e0 = (long *)(long)(iVar10 + 0x30);
        uVar8 = (*(code *)*puVar39)(0,&local_7e0,0);
        *(undefined8 *)(lVar38 + 0xf0) = uVar8;
      }
    }
    lVar38 = *(long *)(param_1 + 0x10);
    iVar21 = *(int *)(lVar38 + 0x18);
    if (0 < iVar21) {
      lVar37 = 0;
      iVar10 = 0;
      lVar26 = 0x1c;
      do {
        uVar33 = *(int *)(*(long *)(*(long *)(lVar38 + 0x20) + lVar37 * 8) + 0x1c) + 0x3fU &
                 0xffffffc0;
        if (uVar33 != 0) {
          *(int *)(*(long *)(lVar38 + 0x10) + lVar26) = iVar10;
          *(uint *)(*(long *)(lVar38 + 0x40) + lVar37 * 4) = uVar33;
          iVar21 = *(int *)(lVar38 + 0x18);
          iVar10 = uVar33 + iVar10;
        }
        lVar37 = lVar37 + 1;
        lVar26 = lVar26 + 0x20;
      } while (lVar37 < iVar21);
      if (0 < iVar10) {
        local_7e0 = (long *)(long)(iVar10 + 0x30);
        uVar8 = (*(code *)*puVar39)(0,&local_7e0,0);
        *(undefined8 *)(lVar38 + 0x50) = uVar8;
      }
    }
    lVar38 = *(long *)(param_1 + 0x10);
    iVar21 = *(int *)(lVar38 + 0x68);
    if (0 < iVar21) {
      lVar37 = 0;
      iVar10 = 0;
      lVar26 = 0x1c;
      do {
        uVar33 = *(int *)(*(long *)(*(long *)(lVar38 + 0x70) + lVar37 * 8) + 0x1c) + 0x3fU &
                 0xffffffc0;
        if (uVar33 != 0) {
          *(int *)(*(long *)(lVar38 + 0x60) + lVar26) = iVar10;
          *(uint *)(*(long *)(lVar38 + 0x90) + lVar37 * 4) = uVar33;
          iVar21 = *(int *)(lVar38 + 0x68);
          iVar10 = uVar33 + iVar10;
        }
        lVar37 = lVar37 + 1;
        lVar26 = lVar26 + 0x20;
      } while (lVar37 < iVar21);
      if (0 < iVar10) {
        local_7e0 = (long *)(long)(iVar10 + 0x30);
        uVar8 = (*(code *)*puVar39)(0,&local_7e0,0);
        *(undefined8 *)(lVar38 + 0xa0) = uVar8;
      }
    }
    puVar16 = *(undefined4 **)(*(long *)(piVar24 + 0x150) + (long)piVar24[0x152] * 8 + -8);
    uVar3 = *puVar16;
    uVar4 = *puVar16;
    *(undefined4 **)(piVar24 + 0x1d0) = puVar16;
    *(short *)(piVar24 + 0x1d2) = (short)((uint)uVar3 >> 0x10);
    *(short *)((long)piVar24 + 0x74a) = (short)uVar4;
    piVar24[0x1d3] = -piVar24[0x14e];
    lVar38 = *plVar35;
    if (*(code **)(lVar38 + 0x18) != (code *)0x0) {
      (**(code **)(lVar38 + 0x18))("PreSolve",8,*(undefined8 *)(lVar38 + 0x28));
      if (*(code **)(lVar38 + 0x18) != (code *)0x0) {
        (**(code **)(lVar38 + 0x18))("PrepareMotions",0xe,*(undefined8 *)(lVar38 + 0x28));
      }
    }
    puVar20 = (undefined8 *)plVar35[2];
    uVar34 = (long)puVar20 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = "LtPreSolve";
      puVar20[2] = "StPrepareMotions";
      uVar8 = nn::os::GetSystemTick();
      puVar20[1] = uVar8;
    }
    if (((*(byte *)(lVar38 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar20 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = &DAT_03c4e575;
        puVar20[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
    FUN_02f1f8bc(piVar24,lVar40,lVar40 + 0x180);
    lVar38 = *plVar35;
    if (((*(byte *)(lVar38 + 0x38) & 1) == 0) || (plVar35[6] == 0)) {
LAB_02feba84:
      puVar31 = (undefined8 *)plVar35[2];
      puVar17 = (undefined8 *)plVar35[3];
    }
    else {
      puVar20 = (undefined8 *)plVar35[2];
      puVar17 = (undefined8 *)plVar35[3];
      puVar31 = (undefined8 *)((long)puVar20 + 0x17U & 0xfffffffffffffff8);
      if (puVar17 < puVar31) goto LAB_02feba84;
      plVar35[2] = (long)puVar31;
      if (puVar20 != (undefined8 *)0x0) {
        *puVar20 = &DAT_03c4e575;
        puVar20[1] = *(undefined8 *)(plVar35[6] + 8);
        goto LAB_02feba84;
      }
    }
    puVar20 = (undefined8 *)((long)puVar31 + 0x17U & 0xfffffffffffffff8);
    if ((puVar20 <= puVar17) && (plVar35[2] = (long)puVar20, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = &DAT_03c3697b;
      uVar8 = nn::os::GetSystemTick();
      puVar31[1] = uVar8;
    }
    if (*(code **)(lVar38 + 0x20) != (code *)0x0) {
      (**(code **)(lVar38 + 0x20))(*(undefined8 *)(lVar38 + 0x28));
      if (*(code **)(lVar38 + 0x20) != (code *)0x0) {
        (**(code **)(lVar38 + 0x20))(*(undefined8 *)(lVar38 + 0x28));
      }
    }
  }
  lVar38 = *(long *)(param_1 + 0x10);
  local_7e0 = (long *)(lVar38 + 0xb0);
  local_7d8 = (long *)(lVar38 + 0x10);
  local_7d0 = (uint *)(lVar38 + 0x60);
  FUN_02f2de30(param_2,piVar24,&local_7e0,*(long *)(lVar40 + 0x628) + 0x3fU & 0xffffffffffffffc0,
               *(long *)(lVar40 + 0x638) + 0x3fU & 0xffffffffffffffc0,
               *(undefined4 *)(lVar40 + 0x640));
  if (plVar35 != (long *)0x0) {
    lVar38 = *plVar35;
    if (*(code **)(lVar38 + 0x18) != (code *)0x0) {
      (**(code **)(lVar38 + 0x18))("PostSolve",9,*(undefined8 *)(lVar38 + 0x28));
      if (*(code **)(lVar38 + 0x18) != (code *)0x0) {
        (**(code **)(lVar38 + 0x18))("UpdateBodies",0xc,*(undefined8 *)(lVar38 + 0x28));
      }
    }
    puVar20 = (undefined8 *)plVar35[2];
    uVar34 = (long)puVar20 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = "LtPostSolve";
      puVar20[2] = "StUpdateBodies";
      uVar8 = nn::os::GetSystemTick();
      puVar20[1] = uVar8;
    }
    if (((*(byte *)(lVar38 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar20 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = &DAT_03c4e575;
        puVar20[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
  }
  local_7e0 = *(long **)(lVar40 + 0x80);
  local_7d8 = local_7e0 + (long)*(int *)(lVar40 + 0x88) * 3;
  local_7b8 = auStack_7a8;
  puVar27 = *(uint **)(lVar40 + 0x38);
  uVar34 = (ulong)*(uint *)(lVar40 + 0x40);
  local_7c8 = puVar27 + uVar34 * 0x30;
  local_7c0 = *(long **)(lVar40 + 0x4c0);
  local_7b0._0_4_ = 0;
  local_7b0._4_4_ = 0x80000100;
  lVar38 = *(long *)(lVar40 + 0x130);
  lVar37 = *(long *)(lVar40 + 0x138);
  uVar33 = *(uint *)(lVar37 + 4);
  local_7d0 = puVar27;
  if ((lVar38 != lVar37) || (uVar33 != 0)) {
    uVar19 = 0;
    uVar30 = 0;
    uVar11 = 0;
    do {
      uVar25 = (ulong)*(uint *)(lVar38 + ((long)((ulong)uVar11 << 0x20) >> 0x1e) + 0x10) & 0xffffff;
      if ((uint)uVar25 < (uint)uVar34) {
        if ((puVar27[uVar25 * 0x30 + 0x15] & 1) != 0) {
          uVar13 = puVar27[uVar25 * 0x30 + 0x14];
          uVar19 = uVar30 + 1;
          uVar12 = uVar30;
          if ((int)(local_7b0._4_4_ & 0x7fffffff) <= (int)uVar30) {
            FUN_02f23d90(&local_7b8,PTR_PTR_047d1a50,(long)(int)uVar19);
            uVar12 = (uint)local_7b0;
          }
          *(uint *)(local_7b8 + (long)(int)uVar12 * 4) = uVar13;
          local_7b0._0_4_ = uVar19;
          if (uVar19 == (local_7b0._4_4_ & 0x7fffffff)) {
            if (-1 < (int)uVar30) {
              uVar34 = (ulong)uVar19;
              do {
                uVar25 = uVar34 - 1;
                uVar22 = (ulong)*(uint *)(local_7b8 + uVar25 * 4) & 0xffffff;
                (local_7d0 + uVar22 * 0x30 + 0x16)[0] = 0;
                (local_7d0 + uVar22 * 0x30 + 0x16)[1] = 0;
                plVar28 = local_7e0 + uVar22 * 3;
                lVar26 = *(long *)(local_7d0 + uVar22 * 0x30 + 0x18);
                lVar23 = *(long *)(local_7d0 + uVar22 * 0x30 + 0x1c);
                plVar28[1] = *(long *)(local_7d0 + uVar22 * 0x30 + 0x1a);
                plVar28[2] = lVar23;
                *plVar28 = lVar26;
                if (((byte)local_7d0[uVar22 * 0x30 + 0x22] >> 2 & 1) == 0) {
                  uVar30 = (uint)local_7b0 - 1;
                  bVar7 = uVar19 != (uint)local_7b0;
                  local_7b0._0_4_ = uVar30;
                  if (bVar7) {
                    *(undefined4 *)(local_7b8 + uVar25 * 4) =
                         *(undefined4 *)(local_7b8 + (long)(int)uVar30 * 4);
                  }
                }
                bVar7 = 1 < (long)uVar34;
                uVar19 = uVar19 - 1;
                uVar34 = uVar25;
              } while (bVar7);
            }
            (**(code **)(*local_7c0 + 0x40))(local_7c0,local_7b8,(uint)local_7b0,4);
            if (-1 < (int)(uint)local_7b0) {
              uVar19 = 0;
              uVar30 = 0;
              if ((uint)local_7b0 == 0) goto LAB_02febfa4;
            }
            uVar19 = 0;
            local_7b0._0_4_ = 0;
            uVar30 = 0;
          }
          else {
            uVar30 = uVar19;
          }
        }
      }
LAB_02febfa4:
      uVar13 = uVar11 + 1;
      if ((0xfe < (int)uVar11) || (*(int *)(lVar38 + 4) <= (int)uVar13)) {
        if (*(long *)(lVar38 + 8) != 0) {
          uVar13 = 0;
          lVar38 = *(long *)(lVar38 + 8);
        }
      }
      if ((lVar38 == lVar37) && (uVar33 == uVar13)) goto LAB_02febfe4;
      uVar34 = (ulong)*(uint *)(lVar40 + 0x40);
      uVar11 = uVar13;
    } while( true );
  }
  uVar19 = 0;
LAB_02febff4:
  if (plVar35 != (long *)0x0) {
    lVar38 = *plVar35;
    if (((*(byte *)(lVar38 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar20 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = &DAT_03c4e575;
        puVar20[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
    puVar20 = (undefined8 *)plVar35[2];
    uVar34 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
    if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
      *puVar20 = &DAT_03c3697b;
      uVar8 = nn::os::GetSystemTick();
      puVar20[1] = uVar8;
    }
    if (*(code **)(lVar38 + 0x20) != (code *)0x0) {
      (**(code **)(lVar38 + 0x20))(*(undefined8 *)(lVar38 + 0x28));
      if (*(code **)(lVar38 + 0x20) != (code *)0x0) {
        (**(code **)(lVar38 + 0x20))(*(undefined8 *)(lVar38 + 0x28));
      }
    }
    uVar19 = (uint)local_7b0;
  }
  if (uVar19 != 0) {
    if (0 < (int)uVar19) {
      uVar34 = (ulong)uVar19;
      do {
        uVar25 = uVar34 - 1;
        uVar22 = (ulong)*(uint *)(local_7b8 + uVar25 * 4) & 0xffffff;
        (local_7d0 + uVar22 * 0x30 + 0x16)[0] = 0;
        (local_7d0 + uVar22 * 0x30 + 0x16)[1] = 0;
        plVar28 = local_7e0 + uVar22 * 3;
        lVar38 = *(long *)(local_7d0 + uVar22 * 0x30 + 0x18);
        lVar37 = *(long *)(local_7d0 + uVar22 * 0x30 + 0x1c);
        plVar28[1] = *(long *)(local_7d0 + uVar22 * 0x30 + 0x1a);
        plVar28[2] = lVar37;
        *plVar28 = lVar38;
        if (((byte)local_7d0[uVar22 * 0x30 + 0x22] >> 2 & 1) == 0) {
          uVar33 = (uint)local_7b0 - 1;
          bVar7 = uVar19 != (uint)local_7b0;
          local_7b0._0_4_ = uVar33;
          if (bVar7) {
            *(undefined4 *)(local_7b8 + uVar25 * 4) =
                 *(undefined4 *)(local_7b8 + (long)(int)uVar33 * 4);
          }
        }
        bVar7 = 1 < (long)uVar34;
        uVar19 = uVar19 - 1;
        uVar34 = uVar25;
      } while (bVar7);
      uVar19 = (uint)local_7b0;
    }
    (**(code **)(*local_7c0 + 0x40))(local_7c0,local_7b8,uVar19,4);
    if (((int)(uint)local_7b0 < 0) || ((uint)local_7b0 != 0)) {
    }
  }
  uVar33 = local_7b0._4_4_;
  uVar34 = (ulong)local_7b0._4_4_;
  local_7b0 = (ulong)local_7b0._4_4_ << 0x20;
  if ((-1 < (int)uVar33) && (local_7b8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_7b8,uVar34 << 2);
  }
  if (lVar14 != 0) {
    if (plVar35 != (long *)0x0) {
      lVar14 = *plVar35;
      if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
        (**(code **)(lVar14 + 0x18))("PostSolve",9,*(undefined8 *)(lVar14 + 0x28));
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))("UnionFind",9,*(undefined8 *)(lVar14 + 0x28));
        }
      }
      puVar20 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar20 + 0x1fU & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
        *puVar20 = "LtPostSolve";
        puVar20[2] = "StUnionFind";
        uVar8 = nn::os::GetSystemTick();
        puVar20[1] = uVar8;
      }
      if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
        puVar20 = (undefined8 *)plVar35[2];
        uVar34 = (long)puVar20 + 0x17U & 0xfffffffffffffff8;
        if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar20 != (undefined8 *)0x0)) {
          *puVar20 = &DAT_03c4e575;
          puVar20[1] = *(undefined8 *)(plVar35[6] + 8);
        }
      }
    }
    puVar6 = PTR_PTR_047d1a50;
    local_7e0 = (long *)0x0;
    local_7d8 = (long *)0x8000000000000000;
    local_7d0 = (uint *)0x0;
    local_7c8 = (uint *)0x8000000000000000;
    FUN_02fab7ec(&local_7e0,PTR_PTR_047d1a50,1);
    if ((int)local_7d8 != 1) {
      local_7d8 = (long *)CONCAT44(local_7d8._4_4_,1);
    }
    if (((ulong)local_7c8 & 0x7fffffff00000000) == 0) {
      FUN_02fab960(&local_7d0,PTR_PTR_047d1a50,1);
    }
    if ((int)local_7c8 != 1) {
      local_7c8 = (uint *)CONCAT44(local_7c8._4_4_,1);
    }
    if (0 < (int)local_7d8) {
      lVar14 = 0;
      lVar38 = 0;
      do {
        *(undefined8 *)((long)local_7e0 + lVar14) = 0xffffffff;
        lVar37 = (long)local_7e0 + lVar14;
        lVar14 = lVar14 + 8;
        *(long *)(local_7d0 + lVar38 * 2) = lVar37;
        lVar38 = lVar38 + 1;
      } while (lVar38 < (int)local_7d8);
    }
    *local_7e0 = 0;
    *(undefined4 *)(*local_820 + 0x14) = 0;
    FUN_02f5e6f8(local_820,plVar15,&local_7e0,lVar40 + 0x140);
    *(undefined1 *)((long)local_820 + 0x134) = 0;
    FUN_02f53998(*(undefined8 *)(lVar40 + 0x698),piVar24,local_820,*(undefined8 *)(piVar24 + 0x12e),
                 &local_7e0,lVar40 + 0x180,plVar35);
    FUN_02f5e5b8(local_820);
    (*(code *)puVar39[1])(0,local_820,0);
    if (plVar35 != (long *)0x0) {
      lVar14 = *plVar35;
      if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
        puVar39 = (undefined8 *)plVar35[2];
        uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
        if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
          *puVar39 = &DAT_03c4e575;
          puVar39[1] = *(undefined8 *)(plVar35[6] + 8);
        }
      }
      puVar39 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
        *puVar39 = &DAT_03c3697b;
        uVar8 = nn::os::GetSystemTick();
        puVar39[1] = uVar8;
      }
      if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
        (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
          (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        }
      }
    }
    uVar34 = (ulong)local_7c8;
    uVar25 = (ulong)local_7c8._4_4_;
    local_7c8 = (uint *)((ulong)local_7c8._4_4_ << 0x20);
    if ((-1 < (long)uVar34) && (local_7d0 != (uint *)0x0)) {
      (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_7d0,uVar25 << 3);
    }
    lVar14 = (long)local_7d8;
    local_7c8 = (uint *)CONCAT44(0x80000000,(int)local_7c8);
    uVar34 = (ulong)local_7d8._4_4_;
    local_7d0 = (uint *)0x0;
    local_7d8 = (long *)((ulong)local_7d8._4_4_ << 0x20);
    if ((-1 < lVar14) && (local_7e0 != (long *)0x0)) {
      (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_7e0,uVar34 << 3);
    }
  }
  if (plVar35 != (long *)0x0) {
    lVar14 = *plVar35;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))("FinalizeSolve",0xd,*(undefined8 *)(lVar14 + 0x28));
    }
    puVar39 = (undefined8 *)plVar35[2];
    uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
    if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
      *puVar39 = "TtFinalizeSolve";
      uVar8 = nn::os::GetSystemTick();
      puVar39[1] = uVar8;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar39 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
        *puVar39 = &DAT_03c4e575;
        puVar39[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
  }
  *(undefined4 *)(lVar40 + 0x818) = 0x40;
  local_7e0 = plVar35;
  FUN_02f227c8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x110),piVar24,
               *(undefined8 *)(lVar40 + 0x7f8));
  if (plVar35 == (long *)0x0) {
    uVar33 = piVar24[0x146];
    if ((int)uVar33 < 1) goto LAB_02fec848;
    local_98 = CONCAT11(local_98._1_1_,_DAT_00000010 < _DAT_00000020);
    if (_DAT_00000010 >= _DAT_00000020) goto LAB_02fec700;
LAB_02fec674:
    local_90 = plVar35;
    memset(&local_7e0,0,0x740);
    local_78c = 1;
  }
  else {
    lVar14 = *plVar35;
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar39 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
        *puVar39 = &DAT_03c4e575;
        puVar39[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
    puVar39 = (undefined8 *)plVar35[2];
    uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
    if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
      *puVar39 = &DAT_03c2d363;
      uVar8 = nn::os::GetSystemTick();
      puVar39[1] = uVar8;
    }
    if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
      (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
    }
    uVar33 = piVar24[0x146];
    if ((int)uVar33 < 1) goto LAB_02fec848;
    lVar14 = *plVar35;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))("FullCast",8,*(undefined8 *)(lVar14 + 0x28));
    }
    puVar39 = (undefined8 *)plVar35[2];
    uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
    if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
      *puVar39 = "TtFullCast";
      uVar8 = nn::os::GetSystemTick();
      puVar39[1] = uVar8;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar39 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
        *puVar39 = &DAT_03c4e575;
        puVar39[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
    local_98 = CONCAT11(local_98._1_1_,(ulong)plVar35[2] < (ulong)plVar35[4]);
    if ((ulong)plVar35[2] < (ulong)plVar35[4]) goto LAB_02fec674;
LAB_02fec700:
    pplVar9 = &local_7e0;
    do {
      pplVar18 = pplVar9 + 2;
      pplVar9[1] = (long *)0x100000001;
      *pplVar9 = (long *)0x100000001;
      pplVar9 = pplVar18;
    } while (pplVar18 < &plStack_a0);
    local_78c = 0;
    local_90 = plVar35;
  }
  local_6f0 = local_78c;
  local_5ec = local_78c;
  local_4e8 = local_78c;
  local_498 = local_78c;
  local_444 = local_78c;
  local_424 = local_78c;
  local_300 = local_78c;
  local_2b0 = local_78c;
  local_244 = local_78c;
  local_120 = local_78c;
  local_d0 = local_78c;
  local_ac = local_78c;
  local_a8 = local_78c;
  if (1 < (int)uVar33) {
    FUN_02fecad0(*(undefined8 *)(piVar24 + 0x144),0,uVar33 - 1);
  }
  uVar34 = 0;
  iVar21 = 0x7fffffff;
  do {
    iVar10 = *(int *)(*(long *)(piVar24 + 0x144) + uVar34 * 4);
    if (iVar10 != iVar21) {
      FUN_02fc68e0(piVar24,iVar10,&local_7e0);
      iVar21 = iVar10;
    }
    uVar34 = uVar34 + 1;
  } while (uVar33 != uVar34);
  FUN_02f70d9c(&local_7e0,plVar35);
  piVar24[0x146] = 0;
  if (plVar35 != (long *)0x0) {
    lVar14 = *plVar35;
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar35[6] != 0)) {
      puVar39 = (undefined8 *)plVar35[2];
      uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
      if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
        *puVar39 = &DAT_03c4e575;
        puVar39[1] = *(undefined8 *)(plVar35[6] + 8);
      }
    }
    puVar39 = (undefined8 *)plVar35[2];
    uVar34 = (long)puVar39 + 0x17U & 0xfffffffffffffff8;
    if ((uVar34 <= (ulong)plVar35[3]) && (plVar35[2] = uVar34, puVar39 != (undefined8 *)0x0)) {
      *puVar39 = &DAT_03c2d363;
      uVar8 = nn::os::GetSystemTick();
      puVar39[1] = uVar8;
    }
    if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
      (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
    }
  }
LAB_02fec848:
  if (piVar24[0x1d3] + piVar24[0x14e] == 0) {
    piVar24[0x1d3] = 0;
  }
  else {
    puVar27 = *(uint **)(piVar24 + 0x1d0);
    if ((puVar27 != *(uint **)(*(long *)(piVar24 + 0x150) + (long)piVar24[0x152] * 8 + -8)) &&
       ((uint)*(ushort *)((long)piVar24 + 0x74a) == (*puVar27 & 0xffff))) {
      puVar27 = *(uint **)(puVar27 + 2);
      piVar24[0x1d2] = 0;
    }
    *(short *)((long)piVar24 + 0x74a) = (short)*puVar27 - *(short *)((long)piVar24 + 0x74a);
    lVar14 = *(long *)(piVar24 + 0x1cc);
    *(uint **)(piVar24 + 0x1d0) = puVar27;
    piVar24[0x1d3] = piVar24[0x1d3] + piVar24[0x14e];
    puVar6 = PTR_PTR_047d1a50;
    puVar39 = (undefined8 *)**(undefined8 **)(lVar14 + 0x10);
    if (*(int *)((long)puVar39 + 0xc) == 0) {
      puVar39[1] = *(undefined8 *)(piVar24 + 0x1d2);
      uVar8 = *(undefined8 *)(piVar24 + 0x1d0);
      puVar39[2] = *(undefined8 *)(piVar24 + 0x1d4);
      *puVar39 = uVar8;
    }
    else {
      puVar27 = *(uint **)(*(long *)(piVar24 + 0x150) + (long)piVar24[0x152] * 8 + -8);
      puVar20 = *(undefined8 **)(piVar24 + 0x138);
      uVar33 = *puVar27;
      if (0x1e < uVar33 >> 0x17) {
        puVar36 = puVar27;
        do {
          uVar33 = *(int *)(puVar20 + 0xb) - 1;
          if (*(int *)(puVar20 + 0xb) < 1) {
            lVar38 = puVar20[1];
            (**(code **)(*(long *)*puVar20 + 0x20))((long *)*puVar20,lVar38,6);
            puVar31 = (undefined8 *)(lVar38 + 0x28);
            *(undefined4 *)(puVar20 + 0xb) = 5;
          }
          else {
            *(uint *)(puVar20 + 0xb) = uVar33;
            puVar31 = (undefined8 *)(puVar20[1] + (ulong)uVar33 * 8);
          }
          puVar27 = (uint *)*puVar31;
          puVar27[4] = 0;
          puVar27[5] = 0;
          puVar27[6] = 0;
          puVar27[7] = 0;
          puVar27[0] = 0;
          puVar27[1] = 0;
          puVar27[2] = 0;
          puVar27[3] = 0;
          puVar27[1] = piVar24[0x152];
          iVar21 = piVar24[0x152];
          lVar38 = (long)iVar21;
          if ((int)(piVar24[0x153] & 0x7fffffffU) <= iVar21) {
            FUN_031c25b4(piVar24 + 0x150,puVar6,lVar38 + 1);
            iVar21 = piVar24[0x152];
          }
          *(uint **)(*(long *)(piVar24 + 0x150) + (long)iVar21 * 8) = puVar27;
          piVar24[0x152] = (int)(lVar38 + 1);
          *(uint **)(puVar36 + 2) = puVar27;
          uVar33 = *puVar27;
          puVar36 = puVar27;
        } while (0x1e < uVar33 >> 0x17);
      }
      uVar33 = uVar33 >> 0x10;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar27,0x10);
        if (bVar7) {
          *puVar27 = *puVar27 + 0x200001;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      piVar24[0x14e] = piVar24[0x14e] + 1;
      uVar8 = *(undefined8 *)(piVar24 + 0x1d2);
      uVar1 = *(undefined8 *)(piVar24 + 0x1d4);
      puVar20 = (undefined8 *)((long)puVar27 + (ulong)uVar33 + 0x20);
      *puVar20 = *(undefined8 *)(piVar24 + 0x1d0);
      *(undefined8 *)((long)puVar27 + (ulong)uVar33 + 0x28) = uVar8;
      *(undefined8 *)((long)puVar27 + (ulong)uVar33 + 0x30) = uVar1;
      if (*(int *)((long)puVar39 + 0xc) == 0) {
        puVar39[1] = *(undefined8 *)((long)puVar27 + (ulong)uVar33 + 0x28);
        uVar8 = *puVar20;
        puVar39[2] = *(undefined8 *)((long)puVar27 + (ulong)uVar33 + 0x30);
        *puVar39 = uVar8;
      }
      else {
        *(undefined8 *)((long)puVar27 + (ulong)uVar33 + 0x30) = puVar39[2];
        puVar39[2] = puVar20;
      }
      **(long **)(lVar14 + 0x10) = (long)puVar20;
    }
  }
  puVar16 = *(undefined4 **)(*(long *)(piVar24 + 0x150) + (long)piVar24[0x152] * 8 + -8);
  uVar3 = *puVar16;
  uVar4 = *puVar16;
  *(undefined4 **)(piVar24 + 0x1d0) = puVar16;
  *(short *)(piVar24 + 0x1d2) = (short)((uint)uVar3 >> 0x10);
  *(short *)((long)piVar24 + 0x74a) = (short)uVar4;
  piVar24[0x1d3] = -piVar24[0x14e];
  FUN_02f434ec(lVar40,piVar24);
  return;
LAB_02febfe4:
  puVar39 = (undefined8 *)PTR_DAT_047d1a08;
  goto LAB_02febff4;
}


