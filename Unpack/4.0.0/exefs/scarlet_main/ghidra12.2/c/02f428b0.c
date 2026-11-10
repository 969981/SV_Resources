/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f428b0; name: FUN_02f428b0
 */


void FUN_02f428b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  uint *puVar21;
  undefined8 *puVar22;
  
  lVar18 = tpidr_el0;
  lVar10 = *(long *)(lVar18 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar18 + 0x1000b8) = lVar10;
  }
  plVar20 = *(long **)(lVar10 + 0x3e0);
  if (plVar20 != (long *)0x0) {
    lVar18 = *plVar20;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("PreSolve",8,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar19 = (undefined8 *)plVar20[2];
    uVar11 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = "TtPreSolve";
      uVar6 = nn::os::GetSystemTick();
      puVar19[1] = uVar6;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
      puVar19 = (undefined8 *)plVar20[2];
      uVar11 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar19 != (undefined8 *)0x0)) {
        *puVar19 = &DAT_03c4e575;
        puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x818) = 0x10;
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x4a8) + 0x10);
  if (3 < *(ulong *)(param_1 + 0x7d8)) {
    if (plVar20 != (long *)0x0) {
      lVar18 = *plVar20;
      if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
        (**(code **)(lVar18 + 0x18))("PreSolveSignal",0xe,*(undefined8 *)(lVar18 + 0x28));
      }
      puVar19 = (undefined8 *)plVar20[2];
      uVar11 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar19 != (undefined8 *)0x0)) {
        *puVar19 = "TtPreSolveSignal";
        uVar7 = nn::os::GetSystemTick();
        puVar19[1] = uVar7;
      }
      if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
        puVar19 = (undefined8 *)plVar20[2];
        uVar11 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
        if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar19 != (undefined8 *)0x0)) {
          *puVar19 = &DAT_03c4e575;
          puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
        }
      }
    }
    FUN_02f32c7c(param_1 + 0x7d8,param_1);
    if (plVar20 != (long *)0x0) {
      lVar18 = *plVar20;
      if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
        puVar19 = (undefined8 *)plVar20[2];
        uVar11 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
        if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar19 != (undefined8 *)0x0)) {
          *puVar19 = &DAT_03c4e575;
          puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
        }
      }
      puVar19 = (undefined8 *)plVar20[2];
      uVar11 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar19 != (undefined8 *)0x0)) {
        *puVar19 = &DAT_03c2d363;
        uVar7 = nn::os::GetSystemTick();
        puVar19[1] = uVar7;
      }
      if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
        (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
      }
    }
  }
  plVar12 = *(long **)(param_1 + 0x920);
  if (0 < (int)plVar12[1]) {
    lVar18 = 0;
    do {
      lVar10 = *(long *)(*plVar12 + lVar18 * 8);
      iVar8 = *(int *)(lVar10 + 0x74c) + *(int *)(lVar10 + 0x538);
      if (iVar8 == 0) {
        *(undefined4 *)(lVar10 + 0x74c) = 0;
      }
      else {
        puVar16 = *(uint **)(lVar10 + 0x740);
        if ((puVar16 !=
             *(uint **)(*(long *)(lVar10 + 0x540) + (long)*(int *)(lVar10 + 0x548) * 8 + -8)) &&
           ((uint)*(ushort *)(lVar10 + 0x74a) == (*puVar16 & 0xffff))) {
          puVar16 = *(uint **)(puVar16 + 2);
          *(undefined4 *)(lVar10 + 0x748) = 0;
        }
        *(short *)(lVar10 + 0x74a) = (short)*puVar16 - *(short *)(lVar10 + 0x74a);
        lVar17 = *(long *)(lVar10 + 0x730);
        *(uint **)(lVar10 + 0x740) = puVar16;
        *(int *)(lVar10 + 0x74c) = iVar8;
        puVar19 = *(undefined8 **)(*(long *)(lVar17 + 0x10) + lVar18 * 8);
        if (*(int *)((long)puVar19 + 0xc) == 0) {
          puVar19[1] = *(undefined8 *)(lVar10 + 0x748);
          uVar7 = *(undefined8 *)(lVar10 + 0x740);
          puVar19[2] = *(undefined8 *)(lVar10 + 0x750);
          *puVar19 = uVar7;
        }
        else {
          puVar16 = *(uint **)(*(long *)(lVar10 + 0x540) + (long)*(int *)(lVar10 + 0x548) * 8 + -8);
          puVar22 = *(undefined8 **)(lVar10 + 0x4e0);
          uVar9 = *puVar16;
          if (0x1e < uVar9 >> 0x17) {
            puVar21 = puVar16;
            do {
              uVar9 = *(int *)(puVar22 + 0xb) - 1;
              if (*(int *)(puVar22 + 0xb) < 1) {
                lVar14 = puVar22[1];
                (**(code **)(*(long *)*puVar22 + 0x20))((long *)*puVar22,lVar14,6);
                *(undefined4 *)(puVar22 + 0xb) = 5;
                puVar13 = (undefined8 *)(lVar14 + 0x28);
              }
              else {
                *(uint *)(puVar22 + 0xb) = uVar9;
                puVar13 = (undefined8 *)(puVar22[1] + (ulong)uVar9 * 8);
              }
              puVar16 = (uint *)*puVar13;
              puVar16[4] = 0;
              puVar16[5] = 0;
              puVar16[6] = 0;
              puVar16[7] = 0;
              puVar16[0] = 0;
              puVar16[1] = 0;
              puVar16[2] = 0;
              puVar16[3] = 0;
              puVar16[1] = *(uint *)(lVar10 + 0x548);
              iVar8 = *(int *)(lVar10 + 0x548);
              lVar14 = (long)iVar8;
              if ((int)(*(uint *)(lVar10 + 0x54c) & 0x7fffffff) <= iVar8) {
                FUN_031c25b4(lVar10 + 0x540,PTR_PTR_047d1a50,lVar14 + 1);
                iVar8 = *(int *)(lVar10 + 0x548);
              }
              *(uint **)(*(long *)(lVar10 + 0x540) + (long)iVar8 * 8) = puVar16;
              *(int *)(lVar10 + 0x548) = (int)(lVar14 + 1);
              *(uint **)(puVar21 + 2) = puVar16;
              uVar9 = *puVar16;
              puVar21 = puVar16;
            } while (0x1e < uVar9 >> 0x17);
          }
          uVar9 = uVar9 >> 0x10;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar5) {
              *puVar16 = *puVar16 + 0x200001;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *(int *)(lVar10 + 0x538) = *(int *)(lVar10 + 0x538) + 1;
          uVar7 = *(undefined8 *)(lVar10 + 0x748);
          uVar1 = *(undefined8 *)(lVar10 + 0x750);
          puVar22 = (undefined8 *)((long)puVar16 + (ulong)uVar9 + 0x20);
          *puVar22 = *(undefined8 *)(lVar10 + 0x740);
          *(undefined8 *)((long)puVar16 + (ulong)uVar9 + 0x28) = uVar7;
          *(undefined8 *)((long)puVar16 + (ulong)uVar9 + 0x30) = uVar1;
          if (*(int *)((long)puVar19 + 0xc) == 0) {
            puVar19[1] = *(undefined8 *)((long)puVar16 + (ulong)uVar9 + 0x28);
            uVar7 = *puVar22;
            puVar19[2] = *(undefined8 *)((long)puVar16 + (ulong)uVar9 + 0x30);
            *puVar19 = uVar7;
          }
          else {
            *(undefined8 *)((long)puVar16 + (ulong)uVar9 + 0x30) = puVar19[2];
            puVar19[2] = puVar22;
          }
          *(undefined8 **)(*(long *)(lVar17 + 0x10) + lVar18 * 8) = puVar22;
        }
      }
      lVar18 = lVar18 + 1;
      puVar15 = *(undefined4 **)
                 (*(long *)(lVar10 + 0x540) + (long)*(int *)(lVar10 + 0x548) * 8 + -8);
      uVar2 = *puVar15;
      uVar3 = *puVar15;
      *(undefined4 **)(lVar10 + 0x740) = puVar15;
      *(short *)(lVar10 + 0x748) = (short)((uint)uVar2 >> 0x10);
      *(short *)(lVar10 + 0x74a) = (short)uVar3;
      *(int *)(lVar10 + 0x74c) = -*(int *)(lVar10 + 0x538);
      *(undefined8 *)(lVar10 + 0x500) = *(undefined8 *)(*(long *)(lVar10 + 8) + 0x118);
      plVar12 = *(long **)(param_1 + 0x920);
    } while (lVar18 < (int)plVar12[1]);
  }
  if (plVar20 != (long *)0x0) {
    lVar18 = *plVar20;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("DispatchCommands",0x10,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar19 = (undefined8 *)plVar20[2];
    uVar11 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = "TtDispatchCommands";
      uVar7 = nn::os::GetSystemTick();
      puVar19[1] = uVar7;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
      puVar19 = (undefined8 *)plVar20[2];
      uVar11 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar19 != (undefined8 *)0x0)) {
        *puVar19 = &DAT_03c4e575;
        puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
      }
    }
  }
  lVar18 = *(long *)(param_1 + 0x908);
  *(undefined8 *)(lVar18 + 0x28) = uVar6;
  *(undefined8 *)(lVar18 + 0x38) = param_2;
  FUN_02f235c0(*(undefined8 *)(param_1 + 0x920),param_2,*(undefined8 *)(param_1 + 0x908));
  lVar18 = *(long *)(param_1 + 0x908);
  *(undefined8 *)(lVar18 + 0x28) = 0;
  *(undefined8 *)(lVar18 + 0x38) = 0;
  if (plVar20 == (long *)0x0) goto LAB_02f42f38;
  lVar18 = *plVar20;
  if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
    puVar19 = (undefined8 *)plVar20[2];
    uVar11 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = &DAT_03c4e575;
      puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
    }
  }
  puVar19 = (undefined8 *)plVar20[2];
  uVar11 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
  if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar19 != (undefined8 *)0x0)) {
    *puVar19 = &DAT_03c2d363;
    uVar6 = nn::os::GetSystemTick();
    puVar19[1] = uVar6;
  }
  if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
    (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
  }
  lVar18 = *plVar20;
  if (((*(byte *)(lVar18 + 0x38) & 1) == 0) || (plVar20[6] == 0)) {
LAB_02f42ef4:
    puVar22 = (undefined8 *)plVar20[2];
  }
  else {
    puVar19 = (undefined8 *)plVar20[2];
    puVar22 = (undefined8 *)((long)puVar19 + 0x17U & 0xfffffffffffffff8);
    if ((undefined8 *)plVar20[3] < puVar22) goto LAB_02f42ef4;
    plVar20[2] = (long)puVar22;
    if (puVar19 != (undefined8 *)0x0) {
      *puVar19 = &DAT_03c4e575;
      puVar19[1] = *(undefined8 *)(plVar20[6] + 8);
      goto LAB_02f42ef4;
    }
  }
  uVar11 = (long)puVar22 + 0x17U & 0xfffffffffffffff8;
  if ((uVar11 <= (ulong)plVar20[3]) && (plVar20[2] = uVar11, puVar22 != (undefined8 *)0x0)) {
    *puVar22 = "EtPreSolve";
    uVar6 = nn::os::GetSystemTick();
    puVar22[1] = uVar6;
  }
  if (*(code **)(lVar18 + 0x20) != (code *)0x0) {
    (**(code **)(lVar18 + 0x20))(*(undefined8 *)(lVar18 + 0x28));
  }
LAB_02f42f38:
  *(undefined4 *)(param_1 + 0x818) = 0x20;
  return;
}


