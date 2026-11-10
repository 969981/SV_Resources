/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb1704; name: FUN_00cb1704
 */


ulong FUN_00cb1704(long param_1,ulong *param_2)

{
  uint *puVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  size_t sVar9;
  void *pvVar10;
  char *__s1;
  long lVar11;
  uint uVar12;
  long *plVar13;
  MutexType *pMVar14;
  ulong *puVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  uint uVar21;
  ulong local_c0;
  long *local_b8;
  int local_b0;
  uint local_ac;
  char local_a8;
  ushort local_a2;
  float local_98;
  char local_90;
  ushort local_8c;
  undefined4 local_64;
  
  nn::os::LockMutex(*(MutexType **)(param_1 + 0x40));
  local_c0 = 0;
  local_b8 = (long *)0x0;
  pcVar3 = (char *)(*param_2 & 0xfffffffffffffffe);
  if (pcVar3 != (char *)0x0) {
    sVar9 = strlen(pcVar3);
    sVar9 = (size_t)((int)sVar9 + 1);
    pvVar10 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar9);
    memcpy(pvVar10,pcVar3,sVar9);
    local_c0 = (ulong)pvVar10 | 1;
  }
  plVar13 = (long *)param_2[1];
  if (plVar13 != (long *)0x0) {
    if (plVar13[1] != 0) {
      plVar13 = plVar13 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar13 = (long *)param_2[1];
    }
    local_b8 = plVar13;
  }
  memcpy(&local_b0,param_2 + 2,0x40);
  bVar6 = (local_a2 & 0x7fff) != 0;
  uVar21 = (uint)bVar6 << 0x10;
  if (local_a8 != '\0') {
    uVar21 = (uint)bVar6 << 0x10 | 0x20000;
  }
  uVar12 = uVar21 | 0x40000;
  if (3.40282e+38 <= local_98) {
    uVar12 = uVar21;
  }
  if ((local_ac & 0x80000) != 0 || local_90 == '\x02') {
    uVar12 = uVar12 | 0x80000;
  }
  uVar21 = uVar12 | 0x100000;
  if ((float)((uint)local_8c << 0x10) == 0.0) {
    uVar21 = uVar12;
  }
  if (plVar13 != (long *)0x0) {
    uVar21 = uVar21 | 0x200000;
  }
  local_ac = local_ac & 0xffc00000 | local_ac & 0xffff | uVar21;
  if ((local_b0 == 0) && (uVar21 = *(uint *)(param_1 + 0x50), 0 < (int)uVar21)) {
    pcVar3 = (char *)(local_c0 & 0xfffffffffffffffe);
    lVar17 = 0;
    pvVar10 = (void *)(*(long *)(param_1 + 0x48) + 0x10);
    do {
      __s1 = (char *)(*(ulong *)((long)pvVar10 + -0x10) & 0xfffffffffffffffe);
      if ((pcVar3 == (char *)0x0) || (__s1 == (char *)0x0)) {
        iVar8 = -(uint)(pcVar3 != (char *)0x0);
        if (__s1 == (char *)0x0) goto LAB_00cb18a8;
      }
      else {
        iVar8 = strcmp(__s1,pcVar3);
LAB_00cb18a8:
        if (((iVar8 == 0) && (*(long **)((long)pvVar10 + -8) == plVar13)) &&
           (iVar8 = memcmp(pvVar10,&local_b0,0x40), iVar8 == 0)) {
          if ((int)lVar17 != 1) {
            uVar18 = -lVar17;
            nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x40));
            goto joined_r0x00cb1bfc;
          }
          break;
        }
      }
      lVar17 = lVar17 + -1;
      pvVar10 = (void *)((long)pvVar10 + 0x50);
    } while (-lVar17 != (ulong)uVar21);
  }
  nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x40));
  pcVar3 = (char *)(*param_2 & 0xfffffffffffffffe);
  if (((pcVar3 == (char *)0x0) || (sVar9 = strlen(pcVar3), (int)sVar9 < 1)) ||
     (sVar7 = FUN_02f1c86c(param_1,pcVar3), sVar7 == -1)) {
    pMVar14 = *(MutexType **)(param_1 + 0x40);
    nn::os::LockMutex(pMVar14);
    puVar1 = (uint *)(param_1 + 100);
    if ((~*(uint *)(param_1 + 100) & 0xffffff) == 0) {
      puVar15 = (ulong *)(param_1 + 0x38);
      plVar13 = (long *)(*puVar15 & 0xfffffffffffffffc);
      if (plVar13 != (long *)0x0) {
        *puVar15 = (ulong)plVar13 | 1;
        puVar19 = puVar15;
        do {
          puVar20 = (ulong *)(plVar13 + 1);
          plVar16 = (long *)(*puVar20 & 0xfffffffffffffffc);
          if ((*puVar20 & 3) == 0) {
            (**(code **)(*plVar13 + 0x20))(plVar13,param_1);
          }
          else {
            (**(code **)(*plVar13 + 8))();
            *puVar19 = *puVar19 & 3 | (ulong)plVar16;
            puVar20 = puVar19;
          }
          plVar13 = plVar16;
          puVar19 = puVar20;
        } while (plVar16 != (long *)0x0);
        *puVar15 = *puVar15 & 0xfffffffffffffffc;
      }
    }
    uVar21 = *puVar1 & 0xffffff;
    if (uVar21 == 0xffffff) {
      uVar18 = 0xffff;
    }
    else {
      uVar18 = 0xffff;
      uVar12 = *puVar1;
      do {
        uVar4 = *puVar1;
        if (uVar4 == uVar12) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar12 + 0x1000000 & 0xff000000 |
                      *(uint *)(*(long *)(param_1 + 0x48) + (ulong)uVar21 * 0x50 + 0x10) & 0xffffff;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00cb19a8;
          uVar18 = (ulong)uVar21;
          piVar2 = (int *)(param_1 + 0x68);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          uVar12 = *(uint *)(param_1 + 0x6c);
          if (uVar12 + 1 <= uVar21) {
            puVar1 = (uint *)(param_1 + 0x6c);
            uVar4 = uVar12;
            if (uVar12 + 1 <= uVar21 + 1) {
              uVar4 = uVar21;
            }
            do {
              if (*puVar1 != uVar12) {
                do {
                  ClearExclusiveLocal();
                  uVar4 = *puVar1;
                  uVar12 = uVar4;
                  if (uVar4 + 1 <= uVar21 + 1) {
                    uVar12 = uVar21;
                  }
                  while (*puVar1 == uVar4) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar12;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_00cb1a3c;
                  }
                } while( true );
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
LAB_00cb1a3c:
          pvVar10 = (void *)(*(long *)(param_1 + 0x48) + uVar18 * 0x50);
          memset(pvVar10,0,0x50);
          local_64 = 0;
          FUN_00cb06cc((long)pvVar10 + 0x19,&local_64);
          *(undefined4 *)((long)pvVar10 + 0x1a) = 0x3f003f00;
          *(undefined2 *)((long)pvVar10 + 0x20) = 0x201;
          *(undefined8 *)((long)pvVar10 + 0x28) = 0x3f8000007f7fffee;
          *(undefined4 *)((long)pvVar10 + 0x24) = 0x3d4ccccd;
          *(undefined2 *)((long)pvVar10 + 0x32) = 0x3f80;
          *(undefined1 *)((long)pvVar10 + 0x30) = 0;
          *(undefined2 *)((long)pvVar10 + 0x3a) = 0x40a0;
          lVar17 = *(long *)(param_1 + 0x48);
          puVar15 = (ulong *)(lVar17 + uVar18 * 0x50);
          *puVar15 = 0;
          puVar19 = puVar15 + 1;
          *puVar19 = 0;
          pcVar3 = (char *)(local_c0 & 0xfffffffffffffffe);
          if (pcVar3 == (char *)0x0) {
            plVar13 = (long *)0x0;
          }
          else {
            sVar9 = strlen(pcVar3);
            sVar9 = (size_t)((int)sVar9 + 1);
            pvVar10 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                        (PTR_PTR_047d1a50,sVar9);
            memcpy(pvVar10,pcVar3,sVar9);
            *puVar15 = (ulong)pvVar10 | 1;
            plVar13 = (long *)*puVar19;
          }
          if (plVar13 != local_b8) {
            if ((local_b8 != (long *)0x0) && (local_b8[1] != 0)) {
              plVar13 = local_b8 + 2;
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar6) {
                  *plVar13 = *plVar13 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              plVar13 = (long *)*puVar19;
            }
            *puVar19 = (ulong)local_b8;
            if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
              plVar16 = plVar13 + 2;
              do {
                lVar11 = *plVar16;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar6) {
                  *plVar16 = lVar11 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar11 + -1 == 0) {
                (**(code **)(*plVar13 + 0x18))();
              }
            }
          }
          memcpy((void *)(lVar17 + uVar18 * 0x50 + 0x10),&local_b0,0x40);
          FUN_02f1c9e8(param_1 + 0x20,param_1,uVar21 & 0xffff);
          break;
        }
        ClearExclusiveLocal();
LAB_00cb19a8:
        uVar21 = uVar4 & 0xffffff;
        uVar12 = uVar4;
      } while (uVar21 != 0xffffff);
    }
    nn::os::UnlockMutex(pMVar14);
    plVar13 = local_b8;
  }
  else {
    uVar18 = 0xffff;
  }
joined_r0x00cb1bfc:
  if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
    plVar16 = plVar13 + 2;
    do {
      lVar17 = *plVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  if ((local_c0 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_c0 - 1,0);
  }
  return uVar18 & 0xffff;
}


