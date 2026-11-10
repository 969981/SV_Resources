/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349cd08; name: FUN_0349cd08
 */


int FUN_0349cd08(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  undefined4 uVar16;
  int *piVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  undefined8 local_110;
  undefined4 local_108;
  char local_104;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined1 local_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined2 uStack_d5;
  undefined2 local_d3;
  undefined *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  uVar23 = *(uint *)(param_1 + 0x80);
  if (uVar23 == 0) {
    return 4;
  }
  lVar21 = *(long *)PTR_DAT_047e6f28;
  pMVar2 = (MutexType *)(lVar21 + 0x2a0);
  nn::os::LockMutex(pMVar2);
  uVar3 = *(uint *)(lVar21 + 0x2c8);
  if (uVar3 != 0) {
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = uVar23 / uVar3;
    }
    for (plVar22 = *(long **)(*(long *)(lVar21 + 0x2c0) + (ulong)(uVar23 - uVar7 * uVar3) * 8);
        plVar22 != (long *)0x0; plVar22 = (long *)plVar22[1]) {
      if (*(uint *)(plVar22 + 2) == uVar23) {
        *(int *)((long)plVar22 + 0x14) = *(int *)((long)plVar22 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar2);
        iVar14 = (int)plVar22[6];
        goto LAB_0349cdcc;
      }
    }
  }
  nn::os::UnlockMutex(pMVar2);
  if (uVar23 != 0xe611314a) {
    return 0xf;
  }
  plVar22 = (long *)0x0;
  iVar14 = 0xae0007;
LAB_0349cdcc:
  puVar10 = PTR_DAT_047e7240;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0xff;
  local_98 = 0xff;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_d0 = PTR_DAT_047e7240 + 0x10;
  local_70 = (long *)0x0;
  local_e0 = 0;
  uStack_dc = 0;
  local_c8 = 0;
  local_d8 = 1;
  local_d3 = 1;
  piVar17 = *(int **)PTR_DAT_047e6f70;
  uVar23 = *(uint *)(PTR_DAT_047e6f70 + 8);
  uStack_d7 = 0;
  uStack_d6 = 0;
  uStack_d5 = 0;
  if ((uVar23 == 0) || (*piVar17 == iVar14)) {
    piVar19 = piVar17;
  }
  else {
    lVar21 = (ulong)uVar23 * 0x20;
    iVar13 = 0x58;
    piVar20 = piVar17;
    do {
      lVar21 = lVar21 + -0x20;
      if (lVar21 == 0) goto LAB_0349cf38;
      piVar19 = piVar20 + 8;
      piVar1 = piVar20 + 8;
      piVar20 = piVar19;
    } while (*piVar1 != iVar14);
  }
  if (piVar19 == piVar17 + (ulong)uVar23 * 8) {
    iVar13 = 0x58;
  }
  else {
    plVar15 = (long *)(**(code **)(piVar19 + 2))(PTR_PTR_047e71e0);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))(plVar15,&local_e0);
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0xff;
      local_f0 = 0xff;
      local_e8 = 0;
      local_70 = plVar15;
      FUN_0347ff40(&local_d0,plVar22,0,&local_110,0,0);
      if (local_70 == (long *)0x0) {
        local_d0 = puVar10 + 0x10;
        iVar13 = 0x34;
        goto LAB_0349cf40;
      }
      uStack_dc = *(uint *)(param_1 + 0x8c);
      if ((uStack_dc & 0xf00) == 0x300) {
        uStack_dc = 0;
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      local_e0 = *(undefined4 *)PTR_DAT_047e6fa0;
      uStack_d6 = 5;
      local_d8 = 0x20;
      uStack_d7 = (undefined1)uStack_dc;
      if (*(char *)(param_1 + 0x46f) == '\0') {
        uVar16 = *(undefined4 *)(param_1 + 0x2c);
      }
      else {
        uVar16 = 0;
      }
      *(undefined4 *)(param_1 + 0x378) = uVar16;
      *(int *)(param_1 + 0x37c) = iVar14;
      iVar13 = (**(code **)(*local_70 + 0x38))
                         (local_70,PTR_PTR_047e71e0,param_1 + 0x370,local_c8,&local_e0);
      uVar23 = uStack_dc;
      puVar9 = PTR_DAT_047e6d08;
      if (iVar13 == 1) {
        lVar21 = *(long *)(param_1 + 0x400);
        if ((lVar21 != 0) && (bVar4 = *(byte *)(param_1 + 0x408), bVar4 != 0)) {
          if ((bVar4 < 9) && (*(uint *)PTR_DAT_047e6d08 == (uint)*(ushort *)(param_1 + 0x410))) {
            plVar15 = &DAT_048afcf8 + (bVar4 - 1);
            do {
              lVar18 = *plVar15;
              *(long *)(lVar21 + -0x20) = lVar18;
              while (*plVar15 == lVar18) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *plVar15 = lVar21 + -0x20;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  *(undefined4 *)(lVar21 + -0x18) = 0;
                  goto LAB_0349d078;
                }
              }
              ClearExclusiveLocal();
            } while( true );
          }
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar21 + -0x20);
        }
