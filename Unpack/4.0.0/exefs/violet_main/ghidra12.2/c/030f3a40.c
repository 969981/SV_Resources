/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f3a40; name: FUN_030f3a40
 */


void FUN_030f3a40(long param_1,undefined8 *param_2,int *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *local_118;
  undefined1 local_110;
  long local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined4 local_f0;
  long local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_48;
  
  lVar18 = tpidr_el0;
  lVar10 = *(long *)(lVar18 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar10;
  }
  plVar19 = *(long **)(lVar10 + 0x3e0);
  if (plVar19 != (long *)0x0) {
    lVar18 = *plVar19;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("resetClearanceMediator",0x16,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar1 = (undefined8 *)plVar19[2];
    uVar11 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar19[3]) && (plVar19[2] = uVar11, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtresetClearanceMediator";
      uVar8 = nn::os::GetSystemTick();
      puVar1[1] = uVar8;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar1 = (undefined8 *)plVar19[2];
      uVar11 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar19[3]) && (plVar19[2] = uVar11, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
  }
  puVar6 = PTR_PTR_047d1a50;
  local_68 = plVar19;
  if (param_4 != param_5) {
    lVar20 = *(long *)(*(long *)(param_1 + 0x38) + (long)*param_3 * 0x100);
    plVar15 = (long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x18) +
                      (long)*(int *)(*(long *)(lVar20 + 0x20) + 0x180) * 0x18);
    uVar2 = *(uint *)(plVar15 + 1);
    fVar24 = 0.0;
    lVar18 = 8;
    lVar10 = 0;
    do {
      lVar17 = lVar10;
      if ((long)(int)((uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) - 1) + 1 == lVar17)
      goto LAB_030f3bf8;
      lVar13 = *plVar15;
      pfVar16 = (float *)(lVar13 + lVar18);
      lVar18 = lVar18 + 0x18;
      lVar10 = lVar17 + 1;
    } while (*pfVar16 < 0.0);
    if ((int)(lVar17 + 1) != 0) {
      fVar24 = 0.0;
      do {
        iVar14 = (int)lVar17;
        lVar17 = (long)iVar14;
        lVar18 = lVar17 * 2 + (long)iVar14;
        pfVar16 = (float *)(lVar13 + 0x20 + lVar18 * 8);
        fVar22 = *(float *)(lVar13 + lVar18 * 8 + 8);
        iVar14 = iVar14 + 1;
        if (fVar24 <= fVar22) {
          fVar24 = fVar22;
        }
        do {
          lVar17 = lVar17 + 1;
          if ((int)uVar2 <= lVar17) goto LAB_030f3bf8;
          fVar22 = *pfVar16;
          iVar14 = iVar14 + 1;
          pfVar16 = pfVar16 + 6;
        } while (fVar22 < 0.0);
      } while (iVar14 != 0);
    }
LAB_030f3bf8:
    local_78 = 0;
    local_70._0_4_ = 0;
    local_70._4_4_ = 0x80000000;
    if (0 < (int)((ulong)((long)param_5 - (long)param_4) >> 5)) {
      FUN_0300996c(&local_78,PTR_PTR_047d1a50 + 0x20,
                   (ulong)((long)param_5 - (long)param_4) >> 5 & 0xffffffff);
    }
    do {
      uVar26 = param_4[1];
      uVar25 = *param_4;
      uVar23 = param_4[3];
      uVar8 = param_4[2];
      lVar18 = (long)(int)local_70;
      if ((int)(local_70._4_4_ & 0x7fffffff) <= (int)local_70) {
        FUN_02ebb550(&local_78,puVar6 + 0x20,lVar18 + 1);
      }
      puVar1 = (undefined8 *)(local_78 + (long)(int)local_70 * 0x20);
      param_4 = param_4 + 4;
      local_70._0_4_ = (int)(lVar18 + 1);
      puVar1[1] = CONCAT44((float)((ulong)uVar26 >> 0x20) - fVar24,(float)uVar26 - fVar24);
      *puVar1 = CONCAT44((float)((ulong)uVar25 >> 0x20) - fVar24,(float)uVar25 - fVar24);
      puVar1[3] = CONCAT44(fVar24 + (float)((ulong)uVar23 >> 0x20),fVar24 + (float)uVar23);
      puVar1[2] = CONCAT44(fVar24 + (float)((ulong)uVar8 >> 0x20),fVar24 + (float)uVar8);
      puVar5 = PTR_DAT_047d1a08;
    } while (param_4 != param_5);
    local_d8 = 0xffffffff;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = PTR_DAT_047e51d0 + 0x10;
    local_90 = 0x40000000;
    uStack_98 = param_2[1];
    local_a0 = *param_2;
    local_c0 = 0;
    lStack_b8 = local_78;
    local_b0 = local_78 + (long)(int)local_70 * 0x20;
    local_108 = 0;
    local_100 = -0x8000000000000000;
    local_110 = 0;
    local_118 = &DAT_0464dce8;
    local_f8 = &DAT_03d7702c;
    local_f0 = 0;
    lVar10 = *(long *)(lVar20 + 0xc0);
    lVar18 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x20) + 0x68);
    local_48 = 0x28;
    local_e8 = lVar20;
    plVar15 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
    pcVar12 = *(code **)(puVar5 + 0x10);
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(plVar15,"hkaiNavMeshQueryMediator");
    }
    plVar9 = *(long **)(lVar10 + 0x18);
    plVar15[1] = 0xffffffff;
    plVar21 = plVar15 + 2;
    *plVar21 = 1;
    puVar7 = PTR_DAT_047e4fd0;
    plVar15[3] = (long)plVar9;
    *plVar15 = (long)(puVar7 + 0x10);
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar9 = plVar9 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar9 = (long *)plVar15[3];
    }
    plVar15[4] = lVar18;
    (**(code **)(*plVar9 + 0x48))(plVar9,lVar18);
    (**(code **)(*plVar15 + 0x58))(plVar15,&local_e0,&local_118);
    if (plVar15[1] != 0) {
      do {
        lVar18 = *plVar21;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar4) {
          *plVar21 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    local_118 = &DAT_0464dce8;
    if ((local_f8 != (undefined *)0x0) && (*(int *)(local_f8 + 4) != -2)) {
      (**(code **)(puVar5 + 8))(puVar6[8],local_f8,0);
      local_f8 = &DAT_03d7702c;
      local_f0 = 0;
    }
    lVar18 = local_100;
    uVar11 = (ulong)local_100._4_4_;
    local_100 = (ulong)local_100._4_4_ << 0x20;
    if ((-1 < lVar18) && (local_108 != 0)) {
      (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_108,uVar11 << 2);
    }
    uVar2 = local_70._4_4_;
    uVar11 = (ulong)local_70._4_4_;
    local_70 = (ulong)local_70._4_4_ << 0x20;
    if ((-1 < (int)uVar2) && (local_78 != 0)) {
      (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))(puVar6 + 0x20,local_78,uVar11 << 5);
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar18 = *plVar19;
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar1 = (undefined8 *)plVar19[2];
      uVar11 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar19[3]) && (plVar19[2] = uVar11, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar19[2];
    uVar11 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar19[3]) && (plVar19[2] = uVar11, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar8 = nn::os::GetSystemTick();
      puVar1[1] = uVar8;
    }
    if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
      (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
    }
  }
  return;
}


