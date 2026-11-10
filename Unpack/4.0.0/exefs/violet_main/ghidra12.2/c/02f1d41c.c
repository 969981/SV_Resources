/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1d41c; name: FUN_02f1d41c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f1d41c(undefined8 *param_1,void *param_2,uint param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  MutexType *pMVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  MutexType *pMVar20;
  void *__src;
  long lVar21;
  undefined8 *puVar22;
  long local_68;
  
  *param_1 = param_4;
  param_1[1] = param_5;
  puVar22 = (undefined8 *)PTR_DAT_047d1a08;
  puVar1 = (uint *)((long)param_1 + 0x34);
  if ((param_3 <= *puVar1) && (param_3 < *(uint *)(param_1 + 3))) {
    uVar16 = param_3;
    do {
      if (*(char *)(param_1[2] + (long)(int)uVar16 * 0x80 + 0x5f) != '\0') goto LAB_02f1d840;
      uVar16 = uVar16 + 1;
    } while (*(uint *)(param_1 + 3) != uVar16);
  }
  lVar18 = *(long *)*param_1;
  if (lVar18 != 0) {
    FUN_02f1da40(lVar18 + 0x6f8,lVar18,param_1);
  }
  uVar16 = *(uint *)(param_1 + 3);
  __src = (void *)param_1[2];
  if ((param_3 <= *(uint *)((long)param_1 + 0x34)) && (param_3 < uVar16)) {
    uVar12 = param_3;
    do {
      if (*(char *)((long)__src + (long)(int)uVar12 * 0x80 + 0x5f) != '\0') goto LAB_02f1d840;
      uVar12 = uVar12 + 1;
    } while (uVar16 != uVar12);
  }
  lVar21 = param_1[4];
  uVar12 = uVar16;
  if (param_3 <= uVar16) {
    uVar12 = param_3;
  }
  if ((param_2 == (void *)0x0) && (param_3 != 0)) {
    uVar13 = param_3 << 7 | 0x30;
    *(uint *)(param_1 + 5) = uVar13;
    local_68 = (long)(int)uVar13;
    lVar10 = (*(code *)*puVar22)(0,&local_68,0);
    param_1[4] = lVar10;
    param_2 = (void *)(lVar10 + 0x3fU & 0xffffffffffffffc0);
  }
  else {
    param_1[4] = 0;
  }
  if (__src != (void *)0x0) {
    if (lVar21 == 0) {
      if (*(int *)((long)param_1 + 0x1c) < 0) {
        if (param_2 != __src) {
          memmove(param_2,__src,(ulong)uVar12 << 7);
        }
      }
      else {
        memcpy(param_2,__src,(ulong)uVar12 << 7);
        *(undefined4 *)(param_1 + 3) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,param_1[2],(ulong)*(uint *)((long)param_1 + 0x1c) << 7);
        }
        param_1[2] = 0;
        *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
      }
    }
    else {
      memcpy(param_2,__src,(ulong)uVar12 << 7);
      (**(code **)((long)puVar22 + 8))(0,lVar21,0);
    }
  }
  param_1[2] = param_2;
  *(uint *)(param_1 + 3) = param_3;
  *(uint *)((long)param_1 + 0x1c) = param_3 | 0x80000000;
  if (uVar16 < param_3) {
    puVar22 = (undefined8 *)((long)param_2 + (long)(int)uVar16 * 0x80);
    memset(puVar22 + 2,0,0x70);
    uVar8 = _UNK_03cabe58;
    uVar7 = _DAT_03cabe50;
    *(undefined2 *)(puVar22 + 0xb) = 0;
    *(undefined2 *)((long)puVar22 + 0x5e) = 0xff;
    puVar22[1] = uVar8;
    *puVar22 = uVar7;
    *(undefined4 *)((long)puVar22 + 0x4c) = 0x7fffffff;
    uVar12 = uVar16;
    while (uVar12 = uVar12 + 1, uVar12 != param_3) {
      puVar22 = (undefined8 *)(param_1[2] + (long)(int)uVar12 * 0x80);
      memset(puVar22 + 2,0,0x70);
      *(undefined2 *)((long)puVar22 + 0x5e) = 0xff;
      *(undefined2 *)(puVar22 + 0xb) = 0;
      *(undefined4 *)((long)puVar22 + 0x4c) = 0x7fffffff;
      puVar22[1] = uVar8;
      *puVar22 = uVar7;
    }
    uVar12 = uVar16;
    if ((param_3 - uVar16 & 1) != 0) {
      uVar12 = uVar16 + 1;
      *(uint *)(param_1[2] + (long)(int)uVar16 * 0x80) = uVar12;
    }
    if (~uVar16 + param_3 != 0) {
      do {
        uVar15 = (ulong)uVar12;
        uVar6 = uVar12 >> 0x1f;
        uVar13 = uVar12 + 1;
        uVar12 = uVar12 + 2;
        *(uint *)(param_1[2] + (-(ulong)uVar6 & 0xffffff8000000000 | uVar15 << 7)) = uVar13;
        *(uint *)(param_1[2] + (-(ulong)(uVar13 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar13 << 7))
             = uVar12;
      } while (param_3 != uVar12);
    }
    *(undefined4 *)
     (param_1[2] + (-(ulong)(param_3 - 1 >> 0x1f) & 0xffffff8000000000 | (ulong)(param_3 - 1) << 7))
         = 0xffffffff;
    puVar22 = (undefined8 *)PTR_DAT_047d1a08;
    uVar12 = *(uint *)((long)param_1 + 0x2c);
    if (uVar16 == 0) {
      *(uint *)((long)param_1 + 0x2c) = uVar12 & 0xff000000;
    }
    else {
      uVar13 = uVar12 & 0xffffff;
      if (uVar13 == 0xffffff) {
        *(uint *)((long)param_1 + 0x2c) = uVar12 & 0xff000000 | uVar16 & 0xffffff;
      }
      else {
        do {
          puVar2 = (uint *)(param_1[2] + (long)(int)uVar13 * 0x80);
          uVar13 = *puVar2;
        } while (uVar13 != 0xffffffff);
        *puVar2 = uVar16;
      }
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
    if (0 < *(int *)(param_1 + 3)) {
      uVar15 = 0;
      uVar17 = 0;
      lVar21 = 0x5f;
      do {
        uVar16 = (uint)uVar15;
        if (*(char *)(param_1[2] + lVar21) == '\0') {
          if ((~*(uint *)((long)param_1 + 0x2c) & 0xffffff) == 0) {
            *(uint *)((long)param_1 + 0x2c) =
                 *(uint *)((long)param_1 + 0x2c) & 0xff000000 | uVar16 & 0xffffff;
          }
          else {
            *(uint *)(param_1[2] + (-(uVar17 >> 0x1f) & 0xffffff8000000000 | uVar17 << 7)) = uVar16;
          }
          uVar17 = uVar15 & 0xffffffff;
        }
        else {
          *puVar1 = uVar16;
        }
        uVar15 = uVar15 + 1;
        lVar21 = lVar21 + 0x80;
      } while ((long)uVar15 < (long)*(int *)(param_1 + 3));
      if (0 < (int)uVar17) {
        *(undefined4 *)(param_1[2] + uVar17 * 0x80) = 0xffffffff;
      }
    }
  }
  lVar21 = param_1[1];
  if (lVar21 != 0) {
    uVar16 = *(uint *)(lVar21 + 0x390);
    if ((int)param_3 <= (int)uVar16) {
      param_3 = uVar16;
    }
    if ((int)(*(uint *)(lVar21 + 0x394) & 0x7fffffff) < (int)param_3) {
      FUN_02f1daec(lVar21 + 0x388,PTR_PTR_047d1a50,(long)(int)param_3);
      uVar16 = *(uint *)(lVar21 + 0x390);
    }
    if (((int)uVar16 < (int)param_3) || ((int)param_3 < (int)uVar16)) {
      *(uint *)(lVar21 + 0x390) = param_3;
    }
  }
  if (lVar18 != 0) {
    FUN_02f1da40(lVar18 + 0x700,lVar18,param_1);
  }
LAB_02f1d840:
  uVar16 = *(uint *)((long)param_1 + 0x2c) & 0xffffff;
  if (uVar16 != 0xffffff) {
    puVar2 = (uint *)((long)param_1 + 0x2c);
    uVar12 = *(uint *)((long)param_1 + 0x2c);
    do {
      uVar13 = *puVar2;
      if (uVar13 == uVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar12 + 0x1000000 & 0xff000000 |
                    *(uint *)(param_1[2] + (ulong)uVar16 * 0x80) & 0xffffff;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          piVar3 = (int *)(param_1 + 6);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = *piVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          uVar12 = *puVar1;
          if (uVar12 + 1 <= uVar16) {
            uVar13 = uVar12;
            if (uVar12 + 1 <= uVar16 + 1) {
              uVar13 = uVar16;
            }
            do {
              if (*puVar1 != uVar12) {
                do {
                  ClearExclusiveLocal();
                  uVar13 = *puVar1;
                  uVar12 = uVar13;
                  if (uVar13 + 1 <= uVar16 + 1) {
                    uVar12 = uVar16;
                  }
                  while (*puVar1 == uVar13) {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *puVar1 = uVar12;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') goto LAB_02f1d928;
                  }
                } while( true );
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar16 = uVar13 & 0xffffff;
      uVar12 = uVar13;
    } while (uVar16 != 0xffffff);
  }
LAB_02f1d928:
  puVar19 = (undefined8 *)param_1[2];
  memset(puVar19 + 2,0,0x70);
  uVar8 = _UNK_03cabe58;
  uVar7 = _DAT_03cabe50;
  *(undefined1 *)((long)puVar19 + 0x5e) = 0xff;
  puVar19[1] = uVar8;
  *puVar19 = uVar7;
  *(undefined2 *)(puVar19 + 0xb) = 0;
  *(undefined1 *)(param_1[2] + 0x5f) = 1;
  puVar9 = PTR_PTR_047d1a50;
  lVar18 = 0;
  do {
    iVar14 = *(int *)((long)param_1 + lVar18 + 0x48);
    lVar21 = (long)iVar14;
    if ((int)(*(uint *)((long)param_1 + lVar18 + 0x4c) & 0x7fffffff) <= iVar14) {
      FUN_02f1dbfc((long)param_1 + lVar18 + 0x40,puVar9,lVar21 + 1);
      iVar14 = *(int *)((long)param_1 + lVar18 + 0x48);
    }
    lVar10 = lVar18 + 0x18;
    *(undefined4 *)(*(long *)((long)param_1 + lVar18 + 0x40) + (long)iVar14 * 4) = 0;
    *(int *)((long)param_1 + lVar18 + 0x48) = (int)(lVar21 + 1);
    lVar18 = lVar10;
  } while (lVar10 != 0x300);
  local_68 = 0x20;
  pMVar11 = (MutexType *)(*(code *)*puVar22)(0,&local_68,0);
  if ((code *)puVar22[2] != (code *)0x0) {
    (*(code *)puVar22[2])(pMVar11,"hkCriticalSection");
  }
  nn::os::InitializeMutex(pMVar11,true,0);
  pMVar20 = (MutexType *)param_1[0x68];
  param_1[0x68] = pMVar11;
  if (pMVar20 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar20);
    (*(code *)puVar22[1])(0,pMVar20,0);
  }
  return;
}


