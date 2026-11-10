/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03218750; name: FUN_03218750
 */


/* WARNING: Removing unreachable block (ram,0x032193c8) */

long * FUN_03218750(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 **ppuVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  long lVar5;
  undefined8 **ppuVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  ThreadType *pTVar12;
  long *plVar13;
  size_t sVar14;
  undefined8 uVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 **ppuVar23;
  long *plVar24;
  int iVar25;
  bool bVar26;
  ulong *local_10d0;
  ulong *local_10c8;
  undefined8 *local_10c0;
  undefined8 uStack_10b8;
  undefined8 local_10b0;
  ulong *local_10a8;
  undefined8 local_10a0;
  char *local_1098;
  undefined8 local_1090;
  undefined8 uStack_1088;
  ulong local_1080 [32];
  ulong *local_f80;
  ulong *local_f78;
  undefined8 *local_f70;
  ulong local_f68;
  undefined8 local_f60;
  ulong *local_f58;
  undefined8 local_f50;
  char *local_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  ulong local_f30 [10];
  code *local_ee0;
  undefined *local_ed0;
  undefined *local_ec8;
  undefined1 *local_e90;
  undefined *local_e50;
  code *local_e40;
  undefined *local_e38;
  undefined *local_e08;
  undefined *local_df8;
  code *local_df0;
  undefined8 *local_cf8;
  undefined8 ***local_cf0;
  undefined8 local_ce8;
  undefined8 *local_ce0;
  undefined8 **local_cd8;
  undefined8 local_cd0;
  undefined8 *local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 **local_cb0;
  undefined8 local_ca8;
  char *local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 *local_c88 [376];
  undefined *local_c8;
  ulong *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined *local_a8;
  ulong *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  char *local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  undefined4 local_48;
  undefined4 local_44;
  
  local_78 = *param_2;
  local_70 = param_2[1];
  local_68 = param_2[2];
  if ((local_68 & 1) != 0) {
    piVar2 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar26) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_3,&local_78);
  if ((int)plVar11 < 0) {
    if (DAT_04884f08 < 2) {
      if (DAT_046aaf68 != '\0') goto LAB_03218848;
    }
    else if (DAT_046aaf68 == '\0') {
      local_cc8 = &DAT_04884eb8;
      local_cd8 = (undefined8 **)0x0;
      local_cc0 = 2;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_cb8 = nn::os::GetThreadId(pTVar12);
      local_cb0 = (undefined8 **)0x0;
      local_ca8 = 0;
      local_ca0 = (char *)0x0;
      local_c98 = 0;
      local_c90 = 0;
      puVar16 = (ulong *)param_2[1];
      puVar19 = puVar16;
      do {
        uVar20 = *puVar19;
        if (((uint)uVar20 >> 3 & 1) != 0) {
          local_10d0 = (ulong *)0x0;
          if (puVar19 != (ulong *)0x0) {
            local_10d0 = (ulong *)puVar19[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
          }
          goto LAB_032188e8;
        }
        if ((uVar20 & 1) != 0) {
          local_10d0 = (ulong *)0x0;
          goto LAB_032188e8;
        }
        puVar19 = (ulong *)puVar19[1];
      } while (puVar19 != (ulong *)0x0);
      local_10d0 = (ulong *)0x0;
LAB_032188e8:
      do {
        uVar10 = (uint)*puVar16;
        if ((uVar10 >> 0xf & 1) != 0) {
          uVar20 = CONCAT44(uVar10,uVar10) & 0x7fff00007fff;
          local_10c8 = (ulong *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar20) +
                                                     POPCOUNT((char)(uVar20 >> 8))) + 2];
          goto LAB_0321892c;
        }
        if ((*puVar16 & 9) != 0) {
          local_10c8 = (ulong *)0x0;
          goto LAB_0321892c;
        }
        puVar16 = (ulong *)puVar16[1];
      } while (puVar16 != (ulong *)0x0);
      local_10c8 = (ulong *)0x0;
LAB_0321892c:
      local_f70 = (undefined8 *)0x0;
      local_f68 = 0;
      local_f80 = (ulong *)0x0;
      local_f78 = (ulong *)0x0;
      (**(code **)(*(long *)(local_68 & 0xfffffffffffffffe) + 0x50))
                ((long *)(local_68 & 0xfffffffffffffffe),local_78,local_70,&local_f80);
      puVar19 = local_f78;
      if ((local_f68 & 1) != 0) {
        plVar13 = (long *)(local_f68 & 0xfffffffffffffffe);
        plVar11 = plVar13 + 1;
        do {
          lVar21 = *plVar11;
          cVar4 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar26) {
            *(int *)plVar11 = (int)lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar21 == 1)) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      if (puVar19 == (ulong *)0x0) {
        local_a8 = &DAT_03c08ca3;
        local_a0 = (ulong *)0x0;
      }
      else {
        local_f70 = (undefined8 *)0x0;
        local_f68 = 0;
        local_f80 = (ulong *)0x0;
        local_f78 = (ulong *)0x0;
        (**(code **)(*(long *)(local_68 & 0xfffffffffffffffe) + 0x50))
                  ((long *)(local_68 & 0xfffffffffffffffe),local_78,local_70,&local_f80);
        puVar19 = local_f78;
        if ((local_f68 & 1) != 0) {
          plVar13 = (long *)(local_f68 & 0xfffffffffffffffe);
          plVar11 = plVar13 + 1;
          do {
            lVar21 = *plVar11;
            cVar4 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar26) {
              *(int *)plVar11 = (int)lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((plVar13 != (long *)0x0) && ((int)lVar21 == 1)) {
            (**(code **)(*plVar13 + 8))();
          }
        }
        puVar16 = puVar19;
        do {
          uVar20 = *puVar16;
          if (((uint)uVar20 >> 3 & 1) != 0) {
            local_a8 = (undefined *)0x0;
            if (puVar16 != (ulong *)0x0) {
              local_a8 = (undefined *)puVar16[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
            }
            goto LAB_03218a50;
          }
          if ((uVar20 & 1) != 0) {
            local_a8 = (undefined *)0x0;
            goto LAB_03218a50;
          }
          puVar16 = (ulong *)puVar16[1];
        } while (puVar16 != (ulong *)0x0);
        local_a8 = (undefined *)0x0;
LAB_03218a50:
        do {
          uVar10 = (uint)*puVar19;
          if ((uVar10 >> 0xf & 1) != 0) {
            uVar20 = CONCAT44(uVar10,uVar10) & 0x7fff00007fff;
            local_a0 = (ulong *)puVar19[(ulong)(byte)(POPCOUNT((char)uVar20) +
                                                     POPCOUNT((char)(uVar20 >> 8))) + 2];
            goto LAB_03218a94;
          }
        } while (((*puVar19 & 9) == 0) && (puVar19 = (ulong *)puVar19[1], puVar19 != (ulong *)0x0));
        local_a0 = (ulong *)0x0;
      }
LAB_03218a94:
      local_f70 = (undefined8 *)0x0;
      local_f68 = 0;
      local_f80 = (ulong *)0x0;
      local_f78 = (ulong *)0x0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_f80);
      local_44 = local_f70._0_4_;
      if ((local_f68 & 1) != 0) {
        plVar13 = (long *)(local_f68 & 0xfffffffffffffffe);
        plVar11 = plVar13 + 1;
        do {
          lVar21 = *plVar11;
          cVar4 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar26) {
            *(int *)plVar11 = (int)lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar21 == 1)) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      FUN_0322c554(&local_cd8,
                   "Cannot allocate array elements of type \'{}\', element type \'{}\', count={}",
                   &DAT_046aa200,&local_10d0,&local_a8,&local_44);
      local_ca0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_c98 = 0x195;
      plVar11 = (long *)FUN_0322c8e0(&local_cd8);
      if (((ulong)local_cb0 & 1) != 0) {
        plVar11 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_cb0 + -1),0);
      }
    }
    else {
LAB_03218848:
      local_cc8 = &DAT_04884eb8;
      local_cd8 = (undefined8 **)0x0;
      local_cc0 = 2;
      pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
      local_cb8 = nn::os::GetThreadId(pTVar12);
      local_ca8 = 0;
      local_ca0 = (char *)0x0;
      local_c98 = 0;
      local_c90 = 0;
      local_cd0 = 0x10000000000;
      local_c88[0]._0_1_ = '\0';
      puVar16 = (ulong *)param_2[1];
      puVar19 = puVar16;
      do {
        uVar20 = *puVar19;
        if (((uint)uVar20 >> 3 & 1) != 0) {
          local_c8 = (undefined *)0x0;
          if (puVar19 != (ulong *)0x0) {
            local_c8 = (undefined *)puVar19[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
          }
          goto LAB_03219f70;
        }
        if ((uVar20 & 1) != 0) {
          local_c8 = (undefined *)0x0;
          goto LAB_03219f70;
        }
        puVar19 = (ulong *)puVar19[1];
      } while (puVar19 != (ulong *)0x0);
      local_c8 = (undefined *)0x0;
LAB_03219f70:
      do {
        uVar10 = (uint)*puVar16;
        if ((uVar10 >> 0xf & 1) != 0) {
          uVar20 = CONCAT44(uVar10,uVar10) & 0x7fff00007fff;
          local_c0 = (ulong *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar20) +
                                                   POPCOUNT((char)(uVar20 >> 8))) + 2];
          goto LAB_03219fb4;
        }
        if ((*puVar16 & 9) != 0) {
          local_c0 = (ulong *)0x0;
          goto LAB_03219fb4;
        }
        puVar16 = (ulong *)puVar16[1];
      } while (puVar16 != (ulong *)0x0);
      local_c0 = (ulong *)0x0;
