/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fc21e0; name: FUN_02fc21e0
 */


void FUN_02fc21e0(long param_1,int param_2,int param_3,uint param_4,ulong param_5,int param_6,
                 byte param_7,byte param_8,long param_9,long *param_10)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  uint *puVar26;
  undefined8 *puVar27;
  float fVar28;
  undefined8 uVar29;
  long local_88;
  int local_80 [2];
  undefined8 local_78;
  uint local_70;
  long *local_68;
  
  if (param_10 != (long *)0x0) {
    lVar21 = *param_10;
    if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
      (**(code **)(lVar21 + 0x18))("SolveConstraints",0x10,*(undefined8 *)(lVar21 + 0x28));
    }
    puVar27 = (undefined8 *)param_10[2];
    uVar11 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)param_10[3]) && (param_10[2] = uVar11, puVar27 != (undefined8 *)0x0)) {
      *puVar27 = "TtSolveConstraints";
      uVar7 = nn::os::GetSystemTick();
      puVar27[1] = uVar7;
    }
    if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (param_10[6] != 0)) {
      puVar27 = (undefined8 *)param_10[2];
      uVar11 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)param_10[3]) && (param_10[2] = uVar11, puVar27 != (undefined8 *)0x0)) {
        *puVar27 = &DAT_03c4e575;
        puVar27[1] = *(undefined8 *)(param_10[6] + 8);
      }
    }
  }
  if (param_2 == 2) {
    if (param_10 != (long *)0x0) {
      lVar21 = *param_10;
      if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
        (**(code **)(lVar21 + 0x18))("SolveJacobians2",0xf,*(undefined8 *)(lVar21 + 0x28));
      }
      puVar27 = (undefined8 *)param_10[2];
      uVar11 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)param_10[3]) && (param_10[2] = uVar11, puVar27 != (undefined8 *)0x0)) {
        pcVar12 = "TtSolveJacobians2";
        goto LAB_02fc2400;
      }
      goto LAB_02fc240c;
    }
  }
  else if (param_2 == 1) {
    if (param_10 != (long *)0x0) {
      lVar21 = *param_10;
      if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
        (**(code **)(lVar21 + 0x18))("SolveJacobians1",0xf,*(undefined8 *)(lVar21 + 0x28));
      }
      puVar27 = (undefined8 *)param_10[2];
      uVar11 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)param_10[3]) && (param_10[2] = uVar11, puVar27 != (undefined8 *)0x0)) {
        pcVar12 = "TtSolveJacobians1";
        goto LAB_02fc2400;
      }
      goto LAB_02fc240c;
    }
  }
  else if (param_2 == 0) {
    if (param_10 != (long *)0x0) {
      lVar21 = *param_10;
      if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
        (**(code **)(lVar21 + 0x18))("SolveJacobians0",0xf,*(undefined8 *)(lVar21 + 0x28));
      }
      puVar27 = (undefined8 *)param_10[2];
      uVar11 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)param_10[3]) && (param_10[2] = uVar11, puVar27 != (undefined8 *)0x0)) {
        pcVar12 = "TtSolveJacobians0";
        goto LAB_02fc2400;
      }
      goto LAB_02fc240c;
    }
  }
  else if (param_10 != (long *)0x0) {
    lVar21 = *param_10;
    if (*(code **)(lVar21 + 0x18) != (code *)0x0) {
      (**(code **)(lVar21 + 0x18))("SolveJacobians3+",0x10,*(undefined8 *)(lVar21 + 0x28));
    }
    puVar27 = (undefined8 *)param_10[2];
    uVar11 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)param_10[3]) && (param_10[2] = uVar11, puVar27 != (undefined8 *)0x0)) {
      pcVar12 = "TtSolveJacobians3+";
LAB_02fc2400:
      *puVar27 = pcVar12;
      uVar7 = nn::os::GetSystemTick();
      puVar27[1] = uVar7;
    }
