/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f35f08; name: FUN_02f35f08
 */


bool FUN_02f35f08(long param_1,ulong param_2,int param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  uint *puVar17;
  int iVar18;
  byte *pbVar19;
  int *piVar20;
  ulong uVar21;
  MutexType *pMVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  lVar23 = *(long *)(param_1 + 0x38);
  local_a8 = auStack_98;
  local_a0 = 0x8000000800000000;
  uVar25 = param_2 & 0xffffff;
  lVar5 = tpidr_el0;
  if (*(int *)(param_1 + 0x818) == 1) {
    if (*(long *)(param_1 + 0x800) == 0) {
      plVar8 = (long *)0x0;
      iVar15 = -1;
      bVar7 = false;
    }
    else {
      lVar16 = (long)DAT_0486b380;
      lVar9 = *(long *)(lVar5 + 0x1000b8);
      if (lVar9 == 0) {
        lVar9 = FUN_00e5d3b4();
        *(long *)(lVar5 + 0x1000b8) = lVar9;
        iVar18 = DAT_0486b380;
        iVar15 = (int)*(undefined8 *)(lVar9 + lVar16 * 8 + 1000);
        if (lVar9 == 0) {
          lVar9 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar9;
        }
      }
      else {
        iVar15 = (int)*(undefined8 *)(lVar9 + lVar16 * 8 + 1000);
        iVar18 = DAT_0486b380;
      }
      *(long *)(lVar9 + (long)iVar18 * 8 + 1000) = (long)(iVar15 + 1);
      plVar8 = *(long **)(param_1 + 0x800);
      bVar7 = iVar15 == 0;
    }
    bVar7 = (bool)(bVar7 & plVar8 != (long *)0x0);
    if ((*(char *)(param_1 + 0x999) != '\0') || (bVar7)) {
      uStack_70 = *(undefined8 *)(lVar23 + uVar25 * 0xc0 + 0xb0);
      local_78 = 0x1e02000020;
      local_68 = (char)param_3;
      if (bVar7) {
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
      }
    }
    if (iVar15 != -1) {
      lVar16 = (long)DAT_0486b380;
      lVar9 = *(long *)(lVar5 + 0x1000b8);
      if (lVar9 == 0) {
        lVar9 = FUN_00e5d3b4();
        *(long *)(lVar5 + 0x1000b8) = lVar9;
      }
      *(long *)(lVar9 + lVar16 * 8 + 1000) = (long)iVar15;
    }
  }
  uVar21 = param_2 & 0xffffffff;
  if (*(long *)(param_1 + 0x800) == 0) {
    iVar15 = -1;
  }
  else {
    lVar16 = (long)DAT_0486b380;
    lVar9 = *(long *)(lVar5 + 0x1000b8);
    if (lVar9 == 0) {
      lVar9 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar9;
      iVar18 = DAT_0486b380;
      iVar15 = (int)*(undefined8 *)(lVar9 + lVar16 * 8 + 1000);
      if (lVar9 == 0) {
        lVar9 = FUN_00e5d3b4();
        *(long *)(lVar5 + 0x1000b8) = lVar9;
      }
    }
    else {
      iVar15 = (int)*(undefined8 *)(lVar9 + lVar16 * 8 + 1000);
      iVar18 = DAT_0486b380;
    }
    *(long *)(lVar9 + (long)iVar18 * 8 + 1000) = (long)(iVar15 + 1);
  }
  uVar13 = (uint)param_2;
  if (*(long *)(param_1 + 0x698) == 0) {
    if ((*(byte *)(lVar23 + uVar25 * 0xc0 + 0x88) & 1) != 0) {
LAB_02f363fc:
      FUN_02f098c8(param_1 + 0x28,uVar21,*(undefined8 *)(param_1 + 0x4b0));
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      lVar9 = *(long *)(param_1 + 0x38);
      param_2 = param_2 & 0xffffffff;
      do {
        uVar21 = (ulong)((uint)param_2 & 0xffffff);
        if ((*(byte *)(lVar9 + uVar21 * 0xc0 + 0x88) >> 2 & 1) != 0) {
          lVar16 = (long)(int)local_a0;
          if ((int)(local_a0._4_4_ & 0x7fffffff) <= (int)local_a0) {
            FUN_02f23d90(&local_a8,puVar1,lVar16 + 1);
          }
          *(undefined4 *)(local_a8 + (long)(int)local_a0 * 4) =
               *(undefined4 *)(lVar9 + uVar21 * 0xc0 + 0x50);
          local_a0 = CONCAT44(local_a0._4_4_,(int)(lVar16 + 1));
          lVar9 = *(long *)(param_1 + 0x38);
        }
        uVar4 = *(uint *)(lVar9 + uVar21 * 0xc0 + 0x84);
        param_2 = (ulong)uVar4;
      } while (uVar4 != uVar13);
      if (*(int *)(param_1 + 0x818) == 8) {
        iVar18 = 0;
        if (*(int *)(*(long *)(param_1 + 0x150) +
                     (ulong)*(uint *)(lVar23 + uVar25 * 0xc0 + 0x80) * 0x80 + 0x4c) == 1) {
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x4a8) + 0x10) + 0x118) = 1;
        }
      }
      else {
        iVar18 = 0;
      }
      goto LAB_02f36588;
    }
  }
  else {
    uVar4 = *(uint *)(lVar23 + uVar25 * 0xc0 + 0x80);
    lVar9 = *(long *)(*(long *)(param_1 + 0x698) + 0x388) + (long)(int)uVar4 * 0x20;
    cVar3 = *(char *)(lVar9 + 0xe);
    if (param_3 == 0) {
      uVar4 = *(uint *)(lVar23 + uVar25 * 0xc0 + 0x54);
      if (((uVar4 & 1) == 0) &&
         (cVar3 != '\x02' && (*(byte *)(lVar23 + uVar25 * 0xc0 + 0x88) & 1) != 0)) {
        pcVar11 = (char *)(lVar9 + 0xb);
        if (*pcVar11 != -1) {
          *pcVar11 = '\0';
        }
        if ((uVar4 >> 3 & 1) == 0) {
          FUN_02f57af8(*(undefined8 *)(param_1 + 0x698),uVar21,0);
          goto LAB_02f363fc;
        }
        iVar18 = 0;
        goto LAB_02f36588;
      }
    }
    else if (cVar3 != '\x01') {
      lVar23 = *(long *)(param_1 + 0x150) + (ulong)uVar4 * 0x80;
      puVar17 = (uint *)(lVar23 + 0x4c);
      if (*puVar17 != 0 && *puVar17 != 0x7fffffff) {
        pbVar19 = (byte *)(lVar23 + 0x5e);
        uVar25 = (ulong)*pbVar19;
        pMVar22 = *(MutexType **)(param_1 + 0x480);
        nn::os::LockMutex(pMVar22);
        uVar4 = *puVar17;
        piVar10 = (int *)(param_1 + uVar25 * 0x18 + 0x188);
        if (uVar4 < (uint)((long)*piVar10 + -1)) {
          lVar23 = param_1 + uVar25 * 0x18;
          iVar18 = *(int *)(*(long *)(lVar23 + 0x180) + ((long)*piVar10 + -1) * 4);
          *(uint *)(*(long *)(param_1 + 0x150) + (long)iVar18 * 0x80 + 0x4c) = uVar4;
          *(int *)(*(long *)(lVar23 + 0x180) + (long)(int)uVar4 * 4) = iVar18;
        }
        *pbVar19 = 0xff;
        *puVar17 = 0x7fffffff;
        *piVar10 = *piVar10 + -1;
        nn::os::UnlockMutex(pMVar22);
      }
      lVar23 = *(long *)(param_1 + 0x38);
      puVar1 = PTR_PTR_047d1a50 + 0x20;
      uVar25 = param_2 & 0xffffffff;
      do {
        uVar25 = (ulong)((uint)uVar25 & 0xffffff);
        if ((*(byte *)(lVar23 + uVar25 * 0xc0 + 0x54) >> 3 & 1) != 0) {
          puVar17 = (uint *)(lVar23 + uVar25 * 0xc0 + 0x50);
          pMVar22 = *(MutexType **)(param_1 + 0x128);
          uVar24 = (ulong)*puVar17 & 0xffffff;
          nn::os::LockMutex(pMVar22);
          iVar18 = *(int *)(*(long *)(param_1 + 0x108) + uVar24 * 4);
          uVar12 = (long)*(int *)(param_1 + 0xf0) - 1;
          if (iVar18 < (int)uVar12) {
            puVar2 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar12 * 0x10);
            uVar14 = *puVar2;
            uVar4 = *(uint *)(puVar2 + 1);
            *(int *)(*(long *)(param_1 + 0x108) + ((ulong)uVar4 & 0xffffff) * 4) = iVar18;
            puVar2 = (undefined8 *)(*(long *)(param_1 + 0xe8) + (long)iVar18 * 0x10);
            *puVar2 = uVar14;
            *(uint *)(puVar2 + 1) = uVar4;
            uVar12 = (ulong)(*(int *)(param_1 + 0xf0) - 1);
          }
          *(int *)(param_1 + 0xf0) = (int)uVar12;
          nn::os::UnlockMutex(pMVar22);
          *(undefined1 *)(*(long *)(param_1 + 0xf8) + uVar24) = 0xff;
          lVar9 = lVar23 + uVar24 * 0xc0;
          *(uint *)(lVar9 + 0x54) = *(uint *)(lVar9 + 0x54) & 0xfffffff7;
          *(ushort *)(lVar9 + 0x58) = *(ushort *)(lVar9 + 0x58) | 0x228;
          *(undefined4 *)(*(long *)(param_1 + 0x108) + uVar24 * 4) = 0xffffffff;
          if ((*(byte *)(lVar23 + uVar25 * 0xc0 + 0x88) >> 2 & 1) != 0) {
            lVar23 = (long)(int)local_a0;
            if ((int)(local_a0._4_4_ & 0x7fffffff) <= (int)local_a0) {
              FUN_02f23d90(&local_a8,puVar1,lVar23 + 1);
            }
            *(uint *)(local_a8 + (long)(int)local_a0 * 4) = *puVar17;
            local_a0 = CONCAT44(local_a0._4_4_,(int)(lVar23 + 1));
          }
        }
        puVar6 = PTR_DAT_047d1a08;
        lVar23 = *(long *)(param_1 + 0x38);
        uVar4 = *(uint *)(lVar23 + uVar25 * 0xc0 + 0x84);
        uVar25 = (ulong)uVar4;
      } while (uVar4 != uVar13);
      param_2 = param_2 & 0xffffffff;
      do {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x698) + 0x318);
        piVar20 = *(int **)(*(long *)(param_1 + 0x698) + 0x318);
        piVar10 = piVar20 + 1;
        do {
          iVar18 = *piVar10;
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar7) {
            *piVar10 = iVar18 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        while (0xff < iVar18) {
          local_78 = 0x410;
          piVar10 = (int *)(**(code **)puVar6)(0,&local_78,0);
          if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
            (**(code **)(puVar6 + 0x10))(piVar10,"Block");
          }
          lVar9 = 0;
          do {
            lVar16 = lVar9 + 0x20;
            *(undefined8 *)((long)piVar10 + lVar9 + 0x10) = 0xffffff00ffffff;
            *(undefined8 *)((long)piVar10 + lVar9 + 0x18) = 0xffffff00ffffff;
            *(undefined8 *)((long)piVar10 + lVar9 + 0x20) = 0xffffff00ffffff;
            *(undefined8 *)((long)piVar10 + lVar9 + 0x28) = 0xffffff00ffffff;
            lVar9 = lVar16;
          } while (lVar16 != 0x400);
          if (piVar20 == (int *)0x0) {
            iVar18 = 0;
          }
          else {
            iVar18 = *piVar20 + 1;
          }
          *piVar10 = iVar18;
          piVar10[1] = 0;
          piVar10[2] = 0;
          piVar10[3] = 0;
          do {
            if ((int *)*puVar2 != piVar20) {
              ClearExclusiveLocal();
              (**(code **)(puVar6 + 8))(0,piVar10,0);
              goto LAB_02f363a0;
            }
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = piVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (piVar20 != (int *)0x0) {
            *(int **)(piVar20 + 2) = piVar10;
          }
LAB_02f363a0:
          piVar20 = (int *)*puVar2;
          piVar10 = piVar20 + 1;
          do {
            iVar18 = *piVar10;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar7) {
              *piVar10 = iVar18 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        piVar20[(long)iVar18 + 4] = (uint)param_2;
        uVar4 = *(uint *)(lVar23 + (ulong)((uint)param_2 & 0xffffff) * 0xc0 + 0x84);
        param_2 = (ulong)uVar4;
        if (uVar4 == uVar13) goto LAB_02f36518;
        lVar23 = *(long *)(param_1 + 0x38);
      } while( true );
    }
  }
  bVar7 = false;
LAB_02f365b0:
  if (iVar15 != -1) {
    lVar9 = (long)DAT_0486b380;
    lVar23 = *(long *)(lVar5 + 0x1000b8);
    if (lVar23 == 0) {
      lVar23 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar23;
    }
    *(long *)(lVar23 + lVar9 * 8 + 1000) = (long)iVar15;
  }
  uVar25 = local_a0;
  uVar21 = (ulong)local_a0._4_4_;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < (long)uVar25) && (local_a8 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_a8,uVar21 << 2);
  }
  return bVar7;
LAB_02f36518:
  FUN_02f57af8(*(undefined8 *)(param_1 + 0x698),uVar21,1);
  iVar18 = param_3;
LAB_02f36588:
  if ((int)local_a0 != 0) {
    (**(code **)(**(long **)(param_1 + 0x4c0) + 0x40))
              (*(long **)(param_1 + 0x4c0),local_a8,local_a0 & 0xffffffff,4);
  }
  bVar7 = iVar18 == param_3;
  goto LAB_02f365b0;
}