LAB_03219fb4:
      local_f70 = (undefined8 *)0x0;
      local_f68 = 0;
      local_f80 = (ulong *)0x0;
      local_f78 = (ulong *)0x0;
      local_cd8 = local_c88;
      local_cb0 = local_c88;
      (**(code **)(*(long *)(local_68 & 0xfffffffffffffffe) + 0x50))
                ((long *)(local_68 & 0xfffffffffffffffe),local_78,local_70,&local_f80);
      puVar19 = local_f78;
      if ((local_f68 & 1) != 0) {
        plVar13 = (long *)(local_f68 & 0xfffffffffffffffe);
        plVar11 = plVar13 + 1;
        do {
          lVar21 = *plVar11;
          cVar4 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar26) {
            *(int *)plVar11 = (int)lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar21 == 1)) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      if (puVar19 == (ulong *)0x0) {
        local_88 = "NULL";
        uStack_80 = 0;
      }
      else {
        local_f70 = (undefined8 *)0x0;
        local_f68 = 0;
        local_f80 = (ulong *)0x0;
        local_f78 = (ulong *)0x0;
        (**(code **)(*(long *)(local_68 & 0xfffffffffffffffe) + 0x50))
                  ((long *)(local_68 & 0xfffffffffffffffe),local_78,local_70,&local_f80);
        puVar19 = local_f78;
        if ((local_f68 & 1) != 0) {
          plVar13 = (long *)(local_f68 & 0xfffffffffffffffe);
          plVar11 = plVar13 + 1;
          do {
            lVar21 = *plVar11;
            cVar4 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar26) {
              *(int *)plVar11 = (int)lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((plVar13 != (long *)0x0) && ((int)lVar21 == 1)) {
            (**(code **)(*plVar13 + 8))();
          }
        }
        puVar16 = puVar19;
        do {
          uVar20 = *puVar16;
          if (((uint)uVar20 >> 3 & 1) != 0) {
            local_88 = (char *)0x0;
            if (puVar16 != (ulong *)0x0) {
              local_88 = (char *)puVar16[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
            }
            goto LAB_0321a0d8;
          }
          if ((uVar20 & 1) != 0) {
            local_88 = (char *)0x0;
            goto LAB_0321a0d8;
          }
          puVar16 = (ulong *)puVar16[1];
        } while (puVar16 != (ulong *)0x0);
        local_88 = (char *)0x0;
LAB_0321a0d8:
        do {
          uVar10 = (uint)*puVar19;
          if ((uVar10 >> 0xf & 1) != 0) {
            uVar20 = CONCAT44(uVar10,uVar10) & 0x7fff00007fff;
            uStack_80 = puVar19[(ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8))
                                             ) + 2];
            goto LAB_0321a11c;
          }
        } while (((*puVar19 & 9) == 0) && (puVar19 = (ulong *)puVar19[1], puVar19 != (ulong *)0x0));
        uStack_80 = 0;
      }
