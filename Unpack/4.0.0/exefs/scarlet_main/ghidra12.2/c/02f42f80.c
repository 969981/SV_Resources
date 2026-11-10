/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f42f80; name: FUN_02f42f80
 */


void FUN_02f42f80(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  undefined8 local_58;
  
  lVar2 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    plVar4 = (long *)0x0;
    iVar10 = -1;
    bVar3 = false;
  }
  else {
    lVar11 = (long)DAT_0486b380;
    lVar6 = *(long *)(lVar2 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar2 + 0x1000b8) = lVar6;
      iVar12 = DAT_0486b380;
      iVar10 = (int)*(undefined8 *)(lVar6 + lVar11 * 8 + 1000);
      if (lVar6 == 0) {
        lVar6 = FUN_00e5d3b4();
        *(long *)(lVar2 + 0x1000b8) = lVar6;
      }
    }
    else {
      iVar10 = (int)*(undefined8 *)(lVar6 + lVar11 * 8 + 1000);
      iVar12 = DAT_0486b380;
    }
    *(long *)(lVar6 + (long)iVar12 * 8 + 1000) = (long)(iVar10 + 1);
    plVar4 = *(long **)(param_1 + 0x800);
    bVar3 = iVar10 == 0;
  }
  bVar3 = (bool)(bVar3 & plVar4 != (long *)0x0);
  if (((*(char *)(param_1 + 0x999) != '\0') || (bVar3)) && (local_58 = 0x2b02000010, bVar3)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  }
  lVar6 = *(long *)(lVar2 + 0x1000b8);
  if (lVar6 == 0) {
    lVar6 = FUN_00e5d3b4();
    *(long *)(lVar2 + 0x1000b8) = lVar6;
  }
  plVar4 = *(long **)(lVar6 + 0x3e0);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))("BuildSolveTasks",0xf,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar8 = (undefined8 *)plVar4[2];
    uVar7 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar4[3]) && (plVar4[2] = uVar7, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = "TtBuildSolveTasks";
      uVar5 = nn::os::GetSystemTick();
      puVar8[1] = uVar5;
    }
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar4[6] != 0)) {
      puVar8 = (undefined8 *)plVar4[2];
      uVar7 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar4[3]) && (plVar4[2] = uVar7, puVar8 != (undefined8 *)0x0)) {
        *puVar8 = &DAT_03c4e575;
        puVar8[1] = *(undefined8 *)(plVar4[6] + 8);
      }
    }
  }
  (**(code **)(**(long **)(param_1 + 0x4a8) + 0x18))
            (*(long **)(param_1 + 0x4a8),*(undefined8 *)(param_1 + 0x920),param_2,0);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar4[6] != 0)) {
      puVar8 = (undefined8 *)plVar4[2];
      uVar7 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar4[3]) && (plVar4[2] = uVar7, puVar8 != (undefined8 *)0x0)) {
        *puVar8 = &DAT_03c4e575;
        puVar8[1] = *(undefined8 *)(plVar4[6] + 8);
      }
    }
    puVar8 = (undefined8 *)plVar4[2];
    uVar7 = (long)puVar8 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar4[3]) && (plVar4[2] = uVar7, puVar8 != (undefined8 *)0x0)) {
      *puVar8 = "EtBuildSolveTasks";
      uVar5 = nn::os::GetSystemTick();
      puVar8[1] = uVar5;
    }
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
    }
    puVar8 = (undefined8 *)plVar4[2];
    if (puVar8 < (undefined8 *)plVar4[4]) {
      uVar7 = (long)puVar8 + 0xfU & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar4[3]) && (plVar4[2] = uVar7, puVar8 != (undefined8 *)0x0)) {
        *puVar8 = "PdStatistics";
      }
      (**(code **)(**(long **)(param_1 + 0x4a8) + 0x20))(*(long **)(param_1 + 0x4a8),param_1);
      puVar8 = (undefined8 *)plVar4[2];
      uVar7 = plVar4[3];
      uVar9 = (ulong)((long)puVar8 + 0xf) & 0xfffffffffffffff8;
      if (uVar9 <= uVar7) {
        plVar4[2] = uVar9;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&DAT_00000008;
        }
        else {
          *puVar8 = "PdMemory";
          puVar8 = (undefined8 *)plVar4[2];
          uVar7 = plVar4[3];
        }
      }
      uVar9 = (ulong)((long)puVar8 + 0xf) & 0xfffffffffffffff8;
      if ((uVar9 <= uVar7) && (plVar4[2] = uVar9, puVar8 != (undefined8 *)0x0)) {
        *puVar8 = "PdBlock stream allocator";
      }
      FUN_031c2858(*(undefined8 *)(param_1 + 0x4a0));
      puVar8 = (undefined8 *)plVar4[2];
      uVar7 = plVar4[3];
      uVar9 = (ulong)((long)puVar8 + 0xf) & 0xfffffffffffffff8;
      if (uVar9 <= uVar7) {
        plVar4[2] = uVar9;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&DAT_00000008;
        }
        else {
          *puVar8 = &DAT_03bf2198;
          puVar8 = (undefined8 *)plVar4[2];
          uVar7 = plVar4[3];
        }
      }
      uVar9 = (ulong)((long)puVar8 + 0xf) & 0xfffffffffffffff8;
      if (uVar9 <= uVar7) {
        plVar4[2] = uVar9;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&DAT_00000008;
        }
        else {
          *puVar8 = &DAT_03bf2198;
          puVar8 = (undefined8 *)plVar4[2];
          uVar7 = plVar4[3];
        }
      }
      uVar9 = (ulong)((long)puVar8 + 0xf) & 0xfffffffffffffff8;
      if (uVar9 <= uVar7) {
        plVar4[2] = uVar9;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&DAT_00000008;
        }
        else {
          *puVar8 = "PdSolver settings";
          puVar8 = (undefined8 *)plVar4[2];
          uVar7 = plVar4[3];
        }
      }
      uVar9 = (ulong)((long)puVar8 + 0x17) & 0xfffffffffffffff8;
      if (uVar9 <= uVar7) {
        uVar5 = *(undefined8 *)(param_1 + 0x540);
        plVar4[2] = uVar9;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar8 = "MfTimestep";
          *(int *)(puVar8 + 1) = (int)uVar5;
          puVar8 = (undefined8 *)plVar4[2];
          uVar7 = plVar4[3];
        }
      }
      uVar9 = (ulong)((long)puVar8 + 0x17) & 0xfffffffffffffff8;
      if (uVar9 <= uVar7) {
        uVar1 = *(undefined4 *)(param_1 + 0x530);
        plVar4[2] = uVar9;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar8 = "MfTau";
          *(undefined4 *)(puVar8 + 1) = uVar1;
          puVar8 = (undefined8 *)plVar4[2];
          uVar7 = plVar4[3];
        }
      }
      uVar9 = (ulong)((long)puVar8 + 0x17) & 0xfffffffffffffff8;
      if (uVar9 <= uVar7) {
        uVar5 = *(undefined8 *)(param_1 + 0x538);
        plVar4[2] = uVar9;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar8 = "MfDamping";
          *(int *)(puVar8 + 1) = (int)uVar5;
          puVar8 = (undefined8 *)plVar4[2];
          uVar7 = plVar4[3];
        }
      }
      uVar9 = (ulong)((long)puVar8 + 0x17) & 0xfffffffffffffff8;
      if (uVar9 <= uVar7) {
        iVar12 = *(int *)(param_1 + 0x5a0);
        plVar4[2] = uVar9;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&DAT_00000010;
        }
        else {
          *puVar8 = "MiNum substeps";
          *(float *)(puVar8 + 1) = (float)iVar12;
          puVar8 = (undefined8 *)plVar4[2];
          uVar7 = plVar4[3];
        }
      }
      uVar9 = (ulong)((long)puVar8 + 0xf) & 0xfffffffffffffff8;
      if (uVar9 <= uVar7) {
        plVar4[2] = uVar9;
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)&DAT_00000008;
        }
        else {
          *puVar8 = &DAT_03bf2198;
          puVar8 = (undefined8 *)plVar4[2];
          uVar7 = plVar4[3];
        }
      }
      uVar9 = (ulong)((long)puVar8 + 0xf) & 0xfffffffffffffff8;
      if ((uVar9 <= uVar7) && (plVar4[2] = uVar9, puVar8 != (undefined8 *)0x0)) {
        *puVar8 = &DAT_03bf2198;
      }
    }
  }
  if (iVar10 != -1) {
    lVar11 = (long)DAT_0486b380;
    lVar6 = *(long *)(lVar2 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar2 + 0x1000b8) = lVar6;
    }
    *(long *)(lVar6 + lVar11 * 8 + 1000) = (long)iVar10;
  }
  return;
}