LAB_0349d078:
        *(undefined8 *)(param_1 + 0x400) = 0;
        *(undefined8 *)(param_1 + 0x40c) = 0x2b;
        *(undefined8 *)(param_1 + 0x414) = 0;
        *(undefined8 *)(param_1 + 0x41c) = 0x3f800000ffffffff;
        *(undefined8 *)(param_1 + 0x424) = 0x1ffffffff;
        lVar21 = *(long *)(param_1 + 0x430);
        if ((lVar21 != 0) && (bVar4 = *(byte *)(param_1 + 0x438), bVar4 != 0)) {
          if ((bVar4 < 9) && (*(uint *)puVar9 == (uint)*(ushort *)(param_1 + 0x440))) {
            plVar15 = &DAT_048afcf8 + (bVar4 - 1);
            do {
              lVar18 = *plVar15;
              *(long *)(lVar21 + -0x20) = lVar18;
              while (*plVar15 == lVar18) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *plVar15 = lVar21 + -0x20;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  *(undefined4 *)(lVar21 + -0x18) = 0;
                  goto LAB_0349d128;
                }
              }
              ClearExclusiveLocal();
            } while( true );
          }
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar21 + -0x20);
        }
LAB_0349d128:
        *(undefined8 *)(param_1 + 0x430) = 0;
        *(undefined8 *)(param_1 + 0x44c) = 0x3f800000ffffffff;
        *(undefined8 *)(param_1 + 0x43c) = 0x2b;
        *(undefined8 *)(param_1 + 0x444) = 0;
        *(undefined8 *)(param_1 + 0x454) = 0x1ffffffff;
        FUN_034a0dc8((long *)(param_1 + 0x128));
        uVar3 = uVar23 >> 8 & 0xf;
        if ((3 < uVar3) || (((uVar23 & 0xff) == 0 && (uVar3 != 3)))) {
          iVar13 = 4;
          goto LAB_0349d16c;
        }
        if (uVar3 == 1) {
          uVar3 = uVar23 >> 0xc;
          if (((uVar23 >> 0x10 ^ uVar23 >> 0x15) & 1) != 0) {
            uVar3 = uVar23 >> 0xc & 0xffffffcf | 0x600;
          }
          uVar23 = uVar3 - (uVar3 >> 1 & 0x55555555);
          uVar23 = (uVar23 & 0x33333333) + (uVar23 >> 2 & 0x33333333);
          uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar3 << 0xc | 0x100;
LAB_0349d3f4:
          uVar16 = *(undefined4 *)puVar9;
          *(uint *)(param_1 + 0x408) = uVar23;
          *(short *)(param_1 + 0x410) = (short)uVar16;
          iVar13 = FUN_034768d8(param_1 + 0x400);
        }
        else {
          if (uVar3 != 3) goto LAB_0349d3f4;
          local_110 = local_110 & 0xffffffff00000000;
          (**(code **)(*local_70 + 0x68))(local_70,&local_110);
          uVar3 = (uint)local_110 >> 8 & 0xf;
          if ((uVar3 < 4) && (((local_110 & 0xff) != 0 || (uVar3 == 3)))) {
            uVar16 = *(undefined4 *)puVar9;
            *(uint *)(param_1 + 0x408) = (uint)local_110;
            *(short *)(param_1 + 0x410) = (short)uVar16;
            iVar13 = FUN_034768d8(param_1 + 0x400);
            if (iVar13 == 1) {
              if (local_104 != '\0') {
                *(short *)(param_1 + 0x440) = (short)*(undefined4 *)puVar9;
                *(undefined4 *)(param_1 + 0x438) = 0x3102;
                iVar13 = FUN_034768d8(param_1 + 0x430);
                if (iVar13 != 1) goto LAB_0349d40c;
              }
              uVar3 = local_110._4_4_;
              *(undefined4 *)(param_1 + 0x148) = 0;
              puVar8 = PTR_DAT_047e2fd0;
              if (local_110._4_4_ == 0) {
LAB_0349d520:
                iVar13 = 1;
              }
              else {
                lVar21 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)local_110._4_4_ * 0xc0);
                *(long *)(param_1 + 0x128) = lVar21;
                if (lVar21 != 0) {
                  *(uint *)(param_1 + 0x134) = uVar3;
                  lVar21 = (**(code **)(puVar8 + 0x10))(0,0x4b00);
                  *(long *)(param_1 + 0x138) = lVar21;
                  if (lVar21 != 0) {
                    *(undefined4 *)(param_1 + 0x144) = 100;
                    goto LAB_0349d520;
                  }
                }
                iVar13 = 0x34;
              }
            }
          }
          else {
            iVar13 = 4;
          }
        }