LAB_0321a11c:
      local_f70 = (undefined8 *)0x0;
      local_f68 = 0;
      local_f80 = (ulong *)0x0;
      local_f78 = (ulong *)0x0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_f80);
      local_48 = local_f70._0_4_;
      if ((local_f68 & 1) != 0) {
        plVar13 = (long *)(local_f68 & 0xfffffffffffffffe);
        plVar11 = plVar13 + 1;
        do {
          lVar21 = *plVar11;
          cVar4 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar26) {
            *(int *)plVar11 = (int)lVar21 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar13 != (long *)0x0) && ((int)lVar21 == 1)) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      plVar11 = (long *)FUN_0322c554(&local_cd8,
                                     "Cannot allocate array elements of type \'{}\', element type \'{}\', count={}"
                                     ,&DAT_046aa200,&local_c8,&local_88,&local_48);
      local_ca0 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      local_c98 = 0x195;
      if ((char)local_c88[0] != '\0') {
        sVar14 = strlen((char *)local_c88);
        *(undefined2 *)((long)local_c88 + (long)(int)((int)sVar14 - (uint)((int)sVar14 == 0xff))) =
             10;
        printf("%s",local_c88);
        uVar10 = fflush(*(FILE **)PTR_stdout_047cb860);
        plVar11 = (long *)(ulong)uVar10;
      }
      if (((ulong)local_cb0 & 1) != 0) {
        plVar11 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_cb0 + -1),0);
      }
    }
    if (*(char *)((long)param_1 + 0xc) == '\0') {
      if (DAT_04884f08 < 2) {
        if (DAT_046aaf68 != '\0') goto LAB_03219db8;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_cc8 = &DAT_04884eb8;
          local_cd8 = (undefined8 **)0x0;
          local_cc0 = 2;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_cb8 = nn::os::GetThreadId(pTVar12);
          local_cb0 = (undefined8 **)0x0;
          local_ca8 = 0;
          local_ca0 = (char *)0x0;
          local_c98 = 0;
          local_c90 = 0;
          FUN_0322c554(&local_cd8,&DAT_03c886bc,PTR_DAT_047d1b38);
          local_ca0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_c98 = 0x196;
          plVar11 = (long *)FUN_0322c8e0(&local_cd8);
        }
        else {
LAB_03219db8:
          local_cc8 = &DAT_04884eb8;
          local_cc0 = 2;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_cb8 = nn::os::GetThreadId(pTVar12);
          local_ca8 = 0;
          local_ca0 = (char *)0x0;
          local_c98 = 0;
          local_c90 = 0;
          local_cd0 = 0x10000000000;
          local_c88[0]._0_1_ = '\0';
          local_cd8 = local_c88;
          local_cb0 = local_c88;
          plVar11 = (long *)FUN_0322c554(&local_cd8,&DAT_03c886bc,PTR_DAT_047d1b38);
          local_ca0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_c98 = 0x196;
          if ((char)local_c88[0] != '\0') {
            sVar14 = strlen((char *)local_c88);
            *(undefined2 *)
             ((long)local_c88 + (long)(int)((int)sVar14 - (uint)((int)sVar14 == 0xff))) = 10;
            printf("%s",local_c88);
            uVar10 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar11 = (long *)(ulong)uVar10;
          }
        }
        if (((ulong)local_cb0 & 1) != 0) {
          plVar11 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_cb0 + -1),0);
        }
      }
      *(undefined4 *)(param_1 + 1) = 0x80040200;
      goto LAB_03219c64;
    }
  }
  local_98 = 0;
  local_90 = (undefined8 *)0x0;
  local_a8 = (undefined *)0x0;
  local_a0 = (ulong *)0x0;
  puVar19 = (ulong *)param_3[1];
  if (((puVar19 < (ulong *)0x2) || (((uint)*puVar19 >> 0x11 & 1) == 0)) ||
     (uVar10 = (uint)*puVar19 & 0x1ffff,
     (puVar19[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                           POPCOUNT((char)(uVar10 >> 0x10))) + 2] & 0x300000) == 0 ||
     (puVar19[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                           POPCOUNT((char)(uVar10 >> 0x10))) + 2] & 0x400000) == 0)) {
    uVar15 = *param_3;
    uVar20 = param_3[2];
    if ((uVar20 & 1) == 0) goto LAB_03218bc0;
    piVar2 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
    do {
      cVar4 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar26) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_03218be0:
    bVar26 = false;
  }
  else {
    puVar19 = (ulong *)puVar19[1];
    puVar16 = puVar19;
    if ((*puVar19 & 1) == 0) {
      do {
        puVar16 = (ulong *)puVar16[1];
      } while ((*puVar16 & 1) == 0);
    }
    uVar15 = *param_3;
    if ((puVar16[2] & 0x1f) != 8) {
      puVar19 = (ulong *)0x0;
    }
    if (puVar19 != (ulong *)0x0) {
      puVar16 = puVar19;
      do {
        uVar20 = *puVar16;
        if (((uint)uVar20 >> 2 & 1) != 0) {
          uVar20 = puVar16[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2];
          if ((uVar20 & 1) != 0) {
            piVar2 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
            do {
              cVar4 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar26) {
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            goto LAB_03218be0;
          }
          goto LAB_03218bc0;
        }
        puVar16 = (ulong *)puVar16[1];
      } while (puVar16 != (ulong *)0x0);
    }
    uVar20 = 0;
LAB_03218bc0:
    bVar26 = true;
  }
  plVar24 = (long *)(uVar20 & 0xfffffffffffffffe);
  plVar13 = (long *)(**(code **)(*plVar24 + 0x50))(plVar24,uVar15,puVar19,&local_a8);
  plVar11 = plVar13;
  if (!bVar26) {
    plVar3 = plVar24 + 1;
    do {
      lVar21 = *plVar3;
      cVar4 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar26) {
        *(int *)plVar3 = (int)lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar24 != (long *)0x0) && ((int)lVar21 == 1)) {
      plVar11 = (long *)(**(code **)(*plVar24 + 8))(plVar24);
    }
  }
  if ((int)plVar13 < 0) {
    if (DAT_04884f08 < 2) {
      if (DAT_046aaf68 != '\0') goto LAB_03219cf4;
    }
    else {
      if (DAT_046aaf68 == '\0') {
        local_cc8 = &DAT_04884eb8;
        local_cd8 = (undefined8 **)0x0;
        local_cc0 = 2;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_cb8 = nn::os::GetThreadId(pTVar12);
        local_cb0 = (undefined8 **)0x0;
        local_ca8 = 0;
        local_ca0 = (char *)0x0;
        local_c98 = 0;
        local_c90 = 0;
        FUN_0322c554(&local_cd8,"Cannot access array value",PTR_DAT_047d1b38);
        local_ca0 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        local_c98 = 0x19a;
        plVar11 = (long *)FUN_0322c8e0(&local_cd8);
      }
      else {
LAB_03219cf4:
        local_cc8 = &DAT_04884eb8;
        local_cc0 = 2;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_cb8 = nn::os::GetThreadId(pTVar12);
        local_ca8 = 0;
        local_ca0 = (char *)0x0;
        local_c98 = 0;
        local_c90 = 0;
        local_cd0 = 0x10000000000;
        local_c88[0]._0_1_ = '\0';
        local_cd8 = local_c88;
        local_cb0 = local_c88;
        plVar11 = (long *)FUN_0322c554(&local_cd8,"Cannot access array value",PTR_DAT_047d1b38);
        local_ca0 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        local_c98 = 0x19a;
        if ((char)local_c88[0] != '\0') {
          sVar14 = strlen((char *)local_c88);
          *(undefined2 *)((long)local_c88 + (long)(int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))
               = 10;
          printf("%s",local_c88);
          uVar10 = fflush(*(FILE **)PTR_stdout_047cb860);
          plVar11 = (long *)(ulong)uVar10;
        }
      }
      if (((ulong)local_cb0 & 1) != 0) {
        plVar11 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_cb0 + -1),0);
      }
    }
    *(undefined4 *)(param_1 + 1) = 0x80040200;
  }
  else if ((int)local_98 != 0) {
    local_b8 = 0;
    local_b0 = (undefined8 *)0x0;
    local_c8 = (undefined *)0x0;
    local_c0 = (ulong *)0x0;
    plVar11 = (long *)(**(code **)(*(long *)(local_68 & 0xfffffffffffffffe) + 0x50))
                                ((long *)(local_68 & 0xfffffffffffffffe),local_78,local_70,&local_c8
                                );
    if ((int)plVar11 < 0) {
      if (DAT_04884f08 < 2) {
        if (DAT_046aaf68 != '\0') goto LAB_03219e7c;
      }
      else {
        if (DAT_046aaf68 == '\0') {
          local_cc8 = &DAT_04884eb8;
          local_cd8 = (undefined8 **)0x0;
          local_cc0 = 2;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_cb8 = nn::os::GetThreadId(pTVar12);
          local_cb0 = (undefined8 **)0x0;
          local_ca8 = 0;
          local_ca0 = (char *)0x0;
          local_c98 = 0;
          local_c90 = 0;
          FUN_0322c554(&local_cd8,"Cannot access array value",PTR_DAT_047d1b38);
          local_ca0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_c98 = 0x1a0;
          plVar11 = (long *)FUN_0322c8e0(&local_cd8);
        }
        else {
LAB_03219e7c:
          local_cc8 = &DAT_04884eb8;
          local_cc0 = 2;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_cb8 = nn::os::GetThreadId(pTVar12);
          local_ca8 = 0;
          local_ca0 = (char *)0x0;
          local_c98 = 0;
          local_c90 = 0;
          local_cd0 = 0x10000000000;
          local_c88[0]._0_1_ = '\0';
          local_cd8 = local_c88;
          local_cb0 = local_c88;
          plVar11 = (long *)FUN_0322c554(&local_cd8,"Cannot access array value",PTR_DAT_047d1b38);
          local_ca0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          local_c98 = 0x1a0;
          if ((char)local_c88[0] != '\0') {
            sVar14 = strlen((char *)local_c88);
            *(undefined2 *)
             ((long)local_c88 + (long)(int)((int)sVar14 - (uint)((int)sVar14 == 0xff))) = 10;
            printf("%s",local_c88);
            uVar10 = fflush(*(FILE **)PTR_stdout_047cb860);
            plVar11 = (long *)(ulong)uVar10;
          }
        }
        if (((ulong)local_cb0 & 1) != 0) {
          plVar11 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_cb0 + -1),0);
        }
      }
      *(undefined4 *)(param_1 + 1) = 0x80040200;
    }
    else {
      local_cd0 = 0x8000004000000000;
      local_cd8 = &local_cc8;
      if (local_a8 == local_c8) {
        if (local_a0 != local_c0) {
          local_f80 = local_a0;
          while( true ) {
            uVar10 = (uint)*local_f80;
            if ((uVar10 >> 0xd & 1) != 0) break;
            if (((*local_f80 & 1) != 0) ||
               (local_f80 = (ulong *)local_f80[1], local_f80 == (ulong *)0x0)) goto LAB_032194ac;
          }
          if (local_f80 != (ulong *)0x0) {
            uVar10 = uVar10 & 0x1fff;
            local_f80 = local_f80 +
                        (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2;
            goto LAB_032194b4;
          }
LAB_032194ac:
          local_f80 = (ulong *)0x0;
LAB_032194b4:
          puVar19 = local_c0;
          while( true ) {
            uVar10 = (uint)*puVar19;
            if ((uVar10 >> 0xd & 1) != 0) break;
            if (((*puVar19 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
            goto LAB_03219510;
          }
          if (puVar19 != (ulong *)0x0) {
            uVar20 = CONCAT44(uVar10,uVar10) & 0x1fff00001fff;
            local_10d0 = puVar19 + (ulong)(byte)(POPCOUNT((char)uVar20) +
                                                POPCOUNT((char)(uVar20 >> 8))) + 2;
            if ((local_f80 == (ulong *)0x0) ||
               (plVar11 = (long *)FUN_031dd3c0(&local_f80,&local_10d0), ((ulong)plVar11 & 1) == 0))
            goto LAB_03219548;
            goto LAB_032195b4;
          }
LAB_03219510:
          local_10d0 = (ulong *)0x0;
          puVar19 = local_a0;
          if (local_f80 == (ulong *)0x0) {
            for (; (puVar16 = local_c0, puVar19 != (ulong *)0x0 && ((*puVar19 & 1) == 0));
                puVar19 = (ulong *)puVar19[1]) {
            }
            for (; (puVar16 != (ulong *)0x0 && ((*puVar16 & 1) == 0)); puVar16 = (ulong *)puVar16[1]
                ) {
            }
            if (puVar19 == puVar16) goto LAB_032195b4;
          }
LAB_03219548:
          if (DAT_04884f08 < 2) {
            if (DAT_046aaf68 != '\0') goto LAB_03219634;
            goto LAB_03219b24;
          }
          if (DAT_046aaf68 != '\0') {
LAB_03219634:
            local_f70 = &DAT_04884eb8;
            local_f68 = 2;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_f60 = nn::os::GetThreadId(pTVar12);
            local_f80 = local_f30;
            local_f50 = 0;
            local_f48 = (char *)0x0;
            local_f40 = 0;
            uStack_f38 = 0;
            local_f30[0]._0_1_ = '\0';
            local_f78 = (ulong *)0x10000000000;
            local_f58 = local_f80;
            plVar11 = (long *)FUN_0322c554(&local_f80,
                                           "Clone on self with different subtype is not supported",
                                           PTR_DAT_047d1b38);
            local_f40 = 0x1a6;
            goto LAB_0321a294;
          }
          local_f80 = (ulong *)0x0;
          local_f70 = &DAT_04884eb8;
          local_f68 = 2;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_f60 = nn::os::GetThreadId(pTVar12);
          local_f58 = (ulong *)0x0;
          local_f50 = 0;
          local_f48 = (char *)0x0;
          local_f40 = 0;
          uStack_f38 = 0;
          FUN_0322c554(&local_f80,"Clone on self with different subtype is not supported",
                       PTR_DAT_047d1b38);
          local_f40 = 0x1a6;
LAB_03219af4:
          local_f48 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          plVar11 = (long *)FUN_0322c8e0(&local_f80);
          puVar19 = local_f58;
          goto joined_r0x0321997c;
        }
LAB_032195b4:
        if ((int)local_98 != (int)local_b8) {
          if (DAT_04884f08 < 2) {
            if (DAT_046aaf68 == '\0') goto LAB_03219b24;
          }
          else if (DAT_046aaf68 == '\0') {
            local_f80 = (ulong *)0x0;
            local_f70 = &DAT_04884eb8;
            local_f68 = 2;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_f60 = nn::os::GetThreadId(pTVar12);
            local_f58 = (ulong *)0x0;
            local_f50 = 0;
            local_f48 = (char *)0x0;
            local_f40 = 0;
            uStack_f38 = 0;
            FUN_0322c554(&local_f80,"Clone on self with different count is not supported",
                         PTR_DAT_047d1b38);
            local_f40 = 0x1a8;
            goto LAB_03219af4;
          }
          local_f70 = &DAT_04884eb8;
          local_f68 = 2;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_f60 = nn::os::GetThreadId(pTVar12);
          local_f80 = local_f30;
          local_f50 = 0;
          local_f48 = (char *)0x0;
          local_f40 = 0;
          uStack_f38 = 0;
          local_f30[0]._0_1_ = '\0';
          local_f78 = (ulong *)0x10000000000;
          local_f58 = local_f80;
          plVar11 = (long *)FUN_0322c554(&local_f80,
                                         "Clone on self with different count is not supported",
                                         PTR_DAT_047d1b38);
          local_f40 = 0x1a8;
          goto LAB_0321a294;
        }
      }
      else if (local_c8 < local_a8 + (long)local_98._4_4_ * (long)(int)local_98) {
        if (local_c8 + (long)local_b8._4_4_ * (long)(int)local_b8 <= local_a8) goto LAB_03218f98;
        if (DAT_04884f08 < 2) {
          if (DAT_046aaf68 != '\0') goto LAB_03219404;
          goto LAB_03219b24;
        }
        if (DAT_046aaf68 == '\0') {
          local_f80 = (ulong *)0x0;
          local_f70 = &DAT_04884eb8;
          local_f68 = 2;
          pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
          local_f60 = nn::os::GetThreadId(pTVar12);
          local_f58 = (ulong *)0x0;
          local_f50 = 0;
          local_f48 = (char *)0x0;
          local_f40 = 0;
          uStack_f38 = 0;
          FUN_0322c554(&local_f80,"Cannot clone on a buffer overlapping with source array",
                       PTR_DAT_047d1b38);
          local_f40 = 0x1ae;
          goto LAB_03219af4;
        }
LAB_03219404:
        local_f70 = &DAT_04884eb8;
        local_f68 = 2;
        pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
        local_f60 = nn::os::GetThreadId(pTVar12);
        local_f80 = local_f30;
        local_f50 = 0;
        local_f48 = (char *)0x0;
        local_f40 = 0;
        uStack_f38 = 0;
        local_f30[0]._0_1_ = '\0';
        local_f78 = (ulong *)0x10000000000;
        local_f58 = local_f80;
        plVar11 = (long *)FUN_0322c554(&local_f80,
                                       "Cannot clone on a buffer overlapping with source array",
                                       PTR_DAT_047d1b38);
        local_f40 = 0x1ae;
LAB_0321a294:
        local_f48 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
        ;
        puVar19 = local_f58;
        if ((char)local_f30[0] != '\0') {
          sVar14 = strlen((char *)local_f30);
          *(undefined2 *)((long)local_f30 + (long)(int)((int)sVar14 - (uint)((int)sVar14 == 0xff)))
               = 10;
          printf("%s",local_f30);
          uVar10 = fflush(*(FILE **)PTR_stdout_047cb860);
          plVar11 = (long *)(ulong)uVar10;
          puVar19 = local_f58;
        }
joined_r0x0321997c:
        if (((ulong)puVar19 & 1) != 0) {
          plVar11 = (long *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(byte *)((long)puVar19 + -1),0);
        }
LAB_03219b24:
        *(undefined4 *)(param_1 + 1) = 0x80040200;
      }
      else {
LAB_03218f98:
        puVar19 = (ulong *)param_3[1];
        uVar20 = 0;
        do {
          uVar10 = (uint)*puVar19;
          if ((uVar10 >> 0x15 & 1) == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = CONCAT44(uVar10,uVar10) & 0x1fffff001fffff;
            uVar18 = puVar19[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                          POPCOUNT((char)(uVar18 >> 0x10))) + 2];
          }
          uVar20 = uVar18 | uVar20;
        } while (((*puVar19 & 1) == 0) && (puVar19 = (ulong *)puVar19[1], puVar19 != (ulong *)0x0));
        if (((uint)uVar20 >> 3 & 1) == 0) {
          if (((param_3[2] & 1) != 0) &&
             (uVar20 = (**(code **)(*(long *)(param_3[2] & 0xfffffffffffffffe) + 0x28))(),
             (uVar20 & 1) != 0)) {
            goto LAB_03219004;
          }
          if (local_c0 == local_a0) {
            lVar21 = FUN_031fa694(param_1 + 0xb);
          }
          else {
            lVar21 = FUN_031fa91c();
          }
          if (lVar21 == 0) {
            if (1 < DAT_04884f08) {
              if (DAT_046aaf68 == '\0') {
                local_f80 = (ulong *)0x0;
                local_f70 = &DAT_04884eb8;
                local_f68 = 2;
                pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
                local_f60 = nn::os::GetThreadId(pTVar12);
                local_f58 = (ulong *)0x0;
                local_f50 = 0;
                local_f48 = (char *)0x0;
                local_f40 = 0;
                uStack_f38 = 0;
                puVar19 = local_a0;
                if (local_a0 == (ulong *)0x0) {
                  local_10d0 = (ulong *)0x3bf8c0f;
                }
                else {
                  do {
                    uVar20 = *puVar19;
                    if (((uint)uVar20 >> 3 & 1) != 0) {
                      local_10d0 = (ulong *)puVar19[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
                      goto LAB_03219ac8;
                    }
                    if ((uVar20 & 1) != 0) {
                      local_10d0 = (ulong *)0x0;
                      goto LAB_03219ac8;
                    }
                    puVar19 = (ulong *)puVar19[1];
                  } while (puVar19 != (ulong *)0x0);
                  local_10d0 = (ulong *)0x0;
                }
LAB_03219ac8:
                FUN_0322c554(&local_f80,"Cannot compile array subtype {}",&DAT_044e9758,&local_10d0)
                ;
                local_f40 = 0x1d0;
                goto LAB_03219af4;
              }
LAB_03219988:
              local_f80 = (ulong *)0x0;
              local_f70 = &DAT_04884eb8;
              local_f68 = 2;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_f60 = nn::os::GetThreadId(pTVar12);
              local_f80 = local_f30;
              local_f50 = 0;
              local_f48 = (char *)0x0;
              local_f30[0]._0_1_ = '\0';
              local_f78 = (ulong *)0x10000000000;
              local_f40 = 0;
              uStack_f38 = 0;
              puVar19 = local_a0;
              if (local_a0 == (ulong *)0x0) {
                local_88 = "<No name>";
              }
              else {
                do {
                  uVar20 = *puVar19;
                  if (((uint)uVar20 >> 3 & 1) != 0) {
                    local_88 = (char *)puVar19[(ulong)(byte)POPCOUNT((byte)uVar20 & 7) + 2];
                    goto LAB_0321a264;
                  }
                  if ((uVar20 & 1) != 0) {
                    local_88 = (char *)0x0;
                    goto LAB_0321a264;
                  }
                  puVar19 = (ulong *)puVar19[1];
                } while (puVar19 != (ulong *)0x0);
                local_88 = (char *)0x0;
              }
LAB_0321a264:
              local_f58 = local_f80;
              plVar11 = (long *)FUN_0322c554(&local_f80,"Cannot compile array subtype {}",
                                             &DAT_044e9758,&local_88);
              local_f40 = 0x1d0;
              goto LAB_0321a294;
            }
            plVar11 = (long *)0x0;
            if (DAT_046aaf68 != '\0') goto LAB_03219988;
            goto LAB_03219b24;
          }
          memset(&local_f80,0,0x288);
          local_ee0 = FUN_03225a30;
          local_e40 = FUN_032259b8;
          local_ed0 = PTR_LAB_047e5f00;
          local_e50 = PTR_LAB_047e5f08;
          local_e90 = &LAB_03225af8;
          local_ec8 = PTR_LAB_047e5f10;
          local_e08 = PTR_FUN_047e5f18;
          local_cf0 = &local_cd8;
          local_cf8 = param_1 + 7;
          local_e38 = PTR_LAB_047e5f28;
          local_df0 = FUN_03225a94;
          local_df8 = PTR_FUN_047e5f20;
          local_ce8 = *param_1;
          local_ce0 = param_1;
          plVar11 = (long *)FUN_0321562c(&local_f80,lVar21,local_a8,local_c8,local_98._4_4_,
                                         local_b8._4_4_,local_b8 & 0xffffffff);
          if ((int)plVar11 < 0) {
            if (DAT_04884f08 < 2) {
              if (DAT_046aaf68 == '\0') goto LAB_03219b24;
            }
            else if (DAT_046aaf68 == '\0') {
              local_10d0 = (ulong *)0x0;
              local_10c0 = &DAT_04884eb8;
              uStack_10b8 = 2;
              pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
              local_10b0 = nn::os::GetThreadId(pTVar12);
              local_10a8 = (ulong *)0x0;
              local_10a0 = 0;
              local_1098 = (char *)0x0;
              local_1090 = 0;
              uStack_1088 = 0;
              FUN_0322c554(&local_10d0,"Cannot copy array",PTR_DAT_047d1b38);
              local_1098 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
              ;
              local_1090 = 0x1dc;
              plVar11 = (long *)FUN_0322c8e0(&local_10d0);
              puVar19 = local_10a8;
              goto joined_r0x0321997c;
            }
            local_10c0 = &DAT_04884eb8;
            uStack_10b8 = 2;
            pTVar12 = (ThreadType *)nn::os::GetCurrentThread();
            local_10b0 = nn::os::GetThreadId(pTVar12);
            local_10a0 = 0;
            local_1098 = (char *)0x0;
            local_1090 = 0;
            uStack_1088 = 0;
            local_1080[0]._0_1_ = '\0';
            local_10c8 = (ulong *)0x10000000000;
            local_10d0 = local_1080;
            local_10a8 = local_1080;
            plVar11 = (long *)FUN_0322c554(&local_10d0,"Cannot copy array",PTR_DAT_047d1b38);
            local_1098 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            local_1090 = 0x1dc;
            puVar19 = local_10a8;
            if ((char)local_1080[0] != '\0') {
              sVar14 = strlen((char *)local_1080);
              *(undefined2 *)
               ((long)local_1080 + (long)(int)((int)sVar14 - (uint)((int)sVar14 == 0xff))) = 10;
              printf("%s",local_1080);
              uVar10 = fflush(*(FILE **)PTR_stdout_047cb860);
              plVar11 = (long *)(ulong)uVar10;
              puVar19 = local_10a8;
            }
            goto joined_r0x0321997c;
          }
          FUN_0320ae94(param_1[6],param_3);
          puVar19 = local_a0;
          plVar11 = (long *)param_1[6];
          if ((int)plVar11[5] == 0) {
            lVar21 = *(long *)PTR_DAT_047e3fe8;
            nn::os::LockMutex((MutexType *)(lVar21 + 0xc0));
            iVar9 = FUN_031ddfe0(lVar21 + 0x38,puVar19);
            iVar25 = *(int *)(*(long *)(lVar21 + 0x38) + (long)iVar9 * 0x18 + 0x10);
            nn::os::UnlockMutex((MutexType *)(lVar21 + 0xc0));
            puVar19 = local_a0;
            puVar7 = local_a8;
            if ((-1 < iVar9) && (iVar25 != 0)) {
              uVar8 = (int)local_98;
              if (local_a0 != (ulong *)0x0) {
                puVar16 = local_a0;
                do {
                  uVar20 = *puVar16;
                  if (((uint)uVar20 >> 2 & 1) != 0) {
                    uVar20 = puVar16[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2];
                    if ((uVar20 & 1) != 0) {
                      piVar2 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
                      do {
                        cVar4 = '\x01';
                        bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                        if (bVar26) {
                          *piVar2 = *piVar2 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    goto LAB_03219850;
                  }
                  puVar16 = (ulong *)puVar16[1];
                } while (puVar16 != (ulong *)0x0);
              }
              uVar20 = 0;
LAB_03219850:
              iVar25 = (int)plVar11[1];
              lVar21 = (long)iVar25;
              if ((int)(*(uint *)((long)plVar11 + 0xc) & 0x7fffffff) <= iVar25) {
                FUN_0321abfc(plVar11,PTR_PTR_047d1a50,lVar21 + 1);
                iVar25 = (int)plVar11[1];
              }
              puVar22 = (undefined8 *)(*plVar11 + (long)iVar25 * 0x20);
              *puVar22 = puVar7;
              puVar22[1] = puVar19;
              puVar22[2] = uVar20;
              *(undefined4 *)(puVar22 + 3) = uVar8;
              *(int *)(plVar11 + 1) = (int)(lVar21 + 1);
            }
          }
        }
        else {
LAB_03219004:
          if (0 < (int)local_98) {
            iVar25 = 0;
            do {
              local_f80 = (ulong *)(local_c8 + (long)local_b8._4_4_ * (long)iVar25);
              local_f78 = local_c0;
              local_f70 = local_b0;
              if (((ulong)local_b0 & 1) != 0) {
                piVar2 = (int *)(((ulong)local_b0 & 0xfffffffffffffffe) + 8);
                do {
                  cVar4 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar26) {
                    *piVar2 = *piVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              local_10d0 = (ulong *)(local_a8 + (long)local_98._4_4_ * (long)iVar25);
              local_10c8 = local_a0;
              local_10c0 = local_90;
              puVar19 = local_a0;
              if (((ulong)local_90 & 1) != 0) {
                piVar2 = (int *)(((ulong)local_90 & 0xfffffffffffffffe) + 8);
                do {
                  cVar4 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar26) {
                    *piVar2 = *piVar2 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              for (; (*puVar19 & 1) == 0; puVar19 = (ulong *)puVar19[1]) {
              }
              uVar10 = (uint)puVar19[2] & 0x1f;
              if (uVar10 == 8) {
LAB_032190bc:
                iVar9 = *(int *)(param_1 + 8);
                lVar21 = (long)iVar9;
                if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) <= iVar9) {
                  FUN_032107fc(param_1 + 7,lVar21 + 1);
                  iVar9 = *(int *)(param_1 + 8);
                }
                lVar17 = param_1[7];
                puVar22 = (undefined8 *)(lVar17 + (long)iVar9 * 0x30);
                *puVar22 = local_10d0;
                puVar22[1] = local_10c8;
                puVar22[2] = local_10c0;
                if (((ulong)local_10c0 & 1) != 0) {
                  piVar2 = (int *)(((ulong)local_10c0 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar26) {
                      *piVar2 = *piVar2 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                lVar17 = lVar17 + (long)iVar9 * 0x30;
                *(ulong **)(lVar17 + 0x18) = local_f80;
                *(ulong **)(lVar17 + 0x20) = local_f78;
                *(undefined8 **)(lVar17 + 0x28) = local_f70;
                if (((ulong)local_f70 & 1) != 0) {
                  piVar2 = (int *)(((ulong)local_f70 & 0xfffffffffffffffe) + 8);
                  do {
                    cVar4 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar26) {
                      *piVar2 = *piVar2 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                *(int *)(param_1 + 8) = (int)(lVar21 + 1);
              }
              else if (uVar10 == 6) {
                lVar21 = (long)(int)local_cd0;
                if ((int)(local_cd0._4_4_ & 0x7fffffff) <= (int)local_cd0) {
                  FUN_032153fc(&local_cd8,lVar21 + 1);
                }
                ppuVar6 = local_cd8;
                lVar17 = (long)(int)local_cd0;
                ppuVar23 = local_cd8 + (long)(int)local_cd0 * 6;
                ppuVar23[1] = (undefined8 *)0x0;
                ppuVar23[2] = (undefined8 *)0x0;
                *ppuVar23 = (undefined8 *)0x0;
                puVar19 = local_10c8;
                if (local_10c8 != (ulong *)0x0) {
                  for (; (*puVar19 & 1) == 0; puVar19 = (ulong *)puVar19[1]) {
                  }
                  if ((puVar19[2] & 0x1f) == 6) {
                    *ppuVar23 = local_10d0;
                    ppuVar23[1] = local_10c8;
                    ppuVar23 = local_cd8 + lVar17 * 6 + 2;
                    if (((ulong)local_10c0 & 1) != 0) {
                      piVar2 = (int *)(((ulong)local_10c0 & 0xfffffffffffffffe) + 8);
                      do {
                        cVar4 = '\x01';
                        bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                        if (bVar26) {
                          *piVar2 = *piVar2 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    puVar22 = *ppuVar23;
                    if (((ulong)puVar22 & 1) != 0) {
                      plVar13 = (long *)((ulong)puVar22 & 0xfffffffffffffffe);
                      plVar11 = plVar13 + 1;
                      do {
                        lVar5 = *plVar11;
                        cVar4 = '\x01';
                        bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                        if (bVar26) {
                          *(int *)plVar11 = (int)lVar5 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if ((plVar13 != (long *)0x0) && ((int)lVar5 == 1)) {
                        (**(code **)(*plVar13 + 8))();
                      }
                    }
                    *ppuVar23 = local_10c0;
                  }
                }
                ppuVar6[lVar17 * 6 + 3] = (undefined8 *)0x0;
                ppuVar6[lVar17 * 6 + 4] = (undefined8 *)0x0;
                ppuVar6[lVar17 * 6 + 5] = (undefined8 *)0x0;
                puVar19 = local_f78;
                if (local_f78 != (ulong *)0x0) {
                  for (; (*puVar19 & 1) == 0; puVar19 = (ulong *)puVar19[1]) {
                  }
                  if ((puVar19[2] & 0x1f) == 6) {
                    ppuVar6[lVar17 * 6 + 3] = local_f80;
                    ppuVar6[lVar17 * 6 + 4] = local_f78;
                    if (((ulong)local_f70 & 1) != 0) {
                      piVar2 = (int *)(((ulong)local_f70 & 0xfffffffffffffffe) + 8);
                      do {
                        cVar4 = '\x01';
                        bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                        if (bVar26) {
                          *piVar2 = *piVar2 + 1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                    }
                    puVar22 = ppuVar6[lVar17 * 6 + 5];
                    if (((ulong)puVar22 & 1) != 0) {
                      plVar13 = (long *)((ulong)puVar22 & 0xfffffffffffffffe);
                      plVar11 = plVar13 + 1;
                      do {
                        lVar5 = *plVar11;
                        cVar4 = '\x01';
                        bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                        if (bVar26) {
                          *(int *)plVar11 = (int)lVar5 + -1;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if ((plVar13 != (long *)0x0) && ((int)lVar5 == 1)) {
                        (**(code **)(*plVar13 + 8))();
                      }
                    }
                    ppuVar6[lVar17 * 6 + 5] = local_f70;
                  }
                }
                local_cd0 = CONCAT44(local_cd0._4_4_,(int)(lVar21 + 1));
              }
              else {
                if (uVar10 == 3) goto LAB_032190bc;
                FUN_03210a10(param_1,&local_f80,&local_10d0);
              }
              if (((ulong)local_10c0 & 1) != 0) {
                plVar13 = (long *)((ulong)local_10c0 & 0xfffffffffffffffe);
                plVar11 = plVar13 + 1;
                do {
                  lVar21 = *plVar11;
                  cVar4 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar26) {
                    *(int *)plVar11 = (int)lVar21 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar21 == 1)) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
              if (((ulong)local_f70 & 1) != 0) {
                plVar13 = (long *)((ulong)local_f70 & 0xfffffffffffffffe);
                plVar11 = plVar13 + 1;
                do {
                  lVar21 = *plVar11;
                  cVar4 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar26) {
                    *(int *)plVar11 = (int)lVar21 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((plVar13 != (long *)0x0) && ((int)lVar21 == 1)) {
                  (**(code **)(*plVar13 + 8))();
                }
              }
              iVar25 = iVar25 + 1;
            } while (iVar25 < (int)local_98);
          }
        }
        plVar11 = (long *)FUN_03213968(param_1,local_cd8,local_cd0 & 0xffffffff);
      }
      ppuVar6 = local_cd8;
      if ((int)local_cd0 != 0) {
        ppuVar23 = local_cd8 + (long)(int)local_cd0 * 6;
        do {
          if (((ulong)ppuVar23[-1] & 1) != 0) {
            plVar11 = (long *)((ulong)ppuVar23[-1] & 0xfffffffffffffffe);
            plVar13 = plVar11 + 1;
            do {
              lVar21 = *plVar13;
              cVar4 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar26) {
                *(int *)plVar13 = (int)lVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((plVar11 != (long *)0x0) && ((int)lVar21 == 1)) {
              plVar11 = (long *)(**(code **)(*plVar11 + 8))();
            }
          }
          ppuVar1 = ppuVar23 + -4;
          ppuVar23 = ppuVar23 + -6;
          if (((ulong)*ppuVar1 & 1) != 0) {
            plVar11 = (long *)((ulong)*ppuVar1 & 0xfffffffffffffffe);
            plVar13 = plVar11 + 1;
            do {
              lVar21 = *plVar13;
              cVar4 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar26) {
                *(int *)plVar13 = (int)lVar21 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((plVar11 != (long *)0x0) && ((int)lVar21 == 1)) {
              plVar11 = (long *)(**(code **)(*plVar11 + 8))();
            }
          }
        } while (ppuVar23 != ppuVar6);
      }
      uVar20 = local_cd0;
      uVar18 = (ulong)local_cd0._4_4_;
      local_cd0 = (ulong)local_cd0._4_4_ << 0x20;
      if ((-1 < (long)uVar20) && (local_cd8 != (undefined8 **)0x0)) {
        plVar11 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                                    (PTR_PTR_047d1a50,local_cd8,uVar18 * 0x30);
      }
    }
    if (((ulong)local_b0 & 1) != 0) {
      plVar11 = (long *)((ulong)local_b0 & 0xfffffffffffffffe);
      plVar13 = plVar11 + 1;
      do {
        lVar21 = *plVar13;
        cVar4 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar26) {
          *(int *)plVar13 = (int)lVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar11 != (long *)0x0) && ((int)lVar21 == 1)) {
        plVar11 = (long *)(**(code **)(*plVar11 + 8))();
      }
    }
  }
  if (((ulong)local_90 & 1) != 0) {
    plVar11 = (long *)((ulong)local_90 & 0xfffffffffffffffe);
    plVar13 = plVar11 + 1;
    do {
      lVar21 = *plVar13;
      cVar4 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar26) {
        *(int *)plVar13 = (int)lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar21 == 1)) {
      plVar11 = (long *)(**(code **)(*plVar11 + 8))();
    }
  }
LAB_03219c64:
  if ((local_68 & 1) != 0) {
    plVar11 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar13 = plVar11 + 1;
    do {
      lVar21 = *plVar13;
      cVar4 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar26) {
        *(int *)plVar13 = (int)lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar21 == 1)) {
      plVar11 = (long *)(**(code **)(*plVar11 + 8))();
    }
  }
  return plVar11;
}


