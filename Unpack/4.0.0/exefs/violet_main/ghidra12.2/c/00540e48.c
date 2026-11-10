/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00540e48; name: FUN_00540e48
 */


/* WARNING: Removing unreachable block (ram,0x00541c48) */
/* WARNING: Removing unreachable block (ram,0x00541c4c) */
/* WARNING: Removing unreachable block (ram,0x00541c54) */
/* WARNING: Removing unreachable block (ram,0x00541c5c) */
/* WARNING: Removing unreachable block (ram,0x00541c60) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00540e48(undefined8 *param_1,byte *param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  byte *pbVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  size_t sVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  code *pcVar17;
  byte *pbVar18;
  long *plVar19;
  size_t __n;
  undefined8 *puVar20;
  long *plVar21;
  char *pcVar22;
  long *plVar23;
  void *pvVar24;
  ulong uVar25;
  long *plVar26;
  long local_330 [4];
  long *local_310;
  long local_300 [4];
  long *local_2e0;
  long local_2d0;
  long *local_2c8;
  undefined1 auStack_2c0 [8];
  long *local_2b8;
  ulong local_2b0;
  size_t local_2a8;
  void *local_2a0;
  long *local_298;
  undefined8 local_290;
  size_t local_288;
  void *local_280;
  long *local_278;
  char acStack_270 [16];
  ulong local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  long *plStack_248;
  ulong local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  long *plStack_228;
  ulong local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  long *plStack_208;
  ulong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long *plStack_1e8;
  ulong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  long *plStack_1c8;
  undefined1 local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long *local_180;
  long *local_178;
  long local_170;
  long *plStack_168;
  long local_160;
  long *local_158;
  long local_150 [4];
  long *local_130;
  long *local_120;
  long *local_118;
  long local_110;
  long *plStack_108;
  long local_100;
  long *local_f8;
  long local_f0 [4];
  long *local_d0;
  long *local_c0;
  long *local_b8;
  char *local_b0;
  long *plStack_a8;
  long local_a0;
  long *local_98;
  long local_90 [4];
  long *local_70;
  
  plStack_248 = (long *)FUN_01cf7e20();
  local_250 = 0;
  local_260 = 0;
  uStack_258 = 0;
  plStack_228 = (long *)FUN_01cf7e20();
  local_230 = 0;
  local_240 = 0;
  uStack_238 = 0;
  plStack_208 = (long *)FUN_01cf7e20();
  local_210 = 0;
  local_220 = 0;
  uStack_218 = 0;
  plStack_1e8 = (long *)FUN_01cf7e20();
  local_1f0 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  plStack_1c8 = (long *)FUN_01cf7e20();
  local_1d0 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1c0 = *PTR_DAT_047cc220;
  local_190 = (long *)0x0;
  sprintf(acStack_270,":%u",(ulong)*(uint *)(param_2 + 0x40));
  bVar4 = param_2[0x20];
  if ((bVar4 & 1) == 0) {
    if (((bVar4 & 0xfe) != 0x12) ||
       (*(long *)(param_2 + 0x21) != 0x736f686c61636f6c || param_2[0x29] != 0x74)) {
      if ((bVar4 & 0xfe) == 0x2a) {
        pbVar18 = param_2 + 0x21;
        goto LAB_00540f80;
      }
      goto LAB_00540fd0;
    }
LAB_00540ff8:
    FUN_002566c0(&local_260);
  }
  else {
    lVar14 = *(long *)(param_2 + 0x28);
    if (lVar14 == 9) {
      if (**(long **)(param_2 + 0x30) == 0x736f686c61636f6c &&
          (char)(*(long **)(param_2 + 0x30))[1] == 't') goto LAB_00540ff8;
      lVar14 = *(long *)(param_2 + 0x28);
    }
    if (lVar14 == 0x15) {
      pbVar18 = *(byte **)(param_2 + 0x30);
LAB_00540f80:
      if ((*(long *)pbVar18 == 0x736f686c61636f6c && *(long *)(pbVar18 + 8) == 0x646c61636f6c2e74)
          && *(long *)(pbVar18 + 0xd) == 0x6e69616d6f646c61) goto LAB_00540ff8;
    }
LAB_00540fd0:
    FUN_0025685c(&local_260);
                    /* try { // try from 00540fe0 to 00540ff3 has its CatchHandler @ 00541f30 */
    FUN_01f77cc0(&local_1e0,"gamesync.npln.nintendo.net",0x1a);
  }
  plVar21 = *(long **)(param_2 + 0x38);
  local_b0 = (char *)0x0;
  local_c0 = (long *)0x0;
  local_b8 = (long *)0x0;
  plStack_a8 = plVar21;
  if ((param_2[0x20] & 1) == 0) {
    __n = (size_t)(param_2[0x20] >> 1);
    sVar8 = strlen(acStack_270);
    pbVar18 = param_2 + 0x21;
  }
  else {
    __n = *(size_t *)(param_2 + 0x28);
    sVar8 = strlen(acStack_270);
    pbVar18 = *(byte **)(param_2 + 0x30);
  }
  uVar25 = __n + sVar8;
  if (0xffffffffffffffef < uVar25) {
                    /* try { // try from 00541edc to 00541ee3 has its CatchHandler @ 00541f3c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar25 < 0x17) {
    local_c0 = (long *)CONCAT71(local_c0._1_7_,(char)((int)__n << 1));
    pcVar22 = (char *)((ulong)&local_c0 | 1);
  }
  else {
    uVar25 = uVar25 + 0x10 & 0xfffffffffffffff0;
    pcVar22 = (char *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar25,1);
    local_c0 = (long *)(uVar25 | 1);
    local_b0 = pcVar22;
    local_b8 = (long *)__n;
  }
  if (__n != 0) {
    memcpy(pcVar22,pbVar18,__n);
  }
  pcVar22[__n] = '\0';
                    /* try { // try from 005410c0 to 005410d3 has its CatchHandler @ 00541f3c */
  FUN_0020f8d0(&local_c0,acStack_270,sVar8);
  pcVar22 = (char *)((ulong)&local_c0 | 1);
  if (((ulong)local_c0 & 1) != 0) {
    pcVar22 = local_b0;
  }
  sVar8 = strlen(pcVar22);
                    /* try { // try from 005410f4 to 005410ff has its CatchHandler @ 00541f38 */
  FUN_01f77cc0(&local_260,pcVar22,sVar8);
  if (((ulong)local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,(ulong)local_c0 & 0xfffffffffffffffe,1);
  }
  pbVar18 = param_2 + 0x79;
  if ((param_2[0x78] & 1) != 0) {
    pbVar18 = *(byte **)(param_2 + 0x88);
  }
  pbVar2 = param_2 + 0x99;
  if ((param_2[0x98] & 1) != 0) {
    pbVar2 = *(byte **)(param_2 + 0xa8);
  }
  plVar21 = (long *)FUN_01cf7e20();
  local_298 = plVar21;
  sVar8 = strlen((char *)pbVar18);
  if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 00541ee4 to 00541eeb has its CatchHandler @ 00541f2c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_2b0 = CONCAT71(local_2b0._1_7_,(char)((int)sVar8 << 1));
    pvVar24 = (void *)((ulong)&local_2b0 | 1);
    if (sVar8 != 0) goto LAB_005411c4;
  }
  else {
    uVar25 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar24 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar25,1);
    local_2b0 = uVar25 | 1;
    local_2a8 = sVar8;
    local_2a0 = pvVar24;
