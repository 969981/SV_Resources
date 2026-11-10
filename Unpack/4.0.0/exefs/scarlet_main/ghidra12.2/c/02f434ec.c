/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f434ec; name: FUN_02f434ec
 */


void FUN_02f434ec(long param_1,uint *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  
  lVar16 = tpidr_el0;
  lVar8 = *(long *)(lVar16 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar8;
  }
  plVar19 = *(long **)(lVar8 + 0x3e0);
  if (plVar19 != (long *)0x0) {
    lVar16 = *plVar19;
    if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
      (**(code **)(lVar16 + 0x18))("PostSolve",9,*(undefined8 *)(lVar16 + 0x28));
    }
    puVar2 = (undefined8 *)plVar19[2];
    uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtPostSolve";
      uVar7 = nn::os::GetSystemTick();
      puVar2[1] = uVar7;
    }
    if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar2 = (undefined8 *)plVar19[2];
      uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_1 + 0x540);
  puVar6 = PTR_DAT_047d1a08;
  lVar16 = *(long *)(*(long *)(param_1 + 0x4a8) + 0x10);
  plVar17 = *(long **)(lVar16 + 0x110);
  if (*(long *)(lVar16 + 0xa0) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(long *)(lVar16 + 0xa0),0);
    *(undefined8 *)(lVar16 + 0xa0) = 0;
  }
  if (*(long *)(lVar16 + 0x50) != 0) {
    (**(code **)(puVar6 + 8))(0,*(long *)(lVar16 + 0x50),0);
    *(undefined8 *)(lVar16 + 0x50) = 0;
  }
  if (*(long *)(lVar16 + 0xf0) != 0) {
    (**(code **)(puVar6 + 8))(0,*(long *)(lVar16 + 0xf0),0);
    *(undefined8 *)(lVar16 + 0xf0) = 0;
  }
  plVar20 = *(long **)(param_1 + 0x698);
  if (plVar20 != (long *)0x0) {
    (**(code **)(**(long **)(*plVar20 + 0x4c0) + 0x40))
              (*(long **)(*plVar20 + 0x4c0),plVar20[100],(int)plVar20[0x65],4);
    *(undefined4 *)(plVar20 + 0x65) = 0;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x130) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x130) + 8) = 0;
  lVar10 = *(long *)(param_1 + 0x130);
  uVar3 = *(uint *)(lVar10 + 4);
  uVar14 = uVar3;
  if (0xff < (int)uVar3) {
    uVar14 = 0x100;
  }
  if (0 < (int)uVar3) {
    uVar3 = uVar14;
    if ((int)uVar14 < 2) {
      uVar3 = 1;
    }
    if ((int)uVar14 < 2) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        *(undefined4 *)(lVar10 + uVar9 * 4 + 0x10) = 0xffffff;
        lVar10 = uVar9 * 4;
        uVar9 = uVar9 + 2;
        *(undefined4 *)(*(long *)(param_1 + 0x130) + lVar10 + 0x14) = 0xffffff;
        lVar10 = *(long *)(param_1 + 0x130);
      } while (((ulong)uVar3 & 0x7ffffffe) != uVar9);
    }
    if ((uVar3 & 1) != 0) {
      *(undefined4 *)(lVar10 + uVar9 * 4 + 0x10) = 0xffffff;
      lVar10 = *(long *)(param_1 + 0x130);
    }
  }
  *(undefined4 *)(lVar10 + 4) = 0;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
  while (lVar8 != 0) {
    lVar10 = *(long *)(lVar8 + 8);
    (**(code **)(puVar6 + 8))(0,lVar8,0);
    lVar8 = lVar10;
  }
  if (plVar19 != (long *)0x0) {
    lVar8 = *plVar19;
    if (*(code **)(lVar8 + 0x18) != (code *)0x0) {
      (**(code **)(lVar8 + 0x18))("DispatchCommands",0x10,*(undefined8 *)(lVar8 + 0x28));
    }
    puVar2 = (undefined8 *)plVar19[2];
    uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtDispatchCommands";
      uVar7 = nn::os::GetSystemTick();
      puVar2[1] = uVar7;
    }
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar2 = (undefined8 *)plVar19[2];
      uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
  }
  FUN_02f230e8(plVar17,param_2,*(undefined8 *)(param_1 + 0x7f8));
  (**(code **)(**(long **)(param_1 + 0x908) + 0x30))();
  FUN_02fdafb8(*(undefined8 *)(param_1 + 0x910));
  if (plVar19 != (long *)0x0) {
    lVar8 = *plVar19;
    if (((*(byte *)(lVar8 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar2 = (undefined8 *)plVar19[2];
      uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar19[2];
    uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar7 = nn::os::GetSystemTick();
      puVar2[1] = uVar7;
    }
    if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
      (**(code **)(lVar8 + 0x20))(*(undefined8 *)(lVar8 + 0x28));
    }
  }
  lVar8 = *(long *)(param_1 + 0x500);
  puVar2 = (undefined8 *)(lVar8 + 0xab0);
  if (*(char *)(lVar8 + 0xaa0) != '\0') {
    if (plVar19 != (long *)0x0) {
      lVar10 = *plVar19;
      if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
        (**(code **)(lVar10 + 0x18))("CopyContactCaches",0x11,*(undefined8 *)(lVar10 + 0x28));
      }
      puVar18 = (undefined8 *)plVar19[2];
      uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = "TtCopyContactCaches";
        uVar7 = nn::os::GetSystemTick();
        puVar18[1] = uVar7;
      }
      if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
        puVar18 = (undefined8 *)plVar19[2];
        uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = &DAT_03c4e575;
          puVar18[1] = *(undefined8 *)(plVar19[6] + 8);
        }
      }
    }
    lVar10 = *(long *)(param_2 + 0x138);
    uVar14 = *(uint *)(lVar8 + 0xac8);
    if (*(char *)(lVar8 + 0xabc) != '\0') {
      plVar20 = *(long **)(lVar8 + 0xac0);
      if ((int)uVar14 < 1) {
        plVar13 = plVar20;
      }
      else {
        plVar13 = plVar20;
        if (uVar14 != 1) {
          iVar15 = -(uVar14 & 0xfffffffe);
          do {
            plVar11 = plVar20;
            if (*plVar13 != 0) {
              plVar11 = plVar20 + 1;
              *plVar20 = *plVar13;
            }
            plVar20 = plVar11;
            if (plVar13[1] != 0) {
              plVar20 = plVar11 + 1;
              *plVar11 = plVar13[1];
            }
            plVar13 = plVar13 + 2;
            iVar15 = iVar15 + 2;
          } while (iVar15 != 0);
        }
        plVar11 = plVar20;
        if (((uVar14 & 1) != 0) && (*plVar13 != 0)) {
          plVar11 = plVar20 + 1;
          *plVar20 = *plVar13;
        }
        plVar20 = plVar11;
        plVar13 = *(long **)(lVar8 + 0xac0);
      }
      uVar14 = (uint)((ulong)((long)plVar20 - (long)plVar13) >> 3);
      *(undefined1 *)(lVar8 + 0xabc) = 0;
    }
    if (uVar14 != 0) {
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar2 + 0x28))((long *)*puVar2,*(undefined8 *)(lVar8 + 0xac0));
      }
      else {
        FUN_031c2998(lVar10,*(undefined8 *)(lVar8 + 0xac0));
      }
    }
    *(undefined4 *)(lVar8 + 0xac8) = 0;
    *(undefined4 *)(lVar8 + 0xab8) = 0;
    uVar14 = *(uint *)(lVar16 + 0x108);
    if (0 < (int)uVar14) {
      lVar8 = 0;
      do {
        lVar10 = *(long *)(lVar16 + 0x100) + lVar8;
        FUN_031c2e70(puVar2,*(undefined8 *)(param_2 + 0x138),lVar10 + 0x100);
        FUN_031c2e70(puVar2,*(undefined8 *)(param_2 + 0x138),lVar10 + 0x200);
        lVar8 = lVar8 + 0x500;
      } while ((ulong)uVar14 * 0x500 != lVar8);
    }
    if (plVar19 != (long *)0x0) {
      lVar16 = *plVar19;
      if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
        puVar2 = (undefined8 *)plVar19[2];
        uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
          *puVar2 = &DAT_03c4e575;
          puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
        }
      }
      puVar2 = (undefined8 *)plVar19[2];
      uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c2d363;
        uVar7 = nn::os::GetSystemTick();
        puVar2[1] = uVar7;
      }
      if (*(code **)(lVar16 + 0x20) != (code *)0x0) {
        (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x28));
      }
    }
  }
  *(int *)(param_1 + 0x5bc) = *(int *)(param_1 + 0x5bc) + 1;
  if (3 < *(ulong *)(param_1 + 0x7e0)) {
    if (plVar19 != (long *)0x0) {
      lVar16 = *plVar19;
      if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
        (**(code **)(lVar16 + 0x18))("PostSolveSignal",0xf,*(undefined8 *)(lVar16 + 0x28));
      }
      puVar2 = (undefined8 *)plVar19[2];
      uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = "TtPostSolveSignal";
        uVar7 = nn::os::GetSystemTick();
        puVar2[1] = uVar7;
      }
      if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
        puVar2 = (undefined8 *)plVar19[2];
        uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
          *puVar2 = &DAT_03c4e575;
          puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
        }
      }
    }
    FUN_02f32c7c(param_1 + 0x7e0,param_1);
    if (plVar19 != (long *)0x0) {
      lVar16 = *plVar19;
      if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
        puVar2 = (undefined8 *)plVar19[2];
        uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
        if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
          *puVar2 = &DAT_03c4e575;
          puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
        }
      }
      puVar2 = (undefined8 *)plVar19[2];
      uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c2d363;
        uVar7 = nn::os::GetSystemTick();
        puVar2[1] = uVar7;
      }
      if (*(code **)(lVar16 + 0x20) != (code *)0x0) {
        (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x28));
      }
    }
  }
  if (plVar19 != (long *)0x0) {
    lVar16 = *plVar19;
    if (*(code **)(lVar16 + 0x18) != (code *)0x0) {
      (**(code **)(lVar16 + 0x18))("ClearSimulationContext",0x16,*(undefined8 *)(lVar16 + 0x28));
    }
    puVar2 = (undefined8 *)plVar19[2];
    uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "TtClearSimulationContext";
      uVar7 = nn::os::GetSystemTick();
      puVar2[1] = uVar7;
    }
    if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
      puVar2 = (undefined8 *)plVar19[2];
      uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
      }
    }
  }
  lVar16 = *(long *)(*(long *)(param_1 + 0x4a8) + 0x10);
  uVar14 = *(uint *)(lVar16 + 0x108);
  if (0 < (int)uVar14) {
    uVar7 = *(undefined8 *)(param_2 + 0x138);
    lVar8 = 0;
    do {
      lVar10 = *(long *)(lVar16 + 0x100) + lVar8;
      FUN_031c2be4(lVar10 + 0x100,uVar7);
      FUN_031c2be4(lVar10 + 0x200,uVar7);
      FUN_031c2be4(lVar10,uVar7);
      FUN_031c2be4(lVar10 + 0x300,uVar7);
      FUN_031c2be4(lVar10 + 0x400,uVar7);
      lVar8 = lVar8 + 0x500;
    } while ((ulong)uVar14 * 0x500 != lVar8);
  }
  uVar14 = *param_2;
  lVar16 = (long)(int)uVar14;
  lVar8 = *(long *)(*(long *)(*plVar17 + lVar16 * 8) + 8);
  uVar9 = *(ulong *)(lVar8 + 0x7f0);
  while (plVar20 = (long *)(uVar9 & 0xfffffffffffffffc), plVar20 != (long *)0x0) {
    uVar9 = plVar20[1];
    if ((uVar9 & 3) == 0) {
      (**(code **)(*plVar20 + 0x20))(plVar20,lVar8,uVar14);
    }
  }
  uVar3 = *(uint *)(plVar17 + 0x22);
  puVar1 = (uint *)(plVar17 + 0x22);
  DataMemoryBarrier(2,3);
  puVar1[lVar16 + 1] = uVar3 & 0x1ff;
  uVar12 = *puVar1;
  if (uVar12 == uVar3) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 & 0xfffffe00 | uVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_02f43d8c;
  }
  else {
    ClearExclusiveLocal();
LAB_02f43d8c:
    do {
      DataMemoryBarrier(2,3);
      puVar1[lVar16 + 1] = uVar12 & 0x1ff;
      uVar3 = *puVar1;
      if (uVar3 == uVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar12 & 0xfffffe00 | uVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02f43dcc;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02f43dcc:
        bVar5 = false;
      }
      uVar12 = uVar3;
    } while (!bVar5);
  }
  FUN_02f22680(plVar17);
  if (plVar19 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x818) = 1;
    return;
  }
  lVar16 = *plVar19;
  if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
    puVar2 = (undefined8 *)plVar19[2];
    uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
    }
  }
  puVar2 = (undefined8 *)plVar19[2];
  uVar9 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
  if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar2 != (undefined8 *)0x0)) {
    *puVar2 = &DAT_03c2d363;
    uVar7 = nn::os::GetSystemTick();
    puVar2[1] = uVar7;
  }
  if (*(code **)(lVar16 + 0x20) != (code *)0x0) {
    (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x818) = 1;
  lVar16 = *plVar19;
  if (((*(byte *)(lVar16 + 0x38) & 1) != 0) && (plVar19[6] != 0)) {
    puVar2 = (undefined8 *)plVar19[2];
    puVar18 = (undefined8 *)((long)puVar2 + 0x17U & 0xfffffffffffffff8);
    if (puVar18 <= (undefined8 *)plVar19[3]) {
      plVar19[2] = (long)puVar18;
      if (puVar2 == (undefined8 *)0x0) goto LAB_02f43ec0;
      *puVar2 = &DAT_03c4e575;
      puVar2[1] = *(undefined8 *)(plVar19[6] + 8);
    }
  }
  puVar18 = (undefined8 *)plVar19[2];
LAB_02f43ec0:
  uVar9 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
  if ((uVar9 <= (ulong)plVar19[3]) && (plVar19[2] = uVar9, puVar18 != (undefined8 *)0x0)) {
    *puVar18 = "EtPostSolve";
    uVar7 = nn::os::GetSystemTick();
    puVar18[1] = uVar7;
  }
  if (*(code **)(lVar16 + 0x20) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f43f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 0x20))(*(undefined8 *)(lVar16 + 0x28));
  return;
}


