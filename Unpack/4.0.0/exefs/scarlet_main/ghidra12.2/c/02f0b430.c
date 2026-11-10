/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0b430; name: FUN_02f0b430
 */


undefined8 FUN_02f0b430(long *param_1,void *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  void *__src;
  long *plVar16;
  long local_38;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    FUN_02f0ca6c(lVar6 + 0x768,lVar6,param_1);
  }
  uVar7 = *(uint *)(param_1 + 2);
  __src = (void *)param_1[1];
  if (param_3 <= *(uint *)((long)param_1 + 0x2c) && param_3 < uVar7) {
    uVar11 = param_3;
    do {
      if (*(int *)((long)__src + (long)(int)uVar11 * 0x68 + 0x30) != 0x7fffffff) {
        return 0x80040200;
      }
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
  }
  lVar6 = param_1[3];
  uVar11 = uVar7;
  if (param_3 <= uVar7) {
    uVar11 = param_3;
  }
  if ((param_2 == (void *)0x0) && (param_3 != 0)) {
    *(uint *)(param_1 + 4) = param_3 * 0x68;
    local_38 = (long)(int)(param_3 * 0x68);
    lVar4 = (**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    param_1[3] = lVar4;
    param_2 = (void *)(lVar4 + 0xfU & 0xfffffffffffffff0);
  }
  else {
    param_1[3] = 0;
  }
  if (__src != (void *)0x0) {
    if (lVar6 == 0) {
      if (*(int *)((long)param_1 + 0x14) < 0) {
        if (param_2 != __src) {
          memmove(param_2,__src,(ulong)uVar11 * 0x68);
        }
      }
      else {
        memcpy(param_2,__src,(ulong)uVar11 * 0x68);
        *(undefined4 *)(param_1 + 2) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,param_1[1],(ulong)*(uint *)((long)param_1 + 0x14) * 0x68);
        }
        param_1[1] = 0;
        *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
      }
    }
    else {
      memcpy(param_2,__src,(ulong)uVar11 * 0x68);
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar6,0);
    }
  }
  param_1[1] = (long)param_2;
  *(uint *)(param_1 + 2) = param_3;
  *(uint *)((long)param_1 + 0x14) = param_3 | 0x80000000;
  if (uVar7 < param_3) {
    uVar11 = uVar7;
    while( true ) {
      puVar15 = (undefined8 *)((long)param_2 + (long)(int)uVar11 * 0x68);
      *(undefined4 *)(puVar15 + 6) = 0x7fffffff;
      *puVar15 = 0xffffffffffffffff;
      *(undefined4 *)(puVar15 + 1) = 0xffffff;
      puVar15[2] = 0xffffffffffffffff;
      *(undefined4 *)(puVar15 + 3) = 0xffffff;
      *(ushort *)((long)puVar15 + 0x42) = *(ushort *)((long)puVar15 + 0x42) | 4;
      if (param_3 - 1 == uVar11) break;
      param_2 = (void *)param_1[1];
      uVar11 = uVar11 + 1;
    }
    uVar11 = uVar7;
    if ((param_3 - uVar7 & 1) != 0) {
      uVar11 = uVar7 + 1;
      *(uint *)(param_1[1] + (long)(int)uVar7 * 0x68 + 0x34) = uVar11;
    }
    if (~uVar7 + param_3 != 0) {
      do {
        lVar6 = (long)(int)uVar11;
        iVar12 = uVar11 + 1;
        uVar11 = uVar11 + 2;
        *(int *)(param_1[1] + lVar6 * 0x68 + 0x34) = iVar12;
        *(uint *)(param_1[1] + (long)iVar12 * 0x68 + 0x34) = uVar11;
      } while (param_3 != uVar11);
    }
    *(undefined4 *)(param_1[1] + (long)(int)(param_3 - 1) * 0x68 + 0x34) = 0xffffffff;
    uVar11 = *(uint *)((long)param_1 + 0x24);
    if (uVar7 == 0) {
      *(uint *)((long)param_1 + 0x24) = uVar11 & 0xff000000;
    }
    else {
      uVar8 = uVar11 & 0xffffff;
      if (uVar8 == 0xffffff) {
        *(uint *)((long)param_1 + 0x24) = uVar11 & 0xff000000 | uVar7 & 0xffffff;
      }
      else {
        do {
          puVar14 = (uint *)(param_1[1] + (long)(int)uVar8 * 0x68 + 0x34);
          uVar8 = *puVar14;
        } while (uVar8 != 0xffffffff);
        *puVar14 = uVar7;
      }
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
    if (0 < (int)param_1[2]) {
      uVar9 = 0;
      uVar13 = 0;
      lVar6 = 0x30;
      do {
        uVar7 = (uint)uVar9;
        if (*(int *)(param_1[1] + lVar6) == 0x7fffffff) {
          if ((~*(uint *)((long)param_1 + 0x24) & 0xffffff) == 0) {
            *(uint *)((long)param_1 + 0x24) =
                 *(uint *)((long)param_1 + 0x24) & 0xff000000 | uVar7 & 0xffffff;
          }
          else {
            *(uint *)(param_1[1] + (long)(int)uVar13 * 0x68 + 0x34) = uVar7;
          }
          uVar13 = uVar9 & 0xffffffff;
        }
        else {
          *(uint *)((long)param_1 + 0x2c) = uVar7;
        }
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 0x68;
      } while ((long)uVar9 < (long)(int)param_1[2]);
      if (0 < (int)uVar13) {
        *(undefined4 *)(param_1[1] + uVar13 * 0x68 + 0x34) = 0xffffffff;
      }
    }
  }
  if (*(uint *)(param_1 + 0x16) != param_3) {
    FUN_031c51a0(0x3f59999a,param_1 + 0x12,param_3 << 1 | 1);
    if ((int)(*(uint *)((long)param_1 + 0xb4) & 0x7fffffff) < (int)param_3) {
      FUN_02f0d2e8(param_1 + 0x15,(long)(int)param_3);
    }
    uVar7 = *(uint *)(param_1 + 0x16);
    if ((int)uVar7 < (int)param_3) {
      puVar15 = (undefined8 *)(param_1[0x15] + (long)(int)uVar7 * 8);
      uVar11 = param_3 - uVar7 & 3;
      *(uint *)(param_1 + 0x16) = param_3;
      if (2 < ~uVar7 + param_3) {
        iVar12 = -(param_3 - uVar7 & 0xfffffffc);
        puVar10 = puVar15;
        do {
          puVar15 = puVar10 + 4;
          *puVar10 = 0x7fffffff7fffffff;
          puVar10[1] = 0x7fffffff7fffffff;
          iVar12 = iVar12 + 4;
          puVar10[2] = 0x7fffffff7fffffff;
          puVar10[3] = 0x7fffffff7fffffff;
          puVar10 = puVar15;
        } while (iVar12 != 0);
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar15 = 0x7fffffff7fffffff;
        puVar15 = puVar15 + 1;
      }
    }
    else if ((int)param_3 < (int)uVar7) {
      *(uint *)(param_1 + 0x16) = param_3;
    }
  }
  *(uint *)(param_1 + 0xf) = param_3;
  if ((int)(*(uint *)((long)param_1 + 0x74) & 0x7fffffff) < (int)param_3) {
    FUN_02f0d3fc(param_1 + 0xd,(long)(int)param_3);
  }
  uVar7 = *(uint *)(param_1 + 0xe);
  if ((int)uVar7 < (int)param_3) {
    *(uint *)(param_1 + 0xe) = param_3;
    memset((void *)(param_1[0xd] + (long)(int)uVar7 * 8),0,(ulong)(~uVar7 + param_3) * 8 + 8);
  }
  else if ((int)param_3 < (int)uVar7) {
    lVar6 = param_1[0xd];
    plVar16 = (long *)(lVar6 + (long)(int)uVar7 * 8);
    *(uint *)(param_1 + 0xe) = param_3;
    do {
      plVar16 = plVar16 + -1;
      plVar5 = (long *)*plVar16;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar16 != (long *)(lVar6 + (long)(int)param_3 * 8));
  }
  lVar6 = *param_1;
  if (lVar6 != 0) {
    FUN_02f0ca6c(lVar6 + 0x770,lVar6,param_1);
  }
  return 0;
}


