/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e09fe0; name: FUN_00e09fe0
 */


void FUN_00e09fe0(long param_1,int *param_2,byte param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  ushort uVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  int local_a8 [2];
  int local_a0 [2];
  int local_98 [2];
  int local_90 [2];
  int local_88 [2];
  int local_80 [2];
  int local_78 [2];
  undefined8 local_70;
  int local_68;
  byte local_64 [4];
  int local_48;
  undefined2 local_44 [2];
  
  local_68 = *param_2;
  local_70 = 0x108000010;
  local_64[0] = param_3 & 1;
  FUN_00e08a00(param_1 + 0x28,param_1,&local_70);
  if (*(long *)(param_1 + 0x4d8) != 0) {
    lVar15 = *(long *)(param_1 + 0x4e0);
    uVar9 = (ushort)local_70;
    if ((int)(*(int *)(lVar15 + 0x18) + (uint)(ushort)local_70) < 0xfa1) {
      puVar12 = (undefined8 *)(*(long *)(lVar15 + 0x10) + (long)*(int *)(lVar15 + 0x18) + 0x20);
    }
    else {
      puVar12 = (undefined8 *)FUN_031c36f4(lVar15);
    }
    puVar13 = &local_70;
    iVar10 = (uVar9 >> 4) + 1;
    do {
      iVar10 = iVar10 + -1;
      uVar2 = *(undefined4 *)(puVar13 + 1);
      uVar3 = *(undefined4 *)((long)puVar13 + 0xc);
      *puVar12 = *puVar13;
      *(undefined4 *)(puVar12 + 1) = uVar2;
      *(undefined4 *)((long)puVar12 + 0xc) = uVar3;
      puVar13 = puVar13 + 2;
      puVar12 = puVar12 + 2;
    } while (1 < iVar10);
    *(uint *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + (uint)uVar9;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    return;
  }
  plVar16 = *(long **)(*(long *)(*(long *)(param_1 + 0x130) + 0x38) + (long)*param_2 * 0x100);
  if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
    plVar17 = plVar16 + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = *plVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if ((param_3 & 1) == 0) {
    bVar7 = false;
    plVar17 = (long *)0x0;
  }
  else {
    plVar17 = *(long **)(*(long *)(*(long *)(param_1 + 0x130) + 0x38) + (long)*param_2 * 0x100 +
                        0x10);
    if (plVar17 == (long *)0x0) {
      bVar7 = false;
    }
    else {
      if (plVar17[1] != 0) {
        plVar19 = plVar17 + 2;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar7) {
            *plVar19 = *plVar19 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      bVar7 = true;
    }
  }
  local_78[0] = *param_2;
  FUN_030d90bc(*(undefined8 *)(param_1 + 0x138),local_78);
  local_80[0] = *param_2;
  FUN_030d807c(*(undefined8 *)(param_1 + 0x138),local_80);
  local_88[0] = *param_2;
  FUN_030f7d68(*(undefined8 *)(param_1 + 0x170),local_88);
  local_90[0] = *param_2;
  FUN_0307ab28(*(undefined8 *)(param_1 + 0x130),local_90);
  if (bVar7) {
    local_98[0] = *param_2;
    FUN_0307affc(*(undefined8 *)(param_1 + 0x130),local_98);
    lVar20 = *(long *)(*(long *)(param_1 + 0x138) + 0xf0);
    local_48 = *param_2;
    plVar19 = (long *)(lVar20 + 0x18);
    local_44[0] = 0;
    lVar15 = FUN_030d4c28(plVar19,&local_48,local_44);
    lVar18 = *(long *)(lVar20 + 0x18);
    pbVar14 = (byte *)(lVar18 + ((lVar15 << 0x20) >> 0x1d) + 4);
    bVar4 = *pbVar14;
    iVar10 = (int)lVar15;
    if ((bVar4 & 1) == 0) {
      *pbVar14 = bVar4 | 2;
    }
    else {
      *pbVar14 = bVar4 & 0xfe;
      if ((bVar4 & 0xfe) == 0) {
        if ((*(uint *)(lVar20 + 0x30) < (uint)((ulong)lVar15 >> 0x20)) ||
           (lVar15 = *(long *)(lVar20 + 0x28) + (lVar15 >> 0x20) * 8, *(int *)(lVar15 + 4) != iVar10
           )) {
          lVar15 = FUN_030b04f4(plVar19,*plVar19 + (long)iVar10 * 8);
        }
        FUN_030d4f2c(plVar19,lVar15);
      }
    }
    *(undefined1 *)(lVar18 + (long)iVar10 * 8 + 5) = 0;
    lVar20 = *(long *)(*(long *)(param_1 + 0x138) + 0xf0);
    local_48 = *param_2;
    plVar19 = (long *)(lVar20 + 0x18);
    local_44[0] = 0;
    lVar15 = FUN_030d4c28(plVar19,&local_48,local_44);
    lVar18 = *(long *)(lVar20 + 0x18);
    pbVar14 = (byte *)(lVar18 + ((lVar15 << 0x20) >> 0x1d) + 4);
    bVar4 = *pbVar14;
    iVar10 = (int)lVar15;
    if ((bVar4 >> 2 & 1) == 0) {
      *pbVar14 = bVar4 | 8;
    }
    else {
      *pbVar14 = bVar4 & 0xfb;
      if ((bVar4 & 0xfb) == 0) {
        if ((*(uint *)(lVar20 + 0x30) < (uint)((ulong)lVar15 >> 0x20)) ||
           (lVar15 = *(long *)(lVar20 + 0x28) + (lVar15 >> 0x20) * 8, *(int *)(lVar15 + 4) != iVar10
           )) {
          lVar15 = FUN_030b04f4(plVar19,*plVar19 + (long)iVar10 * 8);
        }
        FUN_030d4f2c(plVar19,lVar15);
      }
    }
    *(undefined1 *)(lVar18 + (long)iVar10 * 8 + 5) = 0;
    if ((char)plVar17[6] == '\x01') {
      lVar15 = plVar17[4];
    }
    else {
      lVar15 = FUN_00e0e904();
    }
    *(undefined4 *)(lVar15 + 0x60) = 0xffffffff;
    FUN_03088128(plVar17);
  }
  else {
    lVar20 = *(long *)(*(long *)(param_1 + 0x138) + 0xf0);
    local_48 = *param_2;
    plVar19 = (long *)(lVar20 + 0x18);
    local_44[0] = 0;
    lVar15 = FUN_030d4c28(plVar19,&local_48,local_44);
    lVar18 = *(long *)(lVar20 + 0x18);
    pbVar14 = (byte *)(lVar18 + ((lVar15 << 0x20) >> 0x1d) + 4);
    bVar4 = *pbVar14;
    iVar10 = (int)lVar15;
    if ((bVar4 & 1) == 0) {
      *pbVar14 = bVar4 | 2;
    }
    else {
      *pbVar14 = bVar4 & 0xfe;
      if ((bVar4 & 0xfe) == 0) {
        if ((*(uint *)(lVar20 + 0x30) < (uint)((ulong)lVar15 >> 0x20)) ||
           (lVar15 = *(long *)(lVar20 + 0x28) + (lVar15 >> 0x20) * 8, *(int *)(lVar15 + 4) != iVar10
           )) {
          lVar15 = FUN_030b04f4(plVar19,*plVar19 + (long)iVar10 * 8);
        }
        FUN_030d4f2c(plVar19,lVar15);
      }
    }
    *(undefined1 *)(lVar18 + (long)iVar10 * 8 + 5) = 0;
  }
  if ((char)plVar16[6] == '\x01') {
    lVar15 = plVar16[4];
  }
  else {
    lVar15 = FUN_0307d71c();
  }
  *(undefined4 *)(lVar15 + 0x17c) = 0xffffffff;
  puVar8 = PTR_DAT_047d1a08;
  if ((int)plVar16[8] != 0) {
    plVar19 = (long *)plVar16[7];
    plVar21 = plVar19 + (long)(int)plVar16[8] * 3;
    do {
      lVar15 = plVar21[-2];
      plVar21 = plVar21 + -3;
      if (lVar15 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar15 + 8));
        (**(code **)(puVar8 + 8))(0,lVar15,0);
      }
      plVar11 = (long *)*plVar21;
      if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
        plVar1 = plVar11 + 2;
        do {
          lVar15 = *plVar1;
          cVar6 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar15 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar11 + 0x18))();
        }
      }
    } while (plVar21 != plVar19);
  }
  *(undefined4 *)(plVar16 + 8) = 0;
  *(undefined4 *)(plVar16 + 10) = 0;
  local_a0[0] = *param_2;
  FUN_030d4684(param_1 + 0x48,param_1,local_a0);
  if (bVar7) {
    local_a8[0] = *param_2;
    FUN_030d4684(param_1 + 0x68,param_1,local_a8);
  }
  if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
    plVar19 = plVar17 + 2;
    do {
      lVar15 = *plVar19;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
  }
  if (plVar16[1] != 0) {
    plVar17 = plVar16 + 2;
    do {
      lVar15 = *plVar17;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *plVar17 = lVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  return;
}