LAB_02fc240c:
    if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (param_10[6] != 0)) {
      puVar27 = (undefined8 *)param_10[2];
      uVar11 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)param_10[3]) && (param_10[2] = uVar11, puVar27 != (undefined8 *)0x0)) {
        *puVar27 = &DAT_03c4e575;
        puVar27[1] = *(undefined8 *)(param_10[6] + 8);
      }
    }
  }
  plVar22 = *(long **)(param_9 + (param_5 & 0xffffffff) * 8 + 0x78);
  lVar23 = (long)param_6;
  lVar21 = *plVar22 + lVar23 * 0x20;
  if (*(int *)(lVar21 + 0xc) != 0) {
    lVar14 = *(long *)(param_9 + 0x40) + (ulong)param_7 * 8;
    uVar7 = NEON_scvtf(CONCAT44(param_2,param_2),4);
    lVar15 = *(long *)(param_9 + 0x10);
    lVar1 = *(long *)(param_9 + 0x40) + (ulong)param_8 * 8;
    iVar9 = *(int *)(lVar14 + 4);
    lVar25 = *(long *)(param_1 + 8);
    fVar28 = (float)*(undefined8 *)(lVar15 + 0xb0);
    uVar29 = NEON_fmov(0x3f800000,4);
    local_78 = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar28 + (float)((ulong)uVar29 >> 0x20),
                        (float)uVar7 * fVar28 + (float)uVar29);
    local_68 = param_10;
    bVar6 = (param_4 & 1) == 0;
    iVar5 = *(int *)(lVar15 + 0x78);
    if (bVar6) {
      iVar5 = *(int *)(lVar15 + 0x78) + -1;
    }
    uVar18 = (uint)(param_3 == 0);
    uVar10 = (uint)(param_3 == 1);
    if (bVar6) {
      uVar10 = uVar18;
    }
    local_70 = 2;
    if (iVar5 != param_3 || *(int *)(lVar15 + 0x70) + -1 != param_2) {
      local_70 = 0;
    }
    uVar19 = 8;
    if ((uVar18 & param_4) == 0) {
      uVar19 = 0;
    }
    uVar20 = 0x10;
    if (uVar10 == 0) {
      uVar20 = 0;
    }
    local_70 = (uint)(param_3 == 0 && param_2 == 0) | uVar18 << 2 | uVar19 | uVar20 | local_70;
    uVar11 = (ulong)*(ushort *)
                     (*(long *)PTR_DAT_047e34d8 +
                      ((ulong)(byte)(param_8 + 1) * 0x20 + (ulong)(byte)(param_8 + 1) +
                      (ulong)(byte)(param_7 + 1)) * 2 + 0x18);
    puVar16 = *(undefined4 **)
               (*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
    uVar2 = *puVar16;
    uVar3 = *puVar16;
    *(undefined4 **)(param_1 + 0x740) = puVar16;
    *(short *)(param_1 + 0x748) = (short)((uint)uVar2 >> 0x10);
    *(short *)(param_1 + 0x74a) = (short)uVar3;
    *(int *)(param_1 + 0x74c) = -*(int *)(param_1 + 0x538);
    local_88 = (plVar22[8] + 0x3fU & 0xffffffffffffffc0) +
               (long)*(int *)(*plVar22 + lVar23 * 0x20 + 0x1c);
    local_80[0] = param_2;
    if (iVar9 == 0) {
      do {
        plVar8 = *(long **)(lVar25 + (ulong)*(byte *)(lVar21 + 0x18) * 8 + 0x658);
        lVar21 = (**(code **)(*plVar8 + 0x20))
                           (plVar8,param_1,param_9,local_80,lVar21,&local_88,lVar1,lVar1);
      } while (lVar21 != 0);
    }
    else {
      do {
        plVar8 = *(long **)(lVar25 + (ulong)*(byte *)(lVar21 + 0x18) * 8 + 0x658);
        lVar21 = (**(code **)(*plVar8 + 0x20))
                           (plVar8,param_1,param_9,local_80,lVar21,&local_88,lVar14,lVar1);
      } while (lVar21 != 0);
    }
    iVar9 = *(int *)(param_1 + 0x74c) + *(int *)(param_1 + 0x538);
    if (iVar9 == 0) {
      *(undefined4 *)(param_1 + 0x74c) = 0;
    }
    else {
      puVar17 = *(uint **)(param_1 + 0x740);
      if ((puVar17 !=
           *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8)) &&
         ((uint)*(ushort *)(param_1 + 0x74a) == (*puVar17 & 0xffff))) {
        puVar17 = *(uint **)(puVar17 + 2);
        *(undefined4 *)(param_1 + 0x748) = 0;
      }
      uVar10 = *puVar17;
      *(uint **)(param_1 + 0x740) = puVar17;
      *(int *)(param_1 + 0x74c) = iVar9;
      lVar21 = *(long *)(param_1 + 0x730);
      *(short *)(param_1 + 0x74a) = (short)uVar10 - *(short *)(param_1 + 0x74a);
      puVar27 = *(undefined8 **)(*(long *)(lVar21 + 0x10) + uVar11 * 8);
      if (*(int *)((long)puVar27 + 0xc) == 0) {
        puVar27[1] = *(undefined8 *)(param_1 + 0x748);
        uVar7 = *(undefined8 *)(param_1 + 0x740);
        puVar27[2] = *(undefined8 *)(param_1 + 0x750);
        *puVar27 = uVar7;
      }
      else {
        puVar17 = *(uint **)(*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
        puVar24 = *(undefined8 **)(param_1 + 0x4e0);
        uVar10 = *puVar17;
        if (0x1e < uVar10 >> 0x17) {
          puVar26 = puVar17;
          do {
            uVar10 = *(int *)(puVar24 + 0xb) - 1;
            if (*(int *)(puVar24 + 0xb) < 1) {
              lVar14 = puVar24[1];
              (**(code **)(*(long *)*puVar24 + 0x20))((long *)*puVar24,lVar14,6);
              *(undefined4 *)(puVar24 + 0xb) = 5;
              puVar13 = (undefined8 *)(lVar14 + 0x28);
            }
            else {
              *(uint *)(puVar24 + 0xb) = uVar10;
              puVar13 = (undefined8 *)(puVar24[1] + (ulong)uVar10 * 8);
            }
            puVar17 = (uint *)*puVar13;
            puVar17[4] = 0;
            puVar17[5] = 0;
            puVar17[6] = 0;
            puVar17[7] = 0;
            puVar17[0] = 0;
            puVar17[1] = 0;
            puVar17[2] = 0;
            puVar17[3] = 0;
            puVar17[1] = *(uint *)(param_1 + 0x548);
            iVar9 = *(int *)(param_1 + 0x548);
            lVar14 = (long)iVar9;
            if ((int)(*(uint *)(param_1 + 0x54c) & 0x7fffffff) <= iVar9) {
              FUN_031c25b4(param_1 + 0x540,PTR_PTR_047d1a50,lVar14 + 1);
              iVar9 = *(int *)(param_1 + 0x548);
            }
            *(uint **)(*(long *)(param_1 + 0x540) + (long)iVar9 * 8) = puVar17;
            *(int *)(param_1 + 0x548) = (int)(lVar14 + 1);
            *(uint **)(puVar26 + 2) = puVar17;
            uVar10 = *puVar17;
            puVar26 = puVar17;
          } while (0x1e < uVar10 >> 0x17);
        }
        uVar10 = uVar10 >> 0x10;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar17,0x10);
          if (bVar6) {
            *puVar17 = *puVar17 + 0x200001;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(int *)(param_1 + 0x538) = *(int *)(param_1 + 0x538) + 1;
        uVar7 = *(undefined8 *)(param_1 + 0x748);
        uVar29 = *(undefined8 *)(param_1 + 0x750);
        puVar24 = (undefined8 *)((long)puVar17 + (ulong)uVar10 + 0x20);
        *puVar24 = *(undefined8 *)(param_1 + 0x740);
        *(undefined8 *)((long)puVar17 + (ulong)uVar10 + 0x28) = uVar7;
        *(undefined8 *)((long)puVar17 + (ulong)uVar10 + 0x30) = uVar29;
        if (*(int *)((long)puVar27 + 0xc) == 0) {
          puVar27[1] = *(undefined8 *)((long)puVar17 + (ulong)uVar10 + 0x28);
          uVar7 = *puVar24;
          puVar27[2] = *(undefined8 *)((long)puVar17 + (ulong)uVar10 + 0x30);
          *puVar27 = uVar7;
        }
        else {
          *(undefined8 *)((long)puVar17 + (ulong)uVar10 + 0x30) = puVar27[2];
          puVar27[2] = puVar24;
        }
        *(undefined8 **)(*(long *)(lVar21 + 0x10) + uVar11 * 8) = puVar24;
      }
    }
    puVar16 = *(undefined4 **)
               (*(long *)(param_1 + 0x540) + (long)*(int *)(param_1 + 0x548) * 8 + -8);
    uVar2 = *puVar16;
    uVar3 = *puVar16;
    *(undefined4 **)(param_1 + 0x740) = puVar16;
    *(short *)(param_1 + 0x748) = (short)((uint)uVar2 >> 0x10);
    *(short *)(param_1 + 0x74a) = (short)uVar3;
    *(int *)(param_1 + 0x74c) = -*(int *)(param_1 + 0x538);
  }
  if (*(int *)(*(long *)(param_9 + 0x10) + 0x70) + -1 == param_2) {
    iVar9 = *(int *)(*(long *)(param_9 + 0x10) + 0x78);
    if ((param_4 & 1) == 0) {
      iVar9 = iVar9 + -1;
    }
    if (iVar9 == param_3) {
      puVar27 = (undefined8 *)(*plVar22 + lVar23 * 0x20);
      *puVar27 = 0;
      *(undefined4 *)((long)puVar27 + 0xc) = 0;
      puVar27[2] = 0;
      *(undefined4 *)((long)puVar27 + 0x1c) = 0;
      *(long *)(plVar22[2] + lVar23 * 8) = *plVar22 + lVar23 * 0x20;
      *(undefined4 *)(*plVar22 + 0x1c) = 0;
      *(undefined1 *)(plVar22[4] + lVar23) = 0;
      *(undefined4 *)(plVar22[6] + lVar23 * 4) = 0;
    }
  }
  if (param_10 == (long *)0x0) {
    return;
  }
  lVar21 = *param_10;
  if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (param_10[6] != 0)) {
    puVar27 = (undefined8 *)param_10[2];
    uVar11 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)param_10[3]) && (param_10[2] = uVar11, puVar27 != (undefined8 *)0x0)) {
      *puVar27 = &DAT_03c4e575;
      puVar27[1] = *(undefined8 *)(param_10[6] + 8);
    }
  }
  puVar27 = (undefined8 *)param_10[2];
  uVar11 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
  if ((uVar11 <= (ulong)param_10[3]) && (param_10[2] = uVar11, puVar27 != (undefined8 *)0x0)) {
    *puVar27 = &DAT_03c2d363;
    uVar7 = nn::os::GetSystemTick();
    puVar27[1] = uVar7;
  }
  if (*(code **)(lVar21 + 0x20) != (code *)0x0) {
    (**(code **)(lVar21 + 0x20))(*(undefined8 *)(lVar21 + 0x28));
  }
  lVar21 = *param_10;
  if (((*(byte *)(lVar21 + 0x38) & 1) != 0) && (param_10[6] != 0)) {
    puVar27 = (undefined8 *)param_10[2];
    puVar13 = (undefined8 *)param_10[3];
    puVar24 = (undefined8 *)((long)puVar27 + 0x17U & 0xfffffffffffffff8);
    if (puVar24 <= puVar13) {
      param_10[2] = (long)puVar24;
      if (puVar27 == (undefined8 *)0x0) goto LAB_02fc29d8;
      *puVar27 = &DAT_03c4e575;
      puVar27[1] = *(undefined8 *)(param_10[6] + 8);
    }
  }
  puVar24 = (undefined8 *)param_10[2];
  puVar13 = (undefined8 *)param_10[3];
LAB_02fc29d8:
  puVar27 = (undefined8 *)((long)puVar24 + 0x17U & 0xfffffffffffffff8);
  if ((puVar27 <= puVar13) && (param_10[2] = (long)puVar27, puVar24 != (undefined8 *)0x0)) {
    *puVar24 = &DAT_03c2d363;
    uVar7 = nn::os::GetSystemTick();
    puVar24[1] = uVar7;
  }
  if (*(code **)(lVar21 + 0x20) != (code *)0x0) {
    (**(code **)(lVar21 + 0x20))(*(undefined8 *)(lVar21 + 0x28));
  }
  return;
}


