/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0055638c; name: FUN_0055638c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0055638c(undefined8 param_1,long *param_2)

{
  ulong ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  char *__s;
  ulong ***pppuVar12;
  ulong ****ppppuVar13;
  ulong ***pppuVar14;
  byte *pbVar15;
  ulong **ppuVar16;
  long lVar17;
  long lVar18;
  ulong ****ppppuVar20;
  ulong ****ppppuVar19;
  ulong ***pppuVar21;
  ulong ***local_238;
  ulong ***pppuStack_230;
  ulong ***local_228;
  long *local_220;
  int local_218 [2];
  byte local_210;
  undefined7 uStack_20f;
  undefined8 local_200;
  long *plStack_1f8;
  char local_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 local_1e0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long *plStack_1a8;
  undefined1 auStack_1a0 [8];
  long *local_198;
  long local_190;
  long local_188;
  long local_180;
  long *plStack_178;
  long local_170;
  long local_168;
  long local_160;
  long *plStack_158;
  undefined1 auStack_150 [8];
  long *local_148;
  byte local_140;
  undefined7 uStack_13f;
  undefined8 local_130;
  long *plStack_128;
  byte local_120;
  undefined7 uStack_11f;
  undefined8 local_110;
  long *plStack_108;
  byte local_100;
  undefined7 uStack_ff;
  undefined8 local_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [20];
  undefined4 local_cc;
  ulong ****local_c8;
  ulong ****local_c0;
  ulong *******local_b8;
  ulong *******local_b0;
  long *local_a8;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  byte local_70;
  undefined7 uStack_6f;
  ulong ****local_60;
  long *plStack_58;
  undefined1 auStack_50 [8];
  ulong *****local_48;
  
  local_cc = 0;
  pbVar6 = (byte *)(**(code **)(*param_2 + 0x10))();
  pbVar15 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar15 = pbVar6 + 1;
  }
  pbVar7 = (byte *)(**(code **)(*param_2 + 0x18))(param_2);
  pbVar6 = *(byte **)(pbVar7 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    pbVar6 = pbVar7 + 1;
  }
  uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
  uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
  if ((*(byte *)(param_2 + 0x2d) & 1) == 0) {
    lVar18 = (long)param_2 + 0x169;
  }
  else {
    lVar18 = param_2[0x2f];
  }
  FUN_0056079c(&local_c8,1,pbVar15,pbVar6,uVar4,uVar5,0,lVar18);
  FUN_00560ba8(auStack_e0,&local_c8);
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))
              (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))
              (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_c0 & 1) != 0) {
    (**(code **)(*local_a8 + 0x18))(local_a8,local_b0,(ulong)local_c0 & 0xfffffffffffffffe,1);
  }
  uVar8 = FUN_00560b58();
  FUN_0053f088(&local_c8,"__upcsidn");
  FUN_005389c8(auStack_e0,uVar8,&local_c8);
  FUN_0053ec2c(&local_c8);
  uVar8 = FUN_00560b58();
  FUN_0053f078(&local_c8,20000);
  FUN_005389c8(auStack_e0,uVar8,&local_c8);
  FUN_0053ec2c(&local_c8);
  uVar8 = FUN_00560b58();
  FUN_0053f068(&local_c8,1);
  FUN_005389c8(auStack_e0,uVar8,&local_c8);
  FUN_0053ec2c(&local_c8);
  uVar8 = FUN_00560b58();
  FUN_0053f098(&local_c8,"__upcsidn");
  FUN_005389c8(auStack_e0,uVar8,&local_c8);
  FUN_0053ec2c(&local_c8);
  plVar9 = (long *)(**(code **)(*param_2 + 0xc0))(param_2);
  lVar18 = *plVar9;
  uVar8 = FUN_00560c54();
  FUN_01f6ef54(&local_c8,lVar18 + 0x10,uVar8);
  pbVar6 = (byte *)(**(code **)(*param_2 + 0x18))(param_2);
  pbVar15 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    pbVar15 = pbVar6 + 1;
  }
  FUN_01f6fa0c(auStack_150,&local_c8,pbVar15);
  if (((ulong)local_b8 & 1) != 0) {
    (**(code **)(*(long *)CONCAT71(uStack_9f,local_a0) + 0x18))
              ((long *)CONCAT71(uStack_9f,local_a0),local_a8,(ulong)local_b8 & 0xfffffffffffffffe,1)
    ;
  }
  if (local_c0 != (ulong ****)0x0) {
    pppuVar12 = (ulong ***)(local_c0 + 1);
    do {
      ppuVar16 = *pppuVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
      if (bVar3) {
        *pppuVar12 = (ulong **)((long)ppuVar16 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar16 == (ulong **)0x0) {
      (*(code *)(*local_c0)[2])(local_c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar9 = (long *)(**(code **)(*param_2 + 0xc0))(param_2);
  FUN_00567fc0(auStack_1a0,*plVar9 + 0x10);
  FUN_00568768(auStack_1a0,auStack_150);
  FUN_005681dc(auStack_1a0,auStack_150,auStack_e0);
  FUN_00568880(&local_238,auStack_1a0);
  ppppuVar13 = (ulong ****)(PTR_DAT_047cbb30 + 0x10);
  local_b8 = (ulong *******)&local_b8;
  local_c0 = (ulong ****)(PTR_DAT_047cbb38 + 0x10);
  local_60 = (ulong ****)0x0;
  plStack_58 = (long *)0x0;
  local_c8 = ppppuVar13;
  local_b0 = local_b8;
  (*(code *)(*local_238)[2])(local_238,&local_a0);
  local_60 = (ulong ****)&local_c0;
  thunk_FUN_006c4e40(&local_c8);
  local_c8 = ppppuVar13;
  FUN_006c4274(&local_c0);
  pppuVar21 = pppuStack_230;
  pppuVar12 = local_238;
  local_238 = (ulong ***)0x0;
  pppuStack_230 = (ulong ***)0x0;
  (*(code *)(*pppuVar12)[6])(local_218);
  if (pppuVar21 != (ulong ***)0x0) {
    plVar9 = (long *)(pppuVar21 + 1);
    do {
      lVar18 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)((long)*pppuVar21 + 0x10))(pppuVar21);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (pppuStack_230 != (ulong ***)0x0) {
    pppuVar12 = pppuStack_230 + 1;
    do {
      ppuVar16 = *pppuVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
      if (bVar3) {
        *pppuVar12 = (ulong **)((long)ppuVar16 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar16 == (ulong **)0x0) {
      (*(code *)(*pppuStack_230)[2])(pppuStack_230);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_218[0] != 0) {
    FUN_00556fa0(param_1,local_218,&DAT_03d0a124);
    lVar18 = local_1c0;
    if (local_1c0 != 0) {
      lVar17 = local_1b8;
      if (local_1b8 != local_1c0) {
        do {
          puVar11 = (undefined8 *)(lVar17 + -0x18);
          lVar10 = lVar17 + -0x20;
          lVar17 = lVar17 + -0x28;
          FUN_01f6f680(lVar10,*puVar11);
        } while (lVar18 != lVar17);
      }
      local_1b8 = lVar18;
      (**(code **)(*plStack_1a8 + 0x18))(plStack_1a8,local_1c0,local_1b0 - local_1c0,8);
    }
    if (local_1f0 != '\0') {
      FUN_01cfa44c(auStack_1e8,local_1e0);
    }
    if ((local_210 & 1) != 0) {
      (**(code **)(*plStack_1f8 + 0x18))
                (plStack_1f8,local_200,CONCAT71(uStack_20f,local_210) & 0xfffffffffffffffe,1);
    }
    lVar18 = local_170;
    if (local_170 != 0) {
      lVar17 = local_168;
      if (local_168 != local_170) {
        do {
          lVar17 = lVar17 + -8;
          FUN_0053dd1c(lVar17);
        } while (lVar18 != lVar17);
      }
      local_168 = lVar18;
      (**(code **)(*plStack_158 + 0x18))(plStack_158,local_170,local_160 - local_170,8);
    }
    lVar18 = local_190;
    if (local_190 != 0) {
      lVar17 = local_188;
      if (local_188 != local_190) {
        do {
          lVar17 = lVar17 + -8;
          FUN_0056b3f0(lVar17);
        } while (lVar18 != lVar17);
      }
      local_188 = lVar18;
      (**(code **)(*plStack_178 + 0x18))(plStack_178,local_190,local_180 - local_190,8);
    }
    if (local_198 != (long *)0x0) {
      plVar9 = local_198 + 1;
      do {
        lVar18 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*local_198 + 0x10))(local_198);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((local_100 & 1) != 0) {
      (**(code **)(*plStack_e8 + 0x18))
                (plStack_e8,local_f0,CONCAT71(uStack_ff,local_100) & 0xfffffffffffffffe,1);
    }
    if ((local_120 & 1) != 0) {
      (**(code **)(*plStack_108 + 0x18))
                (plStack_108,local_110,CONCAT71(uStack_11f,local_120) & 0xfffffffffffffffe,1);
    }
    if ((local_140 & 1) != 0) {
      (**(code **)(*plStack_128 + 0x18))
                (plStack_128,local_130,CONCAT71(uStack_13f,local_140) & 0xfffffffffffffffe,1);
    }
    if (local_148 != (long *)0x0) {
      plVar9 = local_148 + 1;
      do {
        lVar18 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*local_148 + 0x10))(local_148);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_01f6fc48(auStack_e0);
    return;
  }
  puVar11 = (undefined8 *)FUN_0056d078(auStack_1c8);
  uVar8 = FUN_0056d4f4(*puVar11);
  __s = (char *)FUN_00560b58();
  plVar9 = (long *)FUN_01cf7e20();
  local_220 = plVar9;
  pppuVar12 = (ulong ***)strlen(__s);
  if ((ulong ***)0xffffffffffffffef < pppuVar12) {
                    /* try { // try from 00556e78 to 00556e7f has its CatchHandler @ 00556edc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (pppuVar12 < (ulong ***)0x17) {
    local_238 = (ulong ***)CONCAT71(local_238._1_7_,(char)((int)pppuVar12 << 1));
    pppuVar21 = (ulong ***)((ulong)&local_238 | 1);
    if (pppuVar12 == (ulong ***)0x0) goto LAB_0055685c;
  }
  else {
    pppuVar21 = (ulong ***)
                (**(code **)(*plVar9 + 0x10))(plVar9,(ulong)(pppuVar12 + 2) & 0xfffffffffffffff0,1);
    local_238 = (ulong ***)((ulong)(pppuVar12 + 2) & 0xfffffffffffffff0 | 1);
    pppuStack_230 = pppuVar12;
    local_228 = pppuVar21;
  }
  memcpy(pppuVar21,__s,(size_t)pppuVar12);
LAB_0055685c:
  *(undefined1 *)((long)pppuVar21 + (long)pppuVar12) = 0;
  local_b8 = (ulong *******)0x0;
  local_c8 = (ulong ****)0x0;
  local_c0 = (ulong ****)0x0;
  local_b0 = (ulong *******)FUN_01cf7e20();
  ppppuVar13 = (ulong ****)(**(code **)((long)*local_b0 + 0x10))(local_b0,0x20,8);
  local_b8 = (ulong *******)(ppppuVar13 + 4);
  local_c8 = ppppuVar13;
  local_c0 = ppppuVar13;
  pppuVar14 = (ulong ***)FUN_01cf7e20();
  pppuVar21 = local_228;
  pppuVar12 = pppuStack_230;
  ppppuVar13[3] = pppuVar14;
  if (((ulong)local_238 & 1) == 0) {
    ppppuVar13[2] = local_228;
    ppppuVar13[1] = pppuStack_230;
    *ppppuVar13 = local_238;
  }
  else {
    if (pppuStack_230 < (ulong ***)0x17) {
      pppuVar14 = (ulong ***)((long)ppppuVar13 + 1);
      *(byte *)ppppuVar13 = (byte)((int)pppuStack_230 << 1);
    }
    else {
      if ((ulong ***)0xffffffffffffffef < pppuStack_230) {
                    /* try { // try from 00556e80 to 00556e87 has its CatchHandler @ 00556e88 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      pppuVar1 = pppuStack_230 + 2;
      pppuVar14 = (ulong ***)
                  (*(code *)(*pppuVar14)[2])(pppuVar14,(ulong)pppuVar1 & 0xfffffffffffffff0,1);
      ppppuVar13[1] = pppuVar12;
      ppppuVar13[2] = pppuVar14;
      *ppppuVar13 = (ulong ***)((ulong)pppuVar1 & 0xfffffffffffffff0 | 1);
    }
    memcpy(pppuVar14,pppuVar21,(long)pppuVar12 + 1);
  }
  local_c0 = ppppuVar13 + 4;
  local_48 = &local_c8;
                    /* try { // try from 00556b28 to 00556b43 has its CatchHandler @ 00556ee4 */
  lVar18 = FUN_0055f880(uVar8,&local_c8,&DAT_03d0a128,&local_48,auStack_50);
  local_cc = FUN_00263874(lVar18 + 0x40);
  ppppuVar13 = local_c8;
  if (local_c8 != (ulong ****)0x0) {
    if (local_c0 != local_c8) {
      ppppuVar19 = local_c0;
      do {
        ppppuVar20 = ppppuVar19 + -4;
        if (((ulong)*ppppuVar20 & 1) != 0) {
          (*(code *)(*ppppuVar19[-1])[3])
                    (ppppuVar19[-1],ppppuVar19[-2],(ulong)ppppuVar19[-4] & 0xfffffffffffffffe,1);
        }
        ppppuVar19 = ppppuVar20;
      } while (ppppuVar13 != ppppuVar20);
    }
    local_c0 = ppppuVar13;
    (**(code **)((long)*local_b0 + 0x18))(local_b0,local_c8,(long)local_b8 - (long)local_c8,8);
  }
  if (((ulong)local_238 & 1) != 0) {
    (**(code **)(*local_220 + 0x18))(local_220,local_228,(ulong)local_238 & 0xfffffffffffffffe,1);
  }
  lVar18 = local_1c0;
  if (local_1c0 != 0) {
    lVar17 = local_1b8;
    if (local_1b8 != local_1c0) {
      do {
        puVar11 = (undefined8 *)(lVar17 + -0x18);
        lVar10 = lVar17 + -0x20;
        lVar17 = lVar17 + -0x28;
        FUN_01f6f680(lVar10,*puVar11);
      } while (lVar18 != lVar17);
    }
    local_1b8 = lVar18;
    (**(code **)(*plStack_1a8 + 0x18))(plStack_1a8,local_1c0,local_1b0 - local_1c0,8);
  }
  if (local_1f0 != '\0') {
    FUN_01cfa44c(auStack_1e8,local_1e0);
  }
  if ((local_210 & 1) != 0) {
    (**(code **)(*plStack_1f8 + 0x18))
              (plStack_1f8,local_200,CONCAT71(uStack_20f,local_210) & 0xfffffffffffffffe,1);
  }
  lVar18 = local_170;
  if (local_170 != 0) {
    lVar17 = local_168;
    if (local_168 != local_170) {
      do {
        lVar17 = lVar17 + -8;
        FUN_0053dd1c(lVar17);
      } while (lVar18 != lVar17);
    }
    local_168 = lVar18;
    (**(code **)(*plStack_158 + 0x18))(plStack_158,local_170,local_160 - local_170,8);
  }
  lVar18 = local_190;
  if (local_190 != 0) {
    lVar17 = local_188;
    if (local_188 != local_190) {
      do {
        lVar17 = lVar17 + -8;
        FUN_0056b3f0(lVar17);
      } while (lVar18 != lVar17);
    }
    local_188 = lVar18;
    (**(code **)(*plStack_178 + 0x18))(plStack_178,local_190,local_180 - local_190,8);
  }
  if (local_198 != (long *)0x0) {
    plVar9 = local_198 + 1;
    do {
      lVar18 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_198 + 0x10))(local_198);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_100 & 1) != 0) {
    (**(code **)(*plStack_e8 + 0x18))
              (plStack_e8,local_f0,CONCAT71(uStack_ff,local_100) & 0xfffffffffffffffe,1);
  }
  if ((local_120 & 1) != 0) {
    (**(code **)(*plStack_108 + 0x18))
              (plStack_108,local_110,CONCAT71(uStack_11f,local_120) & 0xfffffffffffffffe,1);
  }
  if ((local_140 & 1) != 0) {
    (**(code **)(*plStack_128 + 0x18))
              (plStack_128,local_130,CONCAT71(uStack_13f,local_140) & 0xfffffffffffffffe,1);
  }
  if (local_148 != (long *)0x0) {
    plVar9 = local_148 + 1;
    do {
      lVar18 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_148 + 0x10))(local_148);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_01f6fc48(auStack_e0);
  local_c0 = (ulong ****)0x0;
  local_b8 = (ulong *******)FUN_01cf7e20();
  local_b0 = (ulong *******)0x0;
  local_c8 = (ulong ****)&local_c0;
  FUN_0055fbf0(param_1,&local_cc,0,&DAT_03c886bc,&local_c8);
  FUN_01cfa44c(&local_c8,local_c0);
  return;
}