LAB_005411c4:
    memcpy(pvVar24,pbVar18,sVar8);
  }
  *(undefined1 *)((long)pvVar24 + sVar8) = 0;
  plVar21 = (long *)FUN_01cf7e20();
  local_278 = plVar21;
  sVar8 = strlen((char *)pbVar2);
  if (0xffffffffffffffef < sVar8) {
                    /* try { // try from 00541eec to 00541ef3 has its CatchHandler @ 00541f18 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar24 = (void *)((long)&local_290 + 1);
    local_290 = CONCAT71(local_290._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_0054124c;
  }
  else {
    uVar25 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar24 = (void *)(**(code **)(*plVar21 + 0x10))(plVar21,uVar25,1);
    local_290 = uVar25 | 1;
    local_288 = sVar8;
    local_280 = pvVar24;
LAB_0054124c:
    memcpy(pvVar24,pbVar2,sVar8);
  }
  *(undefined1 *)((long)pvVar24 + sVar8) = 0;
  pbVar18 = param_2 + 0x59;
  if ((param_2[0x58] & 1) != 0) {
    pbVar18 = *(byte **)(param_2 + 0x68);
  }
  pbVar2 = param_2 + 0x79;
  if ((param_2[0x78] & 1) != 0) {
    pbVar2 = *(byte **)(param_2 + 0x88);
  }
  FUN_00562d84(auStack_2c0,&local_260,&local_2b0,pbVar18,pbVar2,param_5);
  FUN_0053f434(&local_2d0,auStack_2c0);
  pbVar18 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar18 = param_2 + 1;
  }
  sVar8 = strlen((char *)pbVar18);
                    /* try { // try from 005412c8 to 005412cf has its CatchHandler @ 00541f34 */
  FUN_01f77cc0(local_2d0 + 0x40,pbVar18,sVar8);
  lVar14 = local_2d0;
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(local_2d0 + 0x68) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(local_2d0 + 0x60) = uVar9;
  local_2e0 = (long *)0x0;
  if ((local_300 == param_4) || (plVar21 = (long *)param_4[4], plVar21 == (long *)0x0)) {
    local_2e0 = (long *)0x0;
joined_r0x00541328:
    if ((long *)(lVar14 + 0x70) == local_300) goto LAB_0054139c;
LAB_0054132c:
    plVar19 = (long *)(lVar14 + 0x70);
    plVar21 = *(long **)(lVar14 + 0x90);
    if (plVar21 != (long *)0x0) {
      if (plVar21 == plVar19) {
        pcVar17 = *(code **)(*plVar21 + 0x10);
      }
      else {
        pcVar17 = *(code **)(*plVar21 + 0x18);
      }
      (*pcVar17)();
    }
    if (local_2e0 != (long *)0x0) {
      if (local_2e0 != local_300) {
        uVar9 = (**(code **)(*local_2e0 + 0x38))();
        *(undefined8 *)(lVar14 + 0x90) = uVar9;
        goto LAB_0054139c;
      }
      *(long **)(lVar14 + 0x90) = plVar19;
      (**(code **)(local_300[0] + 0x28))(local_300,plVar19);
      if (local_2e0 == (long *)0x0) goto LAB_005413d0;
      goto LAB_005413a4;
    }
    *(undefined8 *)(lVar14 + 0x90) = 0;
  }
  else {
    if (plVar21 != param_4) {
      local_2e0 = (long *)(**(code **)(*plVar21 + 0x38))();
      goto joined_r0x00541328;
    }
    local_2e0 = local_300;
    (**(code **)(*plVar21 + 0x28))(plVar21,local_300);
    if ((long *)(lVar14 + 0x70) != local_300) goto LAB_0054132c;
LAB_0054139c:
    if (local_2e0 != (long *)0x0) {
LAB_005413a4:
      if (local_2e0 == local_300) {
        pcVar17 = *(code **)(*local_2e0 + 0x10);
        plVar21 = local_300;
      }
      else {
        pcVar17 = *(code **)(*local_2e0 + 0x18);
        plVar21 = local_2e0;
      }
      (*pcVar17)(plVar21);
    }
  }
LAB_005413d0:
  plVar15 = local_2c8;
  plVar21 = (long *)*param_5;
  plVar19 = (long *)param_5[1];
  if (plVar19 != (long *)0x0) {
    plVar3 = plVar19 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (local_2c8 != (long *)0x0) {
    plVar3 = local_2c8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar14 = *param_3;
  plVar3 = (long *)param_3[1];
  if (plVar3 != (long *)0x0) {
    plVar16 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar6) {
        *plVar16 = *plVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar16 = local_330;
  local_310 = (long *)0x0;
  if (plVar16 != param_4) {
    plVar10 = (long *)param_4[4];
    if (plVar10 == (long *)0x0) {
      local_310 = (long *)0x0;
    }
    else if (plVar10 == param_4) {
      local_310 = plVar16;
      (**(code **)(*param_4 + 0x28))(param_4,plVar16);
    }
    else {
      local_310 = (long *)(**(code **)(*plVar10 + 0x38))();
    }
  }
  plVar23 = (long *)plVar21[0x48];
  puVar20 = (undefined8 *)plVar21[0x97];
  plVar11 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0xe0,8);
  plVar11[2] = 0;
  plVar12 = plVar11 + 1;
  *plVar12 = 0;
  puVar7 = PTR_DAT_047cdec0;
  plVar11[3] = (long)plVar23;
  plVar10 = plVar11 + 4;
  *plVar11 = (long)(puVar7 + 0x10);
  FUN_006c4254(plVar10);
  plVar11[4] = (long)(PTR_DAT_047cdec8 + 0x10);
  nn::os::InitializeEvent(plVar11 + 6,0,0);
  plVar11[4] = (long)(PTR_DAT_047cded0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar11 + 0xb),false,0);
  *(undefined1 *)(plVar11 + 0x1b) = 0;
  if (plVar11 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar12 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x1c0,0x10);
  plVar12[2] = 0;
  plVar26 = plVar12 + 1;
  *plVar26 = 0;
  *plVar12 = (long)&PTR_LAB_044c8240;
  plVar12[4] = (long)plVar23;
  FUN_006c5398(plVar12 + 6);
  plVar12[6] = (long)&PTR_LAB_044c8278;
  lVar13 = (**(code **)(*plVar23 + 0x10))(plVar23,0x10000,0x10);
  if (lVar13 == 0) {
    local_c0 = (long *)CONCAT44(local_c0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_c0,"");
  }
  FUN_006c4058(plVar12 + 0xc,plVar10,0,lVar13,0x10000,1);
  plVar12[0xc] = (long)&PTR_LAB_044c82a8;
  plVar12[0x32] = (long)plVar23;
  plVar12[0x33] = 0x10000;
  *(undefined1 *)((long)plVar12 + 0x1b1) = 1;
  plVar12[0x34] = (long)plVar10;
  plVar12[0x35] = (long)plVar11;
  if (plVar19 != (long *)0x0) {
    plVar23 = plVar19 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = *plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plStack_168 = plVar15;
  local_170 = local_2d0;
  if (plVar3 != (long *)0x0) {
    plVar15 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar15 = local_150;
  local_130 = (long *)0x0;
  local_180 = plVar21;
  local_178 = plVar19;
  local_160 = lVar14;
  local_158 = plVar3;
  if (local_310 == (long *)0x0) {
    local_130 = (long *)0x0;
  }
  else if (local_310 == plVar16) {
    local_130 = plVar15;
    (**(code **)(local_330[0] + 0x28))(plVar16,plVar15);
  }
  else {
    local_130 = (long *)(**(code **)(*local_310 + 0x38))();
  }
  plStack_108 = plStack_168;
  local_110 = local_170;
  local_120 = local_180;
  local_118 = local_178;
  if (local_178 != (long *)0x0) {
    plVar21 = local_178 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_170 = 0;
  plStack_168 = (long *)0x0;
  local_100 = local_160;
  local_f8 = local_158;
  if (local_158 != (long *)0x0) {
    plVar21 = local_158 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar21 = local_f0;
  local_d0 = (long *)0x0;
  if (local_130 == (long *)0x0) {
    local_d0 = (long *)0x0;
  }
  else if (local_130 == plVar15) {
    local_d0 = plVar21;
    (**(code **)(local_150[0] + 0x28))(plVar15,plVar21);
  }
  else {
    local_d0 = (long *)(**(code **)(*local_130 + 0x38))();
  }
  plStack_a8 = plStack_108;
  local_b0 = (char *)local_110;
  local_c0 = local_120;
  local_b8 = local_118;
  if (local_118 != (long *)0x0) {
    plVar23 = local_118 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = *plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_110 = 0;
  plStack_108 = (long *)0x0;
  local_a0 = local_100;
  local_98 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar23 = local_f8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = *plVar23 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar23 = local_90;
  local_70 = (long *)0x0;
  if (local_d0 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else if (local_d0 == plVar21) {
    local_70 = plVar23;
    (**(code **)(local_f0[0] + 0x28))(plVar21,plVar23);
  }
  else {
    local_70 = (long *)(**(code **)(*local_d0 + 0x38))();
  }
  plVar12[0x26] = (long)local_c0;
  plVar12[0x27] = (long)local_b8;
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar12[0x29] = (long)plStack_a8;
  plVar12[0x28] = (long)local_b0;
  local_b0 = (char *)0x0;
  plStack_a8 = (long *)0x0;
  plVar12[0x2a] = local_a0;
  plVar12[0x2b] = (long)local_98;
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar12[0x30] = 0;
  if (&local_c0 != (long **)(plVar12 + 0x26)) {
    if (local_70 == (long *)0x0) {
      plVar12[0x30] = 0;
      goto LAB_005418bc;
    }
    if (local_70 == plVar23) {
      plVar12[0x30] = (long)(plVar12 + 0x2c);
      (**(code **)(local_90[0] + 0x28))(plVar23);
    }
    else {
      lVar14 = (**(code **)(*local_70 + 0x38))();
      plVar12[0x30] = lVar14;
    }
  }
  if (local_70 != (long *)0x0) {
    if (local_70 == plVar23) {
      pcVar17 = *(code **)(*local_70 + 0x10);
    }
    else {
      pcVar17 = *(code **)(*local_70 + 0x18);
      plVar23 = local_70;
    }
    (*pcVar17)(plVar23);
  }
LAB_005418bc:
  if (local_98 != (long *)0x0) {
    plVar23 = local_98 + 1;
    do {
      lVar14 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_98 + 0x10))(local_98);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_a8 != (long *)0x0) {
    plVar23 = plStack_a8 + 1;
    do {
      lVar14 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_b8 != (long *)0x0) {
    plVar23 = local_b8 + 1;
    do {
      lVar14 = *plVar23;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0 != (long *)0x0) {
    if (local_d0 == plVar21) {
      pcVar17 = *(code **)(*local_d0 + 0x10);
    }
    else {
      pcVar17 = *(code **)(*local_d0 + 0x18);
      plVar21 = local_d0;
    }
    (*pcVar17)(plVar21);
  }
  if (local_f8 != (long *)0x0) {
    plVar21 = local_f8 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_f8 + 0x10))(local_f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_108 != (long *)0x0) {
    plVar21 = plStack_108 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_118 != (long *)0x0) {
    plVar21 = local_118 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_118 + 0x10))(local_118);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_130 != (long *)0x0) {
    if (local_130 == plVar15) {
      pcVar17 = *(code **)(*local_130 + 0x10);
    }
    else {
      pcVar17 = *(code **)(*local_130 + 0x18);
      plVar15 = local_130;
    }
    (*pcVar17)(plVar15);
  }
  if (local_158 != (long *)0x0) {
    plVar21 = local_158 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_168 != (long *)0x0) {
    plVar21 = plStack_168 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_178 != (long *)0x0) {
    plVar21 = local_178 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_178 + 0x10))(local_178);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_118 = (long *)0x0;
  local_120 = (long *)0x0;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar6) {
      *plVar26 = *plVar26 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  local_c0 = plVar12 + 6;
  local_b8 = plVar12;
  (**(code **)*puVar20)(puVar20,&local_c0,&local_120);
  if (local_b8 != (long *)0x0) {
    plVar21 = local_b8 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_118 != (long *)0x0) {
    plVar21 = local_118 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_118 + 0x10))(local_118);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar10;
  param_1[1] = plVar11;
  do {
    lVar14 = *plVar26;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar6) {
      *plVar26 = lVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    std::__shared_weak_count::__release_weak();
  }
  if (local_310 != (long *)0x0) {
    if (local_310 == plVar16) {
      pcVar17 = *(code **)(*local_310 + 0x10);
    }
    else {
      pcVar17 = *(code **)(*local_310 + 0x18);
      plVar16 = local_310;
    }
    (*pcVar17)(plVar16);
  }
  if (plVar3 != (long *)0x0) {
    plVar21 = plVar3 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar19 != (long *)0x0) {
    plVar21 = plVar19 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_2c8 != (long *)0x0) {
    plVar21 = local_2c8 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_2c8 + 0x10))(local_2c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_2b8 != (long *)0x0) {
    plVar21 = local_2b8 + 1;
    do {
      lVar14 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_2b8 + 0x10))(local_2b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_290 & 1) != 0) {
    (**(code **)(*local_278 + 0x18))(local_278,local_280,local_290 & 0xfffffffffffffffe,1);
  }
  if ((local_2b0 & 1) != 0) {
    (**(code **)(*local_298 + 0x18))(local_298,local_2a0,local_2b0 & 0xfffffffffffffffe,1);
  }
  if (local_190 != (long *)0x0) {
    if (local_190 == alStack_1b0) {
      (**(code **)(*local_190 + 0x10))();
    }
    else {
      (**(code **)(*local_190 + 0x18))();
    }
  }
  if ((local_1e0 & 1) != 0) {
    (**(code **)(*plStack_1c8 + 0x18))(plStack_1c8,local_1d0,local_1e0 & 0xfffffffffffffffe,1);
  }
  if ((local_200 & 1) != 0) {
    (**(code **)(*plStack_1e8 + 0x18))(plStack_1e8,local_1f0,local_200 & 0xfffffffffffffffe,1);
  }
  if ((local_220 & 1) != 0) {
    (**(code **)(*plStack_208 + 0x18))(plStack_208,local_210,local_220 & 0xfffffffffffffffe,1);
  }
  if ((local_240 & 1) != 0) {
    (**(code **)(*plStack_228 + 0x18))(plStack_228,local_230,local_240 & 0xfffffffffffffffe,1);
  }
  if ((local_260 & 1) != 0) {
    (**(code **)(*plStack_248 + 0x18))(plStack_248,local_250,local_260 & 0xfffffffffffffffe,1);
  }
  return;
}


