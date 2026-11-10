/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ee130; name: FUN_002ee130
 */


long FUN_002ee130(void)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  char *__s;
  size_t __n;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  void *pvVar19;
  long *plVar20;
  undefined *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [8];
  char *local_f0;
  size_t local_e8;
  void *pvStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [12];
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  local_120 = (undefined8 *)0x0;
                    /* try { // try from 002ee150 to 002ee17b has its CatchHandler @ 002ee9dc */
  FUN_003673f0(&local_f0,"Failed to create Google credentials");
  uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                       ,0x118,&local_f0,0,0);
  puVar6 = PTR___tls_init_047cc328;
  puVar5 = PTR_DAT_047cc320;
  local_134 = 0;
  local_140 = 1;
  local_138 = 0xffffffff;
  local_168 = PTR_DAT_047cc320 + 0x10;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  local_130 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 002ee1bc to 002ee1bf has its CatchHandler @ 002ee9c8 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar7 = PTR_DAT_047cc330;
  lVar18 = tpidr_el0;
  local_128 = *(undefined8 *)(lVar18 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
                    /* try { // try from 002ee810 to 002ee813 has its CatchHandler @ 002ee9c8 */
    FUN_0038e994();
  }
  if (puVar6 != (undefined *)0x0) {
                    /* try { // try from 002ee1f0 to 002ee1f3 has its CatchHandler @ 002ee9c8 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar18 + 0x48) = &local_168;
                    /* try { // try from 002ee20c to 002ee21f has its CatchHandler @ 002ee9c4 */
  FUN_0038dcd0(&DAT_047ef20c,&LAB_002eea80);
                    /* try { // try from 002ee220 to 002ee22b has its CatchHandler @ 002ee9e0 */
  __s = (char *)FUN_0038c920("GOOGLE_APPLICATION_CREDENTIALS");
  if (__s == (char *)0x0) {
LAB_002ee2e8:
    if (DAT_047ef218 == (code *)0x0) {
      FUN_002ef220(&local_f0);
    }
    else {
                    /* try { // try from 002ee2f4 to 002ee307 has its CatchHandler @ 002ee9c0 */
      (*DAT_047ef218)(&local_f0);
    }
                    /* try { // try from 002ee308 to 002ee313 has its CatchHandler @ 002ee9a0 */
    lVar10 = FUN_002eea90(&local_f0,&local_120);
    if (((ulong)local_f0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,pvStack_e0);
    }
    if (lVar10 == 0) goto LAB_002ee5a8;
                    /* try { // try from 002ee334 to 002ee407 has its CatchHandler @ 002ee9e0 */
    uVar9 = FUN_00352130(uVar9,lVar10);
    FUN_0038db40(&DAT_047ef228);
    if (DAT_047ef210 == 0) {
      uVar8 = (*(code *)PTR_FUN_04493c98)();
      DAT_047ef208 = uVar8 & 1;
      DAT_047ef210 = DAT_047ef208;
      if ((uVar8 & 1) == 0) {
        local_88[0] = 0;
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        FUN_003581b0();
        uVar11 = FUN_0038c7b0();
        FUN_00358110(uVar11,&DAT_047ef220);
        auStack_a0 = FUN_00357ff0(uVar11);
        local_90 = 0;
        uStack_d0 = 0;
        pvStack_e0 = (void *)0x0;
        local_e8 = 0;
        local_a8 = 0;
        uStack_c0 = 0;
        local_c8 = 0;
        uStack_b0 = 0;
        local_b8 = 0;
        local_f0 = "metadata.google.internal.";
        local_d8 = &DAT_03bdfb3b;
        FUN_0034edf0(auStack_f8);
        uVar11 = FUN_00358a20("google_default_credentials");
        if (puVar6 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
                    /* try { // try from 002ee41c to 002ee47f has its CatchHandler @ 002ee9e0 */
        lVar10 = FUN_0035347c(*(undefined8 *)(lVar18 + 0x48));
        puVar12 = (undefined8 *)FUN_0038c780(0x30);
        *puVar12 = &LAB_002ef140;
        puVar12[1] = auStack_a0;
        puVar12[3] = PTR_FUN_047cc978;
        puVar12[4] = puVar12;
        puVar12[5] = 0;
        FUN_0034ee20(auStack_f8,auStack_a0,uVar11,&local_f0,lVar10 + 1000,puVar12 + 2,local_88);
        FUN_00359090(uVar11);
        if (puVar6 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
                    /* try { // try from 002ee494 to 002ee4ef has its CatchHandler @ 002ee9e0 */
        FUN_003533a0(*(undefined8 *)(lVar18 + 0x48));
        FUN_0038db40(DAT_047ef220);
        while ((int)local_90 == 0) {
          local_118 = 0;
                    /* try { // try from 002ee7d0 to 002ee7fb has its CatchHandler @ 002ee9d8 */
          uVar11 = FUN_00358000(auStack_a0);
          lVar10 = FUN_00358170(uVar11,&local_118,0x7fffffffffffffff);
          if (lVar10 != 0) {
            uVar16 = FUN_00352b40("pollset_work",lVar10,
                                  "external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                                  ,0xc6);
            if ((uVar16 & 1) == 0) {
              local_90 = DAT_03cb55b0;
              break;
            }
          }
        }
        FUN_0038db60(DAT_047ef220);
        FUN_0034ee10(auStack_f8);
        uStack_108 = FUN_00358000(auStack_a0);
        local_100 = 0;
        local_110 = &LAB_002ef210;
        uVar11 = FUN_00358000(auStack_a0);
        FUN_00358130(uVar11,&local_118);
        DAT_047ef220 = 0;
        if (puVar6 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
                    /* try { // try from 002ee504 to 002ee52f has its CatchHandler @ 002ee9e0 */
        FUN_003533a0(*(undefined8 *)(lVar18 + 0x48));
        pvVar19 = (void *)FUN_00358000(auStack_a0);
        free(pvVar19);
        FUN_0034f890(local_88);
        DAT_047ef210 = local_90._4_4_;
      }
    }
    FUN_0038db60(&DAT_047ef228);
    if (DAT_047ef210 == 0) goto LAB_002ee5a8;
                    /* try { // try from 002ee538 to 002ee53f has its CatchHandler @ 002ee948 */
    puVar13 = (undefined8 *)FUN_002f2080(0);
    puVar12 = local_120;
    if (local_120 != (undefined8 *)0x0) {
      plVar14 = local_120 + 1;
      do {
        lVar10 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)*local_120)(local_120);
        FUN_0049e790(PTR_LAB_047cba48,puVar12);
      }
    }
    local_120 = puVar13;
    if (puVar13 == (undefined8 *)0x0) {
                    /* try { // try from 002ee56c to 002ee5a3 has its CatchHandler @ 002ee94c */
      FUN_003673f0(&local_f0,"Failed to get credentials from network");
      uVar11 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/credentials/google_default/google_default_credentials.cc"
                            ,0x144,&local_f0,0,0);
      uVar9 = FUN_00352130(uVar9,uVar11);
      goto LAB_002ee5a8;
    }
  }
  else {
    __n = strlen(__s);
    if (0xffffffffffffffef < __n) {
                    /* try { // try from 002ee93c to 002ee943 has its CatchHandler @ 002ee944 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      local_f0 = (char *)CONCAT71(local_f0._1_7_,(char)((int)__n << 1));
      pvVar19 = (void *)((ulong)&local_f0 | 1);
      if (__n != 0) goto LAB_002ee290;
    }
    else {
      uVar16 = __n + 0x10 & 0xfffffffffffffff0;
      pvVar19 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar16);
      local_f0 = (char *)(uVar16 | 1);
      local_e8 = __n;
      pvStack_e0 = pvVar19;
LAB_002ee290:
      memcpy(pvVar19,__s,__n);
    }
    *(undefined1 *)((long)pvVar19 + __n) = 0;
                    /* try { // try from 002ee2a4 to 002ee2af has its CatchHandler @ 002ee950 */
    lVar10 = FUN_002eea90(&local_f0,&local_120);
    if (((ulong)local_f0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,pvStack_e0);
    }
                    /* try { // try from 002ee2cc to 002ee2e3 has its CatchHandler @ 002ee9e0 */
    free(__s);
    if (lVar10 != 0) {
      uVar9 = FUN_00352130(uVar9,lVar10);
      goto LAB_002ee2e8;
    }
LAB_002ee5a8:
    if (local_120 == (undefined8 *)0x0) {
      lVar10 = 0;
      goto joined_r0x002ee8b4;
    }
  }
                    /* try { // try from 002ee5b0 to 002ee5c3 has its CatchHandler @ 002ee99c */
  puVar12 = (undefined8 *)FUN_002f3500(0,0,0,0);
  if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002ee934 to 002ee937 has its CatchHandler @ 002ee99c */
    abort();
  }
                    /* try { // try from 002ee5cc to 002ee5cf has its CatchHandler @ 002ee998 */
  uVar11 = FUN_00305360();
                    /* try { // try from 002ee5d4 to 002ee5e3 has its CatchHandler @ 002ee9d0 */
  plVar14 = (long *)FUN_002ec0d0();
  FUN_00305490(uVar11);
  if (plVar14 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    plVar20 = plVar14 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar20 = plVar14;
  }
  plVar1 = puVar12 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar15 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (plVar15 == (long *)0x0) {
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)*puVar12)(puVar12);
      FUN_0049e790(PTR_LAB_047cba48,puVar12);
    }
    if (plVar20 != (long *)0x0) {
      plVar2 = plVar20 + 1;
      do {
        lVar10 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 1) {
        (**(code **)*plVar20)(plVar20);
        FUN_0049e790(PTR_LAB_047cba48,plVar20);
      }
      plVar20 = (long *)0x0;
    }
  }
  else {
    *plVar15 = (long)(PTR_DAT_047cc980 + 0x10);
    plVar15[1] = 1;
    plVar15[4] = (long)puVar12;
    plVar15[2] = (long)"GoogleDefault";
    plVar15[3] = (long)plVar20;
    plVar20 = plVar15;
  }
  do {
    lVar10 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar10 + -1 == 0) {
    (**(code **)*puVar12)(puVar12);
    FUN_0049e790(PTR_LAB_047cba48,puVar12);
  }
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)*plVar14)(plVar14);
      FUN_0049e790(PTR_LAB_047cba48,plVar14);
    }
  }
                    /* try { // try from 002ee6dc to 002ee6e7 has its CatchHandler @ 002ee954 */
  lVar10 = FUN_002ecf80(plVar20,local_120,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002ee938 to 002ee93b has its CatchHandler @ 002ee954 */
    abort();
  }
  if (plVar20 != (long *)0x0) {
    plVar14 = plVar20 + 1;
    do {
      lVar17 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)*plVar20)(plVar20);
      FUN_0049e790(PTR_LAB_047cba48,plVar15);
    }
  }
joined_r0x002ee8b4:
  if (4 < uVar9) {
                    /* try { // try from 002ee714 to 002ee71b has its CatchHandler @ 002ee9e0 */
    FUN_00350fd0(uVar9);
  }
  local_168 = puVar5 + 0x10;
  local_140 = local_140 | 1;
                    /* try { // try from 002ee730 to 002ee743 has its CatchHandler @ 002ee9d4 */
  FUN_003533a0(&local_168);
  uVar11 = local_128;
  if (puVar6 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar18 + 0x48) = uVar11;
  if ((((byte)local_140 >> 2 & 1) == 0) && ((*puVar7 & 1) != 0)) {
                    /* try { // try from 002ee818 to 002ee81b has its CatchHandler @ 002ee9d4 */
    FUN_0038ea60();
  }
  puVar12 = local_120;
  if (local_120 != (undefined8 *)0x0) {
    plVar14 = local_120 + 1;
    do {
      lVar18 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 + -1 == 0) {
      (**(code **)*local_120)(local_120);
      FUN_0049e790(PTR_LAB_047cba48,puVar12);
    }
  }
  return lVar10;
}


