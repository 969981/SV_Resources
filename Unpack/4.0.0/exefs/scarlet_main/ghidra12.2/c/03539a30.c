/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03539a30; name: FUN_03539a30
 */


void * FUN_03539a30(int param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  void *__s;
  undefined8 *__s_00;
  long lVar18;
  ulong local_98;
  ulong local_78;
  undefined8 local_68;
  
  lVar18 = (long)param_1;
  piVar1 = (int *)(&DAT_048d2720 + (long)param_1 * 0x638);
  do {
    if (*piVar1 != 0) {
      iVar8 = 1000;
      ClearExclusiveLocal();
      goto LAB_03539a90;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_03539ac8;
LAB_03539a90:
  do {
    Yield();
    iVar8 = iVar8 + -1;
    do {
      if (*piVar1 != 0) {
        bVar6 = false;
        ClearExclusiveLocal();
        if (iVar8 != 0) goto LAB_03539ac0;
        goto LAB_03539ac4;
      }
      bVar6 = true;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) break;
LAB_03539ac0:
  } while (!bVar6);
LAB_03539ac4:
  if (iVar8 == 0) {
    do {
      nn::os::SleepThread(100000);
      while (*piVar1 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_03539ac8;
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_03539ac8:
  if (param_2 == 0) {
    __s = *(void **)(&DAT_048d2728 + lVar18 * 0x638);
    if (__s != (void *)0x0) {
      *(undefined8 *)(&DAT_048d2728 + lVar18 * 0x638) = *(undefined8 *)((long)__s + 0x1890);
      goto LAB_03539f5c;
    }
    *(undefined8 *)(&DAT_048d2728 + lVar18 * 0x638) = 0;
  }
  __s = *(void **)(&DAT_048d2730 + lVar18 * 0x638);
  puVar2 = (undefined8 *)(&DAT_048d2730 + lVar18 * 0x638);
  if (__s == (void *)0x0) {
    *puVar2 = 0;
    puVar17 = &DAT_048d2168 + lVar18 * 199;
    uVar10 = *puVar17;
    local_98 = 0;
    if (uVar10 != 0) {
      local_98 = (uVar10 + 0x7e85f) / uVar10;
    }
    plVar3 = (long *)(&DAT_048d2598 + lVar18 * 0x638);
    local_78 = local_98;
    if (*(ulong *)(&DAT_048d2598 + lVar18 * 0x638) < local_98) {
      uVar11 = local_98 * uVar10;
      uVar15 = *(ulong *)(&DAT_048d2150 + lVar18 * 0x638);
      if (uVar11 < uVar15) {
        local_78 = 0;
        if (uVar10 != 0) {
          local_78 = uVar15 / uVar10;
        }
        uVar12 = uVar15 - 0x60;
        uVar11 = uVar12 / 0x7e80;
        if (0x7e7ff < uVar12) {
          uVar11 = 0x10;
        }
        uVar16 = 0x100;
        if (uVar12 >> 0xf < 0xfd) {
          uVar16 = uVar11;
        }
        local_98 = 0;
        if (uVar10 != 0) {
          local_98 = ((uVar10 + (uVar16 * 0x7e80 | 0x60)) - 1) / uVar10;
        }
        uVar11 = uVar15;
      }
      else {
        uVar16 = 0x10;
      }
      local_68 = 0;
      uVar15 = 0;
      if (uVar10 <= uVar11) {
        if (uVar10 <= *(ulong *)(&DAT_048d2160 + lVar18 * 0x638)) {
          uVar10 = 0;
        }
        uVar15 = uVar10;
      }
      while (uVar12 = DAT_048d2d80, uVar10 = DAT_048d2d80 + uVar15 + uVar11,
            DAT_048d2d78 == 0 || uVar10 <= DAT_048d2d78) {
        while (DAT_048d2d80 == uVar12) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x48d2d80,0x10);
          if (bVar6) {
            cVar5 = ExclusiveMonitorsStatus();
            DAT_048d2d80 = uVar10;
          }
          if (cVar5 == '\0') {
            uVar10 = (**(code **)(&DAT_048d2108 + lVar18 * 0x638))(uVar15 + uVar11,&local_68);
            uVar9 = 0;
            if ((uVar15 != 0) && (uVar10 != 0)) {
              uVar15 = uVar15 - (uVar10 & (*(ulong *)(&DAT_048d2178 + lVar18 * 0x638) ^
                                          0xffffffffffffffff));
              uVar10 = uVar10 + uVar15;
              uVar9 = (undefined4)(uVar15 >> 3);
            }
            if (uVar10 == 0) goto LAB_03539f58;
            *(undefined4 *)(uVar10 + 0x3c) = uVar9;
            *(undefined4 *)(uVar10 + 0x28) = 1;
            *(int *)(uVar10 + 0x2c) = (int)local_98;
            *(int *)(uVar10 + 0x30) = (int)local_78;
            *(undefined8 *)(uVar10 + 0x58) = local_68;
            *(int *)(uVar10 + 0x38) = (int)local_78;
            goto LAB_03539d64;
          }
        }
        ClearExclusiveLocal();
      }
LAB_03539f58:
      __s = (void *)0x0;
    }
    else {
      lVar14 = lVar18 * 0x638;
      uVar10 = *(ulong *)(&DAT_048d2590 + lVar14);
      lVar13 = *(long *)(&DAT_048d25a0 + lVar14);
      if (uVar10 - lVar13 != 0) {
        *(undefined4 *)(uVar10 + 0x28) = 2;
        uVar16 = *(ulong *)(&DAT_048d2170 + lVar18 * 0x638);
        *(undefined4 *)(uVar10 + 0x3c) = 0;
        *(int *)(uVar10 + 0x34) = (int)(uVar10 - lVar13 >> (uVar16 & 0x3f));
      }
      *(int *)(uVar10 + 0x2c) = (int)local_98;
      lVar13 = *plVar3;
      *plVar3 = lVar13 - local_98;
      if (lVar13 - local_98 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = uVar10 + (local_98 << (*(ulong *)(&DAT_048d2170 + lVar18 * 0x638) & 0x3f));
      }
      *(long *)(&DAT_048d2590 + lVar14) = lVar13;
      uVar16 = 0x10;
LAB_03539d64:
      uVar11 = *puVar17;
      __s = (void *)(uVar10 + 0x60);
      memset(__s,0,0x7e78);
      piVar4 = (int *)(&DAT_048d2588 + lVar18 * 0x638);
      do {
        iVar8 = *piVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar6) {
          *piVar4 = iVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      iVar8 = iVar8 + 2;
      *(int *)(uVar10 + 0x18f8) = iVar8;
      uVar11 = (uVar11 - 0x60) / 0x7e80;
      lVar14 = ((ulong)(long)iVar8 % 0x2f) * 8 + lVar18 * 0x638;
      if (uVar16 <= uVar11) {
        uVar16 = uVar11;
      }
      *(undefined8 *)(uVar10 + 0x18e8) = *(undefined8 *)(&DAT_048d2100 + lVar14 + 0x4a8);
      *(void **)(&DAT_048d2100 + lVar14 + 0x4a8) = __s;
      *(int *)(uVar10 + 0x18e4) = (int)uVar16 + -1;
      if (1 < uVar16) {
        __s_00 = (undefined8 *)(uVar10 + 0x7ee0);
        do {
          memset(__s_00,0,0x7e78);
          do {
            iVar8 = *piVar4;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar6) {
              *piVar4 = iVar8 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          iVar8 = iVar8 + 2;
          *(int *)(__s_00 + 0x313) = iVar8;
          lVar14 = ((ulong)(long)iVar8 % 0x2f) * 8 + lVar18 * 0x638;
          __s_00[0x311] = *(undefined8 *)(&DAT_048d2100 + lVar14 + 0x4a8);
          *(undefined8 **)(&DAT_048d2100 + lVar14 + 0x4a8) = __s_00;
          __s_00[0x314] = __s;
          *__s_00 = 0xffffffffffffffff;
          uVar16 = uVar16 - 1;
          __s_00[0x312] = *puVar2;
          *puVar2 = __s_00;
          __s_00 = __s_00 + 0xfd0;
        } while (1 < uVar16);
      }
      uVar16 = local_78 - local_98;
      if (local_98 <= local_78 && uVar16 != 0) {
        uVar15 = *(ulong *)(&DAT_048d2188 + lVar18 * 0x638);
        uVar11 = *puVar17;
        *(ulong *)(uVar10 + 0x18d8) = uVar10;
        lVar14 = uVar10 + uVar11 * local_98;
        uVar11 = uVar15;
        if (uVar16 <= uVar15) {
          uVar11 = uVar16;
        }
        *(int *)(uVar10 + 0x18e0) = (int)uVar11;
        *(long *)(uVar10 + 0x18d0) = lVar14;
        if (uVar15 < uVar16) {
          uVar15 = *puVar17;
          *(ulong *)(&DAT_048d25a0 + lVar18 * 0x638) = uVar10;
          *plVar3 = uVar16 - uVar11;
          *(ulong *)(&DAT_048d2590 + lVar18 * 0x638) = lVar14 + uVar15 * uVar11;
        }
      }
    }
  }
  else {
    *puVar2 = *(undefined8 *)((long)__s + 0x1890);
  }
LAB_03539f5c:
  *piVar1 = 0;
  FUN_0353b230(param_1,__s,0);
  return __s;
}