LAB_0349d40c:
        if ((iVar13 != 1) ||
           (iVar13 = (**(code **)(*local_70 + 0x18))(), plVar15 = local_70, iVar13 != 1))
        goto LAB_0349d16c;
        *(int *)(param_1 + 0x30) = iVar14;
        local_70 = (long *)0x0;
        lVar21 = param_1 + 0x390;
        (**(code **)(*(long *)(param_1 + 0x390) + 0x28))(lVar21);
        plVar12 = local_c0;
        *(undefined8 *)(param_1 + 0x398) = local_c8;
        *(long **)(param_1 + 0x3a0) = local_c0;
        if (local_c0 != (long *)0x0) {
          pMVar2 = (MutexType *)(local_c0 + 0xe);
          nn::os::LockMutex(pMVar2);
          if (plVar12[0x12] == 0) {
            plVar12[0x12] = lVar21;
            *(undefined8 *)(param_1 + 1000) = 0;
          }
          else {
            *(long *)(param_1 + 1000) = plVar12[0x12];
            plVar12[0x12] = lVar21;
          }
          nn::os::UnlockMutex(pMVar2);
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
        local_c8 = 0;
        (**(code **)(local_d0 + 0x28))(&local_d0);
        *(long **)(param_1 + 0x3f0) = plVar15;
        *(uint *)(param_1 + 100) = uVar23;
        *(bool *)(param_1 + 0x470) = (uVar23 & 0xf00) == 0x300;
        if (plVar15 != (long *)0x0) {
          iVar14 = (**(code **)(*plVar15 + 0x60))(plVar15);
          *(bool *)(param_1 + 0x471) = iVar14 == 1;
          if ((iVar14 == 1) && (*(char *)(param_1 + 0x470) != '\0')) {
            (**(code **)(**(long **)(param_1 + 0x3f0) + 0x68))
                      (*(long **)(param_1 + 0x3f0),param_1 + 0x118);
          }
        }
        plVar15 = *(long **)(param_1 + 0x388);
        *(long **)(param_1 + 0x388) = plVar22;
        if (plVar15 != (long *)0x0) {
          (**(code **)(*plVar15 + 0x18))();
          plVar22 = *(long **)(param_1 + 0x388);
        }
        if (plVar22 == (long *)0x0) {
          uVar23 = 0;
        }
        else {
          uVar23 = 0;
          if (plVar22[0x15] != 0) {
            uVar23 = (uint)*(byte *)(plVar22[0x15] + 0x24);
          }
        }
        uVar16 = *(undefined4 *)(param_1 + 8);
        *(uint *)(param_1 + 8) = uVar23;
        *(undefined4 *)(param_1 + 0xc) = uVar16;
        FUN_0349d698(param_1,0);
        iVar13 = 1;
        FUN_0349d698(param_1,1);
        FUN_0349d698(param_1,2);
        FUN_0349d698(param_1,3);
        local_110 = 0;
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0xff;
        local_f0 = 0xff;
        local_e8 = 0;
        FUN_03480534(param_1 + 0x390,&local_110,0);
        plVar22 = (long *)0x0;
        *(undefined4 *)(param_1 + 0x468) = 1;
      }
      else {
LAB_0349d16c:
        lVar21 = *(long *)(param_1 + 0x400);
        if ((lVar21 != 0) && (bVar4 = *(byte *)(param_1 + 0x408), bVar4 != 0)) {
          if ((bVar4 < 9) && (*(uint *)puVar9 == (uint)*(ushort *)(param_1 + 0x410))) {
            plVar15 = &DAT_048afcf8 + (bVar4 - 1);
            do {
              lVar18 = *plVar15;
              *(long *)(lVar21 + -0x20) = lVar18;
              while (*plVar15 == lVar18) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *plVar15 = lVar21 + -0x20;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  *(undefined4 *)(lVar21 + -0x18) = 0;
                  goto LAB_0349d1f4;
                }
              }
              ClearExclusiveLocal();
            } while( true );
          }
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar21 + -0x20);
        }
