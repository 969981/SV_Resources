/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005b8f10; name: FUN_005b8f10
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005b8f10(long *param_1,long *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  void *__src;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  byte local_210;
  undefined5 uStack_20f;
  undefined2 uStack_20a;
  char cStack_208;
  undefined5 uStack_207;
  undefined1 uStack_202;
  undefined1 uStack_201;
  undefined8 local_200;
  long *local_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  undefined8 local_1e0;
  long *local_1d8;
  ulong local_1d0;
  long *local_1c8;
  ulong local_1c0;
  long *plStack_1b8;
  ulong local_1b0;
  long *plStack_1a8;
  long *local_1a0;
  long *local_198;
  long local_190;
  long *plStack_188;
  long local_180;
  long local_178;
  long local_170;
  long *plStack_168;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  long *local_138;
  long *local_130;
  byte local_128;
  undefined7 uStack_127;
  long *plStack_120;
  undefined8 local_118;
  byte local_110;
  undefined7 uStack_10f;
  byte local_108;
  undefined7 uStack_107;
  undefined8 local_100;
  long *local_f8;
  long *plStack_f0;
  byte local_e8;
  undefined7 uStack_e7;
  undefined8 local_d8;
  long *plStack_d0;
  undefined1 auStack_c8 [8];
  byte local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [8];
  byte local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  FUN_01f6fa34(auStack_70);
  FUN_00254d74(&local_1d0);
  pbVar15 = (byte *)*param_2;
  pbVar2 = (byte *)param_2[1];
  if (pbVar15 != pbVar2) {
    do {
      if ((*pbVar15 & 1) == 0) {
        pbVar11 = pbVar15 + 1;
      }
      else {
        pbVar11 = *(byte **)(pbVar15 + 0x10);
      }
      FUN_002635e4(auStack_140,pbVar11);
      FUN_0025ac5c(&local_138,&DAT_03d0a161,auStack_140);
      plVar6 = (long *)(**(code **)(*param_1 + 0xc0))(param_1);
      lVar12 = *(long *)(*plVar6 + 0x20);
      if ((*(byte *)(lVar12 + 0x48) & 1) == 0) {
        lVar12 = lVar12 + 0x49;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x58);
      }
      FUN_002635e4(auStack_148,lVar12);
      FUN_0025ac5c(&local_110,&DAT_03d0a165,auStack_148);
      local_198 = (long *)FUN_01cf7e20();
      if ((*(ulong *)(pbVar15 + 0x20) & 1) == 0) {
        plStack_1a8 = *(long **)(pbVar15 + 0x28);
        local_1b0 = *(ulong *)(pbVar15 + 0x20);
        local_1a0 = *(long **)(pbVar15 + 0x30);
      }
      else {
        plVar6 = *(long **)(pbVar15 + 0x28);
        __src = *(void **)(pbVar15 + 0x30);
        if (plVar6 < (long *)0x17) {
          local_1b0 = CONCAT71(local_1b0._1_7_,(char)((int)plVar6 << 1));
          plVar7 = (long *)((ulong)&local_1b0 | 1);
        }
        else {
          if ((long *)0xffffffffffffffef < plVar6) {
                    /* try { // try from 005b9870 to 005b9877 has its CatchHandler @ 005b9878 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          plVar7 = (long *)(**(code **)(*local_198 + 0x10))
                                     (local_198,(ulong)(plVar6 + 2) & 0xfffffffffffffff0,1);
          local_1b0 = (ulong)(plVar6 + 2) & 0xfffffffffffffff0 | 1;
          plStack_1a8 = plVar6;
          local_1a0 = plVar7;
        }
        memcpy(plVar7,__src,(long)plVar6 + 1);
      }
      plVar6 = (long *)((ulong)&local_1b0 | 1);
      if ((local_1b0 & 1) != 0) {
        plVar6 = local_1a0;
      }
      FUN_002635e4(auStack_150,plVar6);
      FUN_0025ac5c(&local_e8,&DAT_03d0a168,auStack_150);
      FUN_00263574(auStack_158,(long)*(int *)(pbVar15 + 0x40));
      FUN_0025ac5c(&local_c0,&DAT_03d0a16b,auStack_158);
      FUN_00263500(auStack_160,pbVar15[0x44]);
      FUN_0025ac5c(&local_98,&DAT_03d0a16e,auStack_160);
      FUN_0025885c(&local_210,&local_138,5);
      FUN_00263640(&local_1f0,&local_210);
      FUN_00254e68(&local_1d0,&local_1f0);
      FUN_01f6fb44(&local_1f0);
      FUN_01cfa410(&local_210);
      FUN_01f6fb44(auStack_78);
      if ((local_98 & 1) == 0) {
        FUN_01f6fb44(auStack_a0);
        if ((local_c0 & 1) != 0) goto LAB_005b9248;
LAB_005b9190:
        FUN_01f6fb44(auStack_c8);
        if ((local_e8 & 1) != 0) goto LAB_005b9274;
LAB_005b91a0:
        FUN_01f6fb44(&plStack_f0);
        if ((local_110 & 1) != 0) goto LAB_005b92a0;
LAB_005b91b0:
        FUN_01f6fb44(&local_118);
      }
      else {
        (**(code **)(*plStack_80 + 0x18))
                  (plStack_80,local_88,CONCAT71(uStack_97,local_98) & 0xfffffffffffffffe,1);
        FUN_01f6fb44(auStack_a0);
        if ((local_c0 & 1) == 0) goto LAB_005b9190;
LAB_005b9248:
        (**(code **)(*plStack_a8 + 0x18))
                  (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
        FUN_01f6fb44(auStack_c8);
        if ((local_e8 & 1) == 0) goto LAB_005b91a0;
LAB_005b9274:
        (**(code **)(*plStack_d0 + 0x18))
                  (plStack_d0,local_d8,CONCAT71(uStack_e7,local_e8) & 0xfffffffffffffffe,1);
        FUN_01f6fb44(&plStack_f0);
        if ((local_110 & 1) == 0) goto LAB_005b91b0;
LAB_005b92a0:
        (**(code **)(*local_f8 + 0x18))
                  (local_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
        FUN_01f6fb44(&local_118);
      }
      if (((ulong)local_138 & 1) != 0) {
        (**(code **)(*plStack_120 + 0x18))
                  (plStack_120,CONCAT71(uStack_127,local_128),(ulong)local_138 & 0xfffffffffffffffe,
                   1);
      }
      FUN_01f6fb44(auStack_160);
      FUN_01f6fb44(auStack_158);
      FUN_01f6fb44(auStack_150);
      if ((local_1b0 & 1) != 0) {
        (**(code **)(*local_198 + 0x18))(local_198,local_1a0,local_1b0 & 0xfffffffffffffffe,1);
      }
      FUN_01f6fb44(auStack_148);
      FUN_01f6fb44(auStack_140);
      pbVar15 = pbVar15 + 0x48;
    } while (pbVar2 != pbVar15);
  }
  thunk_FUN_0025911c(auStack_70,&DAT_03d0a171,&local_1d0);
  FUN_01f6fb08(&local_1d0);
  plVar6 = (long *)(**(code **)(*param_1 + 0xc0))(param_1);
  FUN_00567fc0(&local_1b0,*plVar6 + 0x10);
  plVar6 = (long *)(**(code **)(*param_1 + 0xc0))(param_1);
  lVar12 = *plVar6;
  local_1d8 = (long *)FUN_01cf7e20();
  local_1f0 = (ulong)local_1f0._6_2_ << 0x30;
  local_1f0 = CONCAT35(local_1f0._5_3_,0x746d5f5f08);
  local_1f8 = (long *)FUN_01cf7e20();
  local_210 = 0x1a;
  uStack_20f._0_1_ = s_nat_traversal_03bfbe40[0];
  uStack_20f._1_1_ = s_nat_traversal_03bfbe40[1];
  uStack_20f._2_1_ = s_nat_traversal_03bfbe40[2];
  uStack_20f._3_1_ = s_nat_traversal_03bfbe40[3];
  uStack_20f._4_1_ = s_nat_traversal_03bfbe40[4];
  uStack_20a = s_nat_traversal_03bfbe40._5_2_;
  cStack_208 = s_nat_traversal_03bfbe40[7];
  uStack_207._0_1_ = s_nat_traversal_03bfbe40[8];
  uStack_207._1_1_ = s_nat_traversal_03bfbe40[9];
  uStack_207._2_1_ = s_nat_traversal_03bfbe40[10];
  uStack_207._3_1_ = s_nat_traversal_03bfbe40[0xb];
  uStack_207._4_1_ = s_nat_traversal_03bfbe40[0xc];
  uStack_202 = 0;
  FUN_00567e00(&local_1d0,&local_1f0,&local_210);
  uVar1 = (ulong)&local_1d0 | 1;
  if ((local_1d0 & 1) != 0) {
    uVar1 = local_1c0;
  }
  FUN_027dd11c(&local_138,lVar12 + 0x10,uVar1);
  FUN_005681dc(&local_1b0,&local_138,auStack_70);
  if ((local_e8 & 1) != 0) {
    (**(code **)(*plStack_d0 + 0x18))
              (plStack_d0,local_d8,CONCAT71(uStack_e7,local_e8) & 0xfffffffffffffffe,1);
  }
  if ((local_108 & 1) != 0) {
    (**(code **)(*plStack_f0 + 0x18))
              (plStack_f0,local_f8,CONCAT71(uStack_107,local_108) & 0xfffffffffffffffe,1);
  }
  if ((local_128 & 1) != 0) {
    (**(code **)(*(long *)CONCAT71(uStack_10f,local_110) + 0x18))
              ((long *)CONCAT71(uStack_10f,local_110),local_118,
               CONCAT71(uStack_127,local_128) & 0xfffffffffffffffe,1);
  }
  if (local_130 != (long *)0x0) {
    plVar6 = (long *)((long)local_130 + 8);
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_130 + 0x10))(local_130);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_1d0 & 1) != 0) {
    (**(code **)(*plStack_1b8 + 0x18))(plStack_1b8,local_1c0,local_1d0 & 0xfffffffffffffffe,1);
  }
  if ((local_210 & 1) != 0) {
    (**(code **)(*local_1f8 + 0x18))
              (local_1f8,local_200,
               CONCAT26(uStack_20a,CONCAT51(uStack_20f,local_210)) & 0xfffffffffffffffe,1);
  }
  if ((local_1f0 & 1) != 0) {
    (**(code **)(*local_1d8 + 0x18))(local_1d8,local_1e0,local_1f0 & 0xfffffffffffffffe,1);
  }
  FUN_00568880(&local_210,&local_1b0);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0xc0))(param_1);
  plVar6 = (long *)FUN_0053f478(*puVar8);
  uVar1 = CONCAT26(uStack_20a,CONCAT51(uStack_20f,local_210));
  plVar7 = (long *)CONCAT17(uStack_201,CONCAT16(uStack_202,CONCAT51(uStack_207,cStack_208)));
  plVar16 = *(long **)(*plVar6 + 0x240);
  uVar14 = *(undefined8 *)(*plVar6 + 0x4b8);
  local_1f0 = 0;
  local_1e8 = (long *)0x0;
  local_210 = 0;
  uStack_20f = 0;
  uStack_20a = 0;
  cStack_208 = 0;
  uStack_207 = 0;
  uStack_202 = 0;
  uStack_201 = 0;
  plVar9 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x78,8);
  plVar9[2] = 0;
  plVar17 = plVar9 + 1;
  *plVar17 = 0;
  puVar5 = PTR_DAT_047cc0d8;
  plVar9[3] = (long)plVar16;
  plVar6 = plVar9 + 4;
  *plVar9 = (long)(puVar5 + 0x10);
  FUN_006c4254(plVar6);
  plVar9[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
  nn::os::InitializeEvent(plVar9 + 6,0,0);
  plVar9[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
  if (plVar9 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = *plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar7 != (long *)0x0) {
    plVar10 = plVar7 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x78,8);
  *plVar10 = (long)&PTR_LAB_044cd3a8;
  plVar10[1] = 0;
  plVar10[2] = 0;
  plVar10[3] = (long)plVar16;
  FUN_006c4a3c(plVar10 + 4,plVar6,uVar1);
  plVar10[4] = (long)&PTR_FUN_044cd3e0;
  *(undefined1 *)(plVar10 + 0xe) = 1;
  plVar10[10] = (long)plVar6;
  plVar10[0xb] = (long)plVar9;
  plVar10[0xc] = uVar1;
  plVar10[0xd] = (long)plVar7;
  local_1d0 = uVar1;
  local_1c8 = plVar7;
  local_138 = plVar10 + 4;
  local_130 = plVar10;
  FUN_006c5470(uVar14,&local_138,&local_1f0,&local_1d0);
  if (local_1c8 != (long *)0x0) {
    plVar6 = local_1c8 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_1c8 + 0x10))(local_1c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_130 != (long *)0x0) {
    plVar6 = local_130 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_130 + 0x10))(local_130);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1e8 != (long *)0x0) {
    plVar6 = local_1e8 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_1e8 + 0x10))(local_1e8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar9 != (long *)0x0) {
    do {
      lVar12 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar6 = (long *)CONCAT17(uStack_201,CONCAT16(uStack_202,CONCAT51(uStack_207,cStack_208)));
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar12 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar12 = local_180;
  if (local_180 != 0) {
    lVar13 = local_178;
    if (local_178 != local_180) {
      do {
        lVar13 = lVar13 + -8;
        FUN_0053dd1c(lVar13);
      } while (lVar12 != lVar13);
    }
    local_178 = lVar12;
    (**(code **)(*plStack_168 + 0x18))(plStack_168,local_180,local_170 - local_180,8);
  }
  plVar7 = local_1a0;
  plVar6 = local_198;
  if (local_1a0 != (long *)0x0) {
    for (; plVar6 != plVar7; plVar6 = plVar6 + -1) {
      FUN_0056b3f0(plVar6 + -1);
    }
    local_198 = plVar7;
    (**(code **)(*plStack_188 + 0x18))(plStack_188,local_1a0,local_190 - (long)local_1a0,8);
  }
  if (plStack_1a8 != (long *)0x0) {
    plVar6 = plStack_1a8 + 1;
    do {
      lVar12 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_01f6fc48(auStack_70);
  return;
}


