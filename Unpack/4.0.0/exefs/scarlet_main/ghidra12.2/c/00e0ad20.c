/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e0ad20; name: FUN_00e0ad20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e0ad20(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 local_80;
  undefined4 local_78;
  float local_74;
  long local_70;
  
  puVar7 = PTR_DAT_047d1a08;
  lVar15 = *param_2;
  local_80 = 0x2a0;
  lVar9 = (**(code **)PTR_DAT_047d1a08)(0,&local_80,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(lVar9,"hkaiNavigator");
  }
  FUN_00e0bcdc(lVar9,lVar15);
  plVar10 = *(long **)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar9;
  if (plVar10 != (long *)0x0) {
    if (plVar10[1] != 0) {
      plVar11 = plVar10 + 2;
      do {
        lVar9 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
    lVar9 = *(long *)(param_1 + 0x48);
  }
  fVar19 = *(float *)(param_1 + 0x50);
  if (*(float *)(lVar9 + 0xc0) * 0.5 != fVar19) {
    local_78 = *(undefined4 *)(lVar9 + 0x23c);
    local_80 = 0x2b08000010;
    local_74 = fVar19;
    FUN_00e08a00(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_80);
    *(float *)(lVar9 + 0xc0) = fVar19 + fVar19;
    *(undefined1 *)(lVar9 + 0x199) = 1;
    FUN_00e08aac(lVar9);
    lVar9 = *(long *)(param_1 + 0x48);
  }
  FUN_00e0baf4(lVar9,*param_4,*(undefined4 *)(param_4 + 1));
  lVar9 = *(long *)(param_1 + 0x48);
  fVar19 = *(float *)(param_1 + 0x54);
  if (*(float *)(lVar9 + 0x158) != fVar19) {
    local_78 = *(undefined4 *)(lVar9 + 0x23c);
    local_80 = 0x3b08000010;
    local_74 = fVar19;
    FUN_00e08a00(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_80);
    *(float *)(lVar9 + 0x158) = fVar19;
    *(undefined1 *)(lVar9 + 0x199) = 1;
    FUN_00e08aac(lVar9);
    lVar9 = *(long *)(param_1 + 0x48);
  }
  fVar19 = *(float *)(param_1 + 0x58);
  if (*(float *)(lVar9 + 0x160) != fVar19) {
    local_78 = *(undefined4 *)(lVar9 + 0x23c);
    local_80 = 0x3d08000010;
    local_74 = fVar19;
    FUN_00e08a00(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_80);
    *(float *)(lVar9 + 0x160) = fVar19;
    *(undefined1 *)(lVar9 + 0x199) = 1;
    FUN_00e08aac(lVar9);
    lVar9 = *(long *)(param_1 + 0x48);
  }
  fVar19 = *(float *)(param_1 + 0x5c);
  if (*(float *)(lVar9 + 0x15c) != fVar19) {
    local_78 = *(undefined4 *)(lVar9 + 0x23c);
    local_80 = 0x3c08000010;
    local_74 = fVar19;
    FUN_00e08a00(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_80);
    *(float *)(lVar9 + 0x15c) = fVar19;
    lVar9 = *(long *)(param_1 + 0x48);
  }
  lVar13 = 0;
  lVar15 = param_1 + 0x3b0;
  *(long *)(lVar9 + 0x18) = param_1;
  do {
    lVar9 = param_1 + lVar13;
    lVar13 = lVar13 + 8;
    *(uint *)(lVar9 + 0x450) = *(uint *)(lVar9 + 0x450) & 0xfffffffe;
    *(uint *)(lVar9 + 0x454) = *(uint *)(lVar9 + 0x454) & 0xfffffffe;
  } while (lVar13 != 0x80);
  uVar2 = *(uint *)(param_1 + 0x3a4);
  lVar9 = 0;
  do {
    if ((uVar2 >> (ulong)((uint)lVar9 & 0x1f) & 1) != 0) {
      lVar13 = param_1 + lVar9 * 4;
      *(uint *)(lVar13 + 0x450) = *(uint *)(lVar13 + 0x450) | 1;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x20);
  lVar9 = *(long *)(param_1 + 0x48);
  if (*(long *)(lVar9 + 0x140) != lVar15) {
    local_78 = *(undefined4 *)(lVar9 + 0x23c);
    local_80 = 0x2f08000020;
    local_70 = lVar15;
    FUN_00e08a00(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_80);
    if (*(long *)(param_1 + 0x3b8) != 0) {
      plVar10 = (long *)(param_1 + 0x3c0);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar10 = *(long **)(lVar9 + 0x140);
    *(long *)(lVar9 + 0x140) = lVar15;
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar11 = plVar10 + 2;
      do {
        lVar13 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
    *(long *)(lVar9 + 0xe8) = lVar15;
    *(undefined1 *)(lVar9 + 0x199) = 1;
    FUN_00e08aac(lVar9);
    lVar9 = *(long *)(param_1 + 0x48);
  }
  lVar15 = param_1 + 0x4e0;
  if (*(long *)(lVar9 + 0x148) != lVar15) {
    local_78 = *(undefined4 *)(lVar9 + 0x23c);
    local_80 = 0x3108000020;
    local_70 = lVar15;
    FUN_00e08a00(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_80);
    if (*(long *)(param_1 + 0x4e8) != 0) {
      plVar10 = (long *)(param_1 + 0x4f0);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar10 = *(long **)(lVar9 + 0x148);
    *(long *)(lVar9 + 0x148) = lVar15;
    if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
      plVar11 = plVar10 + 2;
      do {
        lVar13 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
    *(long *)(lVar9 + 0xe0) = lVar15;
    *(undefined1 *)(lVar9 + 0x199) = 1;
    FUN_00e08aac(lVar9);
    lVar9 = *(long *)(param_1 + 0x48);
  }
  *(long *)(param_1 + 0x4d8) = lVar15;
  if (*(char *)(lVar9 + 0x10d) == '\0') {
    local_78 = *(undefined4 *)(lVar9 + 0x23c);
    local_80 = 0x3e08000010;
    FUN_00e08a00(*(long *)(lVar9 + 0x180) + 0x28,*(long *)(lVar9 + 0x180),&local_80);
    *(undefined1 *)(lVar9 + 0x10d) = 1;
    *(undefined1 *)(lVar9 + 0x199) = 1;
    FUN_00e08aac(lVar9);
  }
  fVar19 = *(float *)(param_1 + 0x138);
  uVar3 = *(undefined4 *)(param_1 + 0x13c);
  uVar4 = *(undefined4 *)(param_1 + 0x140);
  local_80 = 0x110;
  plVar10 = (long *)(**(code **)puVar7)(0,&local_80,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar10,"Character");
  }
  plVar10[2] = 1;
  puVar8 = PTR_DAT_047e3328;
  *(undefined8 *)((long)plVar10 + 0xbc) = 0x3f8000003dcccccd;
  *(undefined8 *)((long)plVar10 + 0xcc) = 0x42c800003f800000;
  *(undefined1 *)(plVar10 + 0x1f) = 1;
  plVar10[0x20] = 0;
  plVar10[0x21] = -1;
  *plVar10 = (long)(puVar8 + 0x10);
  plVar10[1] = 0xffffffff;
  plVar10[0x1e] = -0x8000000000000000;
  *(float *)((long)plVar10 + 0xac) = fVar19 * 4.0;
  lVar15 = _UNK_03cabe58;
  lVar9 = _DAT_03cabe50;
  *(undefined4 *)(plVar10 + 0x17) = 0xf;
  *(undefined8 *)((long)plVar10 + 0xd4) = 0x3f000000;
  *(undefined8 *)((long)plVar10 + 0xc4) = 0x3dcccccd3c23d70a;
  *(undefined4 *)(plVar10 + 0x14) = uVar4;
  *(undefined4 *)(plVar10 + 0x15) = uVar3;
  *(float *)((long)plVar10 + 0xa4) = fVar19;
  *(undefined4 *)(plVar10 + 0x16) = uVar4;
  *(undefined4 *)((long)plVar10 + 0xb4) = uVar4;
  *(undefined4 *)(plVar10 + 0xc) = 0x5f7ffff0;
  plVar10[0x1c] = 0;
  plVar10[0x1d] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0x10] = 0;
  plVar10[0x11] = 0;
  plVar10[0xf] = lVar15;
  plVar10[0xe] = lVar9;
  plVar11 = *(long **)(param_1 + 0x130);
  *(long **)(param_1 + 0x130) = plVar10;
  if (plVar11 != (long *)0x0) {
    if (plVar11[1] != 0) {
      plVar10 = plVar11 + 2;
      do {
        lVar9 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))();
      }
    }
    plVar10 = *(long **)(param_1 + 0x130);
  }
  plVar10[3] = param_1;
  uVar3 = *(undefined4 *)(param_1 + 0x148);
  uVar4 = *(undefined4 *)(param_1 + 0x144);
  lVar9 = *(long *)(param_1 + 0x130);
  *(undefined4 *)(lVar9 + 0xac) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(lVar9 + 0xb0) = uVar4;
  *(undefined4 *)(lVar9 + 0xb4) = uVar3;
  lVar9 = *param_2;
  local_80 = 0x38;
  plVar10 = (long *)(**(code **)puVar7)(0,&local_80,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar10,"DefaultBoundaryGatherer");
  }
  *plVar10 = (long)(PTR_DAT_047e3330 + 0x10);
  plVar10[1] = 0xffffffff;
  plVar10[2] = 1;
  plVar10[3] = lVar9;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
    plVar11 = (long *)(lVar9 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *(undefined4 *)(plVar10 + 4) = 0;
  plVar10[5] = 0;
  *(undefined1 *)(plVar10 + 6) = 1;
  plVar11 = *(long **)(param_1 + 0x168);
  *(long **)(param_1 + 0x168) = plVar10;
  if (plVar11 != (long *)0x0) {
    if (plVar11[1] != 0) {
      plVar10 = plVar11 + 2;
      do {
        lVar9 = *plVar10;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))();
      }
    }
    plVar10 = *(long **)(param_1 + 0x168);
  }
  *(undefined1 *)(plVar10 + 6) = *(undefined1 *)(param_1 + 0x3a2);
  lVar9 = *(long *)(param_1 + 0x130);
  plVar11 = *(long **)(param_1 + 0x168);
  plVar10 = *(long **)(lVar9 + 0xe0);
  if (plVar10 != plVar11) {
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,lVar9);
    }
    if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
      plVar10 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar6) {
          *plVar10 = *plVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar10 = *(long **)(lVar9 + 0xe0);
    *(long **)(lVar9 + 0xe0) = plVar11;
    if (plVar10 != (long *)0x0) {
      if (plVar10[1] != 0) {
        plVar11 = plVar10 + 2;
        do {
          lVar15 = *plVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = lVar15 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
      plVar11 = *(long **)(lVar9 + 0xe0);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))(plVar11,lVar9);
    }
  }
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x100);
  uVar14 = *(undefined8 *)*pauVar1;
  auVar18 = NEON_ext(*pauVar1,*pauVar1,8,1);
  lVar9 = *(long *)(param_1 + 0x130);
  *(ulong *)(lVar9 + 0x38) = (ulong)auVar18._0_4_;
  *(undefined8 *)(lVar9 + 0x30) = uVar14;
  FUN_00e0bbe4(*param_3,*(undefined8 *)(param_1 + 0x130));
  fVar19 = *(float *)(param_1 + 0x150);
  fVar16 = *(float *)PTR_FloatPi_047d23a0;
  uVar14 = *(undefined8 *)(param_1 + 0x158);
  uVar3 = *(undefined4 *)(param_1 + 0x160);
  uVar4 = *(undefined4 *)(param_1 + 0x164);
  lVar9 = *(long *)(param_1 + 0x130);
  fVar17 = *(float *)PTR_FloatDegree180_047d2390;
  *(undefined4 *)(lVar9 + 0xc0) = *(undefined4 *)(param_1 + 0x154);
  *(undefined8 *)(lVar9 + 0xc4) = 0x3dcccccd3c23d70a;
  *(undefined8 *)(lVar9 + 0xcc) = uVar14;
  *(undefined4 *)(lVar9 + 0xd4) = uVar3;
  *(undefined4 *)(lVar9 + 0xd8) = uVar4;
  *(float *)(lVar9 + 0xbc) = fVar19 * (fVar16 / fVar17);
  lVar9 = *(long *)(param_1 + 0x130);
  if (*(char *)(param_1 + 0x3a1) == '\0') {
    FUN_00e0c16c(lVar9);
  }
  else if (*(char *)(lVar9 + 0xf8) == '\0') {
    lVar15 = *(long *)(lVar9 + 0x100);
    *(undefined1 *)(lVar9 + 0xf8) = 1;
    if (lVar15 != 0) {
      *(undefined4 *)(lVar9 + 0x10c) = *(undefined4 *)(lVar15 + 0x68);
      iVar12 = *(int *)(lVar15 + 0x68);
      lVar13 = (long)iVar12;
      if ((int)(*(uint *)(lVar15 + 0x6c) & 0x7fffffff) <= iVar12) {
        FUN_01496fa4(lVar15 + 0x60,PTR_PTR_047d1a50,lVar13 + 1);
        iVar12 = *(int *)(lVar15 + 0x68);
      }
      *(long *)(*(long *)(lVar15 + 0x60) + (long)iVar12 * 8) = lVar9;
      *(int *)(lVar15 + 0x68) = (int)(lVar13 + 1);
    }
  }
  FUN_00e0b5d0(*(long *)(param_1 + 0x48) + 600,param_1,&LAB_02e704e4,0);
  FUN_00e0b68c(*(long *)(param_1 + 0x48) + 0x260,param_1,&LAB_02e70538,0);
  FUN_00e0b748(*(long *)(param_1 + 0x48) + 0x268,param_1,&LAB_02e70598,0);
  FUN_00e0b804(*(long *)(param_1 + 0x48) + 0x270,param_1,&LAB_02e705f4,0);
  FUN_00e0b8c0(*(long *)(param_1 + 0x48) + 0x278,param_1,&LAB_02e705f8,0);
  FUN_00e0b97c(*(long *)(param_1 + 0x48) + 0x280,param_1,&LAB_02e705fc,0);
  FUN_00e0ba38(*(long *)(param_1 + 0x48) + 0x288,param_1,&LAB_02e70600,0);
  *(undefined4 *)(param_1 + 0x40) = 2;
  return;
}