LAB_0349d1f4:
        *(undefined8 *)(param_1 + 0x400) = 0;
        *(undefined8 *)(param_1 + 0x40c) = 0x2b;
        *(undefined8 *)(param_1 + 0x414) = 0;
        *(undefined8 *)(param_1 + 0x41c) = 0x3f800000ffffffff;
        *(undefined8 *)(param_1 + 0x424) = 0x1ffffffff;
        lVar21 = *(long *)(param_1 + 0x430);
        if ((lVar21 != 0) && (bVar4 = *(byte *)(param_1 + 0x438), bVar4 != 0)) {
          if ((bVar4 < 9) && (*(uint *)puVar9 == (uint)*(ushort *)(param_1 + 0x440))) {
            plVar15 = &DAT_048afcf8 + (bVar4 - 1);
            do {
              lVar18 = *plVar15;
              *(long *)(lVar21 + -0x20) = lVar18;
              while (*plVar15 == lVar18) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *plVar15 = lVar21 + -0x20;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  *(undefined4 *)(lVar21 + -0x18) = 0;
                  goto LAB_0349d2a4;
                }
              }
              ClearExclusiveLocal();
            } while( true );
          }
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,lVar21 + -0x20);
        }
LAB_0349d2a4:
        *(undefined8 *)(param_1 + 0x430) = 0;
        *(undefined8 *)(param_1 + 0x43c) = 0x2b;
        *(undefined8 *)(param_1 + 0x444) = 0;
        *(undefined8 *)(param_1 + 0x44c) = 0x3f800000ffffffff;
        *(undefined8 *)(param_1 + 0x454) = 0x1ffffffff;
        FUN_034a0dc8(param_1 + 0x128);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x10))(local_70,PTR_PTR_047e71e0);
          local_70 = (long *)0x0;
        }
        FUN_03480ed4(&local_d0);
        pcVar11 = DAT_048b0140;
        if (DAT_048b0140 != (code *)0x0) {
          if (((DAT_048afc00 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&DAT_048afc00), iVar14 != 0)) {
            DAT_048afbf8 = PTR_DAT_047e6ff0 + 0x10;
            __cxa_guard_release(&DAT_048afc00);
          }
          (*pcVar11)(&DAT_048afbf8,*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),0
                     ,iVar13);
        }
      }
      local_d0 = puVar10 + 0x10;
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x10))(local_70,PTR_PTR_047e71e0);
        local_70 = (long *)0x0;
      }
      goto LAB_0349cf40;
    }
    iVar13 = 0x34;
  }
LAB_0349cf38:
  local_d0 = puVar10 + 0x10;
LAB_0349cf40:
  FUN_03480ed4(&local_d0);
  local_d0 = PTR_DAT_047e7170 + 0x10;
  FUN_03480ed4(&local_d0);
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x18))(plVar22);
  }
  return iVar13;
}


