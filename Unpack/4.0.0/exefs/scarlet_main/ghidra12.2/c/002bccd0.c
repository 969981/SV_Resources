/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002bccd0; name: FUN_002bccd0
 */


void FUN_002bccd0(long *param_1,long *param_2,long param_3,void *param_4,undefined8 *****param_5,
                 long *param_6,undefined8 param_7,long *param_8)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 ******ppppppuVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 ******ppppppuVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *****pppppuVar15;
  char *__s;
  void *pvVar16;
  long *plVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 local_f0;
  undefined8 *****local_e8;
  undefined8 *****pppppuStack_e0;
  undefined8 *****local_d8;
  undefined8 *****pppppuStack_d0;
  long *local_c8;
  undefined8 ******local_c0;
  void *local_b8;
  
  puVar3 = PTR_DAT_047cc7f0;
  plVar17 = param_1 + 1;
  *plVar17 = 1;
  *param_1 = (long)(puVar3 + 0x10);
                    /* try { // try from 002bcd28 to 002bcd3f has its CatchHandler @ 002bd70c */
  iVar5 = FUN_00343fb0(param_7,"grpc.xds_resource_does_not_exist_timeout_ms",15000,0x7fffffff);
  param_1[2] = (long)iVar5;
  lVar11 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = lVar11;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[5] = param_3;
                    /* try { // try from 002bcd5c to 002bcd73 has its CatchHandler @ 002bd6c8 */
  FUN_002c7e98(param_1 + 6,param_1,PTR_DAT_047cc7c8,param_8);
  if (param_1[6] == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1[6] + 0x90);
  }
                    /* try { // try from 002bcd8c to 002bcd9b has its CatchHandler @ 002bd6ac */
  FUN_002a6350(param_1 + 7,param_1,PTR_DAT_047cc7c8,uVar10);
  if (param_4 == (void *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  else {
    if ((undefined8 *****)0xffffffffffffffef < param_5) {
                    /* try { // try from 002bd40c to 002bd417 has its CatchHandler @ 002bd434 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_5 < (undefined8 *****)0x17) {
      pvVar16 = (void *)((long)param_1 + 0x81);
      *(char *)(param_1 + 0x10) = (char)((int)param_5 << 1);
      if (param_5 != (undefined8 *****)0x0) goto LAB_002bcdfc;
    }
    else {
      pvVar16 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(param_5 + 2) & 0xfffffffffffffff0);
      param_1[0x10] = (ulong)(param_5 + 2) & 0xfffffffffffffff0 | 1;
      param_1[0x11] = (long)param_5;
      param_1[0x12] = (long)pvVar16;
LAB_002bcdfc:
      memcpy(pvVar16,param_4,(size_t)param_5);
    }
    *(undefined1 *)((long)pvVar16 + (long)param_5) = 0;
  }
  lVar11 = *param_6;
  *param_6 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x13] = lVar11;
  param_1[0x14] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = (long)(param_1 + 0x22);
  param_1[0x24] = (long)(param_1 + 0x25);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = (long)(param_1 + 0x28);
  param_1[0x2a] = (long)(param_1 + 0x2b);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((long)param_1 + 0xe1) = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  if (*param_8 != 0) {
    return;
  }
  local_c8 = (long *)0x0;
                    /* try { // try from 002bce74 to 002bce87 has its CatchHandler @ 002bd4c4 */
  FUN_00344230(&local_e8,"grpc.keepalive_time_ms",5000);
  bVar4 = ((ulong)local_c8 & 1) != 0;
  ppppppuVar9 = &local_c0;
  if (bVar4) {
    ppppppuVar9 = local_c0;
  }
  pvVar16 = (void *)0x3;
  if (bVar4) {
    pvVar16 = local_b8;
  }
  if ((void *)((ulong)local_c8 >> 1) == pvVar16) {
    ppppppuVar6 = (undefined8 ******)FUN_0049e770(PTR_FUN_047cba38,(long)pvVar16 << 6);
    ppppppuVar13 = ppppppuVar6 + (long)pvVar16 * 4;
    ppppppuVar13[1] = pppppuStack_e0;
    *ppppppuVar13 = local_e8;
    ppppppuVar13[3] = pppppuStack_d0;
    ppppppuVar13[2] = local_d8;
    if (ppppppuVar6 != (undefined8 ******)0x0) {
      if (pvVar16 != (void *)0x0) {
        if (pvVar16 == (void *)0x1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          ppppppuVar13 = ppppppuVar6 + 4;
          ppppppuVar14 = ppppppuVar9;
          do {
            ppppppuVar9 = ppppppuVar14 + 8;
            pppppuVar15 = *ppppppuVar14;
            pppppuVar19 = ppppppuVar14[3];
            pppppuVar18 = ppppppuVar14[2];
            ppppppuVar13[-3] = ppppppuVar14[1];
            ppppppuVar13[-4] = pppppuVar15;
            ppppppuVar13[-1] = pppppuVar19;
            ppppppuVar13[-2] = pppppuVar18;
            uVar12 = uVar12 + 2;
            pppppuVar15 = ppppppuVar14[4];
            pppppuVar19 = ppppppuVar14[7];
            pppppuVar18 = ppppppuVar14[6];
            ppppppuVar13[1] = ppppppuVar14[5];
            *ppppppuVar13 = pppppuVar15;
            ppppppuVar13[3] = pppppuVar19;
            ppppppuVar13[2] = pppppuVar18;
            ppppppuVar13 = ppppppuVar13 + 8;
            ppppppuVar14 = ppppppuVar9;
          } while (((ulong)pvVar16 & 0xfffffffffffffffe) != uVar12);
        }
        if (((ulong)pvVar16 & 1) != 0) {
          pppppuVar15 = *ppppppuVar9;
          pppppuVar19 = ppppppuVar9[3];
          pppppuVar18 = ppppppuVar9[2];
          ppppppuVar13 = ppppppuVar6 + uVar12 * 4;
          ppppppuVar13[1] = ppppppuVar9[1];
          *ppppppuVar13 = pppppuVar15;
          ppppppuVar13[3] = pppppuVar19;
          ppppppuVar13[2] = pppppuVar18;
        }
      }
      if (((ulong)local_c8 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_c0);
      }
      local_c8 = (long *)((ulong)local_c8 | 1);
      local_c0 = ppppppuVar6;
      local_b8 = (void *)((long)pvVar16 << 1);
    }
  }
  else {
    ppppppuVar9 = ppppppuVar9 + (long)((ulong)local_c8 >> 1) * 4;
    ppppppuVar9[1] = pppppuStack_e0;
    *ppppppuVar9 = local_e8;
    ppppppuVar9[3] = pppppuStack_d0;
    ppppppuVar9[2] = local_d8;
  }
  local_c8 = (long *)((long)local_c8 + 2);
                    /* try { // try from 002bcf84 to 002bcf97 has its CatchHandler @ 002bd4c0 */
  FUN_00344230(&local_e8,"grpc.address_is_xds_server",1);
  bVar4 = ((ulong)local_c8 & 1) != 0;
  ppppppuVar9 = &local_c0;
  if (bVar4) {
    ppppppuVar9 = local_c0;
  }
  pvVar16 = (void *)0x3;
  if (bVar4) {
    pvVar16 = local_b8;
  }
  if ((void *)((ulong)local_c8 >> 1) == pvVar16) {
    ppppppuVar6 = (undefined8 ******)FUN_0049e770(PTR_FUN_047cba38,(long)pvVar16 << 6);
    ppppppuVar13 = ppppppuVar6 + (long)pvVar16 * 4;
    ppppppuVar13[1] = pppppuStack_e0;
    *ppppppuVar13 = local_e8;
    ppppppuVar13[3] = pppppuStack_d0;
    ppppppuVar13[2] = local_d8;
    if (ppppppuVar6 != (undefined8 ******)0x0) {
      if (pvVar16 != (void *)0x0) {
        if (pvVar16 == (void *)0x1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          ppppppuVar13 = ppppppuVar6 + 4;
          ppppppuVar14 = ppppppuVar9;
          do {
            ppppppuVar9 = ppppppuVar14 + 8;
            pppppuVar15 = *ppppppuVar14;
            pppppuVar19 = ppppppuVar14[3];
            pppppuVar18 = ppppppuVar14[2];
            ppppppuVar13[-3] = ppppppuVar14[1];
            ppppppuVar13[-4] = pppppuVar15;
            ppppppuVar13[-1] = pppppuVar19;
            ppppppuVar13[-2] = pppppuVar18;
            uVar12 = uVar12 + 2;
            pppppuVar15 = ppppppuVar14[4];
            pppppuVar19 = ppppppuVar14[7];
            pppppuVar18 = ppppppuVar14[6];
            ppppppuVar13[1] = ppppppuVar14[5];
            *ppppppuVar13 = pppppuVar15;
            ppppppuVar13[3] = pppppuVar19;
            ppppppuVar13[2] = pppppuVar18;
            ppppppuVar13 = ppppppuVar13 + 8;
            ppppppuVar14 = ppppppuVar9;
          } while (((ulong)pvVar16 & 0xfffffffffffffffe) != uVar12);
        }
        if (((ulong)pvVar16 & 1) != 0) {
          pppppuVar15 = *ppppppuVar9;
          pppppuVar19 = ppppppuVar9[3];
          pppppuVar18 = ppppppuVar9[2];
          ppppppuVar13 = ppppppuVar6 + uVar12 * 4;
          ppppppuVar13[1] = ppppppuVar9[1];
          *ppppppuVar13 = pppppuVar15;
          ppppppuVar13[3] = pppppuVar19;
          ppppppuVar13[2] = pppppuVar18;
        }
      }
      if (((ulong)local_c8 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_c0);
      }
      local_c8 = (long *)((ulong)local_c8 | 1);
      local_c0 = ppppppuVar6;
      local_b8 = (void *)((long)pvVar16 << 1);
    }
  }
  else {
    ppppppuVar9 = ppppppuVar9 + (long)((ulong)local_c8 >> 1) * 4;
    ppppppuVar9[1] = pppppuStack_e0;
    *ppppppuVar9 = local_e8;
    ppppppuVar9[3] = pppppuStack_d0;
    ppppppuVar9[2] = local_d8;
  }
  local_c8 = (long *)((long)local_c8 + 2);
                    /* try { // try from 002bd08c to 002bd09b has its CatchHandler @ 002bd4bc */
  piVar7 = (int *)FUN_00343a90(param_7,"grpc.channelz_channel_node");
  if (((piVar7 != (int *)0x0) && (*piVar7 == 2)) && (*(long *)(piVar7 + 4) != 0)) {
                    /* try { // try from 002bd0bc to 002bd0c3 has its CatchHandler @ 002bd444 */
    FUN_00345f20(&local_e8,*(undefined8 *)(*(long *)(piVar7 + 4) + 0x18));
    bVar4 = ((ulong)local_c8 & 1) != 0;
    ppppppuVar9 = &local_c0;
    if (bVar4) {
      ppppppuVar9 = local_c0;
    }
    pvVar16 = (void *)0x3;
    if (bVar4) {
      pvVar16 = local_b8;
    }
    if ((void *)((ulong)local_c8 >> 1) == pvVar16) {
      ppppppuVar6 = (undefined8 ******)FUN_0049e770(PTR_FUN_047cba38,(long)pvVar16 << 6);
      ppppppuVar13 = ppppppuVar6 + (long)pvVar16 * 4;
      ppppppuVar13[1] = pppppuStack_e0;
      *ppppppuVar13 = local_e8;
      ppppppuVar13[3] = pppppuStack_d0;
      ppppppuVar13[2] = local_d8;
      if (ppppppuVar6 != (undefined8 ******)0x0) {
        if (pvVar16 != (void *)0x0) {
          if (pvVar16 == (void *)0x1) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            ppppppuVar13 = ppppppuVar6 + 4;
            ppppppuVar14 = ppppppuVar9;
            do {
              ppppppuVar9 = ppppppuVar14 + 8;
              pppppuVar15 = *ppppppuVar14;
              pppppuVar19 = ppppppuVar14[3];
              pppppuVar18 = ppppppuVar14[2];
              ppppppuVar13[-3] = ppppppuVar14[1];
              ppppppuVar13[-4] = pppppuVar15;
              ppppppuVar13[-1] = pppppuVar19;
              ppppppuVar13[-2] = pppppuVar18;
              uVar12 = uVar12 + 2;
              pppppuVar15 = ppppppuVar14[4];
              pppppuVar19 = ppppppuVar14[7];
              pppppuVar18 = ppppppuVar14[6];
              ppppppuVar13[1] = ppppppuVar14[5];
              *ppppppuVar13 = pppppuVar15;
              ppppppuVar13[3] = pppppuVar19;
              ppppppuVar13[2] = pppppuVar18;
              ppppppuVar13 = ppppppuVar13 + 8;
              ppppppuVar14 = ppppppuVar9;
            } while (((ulong)pvVar16 & 0xfffffffffffffffe) != uVar12);
          }
          if (((ulong)pvVar16 & 1) != 0) {
            pppppuVar15 = *ppppppuVar9;
            pppppuVar19 = ppppppuVar9[3];
            pppppuVar18 = ppppppuVar9[2];
            ppppppuVar13 = ppppppuVar6 + uVar12 * 4;
            ppppppuVar13[1] = ppppppuVar9[1];
            *ppppppuVar13 = pppppuVar15;
            ppppppuVar13[3] = pppppuVar19;
            ppppppuVar13[2] = pppppuVar18;
          }
        }
        if (((ulong)local_c8 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_c0);
        }
        local_c8 = (long *)((ulong)local_c8 | 1);
        local_c0 = ppppppuVar6;
        local_b8 = (void *)((long)pvVar16 << 1);
      }
    }
    else {
      ppppppuVar9 = ppppppuVar9 + (long)((ulong)local_c8 >> 1) * 4;
      ppppppuVar9[1] = pppppuStack_e0;
      *ppppppuVar9 = local_e8;
      ppppppuVar9[3] = pppppuStack_d0;
      ppppppuVar9[2] = local_d8;
    }
    local_c8 = (long *)((long)local_c8 + 2);
  }
  ppppppuVar9 = &local_c0;
  if (((ulong)local_c8 & 1) != 0) {
    ppppppuVar9 = local_c0;
  }
                    /* try { // try from 002bd1cc to 002bd1e3 has its CatchHandler @ 002bd4d0 */
  FUN_003435b0(param_7,&PTR_s_grpc_lb_policy_name_0448e458,7,ppppppuVar9,(ulong)local_c8 >> 1);
  uVar10 = FUN_002cb0f0();
  if (((ulong)local_c8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_c0);
  }
                    /* try { // try from 002bd204 to 002bd21b has its CatchHandler @ 002bd4c8 */
  local_f0 = FUN_002cb4e0(param_1[6],uVar10,param_8);
  FUN_00343d90(uVar10);
  if (*param_8 != 0) {
    return;
  }
  do {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar4) {
      *plVar17 = *plVar17 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* try { // try from 002bd258 to 002bd263 has its CatchHandler @ 002bd478 */
  local_c8 = param_1;
  lVar11 = FUN_002c5fb4(&local_c8,&local_f0);
  puVar8 = (undefined8 *)param_1[0x14];
  param_1[0x14] = lVar11;
  if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 002bd27c to 002bd27f has its CatchHandler @ 002bd474 */
    (**(code **)*puVar8)();
  }
  plVar17 = local_c8;
  if (local_c8 == (long *)0x0) {
LAB_002bd2a0:
    lVar11 = param_1[0x13];
  }
  else {
    plVar1 = local_c8 + 1;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 + -1 != 0) goto LAB_002bd2a0;
    (**(code **)(*local_c8 + 8))(local_c8);
    FUN_0049e790(PTR_LAB_047cba48,plVar17);
    lVar11 = param_1[0x13];
  }
  if (lVar11 == 0) {
    return;
  }
  lVar11 = param_1[0x14];
  __s = *(char **)PTR_PTR_047cc6f0;
  ppppppuVar9 = (undefined8 ******)strlen(__s);
  if ((undefined8 ******)0xffffffffffffffef < ppppppuVar9) {
                    /* try { // try from 002bd418 to 002bd41f has its CatchHandler @ 002bd430 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (ppppppuVar9 < (undefined8 ******)0x17) {
    local_c8 = (long *)CONCAT71(local_c8._1_7_,(char)((int)ppppppuVar9 << 1));
    pvVar16 = (void *)((ulong)&local_c8 | 1);
    if (ppppppuVar9 != (undefined8 ******)0x0) goto LAB_002bd314;
  }
  else {
    pvVar16 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(ppppppuVar9 + 2) & 0xfffffffffffffff0);
    local_c8 = (long *)((ulong)(ppppppuVar9 + 2) & 0xfffffffffffffff0 | 1);
    local_c0 = ppppppuVar9;
    local_b8 = pvVar16;
LAB_002bd314:
    memcpy(pvVar16,__s,(size_t)ppppppuVar9);
  }
  *(undefined1 *)((long)pvVar16 + (long)ppppppuVar9) = 0;
  if (param_4 == (void *)0x0) {
    local_e8 = (undefined8 *****)0x0;
    pppppuStack_e0 = (undefined8 *****)0x0;
    local_d8 = (undefined8 *****)0x0;
    goto LAB_002bd39c;
  }
  if ((undefined8 *****)0xffffffffffffffef < param_5) {
                    /* try { // try from 002bd420 to 002bd427 has its CatchHandler @ 002bd428 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_5 < (undefined8 *****)0x17) {
    local_e8 = (undefined8 *****)CONCAT71(local_e8._1_7_,(char)((int)param_5 << 1));
    pppppuVar15 = (undefined8 *****)((ulong)&local_e8 | 1);
    if (param_5 != (undefined8 *****)0x0) goto LAB_002bd388;
  }
  else {
    pppppuVar15 = (undefined8 *****)
                  FUN_0049e770(PTR_FUN_047cba38,(ulong)(param_5 + 2) & 0xfffffffffffffff0);
    local_e8 = (undefined8 *****)((ulong)(param_5 + 2) & 0xfffffffffffffff0 | 1);
    pppppuStack_e0 = param_5;
    local_d8 = pppppuVar15;
LAB_002bd388:
    memcpy(pppppuVar15,param_4,(size_t)param_5);
  }
  *(undefined1 *)((long)pppppuVar15 + (long)param_5) = 0;
LAB_002bd39c:
                    /* try { // try from 002bd39c to 002bd3ab has its CatchHandler @ 002bd448 */
  FUN_002b3ea8(lVar11,&local_c8,&local_e8);
  if (((ulong)local_e8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_d8);
  }
  if (((ulong)local_c8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b8);
  }
  return;
}


