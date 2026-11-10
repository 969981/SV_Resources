/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e02d4; name: FUN_012e02d4
 */


undefined8 FUN_012e02d4(long *param_1,void *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  uint *puVar20;
  void *__src;
  long *plVar21;
  long local_58;
  
  lVar9 = *param_1;
  if (lVar9 != 0) {
    FUN_02f091d8(lVar9 + 0x6b8,lVar9,param_1);
  }
  uVar3 = *(uint *)(param_1 + 3);
  uVar2 = *(uint *)(param_1 + 3);
  __src = (void *)param_1[2];
  uVar13 = param_3;
  if (param_3 <= *(uint *)((long)param_1 + 0x34) && param_3 < uVar2) {
    do {
      if ((*(byte *)((long)__src + (long)(int)uVar13 * 0xc0 + 0x54) & 0xf) != 0) {
        return 0x80040200;
      }
      uVar13 = uVar13 + 1;
    } while (uVar2 != uVar13);
  }
  lVar9 = param_1[4];
  uVar13 = uVar2;
  if (param_3 <= uVar2) {
    uVar13 = param_3;
  }
  if ((param_2 == (void *)0x0) && (param_3 != 0)) {
    *(uint *)(param_1 + 5) = param_3 * 0xc0;
    local_58 = (long)(int)(param_3 * 0xc0);
    lVar7 = (**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    param_1[4] = lVar7;
    param_2 = (void *)(lVar7 + 0xfU & 0xfffffffffffffff0);
  }
  else {
    param_1[4] = 0;
  }
  if (__src != (void *)0x0) {
    if (lVar9 == 0) {
      if (*(int *)((long)param_1 + 0x1c) < 0) {
        if (param_2 != __src) {
          memmove(param_2,__src,(ulong)uVar13 * 0xc0);
        }
      }
      else {
        memcpy(param_2,__src,(ulong)uVar13 * 0xc0);
        *(undefined4 *)(param_1 + 3) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,param_1[2],(ulong)*(uint *)((long)param_1 + 0x1c) * 0xc0);
        }
        param_1[2] = 0;
        *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
      }
    }
    else {
      memcpy(param_2,__src,(ulong)uVar13 * 0xc0);
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar9,0);
    }
  }
  param_1[2] = (long)param_2;
  *(uint *)(param_1 + 3) = param_3;
  *(uint *)((long)param_1 + 0x1c) = param_3 | 0x80000000;
  if (uVar2 < param_3) {
    lVar9 = (long)(int)uVar2;
    *(undefined1 *)((long)param_2 + lVar9 * 0xc0 + 0x88) = 0;
    *(uint *)((long)param_2 + lVar9 * 0xc0 + 0x50) =
         *(uint *)((long)param_2 + lVar9 * 0xc0 + 0x50) | 0xffffff;
    *(undefined4 *)((long)param_2 + lVar9 * 0xc0 + 0x54) = 0;
    uVar13 = uVar2;
    while (uVar13 = uVar13 + 1, uVar13 != param_3) {
      lVar7 = param_1[2] + (long)(int)uVar13 * 0xc0;
      *(undefined1 *)(lVar7 + 0x88) = 0;
      *(uint *)(lVar7 + 0x50) = *(uint *)(lVar7 + 0x50) | 0xffffff;
      *(undefined4 *)(lVar7 + 0x54) = 0;
    }
    uVar13 = uVar2;
    if ((param_3 - uVar2 & 1) != 0) {
      uVar13 = uVar2 + 1;
      *(uint *)(param_1[2] + lVar9 * 0xc0) = uVar13;
    }
    if (~uVar2 + param_3 != 0) {
      do {
        lVar9 = (long)(int)uVar13;
        iVar19 = uVar13 + 1;
        uVar13 = uVar13 + 2;
        *(int *)(param_1[2] + lVar9 * 0xc0) = iVar19;
        *(uint *)(param_1[2] + (long)iVar19 * 0xc0) = uVar13;
      } while (param_3 != uVar13);
    }
    *(undefined4 *)(param_1[2] + (long)(int)(param_3 - 1) * 0xc0) = 0xffffffff;
    uVar13 = *(uint *)((long)param_1 + 0x2c);
    if (uVar2 == 0) {
      *(uint *)((long)param_1 + 0x2c) = uVar13 & 0xff000000;
    }
    else {
      uVar10 = uVar13 & 0xffffff;
      if (uVar10 == 0xffffff) {
        *(uint *)((long)param_1 + 0x2c) = uVar13 & 0xff000000 | uVar2 & 0xffffff;
      }
      else {
        do {
          puVar20 = (uint *)(param_1[2] + (long)(int)uVar10 * 0xc0);
          uVar10 = *puVar20;
        } while (uVar10 != 0xffffffff);
        *puVar20 = uVar2;
      }
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
    if (0 < (int)param_1[3]) {
      uVar12 = 0;
      uVar18 = 0;
      lVar9 = 0x54;
      do {
        uVar13 = (uint)uVar12;
        if ((*(byte *)(param_1[2] + lVar9) & 0xf) == 0) {
          if ((~*(uint *)((long)param_1 + 0x2c) & 0xffffff) == 0) {
            *(uint *)((long)param_1 + 0x2c) =
                 *(uint *)((long)param_1 + 0x2c) & 0xff000000 | uVar13 & 0xffffff;
          }
          else {
            *(uint *)(param_1[2] + (long)(int)uVar18 * 0xc0) = uVar13;
          }
          uVar18 = uVar12 & 0xffffffff;
        }
        else {
          *(uint *)((long)param_1 + 0x34) = uVar13;
        }
        uVar12 = uVar12 + 1;
        lVar9 = lVar9 + 0xc0;
      } while ((long)uVar12 < (long)(int)param_1[3]);
      if (0 < (int)uVar18) {
        *(undefined4 *)(param_1[2] + uVar18 * 0xc0) = 0xffffffff;
      }
    }
  }
  lVar9 = param_1[2];
  if (uVar3 < param_3) {
    lVar7 = lVar9 + (long)(int)uVar3 * 0xc0;
    *(undefined4 *)(lVar7 + 0x50) = 0xffffff;
    *(undefined2 *)(lVar7 + 0x58) = 0;
    uVar13 = uVar3 + 1;
    if (uVar13 != param_3) {
      if ((~uVar3 + param_3 & 1) != 0) {
        lVar7 = param_1[2] + (long)(int)uVar13 * 0xc0;
        *(undefined4 *)(lVar7 + 0x50) = 0xffffff;
        *(undefined2 *)(lVar7 + 0x58) = 0;
        uVar13 = uVar3 + 2;
      }
      if (param_3 - 2 != uVar3) {
        do {
          lVar7 = param_1[2] + (long)(int)uVar13 * 0xc0;
          *(undefined4 *)(lVar7 + 0x50) = 0xffffff;
          *(undefined2 *)(lVar7 + 0x58) = 0;
          iVar19 = uVar13 + 1;
          uVar13 = uVar13 + 2;
          lVar7 = param_1[2] + (long)iVar19 * 0xc0;
          *(undefined4 *)(lVar7 + 0x50) = 0xffffff;
          *(undefined2 *)(lVar7 + 0x58) = 0;
        } while (param_3 != uVar13);
      }
    }
  }
  puVar6 = PTR_DAT_047d1a08;
  uVar13 = param_3;
  if (param_3 < uVar3) {
    do {
      lVar7 = *(long *)(param_1[0x11] + (long)(int)uVar13 * 8);
      if (lVar7 != 0) {
        (**(code **)(puVar6 + 8))(0,lVar7,0);
      }
      lVar7 = *(long *)(param_1[0xf] + (long)(int)uVar13 * 8);
      if (lVar7 != 0) {
        (**(code **)(puVar6 + 8))(0,lVar7,0);
      }
      uVar13 = uVar13 + 1;
    } while (uVar3 != uVar13);
  }
  if ((int)(*(uint *)((long)param_1 + 100) & 0x7fffffff) < (int)param_3) {
    FUN_02e7f6a0(param_1 + 0xb,PTR_PTR_047d1a50,(long)(int)param_3);
  }
  if (*(uint *)(param_1 + 0xc) != param_3) {
    *(uint *)(param_1 + 0xc) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0xdc) & 0x7fffffff) < (int)param_3) {
    FUN_00cb58c0(param_1 + 0x1a,PTR_PTR_047d1a50,(long)(int)param_3);
  }
  if (*(uint *)(param_1 + 0x1b) != param_3) {
    *(uint *)(param_1 + 0x1b) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0xec) & 0x7fffffff) < (int)param_3) {
    FUN_02e9b320(param_1 + 0x1c,PTR_PTR_047d1a50,(long)(int)param_3);
  }
  if (*(uint *)(param_1 + 0x1d) != param_3) {
    *(uint *)(param_1 + 0x1d) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0xfc) & 0x7fffffff) < (int)param_3) {
    FUN_02f0a330(param_1 + 0x1e,PTR_PTR_047d1a50,(long)(int)param_3);
  }
  iVar19 = (int)param_1[0x1f];
  if (iVar19 < (int)param_3) {
    lVar7 = (-(ulong)(param_3 >> 0x1f) & 0xffffffe000000000 | (ulong)param_3 << 5) +
            (long)iVar19 * -0x20;
    *(uint *)(param_1 + 0x1f) = param_3;
    puVar14 = (undefined8 *)(param_1[0x1e] + (long)iVar19 * 0x20 + 0x10);
    do {
      *(undefined4 *)((long)puVar14 + -4) = 0;
      lVar7 = lVar7 + -0x20;
      *puVar14 = 0;
      puVar14 = puVar14 + 4;
    } while (lVar7 != 0);
  }
  else if ((int)param_3 < iVar19) {
    *(uint *)(param_1 + 0x1f) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0xcc) & 0x7fffffff) < (int)param_3) {
    FUN_02f0a4c0(param_1 + 0x18,(long)(int)param_3);
  }
  *(uint *)(param_1 + 0x15) = param_3;
  if ((int)(*(uint *)((long)param_1 + 0x94) & 0x7fffffff) < (int)param_3) {
    FUN_02f0a5d4(param_1 + 0x11,(long)(int)param_3);
  }
  uVar13 = *(uint *)(param_1 + 0x12);
  if ((int)uVar13 < (int)param_3) {
    *(uint *)(param_1 + 0x12) = param_3;
    memset((void *)(param_1[0x11] + (long)(int)uVar13 * 8),0,(ulong)(~uVar13 + param_3) * 8 + 8);
  }
  else if ((int)param_3 < (int)uVar13) {
    *(uint *)(param_1 + 0x12) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0x84) & 0x7fffffff) < (int)param_3) {
    FUN_02f0a6e8(param_1 + 0xf,(long)(int)param_3);
  }
  uVar13 = *(uint *)(param_1 + 0x10);
  if ((int)uVar13 < (int)param_3) {
    *(uint *)(param_1 + 0x10) = param_3;
    memset((void *)(param_1[0xf] + (long)(int)uVar13 * 8),0,(ulong)(~uVar13 + param_3) * 8 + 8);
  }
  else if ((int)param_3 < (int)uVar13) {
    *(uint *)(param_1 + 0x10) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0x74) & 0x7fffffff) < (int)param_3) {
    FUN_02f0a7fc(param_1 + 0xd,(long)(int)param_3);
  }
  uVar13 = *(uint *)(param_1 + 0xe);
  if ((int)uVar13 < (int)param_3) {
    puVar16 = (undefined4 *)(param_1[0xd] + (long)(int)uVar13 * 8);
    *(uint *)(param_1 + 0xe) = param_3;
    if (~uVar13 + param_3 != 0) {
      iVar19 = -(param_3 - uVar13 & 0xfffffffe);
      puVar15 = puVar16;
      do {
        puVar16 = puVar15 + 4;
        *puVar15 = 0xbf800000;
        puVar15[1] = 0xffff;
        iVar19 = iVar19 + 2;
        puVar15[2] = 0xbf800000;
        puVar15[3] = 0xffff;
        puVar15 = puVar16;
      } while (iVar19 != 0);
    }
    if ((param_3 - uVar13 & 1) != 0) {
      *puVar16 = 0xbf800000;
      puVar16[1] = 0xffff;
    }
  }
  else if ((int)param_3 < (int)uVar13) {
    *(uint *)(param_1 + 0xe) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0xa4) & 0x7fffffff) < (int)param_3) {
    FUN_02f0a910(param_1 + 0x13,(long)(int)param_3);
  }
  uVar13 = *(uint *)(param_1 + 0x14);
  if ((int)uVar13 < (int)param_3) {
    *(uint *)(param_1 + 0x14) = param_3;
    memset((void *)(param_1[0x13] + (long)(int)uVar13 * 8),0,(ulong)(~uVar13 + param_3) * 8 + 8);
  }
  else if ((int)param_3 < (int)uVar13) {
    lVar7 = param_1[0x13];
    plVar21 = (long *)(lVar7 + (long)(int)uVar13 * 8);
    *(uint *)(param_1 + 0x14) = param_3;
    do {
      plVar21 = plVar21 + -1;
      plVar8 = (long *)*plVar21;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar17 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    } while (plVar21 != (long *)(lVar7 + (long)(int)param_3 * 8));
  }
  if ((char)param_1[8] != '\0') {
    if ((int)(*(uint *)((long)param_1 + 0x54) & 0x7fffffff) < (int)param_3) {
      FUN_02e814f8(param_1 + 9,PTR_PTR_047d1a50,(long)(int)param_3);
    }
    uVar13 = *(uint *)(param_1 + 10);
    if ((int)uVar13 < (int)param_3) {
      puVar14 = (undefined8 *)(param_1[9] + (long)(int)uVar13 * 4);
      uVar2 = param_3 - uVar13 & 3;
      *(uint *)(param_1 + 10) = param_3;
      if (2 < ~uVar13 + param_3) {
        iVar19 = -(param_3 - uVar13 & 0xfffffffc);
        puVar11 = puVar14;
        do {
          puVar14 = puVar11 + 2;
          *puVar11 = 0xffffff00ffffff;
          puVar11[1] = 0xffffff00ffffff;
          iVar19 = iVar19 + 4;
          puVar11 = puVar14;
        } while (iVar19 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)puVar14 = 0xffffff;
        puVar14 = (undefined8 *)((long)puVar14 + 4);
      }
    }
    else if ((int)param_3 < (int)uVar13) {
      *(uint *)(param_1 + 10) = param_3;
    }
  }
  if (param_3 <= uVar3) {
    uVar3 = param_3;
  }
  if (uVar3 != 0) {
    uVar12 = (ulong)uVar3;
    puVar20 = (uint *)(lVar9 + 0x54);
    do {
      uVar13 = *puVar20;
      if (((uVar13 & 3) != 0) && (*(long *)(puVar20 + 9) != 0)) {
        *puVar20 = uVar13 & 0xff000000 |
                   uVar13 & 0x7fffff |
                   (uint)(*(ushort *)(*(long *)(puVar20 + 9) + 0x1a) >> 0xf) << 0x17;
      }
      uVar12 = uVar12 - 1;
      puVar20 = puVar20 + 0x30;
    } while (uVar12 != 0);
  }
  lVar9 = *param_1;
  if (lVar9 != 0) {
    FUN_02f091d8(lVar9 + 0x6c0,lVar9,param_1);
  }
  return 0;
}


