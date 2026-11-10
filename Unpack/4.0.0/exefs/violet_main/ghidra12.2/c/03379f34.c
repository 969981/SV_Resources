/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03379f34; name: FUN_03379f34
 */


long FUN_03379f34(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  void *pvVar17;
  int iVar18;
  long *plVar19;
  undefined2 *puVar20;
  undefined8 uVar21;
  char *pcVar22;
  ThreadType *pTVar23;
  char **ppcVar24;
  size_t sVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  ulong *puVar30;
  byte *pbVar31;
  uint uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  int iVar35;
  byte *pbVar36;
  long lVar37;
  long lVar38;
  ulong *puVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  char *pcVar44;
  int local_2a60;
  undefined1 local_2a5c;
  long *local_2a58;
  char local_2a50;
  long local_2a48;
  undefined8 local_2a40;
  void *local_2a38;
  undefined8 local_2a30;
  long local_2a20;
  undefined8 local_2a18;
  undefined4 local_2a10;
  long local_2a08;
  undefined8 local_2a00;
  long *local_29f8;
  long lStack_29f0;
  undefined4 local_29e8;
  long local_29e0;
  undefined8 local_29d8;
  long local_29d0;
  undefined8 local_29c8;
  long local_29c0;
  long lStack_29b8;
  long local_29b0;
  long local_29a8;
  char *local_29a0;
  undefined8 uStack_2998;
  undefined8 *local_2990;
  undefined8 uStack_2988;
  undefined8 local_2980;
  char *local_2978;
  undefined8 local_2970;
  char *local_2968;
  undefined8 local_2960;
  undefined8 uStack_2958;
  char local_2950 [368];
  undefined *local_27e0;
  undefined8 local_27d8;
  undefined8 local_27d0;
  undefined8 local_27c8;
  char **local_27c0;
  undefined8 local_27b8;
  undefined8 local_27b0;
  undefined1 local_27a8;
  undefined8 local_2798;
  char *local_2790;
  undefined *local_2788;
  undefined *local_2780;
  undefined8 local_2778;
  undefined4 local_2770;
  undefined8 local_2768;
  undefined8 uStack_2760;
  undefined4 local_2758;
  undefined4 local_2754;
  undefined8 local_2750;
  undefined8 local_2748;
  undefined4 local_2740;
  char *local_2738;
  undefined8 local_2730;
  undefined1 auStack_2728 [128];
  undefined8 local_26a8;
  undefined8 local_26a0;
  char *local_2698;
  undefined8 local_2690;
  undefined8 local_2628;
  undefined8 uStack_2620;
  undefined4 local_2618;
  undefined4 local_2614;
  undefined8 local_2610;
  undefined8 local_2608;
  undefined1 *local_2600;
  undefined8 local_25f8;
  undefined1 auStack_25f0 [32];
  undefined *local_25d0;
  undefined8 local_25c8;
  char ***local_25c0;
  undefined8 local_25b8;
  char **local_25b0;
  undefined8 local_25a8;
  undefined8 local_25a0;
  uint local_2598;
  undefined8 local_2590;
  undefined8 local_2588;
  undefined8 local_2580;
  undefined2 local_2578;
  undefined1 local_2576;
  
  *(uint *)(param_1 + 0xa8) = -(uint)(*(int *)(param_1 + 0xc0) < 1);
  iVar18 = *(int *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (0 < iVar18) {
    lVar37 = 0;
    lVar38 = 0;
    do {
      puVar33 = (undefined8 *)(*(long *)(param_1 + 200) + lVar37);
      (**(code **)(**(long **)(param_1 + 0x98) + 0x20))
                (*(long **)(param_1 + 0x98),*puVar33,puVar33[1]);
      iVar18 = *(int *)(param_1 + 0xd0);
      lVar38 = lVar38 + 1;
      lVar37 = lVar37 + 0x10;
    } while (lVar38 < iVar18);
  }
  if (iVar18 != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  FUN_033740c8(param_1);
  iVar35 = *(int *)(param_1 + 0x20);
  iVar18 = iVar35;
  if (iVar35 < 2) {
    iVar18 = 1;
  }
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar18) {
    FUN_03375910(param_1 + 0x18,PTR_PTR_047d1a50,iVar18);
    iVar35 = *(int *)(param_1 + 0x20);
  }
  uVar32 = iVar18 - iVar35;
  if (uVar32 == 0 || iVar18 < iVar35) {
    if (iVar18 < iVar35) {
      *(int *)(param_1 + 0x20) = iVar18;
    }
  }
  else {
    puVar33 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar35 * 0x10);
    *(int *)(param_1 + 0x20) = iVar18;
    if (iVar18 != iVar35 + 1) {
      iVar18 = -(uVar32 & 0xfffffffe);
      puVar34 = puVar33;
      do {
        puVar33 = puVar34 + 4;
        *puVar34 = 0;
        puVar34[1] = 0xffffffff00000000;
        iVar18 = iVar18 + 2;
        puVar34[2] = 0;
        puVar34[3] = 0xffffffff00000000;
        puVar34 = puVar33;
      } while (iVar18 != 0);
    }
    if ((uVar32 & 1) != 0) {
      *puVar33 = 0;
      puVar33[1] = 0xffffffff00000000;
    }
  }
  plVar1 = (long *)(param_1 + 0xd8);
  local_2790 = (char *)0x0;
  lVar38 = FUN_03379400(plVar1,&local_2790);
  if (lVar38 == 0) {
    uVar27 = 0xffffffff;
  }
  else {
    uVar27 = *(undefined4 *)(*plVar1 + (long)*(int *)(lVar38 + 4) * 0x10 + 8);
  }
  puVar33 = *(undefined8 **)(param_1 + 0x18);
  *puVar33 = 0;
  *(undefined4 *)(puVar33 + 1) = uVar27;
  puVar3 = PTR_DAT_047e61d0;
  uVar42 = *(ulong *)(PTR_DAT_047e61d0 + 0x10);
  uVar26 = *(undefined8 *)PTR_DAT_047e61d0;
  pcVar6 = *(char **)(PTR_DAT_047e61d0 + 8);
  if ((uVar42 & 1) != 0) {
    piVar2 = (int *)((uVar42 & 0xfffffffffffffffe) + 8);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = *piVar2 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  iVar7 = *(int *)(puVar3 + 0x18);
  iVar35 = *(int *)(param_1 + 0x40);
  iVar18 = iVar35;
  if (iVar35 < 2) {
    iVar18 = 1;
  }
  if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < iVar18) {
    FUN_03375910((undefined8 *)(param_1 + 0x38),PTR_PTR_047d1a50,iVar18);
    iVar35 = *(int *)(param_1 + 0x40);
  }
  uVar32 = iVar18 - iVar35;
  if (uVar32 == 0 || iVar18 < iVar35) {
    if (iVar18 < iVar35) {
      *(int *)(param_1 + 0x40) = iVar18;
    }
  }
  else {
    puVar33 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar35 * 0x10);
    *(int *)(param_1 + 0x40) = iVar18;
    if (iVar18 != iVar35 + 1) {
      iVar18 = -(uVar32 & 0xfffffffe);
      puVar34 = puVar33;
      do {
        puVar33 = puVar34 + 4;
        *puVar34 = 0;
        puVar34[1] = 0xffffffff00000000;
        iVar18 = iVar18 + 2;
        puVar34[2] = 0;
        puVar34[3] = 0xffffffff00000000;
        puVar34 = puVar33;
      } while (iVar18 != 0);
    }
    if ((uVar32 & 1) != 0) {
      *puVar33 = 0;
      puVar33[1] = 0xffffffff00000000;
    }
  }
  local_2790 = pcVar6;
  lVar38 = FUN_03379400(plVar1,&local_2790);
  if (lVar38 == 0) {
    uVar27 = 0xffffffff;
  }
  else {
    uVar27 = *(undefined4 *)(*plVar1 + (long)*(int *)(lVar38 + 4) * 0x10 + 8);
  }
  puVar33 = *(undefined8 **)(param_1 + 0x38);
  iVar18 = -iVar7;
  if (-1 < iVar7) {
    iVar18 = iVar7;
  }
  *puVar33 = uVar26;
  *(undefined4 *)(puVar33 + 1) = uVar27;
  *(int *)((long)puVar33 + 0xc) = iVar18;
  if ((uVar42 & 1) != 0) {
    plVar19 = (long *)(uVar42 & 0xfffffffffffffffe);
    plVar1 = plVar19 + 1;
    do {
      lVar38 = *plVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)lVar38 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((plVar19 != (long *)0x0) && ((int)lVar38 == 1)) {
      (**(code **)(*plVar19 + 8))();
    }
  }
  local_2a60 = -1;
  local_2a5c = 0;
  local_2a50 = '\0';
  local_2a48 = 0;
  local_2a40 = 0x8000000000000000;
  local_2a58 = param_2;
  local_2a38 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0x180);
  memset(local_2a38,0xff,0x180);
  local_2a10 = 0;
  local_2a30 = 0xf00000000;
  local_29e8 = 0;
  lVar38 = (long)(int)local_2a40;
  local_2a20 = 0;
  local_2a18 = 0x8000000000000000;
  local_2a08 = 0;
  local_2a00 = -0x8000000000000000;
  local_29e0 = 0;
  local_29d8 = -0x8000000000000000;
  local_29d0 = 0;
  local_29c8 = -0x8000000000000000;
  local_29f8 = (long *)(param_1 + 0xf8);
  lStack_29f0 = param_1 + 0x90;
  local_29c0 = param_1 + 0x140;
  lStack_29b8 = param_1 + 0x158;
  local_29b0 = param_1 + 0x170;
  local_29a8 = param_1;
  if ((int)(local_2a40._4_4_ & 0x7fffffff) <= (int)local_2a40) {
    FUN_031dee78(&local_2a48,PTR_PTR_047d1a50,lVar38 + 1);
  }
  *(undefined8 *)(local_2a48 + (long)(int)local_2a40 * 8) = 0;
  lVar37 = (long)(int)local_2a18;
  local_2a40 = CONCAT44(local_2a40._4_4_,(int)(lVar38 + 1));
  uVar42 = lVar37 + 1;
  if ((int)(local_2a18._4_4_ & 0x7fffffff) <= (int)local_2a18) {
    FUN_0337c330(&local_2a20,uVar42);
  }
  *(undefined1 **)(local_2a20 + (long)(int)local_2a18 * 8) = &DAT_03c886bc;
  lVar37 = lVar37 + 2;
  local_2a18 = CONCAT44(local_2a18._4_4_,(int)uVar42);
  if ((int)(local_2a18._4_4_ & 0x7fffffff) <= (int)uVar42) {
    FUN_0337c330(&local_2a20,lVar37);
    uVar42 = local_2a18 & 0xffffffff;
  }
  plVar1 = local_2a58;
  *(undefined8 *)(local_2a20 + (long)(int)uVar42 * 8) = 0;
  local_2a18 = CONCAT44(local_2a18._4_4_,(int)lVar37);
  local_2a10 = 2;
  puVar4 = (undefined4 *)*local_2a58;
  lVar38 = local_2a58[1];
  sVar25 = lVar38 - (long)puVar4;
  if ((long)sVar25 < 4) {
    plVar19 = (long *)local_2a58[7];
    if (plVar19 == (long *)0x0) {
      memcpy(&local_2790,puVar4,sVar25);
      *plVar1 = lVar38;
    }
    else {
      (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,4);
    }
  }
  else {
    local_2790 = (char *)CONCAT44(local_2790._4_4_,*puVar4);
    *local_2a58 = (long)(puVar4 + 1);
  }
  plVar1 = local_2a58;
  if (local_2a50 != '\0') {
    uVar32 = ((uint)local_2790 & 0xff00ff00) >> 8 | ((uint)local_2790 & 0xff00ff) << 8;
    local_2790 = (char *)CONCAT44(local_2790._4_4_,uVar32 >> 0x10 | uVar32 << 0x10);
  }
  puVar4 = (undefined4 *)*local_2a58;
  lVar38 = local_2a58[1];
  iVar18 = (uint)local_2790;
  sVar25 = lVar38 - (long)puVar4;
  if ((long)sVar25 < 4) {
    plVar19 = (long *)local_2a58[7];
    if (plVar19 == (long *)0x0) {
      memcpy(&local_2790,puVar4,sVar25);
      *plVar1 = lVar38;
    }
    else {
      (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,4);
    }
  }
  else {
    local_2790 = (char *)CONCAT44(local_2790._4_4_,*puVar4);
    *local_2a58 = (long)(puVar4 + 1);
  }
  plVar1 = local_2a58;
  if (local_2a50 != '\0') {
    uVar32 = ((uint)local_2790 & 0xff00ff00) >> 8 | ((uint)local_2790 & 0xff00ff) << 8;
    local_2790 = (char *)CONCAT44(local_2790._4_4_,uVar32 >> 0x10 | uVar32 << 0x10);
  }
  if (((iVar18 == -0x354ff2e2) && ((uint)local_2790 == -0x2fee0532)) ||
     ((iVar18 == 0x1e0db0ca && ((uint)local_2790 == -0x3105ee30)))) {
    local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
    puVar5 = (undefined1 *)*local_2a58;
    lVar38 = local_2a58[1];
    if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
      plVar19 = (long *)local_2a58[7];
      if (plVar19 == (long *)0x0) {
        memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
        *plVar1 = lVar38;
      }
      else {
        (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
      }
    }
    else {
      local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
      *local_2a58 = (long)(puVar5 + 1);
    }
    pcVar6 = local_2790;
    uVar42 = (ulong)((byte)local_2790 >> 1) & 0x3f;
    if ((char)(byte)local_2790 < '\0') {
      uVar43 = 6;
      do {
        plVar1 = local_2a58;
        local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
        puVar5 = (undefined1 *)*local_2a58;
        lVar38 = local_2a58[1];
        if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
          plVar19 = (long *)local_2a58[7];
          if (plVar19 == (long *)0x0) {
            memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
            *plVar1 = lVar38;
          }
          else {
            (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
          }
        }
        else {
          local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
          *local_2a58 = (long)(puVar5 + 1);
        }
        uVar40 = uVar43 & 0x3f;
        uVar43 = (ulong)((int)uVar43 + 7);
        uVar42 = ((ulong)local_2790 & 0x7f) << uVar40 | uVar42;
      } while ((char)(byte)local_2790 < '\0');
    }
    uVar43 = -uVar42;
    if (((ulong)pcVar6 & 1) == 0) {
      uVar43 = uVar42;
    }
    pcVar6 = PTR_DAT_047e5b58 + 0x10;
    puVar3 = PTR_DAT_047e5b60 + 0x10;
LAB_0337a5f0:
    plVar1 = local_2a58;
    lVar38 = 0;
    switch((int)uVar43) {
    case 1:
      local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
      puVar5 = (undefined1 *)*local_2a58;
      lVar38 = local_2a58[1];
      if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
        plVar19 = (long *)local_2a58[7];
        if (plVar19 == (long *)0x0) {
          memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
          *plVar1 = lVar38;
        }
        else {
          (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
        }
      }
      else {
        local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
        *local_2a58 = (long)(puVar5 + 1);
      }
      pcVar44 = local_2790;
      uVar42 = (ulong)((byte)local_2790 >> 1) & 0x3f;
      iVar18 = (int)uVar42;
      if ((char)(byte)local_2790 < '\0') {
        uVar43 = 6;
        do {
          plVar1 = local_2a58;
          local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
          puVar5 = (undefined1 *)*local_2a58;
          lVar38 = local_2a58[1];
          if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
            plVar19 = (long *)local_2a58[7];
            if (plVar19 == (long *)0x0) {
              memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
              *plVar1 = lVar38;
            }
            else {
              (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
            }
          }
          else {
            local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
            *local_2a58 = (long)(puVar5 + 1);
          }
          uVar40 = uVar43 & 0x3f;
          uVar43 = (ulong)((int)uVar43 + 7);
          uVar42 = ((ulong)local_2790 & 0x7f) << uVar40 | uVar42;
          iVar18 = (int)uVar42;
        } while ((char)(byte)local_2790 < '\0');
      }
      plVar1 = local_2a58;
      local_2a60 = -iVar18;
      if (((ulong)pcVar44 & 1) == 0) {
        local_2a60 = iVar18;
      }
      if (local_2a60 - 2U < 5) {
        lVar38 = (long)(int)local_2a00;
        if ((int)(local_2a00._4_4_ & 0x7fffffff) <= (int)local_2a00) {
          FUN_0133bb88(&local_2a08,PTR_PTR_047d1a50,lVar38 + 1);
        }
        *(undefined4 *)(local_2a08 + (long)(int)local_2a00 * 4) = 0;
        local_2a00 = CONCAT44(local_2a00._4_4_,(int)(lVar38 + 1));
        if (3 < local_2a60) {
          FUN_0337c444(&local_2a60);
          plVar1 = local_2a58;
          if (4 < local_2a60) {
            puVar20 = (undefined2 *)*local_2a58;
            lVar38 = local_2a58[1];
            sVar25 = lVar38 - (long)puVar20;
            if ((long)sVar25 < 2) {
              plVar19 = (long *)local_2a58[7];
              if (plVar19 == (long *)0x0) {
                memcpy(&local_2790,puVar20,sVar25);
                *plVar1 = lVar38;
              }
              else {
                (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,2);
              }
            }
            else {
              local_2790 = (char *)CONCAT62(local_2790._2_6_,*puVar20);
              *local_2a58 = (long)(puVar20 + 1);
            }
            plVar1 = local_2a58;
            if (local_2a50 != '\0') {
              local_2790 = (char *)CONCAT62(local_2790._2_6_,
                                            (ushort)local_2790 >> 8 | (ushort)local_2790 << 8);
            }
            puVar20 = (undefined2 *)*local_2a58;
            lVar38 = local_2a58[1];
            sVar25 = lVar38 - (long)puVar20;
            if ((long)sVar25 < 2) {
              plVar19 = (long *)local_2a58[7];
              if (plVar19 == (long *)0x0) {
                memcpy(&local_2790,puVar20,sVar25);
                *plVar1 = lVar38;
              }
              else {
                (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,2);
              }
            }
            else {
              local_2790 = (char *)CONCAT62(local_2790._2_6_,*puVar20);
              *local_2a58 = (long)(puVar20 + 1);
            }
            if (local_2a50 != '\0') {
              local_2790 = (char *)CONCAT62(local_2790._2_6_,
                                            (ushort)local_2790 >> 8 | (ushort)local_2790 << 8);
            }
            uVar32 = (uint)(ushort)local_2790;
            if ((ushort)local_2790 != 0) {
              do {
                plVar1 = local_2a58;
                puVar20 = (undefined2 *)*local_2a58;
                lVar38 = local_2a58[1];
                sVar25 = lVar38 - (long)puVar20;
                if ((long)sVar25 < 2) {
                  plVar19 = (long *)local_2a58[7];
                  if (plVar19 == (long *)0x0) {
                    memcpy(&local_2790,puVar20,sVar25);
                    *plVar1 = lVar38;
                  }
                  else {
                    (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,2);
                  }
                }
                else {
                  local_2790 = (char *)CONCAT62(local_2790._2_6_,*puVar20);
                  *local_2a58 = (long)(puVar20 + 1);
                }
                if (local_2a50 != '\0') {
                  local_2790 = (char *)CONCAT62(local_2790._2_6_,
                                                (ushort)local_2790 >> 8 | (ushort)local_2790 << 8);
                }
                uVar32 = uVar32 - 1;
              } while (uVar32 != 0);
            }
            if (5 < local_2a60) {
              local_2a5c = 1;
            }
          }
        }
      }
      else if (local_2a60 != 0) {
        if (local_2a60 != 1) {
          local_27d0 = 1;
          local_27c8 = 0;
          local_27c0 = &local_29a0;
          local_27e0 = PTR_DAT_047e34b8 + 0x10;
          local_27d8 = 0xffffffff;
          local_27a8 = 0;
          local_27b8 = 0;
          local_27b0 = 0x1bf;
          memset(&local_29a0,0,0x1c0);
          FUN_0322bd4c(&local_27e0,"Unrecognised tagfile version ",0x1d);
          FUN_031c68c0(&local_2790,0x2728,0x2728,&DAT_03c596d4,local_2a60);
          sVar25 = strlen((char *)&local_2790);
          (**(code **)(local_27e0 + 0x28))(&local_27e0,&local_2790,(long)(int)sVar25);
          uVar26 = 0x50d;
          ppcVar24 = &local_29a0;
          goto LAB_0337a4f4;
        }
        local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
        puVar5 = (undefined1 *)*local_2a58;
        lVar38 = local_2a58[1];
        if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
          plVar19 = (long *)local_2a58[7];
          if (plVar19 == (long *)0x0) {
            memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
            *plVar1 = lVar38;
          }
          else {
            (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
          }
        }
        else {
          local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
          *local_2a58 = (long)(puVar5 + 1);
        }
        pcVar44 = local_2790;
        uVar42 = (ulong)((byte)local_2790 >> 1) & 0x3f;
        iVar18 = (int)uVar42;
        if ((char)(byte)local_2790 < '\0') {
          uVar43 = 6;
          do {
            plVar1 = local_2a58;
            local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
            puVar5 = (undefined1 *)*local_2a58;
            lVar38 = local_2a58[1];
            if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
              plVar19 = (long *)local_2a58[7];
              if (plVar19 == (long *)0x0) {
                memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
                *plVar1 = lVar38;
              }
              else {
                (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
              }
            }
            else {
              local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
              *local_2a58 = (long)(puVar5 + 1);
            }
            uVar40 = uVar43 & 0x3f;
            uVar43 = (ulong)((int)uVar43 + 7);
            uVar42 = ((ulong)local_2790 & 0x7f) << uVar40 | uVar42;
            iVar18 = (int)uVar42;
          } while ((char)(byte)local_2790 < '\0');
        }
        uVar42 = local_2a18;
        iVar35 = -iVar18;
        if (((ulong)pcVar44 & 1) == 0) {
          iVar35 = iVar18;
        }
        if (iVar35 != 1) goto LAB_0337b6f0;
        iVar18 = 0;
        local_2a18 = local_2a18 & 0xffffffff00000000;
        if ((uVar42 & 0x7fffffff00000000) == 0) {
          FUN_0337c330(&local_2a20,1);
          iVar18 = (int)local_2a18;
        }
        uVar42 = local_2a18;
        *(undefined1 **)(local_2a20 + (long)iVar18 * 8) = &DAT_03c886bc;
        local_2a18._0_4_ = 1;
        iVar18 = 1;
        if ((uVar42 & 0x7ffffffe00000000) == 0) {
          FUN_0337c330(&local_2a20,2);
          iVar18 = (int)local_2a18;
        }
        *(undefined8 *)(local_2a20 + (long)iVar18 * 8) = 0;
        local_2a18._0_4_ = 2;
        if ((local_2a18._4_4_ & 0x7ffffffe) < 0x6da) {
          FUN_0337e334(&local_2a20);
        }
        puVar12 = PTR_PTR_047e6840;
        lVar38 = 0;
        do {
          puVar33 = (undefined8 *)(puVar12 + lVar38 * 8);
          puVar34 = (undefined8 *)(local_2a20 + 0x10 + lVar38 * 8);
          lVar38 = lVar38 + 8;
          *puVar34 = *puVar33;
          puVar34[1] = puVar33[1];
          puVar34[2] = puVar33[2];
          puVar34[3] = puVar33[3];
          puVar34[4] = puVar33[4];
          puVar34[5] = puVar33[5];
          puVar34[6] = puVar33[6];
          puVar34[7] = puVar33[7];
        } while ((int)lVar38 != 0x6d8);
        local_2a18 = CONCAT44(local_2a18._4_4_,0x6da);
        local_2a10 = 0x6da;
      }
      break;
    case 2:
      pbVar31 = (byte *)FUN_0337c444(&local_2a60);
      plVar1 = local_2a58;
      local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
      puVar5 = (undefined1 *)*local_2a58;
      lVar38 = local_2a58[1];
      if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
        plVar19 = (long *)local_2a58[7];
        if (plVar19 == (long *)0x0) {
          memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
          *plVar1 = lVar38;
        }
        else {
          (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
        }
      }
      else {
        local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
        *local_2a58 = (long)(puVar5 + 1);
      }
      pcVar44 = local_2790;
      uVar42 = (ulong)((byte)local_2790 >> 1) & 0x3f;
      iVar18 = (int)uVar42;
      if ((char)(byte)local_2790 < '\0') {
        uVar43 = 6;
        do {
          plVar1 = local_2a58;
          local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
          puVar5 = (undefined1 *)*local_2a58;
          lVar38 = local_2a58[1];
          if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
            plVar19 = (long *)local_2a58[7];
            if (plVar19 == (long *)0x0) {
              memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
              *plVar1 = lVar38;
            }
            else {
              (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
            }
          }
          else {
            local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
            *local_2a58 = (long)(puVar5 + 1);
          }
          uVar40 = uVar43 & 0x3f;
          uVar43 = (ulong)((int)uVar43 + 7);
          uVar42 = ((ulong)local_2790 & 0x7f) << uVar40 | uVar42;
          iVar18 = (int)uVar42;
        } while ((char)(byte)local_2790 < '\0');
      }
      pvVar17 = local_2a38;
      uVar32 = (uint)*pbVar31;
      iVar35 = -iVar18;
      if (((ulong)pcVar44 & 1) == 0) {
        iVar35 = iVar18;
      }
      uVar28 = 0x811c9dc5;
      if (*pbVar31 != 0) {
        uVar28 = 0x811c9dc5;
        pbVar36 = pbVar31;
        do {
          pbVar36 = pbVar36 + 1;
          uVar28 = (uVar28 ^ uVar32) * 0x1000193;
          uVar32 = (uint)*pbVar36;
        } while (uVar32 != 0);
      }
      uVar32 = local_2a30._4_4_;
      uVar43 = (ulong)(int)local_2a30._4_4_;
      uVar40 = (ulong)(local_2a30._4_4_ & uVar28);
      uVar42 = *(ulong *)((long)local_2a38 + uVar40 * 0x18);
      if (uVar42 != 0xffffffffffffffff) {
        do {
          if ((uVar42 == uVar28) &&
             (iVar18 = strcmp((char *)pbVar31,*(char **)((long)pvVar17 + uVar40 * 0x18 + 8)),
             iVar18 == 0)) goto LAB_0337aa3c;
          uVar40 = uVar40 + 1 & uVar43;
          uVar42 = *(ulong *)((long)pvVar17 + uVar40 * 0x18);
        } while (uVar42 != 0xffffffffffffffff);
      }
      uVar40 = (ulong)(uVar32 + 1);
LAB_0337aa3c:
      if (((int)uVar32 < (int)uVar40) ||
         (pcVar44 = *(char **)((long)pvVar17 + (long)(int)uVar40 * 0x18 + 0x10),
         pcVar44 == (char *)0x0)) {
        pcVar44 = (char *)(**(code **)(*local_29f8 + 0x18))(local_29f8,0x40);
        pcVar44[0] = '\x1d';
        pcVar44[1] = '\0';
        pcVar44[2] = -0x70;
        pcVar44[3] = '\0';
        pcVar44[4] = '\0';
        pcVar44[5] = '\0';
        pcVar44[6] = '\0';
        pcVar44[7] = '\0';
        pcVar44[8] = '\0';
        pcVar44[9] = '\0';
        pcVar44[10] = '\0';
        pcVar44[0xb] = '\0';
        pcVar44[0xc] = '\0';
        pcVar44[0xd] = '\0';
        pcVar44[0xe] = '\0';
        pcVar44[0xf] = '\0';
        pcVar44[0x20] = '\0';
        pcVar44[0x21] = '\0';
        pcVar44[0x22] = '\0';
        pcVar44[0x23] = '\0';
        pcVar44[0x24] = '\0';
        pcVar44[0x25] = '\0';
        pcVar44[0x26] = '\0';
        pcVar44[0x27] = '\0';
        pcVar44[0x28] = '\0';
        pcVar44[0x29] = '\0';
        pcVar44[0x2a] = '\0';
        pcVar44[0x2b] = '\0';
        pcVar44[0x2c] = '\0';
        pcVar44[0x2d] = '\0';
        pcVar44[0x2e] = '\0';
        pcVar44[0x2f] = '\0';
        pcVar44[0x30] = '\0';
        pcVar44[0x31] = '\0';
        pcVar44[0x32] = '\0';
        pcVar44[0x33] = '\0';
        pcVar44[0x34] = '\0';
        pcVar44[0x35] = '\0';
        pcVar44[0x36] = '\0';
        pcVar44[0x37] = '\0';
        pcVar44[0x38] = '\0';
        pcVar44[0x39] = '\0';
        pcVar44[0x3a] = '\0';
        pcVar44[0x3b] = '\0';
        pcVar44[0x3c] = '\0';
        pcVar44[0x3d] = '\0';
        pcVar44[0x3e] = '\0';
        pcVar44[0x3f] = '\0';
        pcVar44[0x10] = '\a';
        pcVar44[0x11] = '\0';
        pcVar44[0x12] = '\0';
        pcVar44[0x13] = '\0';
        pcVar44[0x14] = '\0';
        pcVar44[0x15] = '\0';
        pcVar44[0x16] = '\0';
        pcVar44[0x17] = '\0';
        pcVar44[0x18] = '\0';
        pcVar44[0x19] = '\0';
        pcVar44[0x1a] = '\0';
        pcVar44[0x1b] = '\0';
        pcVar44[0x1c] = '\0';
        pcVar44[0x1d] = '\0';
        pcVar44[0x1e] = '\0';
        pcVar44[0x1f] = '\0';
        FUN_0324e488(&local_2a38,pbVar31,pcVar44);
      }
      lVar38 = local_29a8;
      *(byte **)(pcVar44 + 0x20) = pbVar31;
      *(long *)(pcVar44 + 0x28) = (long)iVar35;
      pcVar44[0x30] = '\0';
      pcVar44[0x31] = '\0';
      pcVar44[0x32] = '\0';
      pcVar44[0x33] = '\0';
      pcVar44[0x34] = '\0';
      pcVar44[0x35] = '\0';
      pcVar44[0x36] = '\0';
      pcVar44[0x37] = '\0';
      local_2790 = pcVar44;
      lVar37 = FUN_03379400(local_29a8 + 0xd8,&local_2790);
      if (lVar37 == 0) {
        uVar28 = 0;
        uVar32 = 0xffffffff;
      }
      else {
        uVar32 = *(uint *)(lVar37 + 4);
        uVar28 = ((int)lVar37 - (int)*(undefined8 *)(lVar38 + 0xe8)) * 0x20000000;
      }
      if ((int)(uVar32 | uVar28) < 0) {
        FUN_0337e9e8(lVar38,*(undefined4 *)(lVar38 + 0xe0),local_2790);
      }
      lVar38 = (long)(int)local_2a40;
      if ((int)(local_2a40._4_4_ & 0x7fffffff) <= (int)local_2a40) {
        FUN_031dee78(&local_2a48,PTR_PTR_047d1a50,lVar38 + 1);
      }
      plVar1 = local_2a58;
      *(char **)(local_2a48 + (long)(int)local_2a40 * 8) = pcVar44;
      local_2a40 = CONCAT44(local_2a40._4_4_,(int)(lVar38 + 1));
      local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
      puVar5 = (undefined1 *)*local_2a58;
      lVar38 = local_2a58[1];
      if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
        plVar19 = (long *)local_2a58[7];
        if (plVar19 == (long *)0x0) {
          memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
          *plVar1 = lVar38;
        }
        else {
          (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
        }
      }
      else {
        local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
        *local_2a58 = (long)(puVar5 + 1);
      }
      pcVar22 = local_2790;
      uVar42 = (ulong)((byte)local_2790 >> 1) & 0x3f;
      if ((char)(byte)local_2790 < '\0') {
        uVar43 = 6;
        do {
          plVar1 = local_2a58;
          local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
          puVar5 = (undefined1 *)*local_2a58;
          lVar38 = local_2a58[1];
          if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
            plVar19 = (long *)local_2a58[7];
            if (plVar19 == (long *)0x0) {
              memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
              *plVar1 = lVar38;
            }
            else {
              (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
            }
          }
          else {
            local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
            *local_2a58 = (long)(puVar5 + 1);
          }
          uVar40 = uVar43 & 0x3f;
          uVar43 = (ulong)((int)uVar43 + 7);
          uVar42 = ((ulong)local_2790 & 0x7f) << uVar40 | uVar42;
        } while ((char)(byte)local_2790 < '\0');
      }
      plVar1 = local_2a58;
      uVar43 = -uVar42;
      if (((ulong)pcVar22 & 1) == 0) {
        uVar43 = uVar42;
      }
      if ((int)uVar43 < 0) {
        uVar26 = 0;
      }
      else {
        uVar26 = *(undefined8 *)(local_2a48 + (uVar43 & 0xffffffff) * 8);
      }
      *(undefined8 *)(pcVar44 + 8) = uVar26;
      local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
      puVar5 = (undefined1 *)*local_2a58;
      lVar38 = local_2a58[1];
      if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
        plVar19 = (long *)local_2a58[7];
        if (plVar19 == (long *)0x0) {
          memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
          *plVar1 = lVar38;
        }
        else {
          (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
        }
      }
      else {
        local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
        *local_2a58 = (long)(puVar5 + 1);
      }
      pcVar22 = local_2790;
      uVar42 = (ulong)((byte)local_2790 >> 1) & 0x3f;
      if ((char)(byte)local_2790 < '\0') {
        uVar43 = 6;
        do {
          plVar1 = local_2a58;
          local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
          puVar5 = (undefined1 *)*local_2a58;
          lVar38 = local_2a58[1];
          if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
            plVar19 = (long *)local_2a58[7];
            if (plVar19 == (long *)0x0) {
              memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
              *plVar1 = lVar38;
            }
            else {
              (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
            }
          }
          else {
            local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
            *local_2a58 = (long)(puVar5 + 1);
          }
          uVar40 = uVar43 & 0x3f;
          uVar43 = (ulong)((int)uVar43 + 7);
          uVar42 = ((ulong)local_2790 & 0x7f) << uVar40 | uVar42;
        } while ((char)(byte)local_2790 < '\0');
      }
      pcVar44[0x10] = '\a';
      pcVar44[0x11] = '\0';
      pcVar44[0x12] = '\0';
      pcVar44[0x13] = '\0';
      pcVar44[0x14] = '\0';
      pcVar44[0x15] = '\0';
      pcVar44[0x16] = '\0';
      pcVar44[0x17] = '\0';
      *(undefined **)(pcVar44 + 0x18) = PTR_DAT_047e67a8;
      pcVar44[0] = '\x1d';
      pcVar44[1] = '\0';
      pcVar44[2] = -0x70;
      pcVar44[3] = '\0';
      pcVar44[4] = '\0';
      pcVar44[5] = '\0';
      pcVar44[6] = '\0';
      pcVar44[7] = '\0';
      uVar43 = -uVar42;
      if (((ulong)pcVar22 & 1) == 0) {
        uVar43 = uVar42;
      }
      uVar42 = (ulong)((int)uVar43 << 3);
      puVar20 = (undefined2 *)(**(code **)(*local_29f8 + 0x18))(local_29f8,uVar42 + 8);
      *puVar20 = (short)uVar43;
      puVar20[1] = 0;
      puVar20[2] = (short)uVar43;
      memset(puVar20 + 4,0,uVar42 & 0xfffffff8);
      *(undefined2 **)(pcVar44 + 0x38) = puVar20;
      if (0 < (int)uVar43) {
        uVar42 = 0;
        do {
          uVar26 = FUN_0337c444(&local_2a60);
          plVar1 = local_2a58;
          local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
          puVar5 = (undefined1 *)*local_2a58;
          lVar38 = local_2a58[1];
          if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
            plVar19 = (long *)local_2a58[7];
            if (plVar19 == (long *)0x0) {
              memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
              *plVar1 = lVar38;
            }
            else {
              (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
            }
          }
          else {
            local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
            *local_2a58 = (long)(puVar5 + 1);
          }
          pcVar22 = local_2790;
          uVar40 = (ulong)((byte)local_2790 >> 1) & 0x3f;
          uVar32 = (uint)uVar40;
          if ((char)(byte)local_2790 < '\0') {
            uVar41 = 6;
            do {
              plVar1 = local_2a58;
              local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
              puVar5 = (undefined1 *)*local_2a58;
              lVar38 = local_2a58[1];
              if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
                plVar19 = (long *)local_2a58[7];
                if (plVar19 == (long *)0x0) {
                  memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
                  *plVar1 = lVar38;
                }
                else {
                  (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
                }
              }
              else {
                local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
                *local_2a58 = (long)(puVar5 + 1);
              }
              uVar8 = uVar41 & 0x3f;
              uVar41 = (ulong)((int)uVar41 + 7);
              uVar40 = ((ulong)local_2790 & 0x7f) << uVar8 | uVar40;
              uVar32 = (uint)uVar40;
            } while ((char)(byte)local_2790 < '\0');
          }
          plVar1 = local_2a58;
          uVar28 = -uVar32;
          if (((ulong)pcVar22 & 1) == 0) {
            uVar28 = uVar32;
          }
          if ((uVar28 >> 5 & 1) == 0) {
            iVar35 = 0;
          }
          else {
            local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
            puVar5 = (undefined1 *)*local_2a58;
            lVar38 = local_2a58[1];
            if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
              plVar19 = (long *)local_2a58[7];
              if (plVar19 == (long *)0x0) {
                memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
                *plVar1 = lVar38;
              }
              else {
                (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
              }
            }
            else {
              local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
              *local_2a58 = (long)(puVar5 + 1);
            }
            pcVar22 = local_2790;
            uVar40 = (ulong)((byte)local_2790 >> 1) & 0x3f;
            iVar18 = (int)uVar40;
            if ((char)(byte)local_2790 < '\0') {
              uVar41 = 6;
              do {
                plVar1 = local_2a58;
                local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
                puVar5 = (undefined1 *)*local_2a58;
                lVar38 = local_2a58[1];
                if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
                  plVar19 = (long *)local_2a58[7];
                  if (plVar19 == (long *)0x0) {
                    memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
                    *plVar1 = lVar38;
                  }
                  else {
                    (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
                  }
                }
                else {
                  local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
                  *local_2a58 = (long)(puVar5 + 1);
                }
                uVar8 = uVar41 & 0x3f;
                uVar41 = (ulong)((int)uVar41 + 7);
                uVar40 = ((ulong)local_2790 & 0x7f) << uVar8 | uVar40;
                iVar18 = (int)uVar40;
              } while ((char)(byte)local_2790 < '\0');
            }
            iVar35 = -iVar18;
            if (((ulong)pcVar22 & 1) == 0) {
              iVar35 = iVar18;
            }
          }
          if ((uVar28 & 0xe) == 8) {
            uVar21 = FUN_0337c444(&local_2a60);
          }
          else {
            uVar21 = 0;
          }
          pcVar22 = (char *)FUN_0337e420(&local_2a60,uVar28,uVar21,iVar35);
          lVar38 = local_29a8;
          local_2790 = pcVar22;
          lVar37 = FUN_03379400(local_29a8 + 0xd8,&local_2790);
          if (lVar37 == 0) {
            uVar29 = 0;
            uVar32 = 0xffffffff;
          }
          else {
            uVar32 = *(uint *)(lVar37 + 4);
            uVar29 = ((int)lVar37 - (int)*(undefined8 *)(lVar38 + 0xe8)) * 0x20000000;
          }
          if ((int)(uVar32 | uVar29) < 0) {
            FUN_0337e9e8(lVar38,*(undefined4 *)(lVar38 + 0xe0),local_2790);
          }
          local_2770 = 0xffffffff;
          local_2780 = PTR_PTR_047d1a50 + 0x20;
          local_2778 = 0x4000;
          local_2758 = 0;
          local_2768 = 0;
          uStack_2760 = 0;
          local_2754 = 0x80000000;
          local_2750 = 0;
          local_2748 = 0x8000000000000000;
          local_2740 = 0;
          local_2618 = 0;
          local_2628 = 0;
          uStack_2620 = 0;
          local_25f8 = 0x8000000200000000;
          local_25b8 = 0x8000000300000000;
          local_2614 = 0x80000000;
          local_2610 = 0;
          local_2608 = 0x8000000000000000;
          local_25d0 = (undefined *)0x0;
          local_25c8 = 0x8000000000000000;
          local_2598 = 0;
          local_2590 = 0;
          local_2588 = 0x8000000000000000;
          local_2580 = 0;
          local_2576 = 0;
          local_2578 = 1;
          local_2790 = pcVar6;
          local_2788 = puVar3;
          local_2600 = auStack_25f0;
          local_25c0 = &local_25b0;
          memset(auStack_2728,0,0x100);
          local_26a0 = 0x21fefe;
          if (uVar28 != 0) {
            local_26a0 = 0x20fefe;
          }
          local_2730 = 0xf0000;
          local_2690 = 0;
          local_2738 = pcVar22;
          local_26a8 = uVar26;
          local_2698 = pcVar44;
          iVar18 = FUN_031d8d9c(&local_2790,local_29f8,&local_2798);
          if (iVar18 < 0) {
            if (DAT_0488df08 == '\0') {
              if (DAT_046aaf68 != '\0') goto LAB_0337b904;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_29a0 = (char *)0x0;
                local_2990 = &DAT_0488deb8;
                uStack_2988 = 1;
                pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
                local_2980 = nn::os::GetThreadId(pTVar23);
                local_2978 = (char *)0x0;
                local_2970 = 0;
                local_2968 = (char *)0x0;
                local_2960 = 0;
                uStack_2958 = 0;
                FUN_0322c554(&local_29a0,"Failed to allocate type from builder",PTR_DAT_047d1b38);
                local_2968 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile2014/hkTagfileReadFormat2014.cpp"
                ;
                local_2960 = 0x4b4;
                FUN_0322c8e0(&local_29a0);
              }
              else {
LAB_0337b904:
                local_2990 = &DAT_0488deb8;
                uStack_2988 = 1;
                pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
                local_2980 = nn::os::GetThreadId(pTVar23);
                local_2970 = 0;
                local_2968 = (char *)0x0;
                local_2960 = 0;
                uStack_2958 = 0;
                local_2950[0] = '\0';
                uStack_2998 = 0x10000000000;
                local_29a0 = local_2950;
                local_2978 = local_2950;
                FUN_0322c554(&local_29a0,"Failed to allocate type from builder",PTR_DAT_047d1b38);
                local_2968 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile2014/hkTagfileReadFormat2014.cpp"
                ;
                local_2960 = 0x4b4;
                if (local_2950[0] != '\0') {
                  sVar25 = strlen(local_2950);
                  (local_2950 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[0] = '\n';
                  (local_2950 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[1] = '\0';
                  printf("%s",local_2950);
                  fflush(*(FILE **)PTR_stdout_047cb860);
                }
              }
              if (((ulong)local_2978 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_2978 + -1,0);
              }
            }
            FUN_031d798c(&local_2790);
            goto LAB_0337b6f0;
          }
          *(undefined8 *)(puVar20 + uVar42 * 4 + 4) = local_2798;
          FUN_031d798c(&local_2790);
          uVar42 = uVar42 + 1;
        } while (uVar42 != (uVar43 & 0xffffffff));
      }
      break;
    case 3:
    case 4:
    case 6:
      local_2790 = (char *)0x0;
      FUN_0337c630(&local_2a60,uVar43,&local_2790,0);
      if (local_2a60 < 2) goto switchD_0337a614_caseD_7;
      break;
    default:
      goto switchD_0337a614_caseD_5;
    case 7:
switchD_0337a614_caseD_7:
      puVar16 = PTR_DAT_047e5c78;
      puVar15 = PTR_DAT_047e5c70;
      puVar14 = PTR_DAT_047e5c68;
      puVar13 = PTR_DAT_047e5c60;
      puVar12 = PTR_DAT_047e5c58;
      puVar3 = PTR_DAT_047e5c40;
      if (*(int *)(param_1 + 0x20) < 1) goto LAB_0337b61c;
      lVar38 = 0;
      goto LAB_0337b4b4;
    }
    plVar1 = local_2a58;
    local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
    puVar5 = (undefined1 *)*local_2a58;
    lVar38 = local_2a58[1];
    if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
      plVar19 = (long *)local_2a58[7];
      if (plVar19 == (long *)0x0) {
        memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
        *plVar1 = lVar38;
      }
      else {
        (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
      }
    }
    else {
      local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
      *local_2a58 = (long)(puVar5 + 1);
    }
    pcVar44 = local_2790;
    uVar42 = (ulong)((byte)local_2790 >> 1) & 0x3f;
    if ((char)(byte)local_2790 < '\0') {
      uVar43 = 6;
      do {
        plVar1 = local_2a58;
        local_2790 = (char *)CONCAT71(local_2790._1_7_,0xff);
        puVar5 = (undefined1 *)*local_2a58;
        lVar38 = local_2a58[1];
        if (lVar38 - (long)puVar5 == 0 || lVar38 < (long)puVar5) {
          plVar19 = (long *)local_2a58[7];
          if (plVar19 == (long *)0x0) {
            memcpy(&local_2790,puVar5,lVar38 - (long)puVar5);
            *plVar1 = lVar38;
          }
          else {
            (**(code **)(*plVar19 + 0x38))(plVar19,local_2a58,&local_2790,1);
          }
        }
        else {
          local_2790 = (char *)CONCAT71(local_2790._1_7_,*puVar5);
          *local_2a58 = (long)(puVar5 + 1);
        }
        uVar40 = uVar43 & 0x3f;
        uVar43 = (ulong)((int)uVar43 + 7);
        uVar42 = ((ulong)local_2790 & 0x7f) << uVar40 | uVar42;
      } while ((char)(byte)local_2790 < '\0');
    }
    uVar43 = -uVar42;
    if (((ulong)pcVar44 & 1) == 0) {
      uVar43 = uVar42;
    }
    goto LAB_0337a5f0;
  }
  local_25c0 = (char ***)0x1;
  local_25b8 = 0;
  local_25b0 = &local_2790;
  local_25d0 = PTR_DAT_047e34b8 + 0x10;
  local_25c8 = 0xffffffff;
  local_2598 = local_2598 & 0xffffff00;
  local_25a8 = 0;
  local_25a0 = 0x1bf;
  memset(&local_2790,0,0x1c0);
  FUN_0322bd4c(&local_25d0,"This does not look like a binary tagfile (magic number mismatch)",0x40);
  uVar26 = 0x4c5;
  ppcVar24 = &local_2790;
LAB_0337a4f4:
  FUN_03226c50(0x2ab6036f,ppcVar24,
               "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Tagfile2014/hkTagfileReadFormat2014.cpp"
               ,uVar26);
LAB_0337b6f0:
  lVar38 = 0;
  goto switchD_0337a614_caseD_5;
LAB_0337b59c:
  uVar42 = puVar30[(uVar42 >> 1 & 1) + (uVar42 & 1) + 2];
  while( true ) {
    if ((uVar42 & 1) != 0) {
      plVar19 = (long *)(uVar42 & 0xfffffffffffffffe);
      plVar1 = plVar19 + 1;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      plVar1 = plVar19 + 1;
      do {
        lVar37 = *plVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *(int *)plVar1 = (int)lVar37 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((plVar19 != (long *)0x0) && ((int)lVar37 == 1)) {
        (**(code **)(*plVar19 + 8))();
      }
    }
    if (puVar39 != (ulong *)0x0) {
      FUN_0337bb60(param_1,puVar39);
    }
    lVar38 = lVar38 + 1;
    if (*(int *)(param_1 + 0x20) <= lVar38) break;
LAB_0337b4b4:
    uVar32 = *(uint *)(*(long *)(param_1 + 0x18) + lVar38 * 0x10 + 8);
    if ((int)uVar32 < 0) {
      pbVar31 = *(byte **)(*(long *)(param_1 + 8) + (long)(int)-uVar32 * 8);
      if (pbVar31 == (byte *)0x0) {
        puVar39 = (ulong *)0x0;
        uVar42 = 0;
      }
      else {
        for (; (*pbVar31 & 1) == 0; pbVar31 = *(byte **)(pbVar31 + 8)) {
        }
        puVar39 = (ulong *)puVar3;
        switch(*(uint *)(pbVar31 + 0x10) & 0x1f) {
        case 0:
          break;
        case 1:
          puVar39 = (ulong *)PTR_DAT_047e5b88;
          break;
        case 2:
          puVar39 = (ulong *)PTR_DAT_047e5c48;
          break;
        case 3:
          puVar39 = (ulong *)PTR_DAT_047e5c50;
          break;
        case 4:
          puVar39 = (ulong *)puVar12;
          break;
        case 5:
          puVar39 = (ulong *)puVar13;
          break;
        case 6:
          puVar39 = (ulong *)puVar14;
          break;
        case 7:
          puVar39 = (ulong *)puVar15;
          break;
        case 8:
          puVar39 = (ulong *)puVar16;
          break;
        default:
          puVar39 = (ulong *)0x0;
          goto LAB_0337b540;
        }
        puVar30 = puVar39;
        do {
          uVar42 = *puVar30;
          if (((uint)uVar42 >> 2 & 1) != 0) goto LAB_0337b59c;
          puVar30 = (ulong *)puVar30[1];
        } while (puVar30 != (ulong *)0x0);
        uVar42 = 0;
      }
    }
    else {
      puVar39 = *(ulong **)(*(long *)(param_1 + 8) + (ulong)uVar32 * 8);
      if (puVar39 == (ulong *)0x0) {
LAB_0337b540:
        uVar42 = 0;
      }
      else {
        puVar30 = puVar39;
        do {
          uVar42 = *puVar30;
          if (((uint)uVar42 >> 2 & 1) != 0) goto LAB_0337b59c;
          puVar30 = (ulong *)puVar30[1];
        } while (puVar30 != (ulong *)0x0);
        uVar42 = 0;
      }
    }
  }
LAB_0337b61c:
  lVar38 = param_1;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar37 = 0;
    do {
      puVar39 = *(ulong **)
                 (*(long *)(param_1 + 8) +
                 (long)*(int *)(*(long *)(param_1 + 0x38) + lVar37 * 0x10 + 8) * 8);
      if (puVar39 != (ulong *)0x0) {
        puVar30 = puVar39;
        do {
          uVar42 = *puVar30;
          if (((uint)uVar42 >> 2 & 1) != 0) {
            if ((puVar30[(uVar42 >> 1 & 1) + (uVar42 & 1) + 2] & 1) != 0) {
              plVar19 = (long *)(puVar30[(uVar42 >> 1 & 1) + (uVar42 & 1) + 2] & 0xfffffffffffffffe)
              ;
              plVar1 = plVar19 + 1;
              do {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar10) {
                  *(int *)plVar1 = (int)*plVar1 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              do {
                lVar11 = *plVar1;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar10) {
                  *(int *)plVar1 = (int)lVar11 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if ((plVar19 != (long *)0x0) && ((int)lVar11 == 1)) {
                (**(code **)(*plVar19 + 8))();
              }
            }
            break;
          }
          puVar30 = (ulong *)puVar30[1];
        } while (puVar30 != (ulong *)0x0);
      }
      if (puVar39 != (ulong *)0x0) {
        FUN_0337bb60(param_1,puVar39);
      }
      lVar37 = lVar37 + 1;
    } while (lVar37 < *(int *)(param_1 + 0x40));
  }
switchD_0337a614_caseD_5:
  lVar37 = local_29c8;
  uVar42 = (ulong)local_29c8._4_4_;
  local_29c8 = (ulong)local_29c8._4_4_ << 0x20;
  if ((-1 < lVar37) && (local_29d0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_29d0,uVar42 << 4);
  }
  lVar37 = local_29d8;
  uVar42 = (ulong)local_29d8._4_4_;
  local_29d0 = 0;
  local_29c8 = CONCAT44(0x80000000,(undefined4)local_29c8);
  local_29d8 = (ulong)local_29d8._4_4_ << 0x20;
  if ((-1 < lVar37) && (local_29e0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_29e0,uVar42 << 3);
  }
  lVar37 = local_2a00;
  uVar42 = (ulong)local_2a00._4_4_;
  local_29e0 = 0;
  local_29d8 = CONCAT44(0x80000000,(undefined4)local_29d8);
  local_2a00 = (ulong)local_2a00._4_4_ << 0x20;
  if ((-1 < lVar37) && (local_2a08 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_2a08,uVar42 << 2);
  }
  uVar42 = local_2a18;
  uVar43 = (ulong)local_2a18._4_4_;
  local_2a08 = 0;
  local_2a00 = CONCAT44(0x80000000,(int)local_2a00);
  local_2a18 = (ulong)local_2a18._4_4_ << 0x20;
  if ((-1 < (long)uVar42) && (local_2a20 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_2a20,uVar43 << 3);
  }
  local_2a20 = 0;
  local_2a18 = CONCAT44(0x80000000,(int)local_2a18);
  (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_2a38,0);
  lVar37 = local_2a40;
  uVar42 = (ulong)local_2a40._4_4_;
  local_2a40 = (ulong)local_2a40._4_4_ << 0x20;
  if ((-1 < lVar37) && (local_2a48 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_2a48,uVar42 << 3);
  }
  return lVar38;
}


