/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00210690; name: FUN_00210690
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00210690(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  char *__s;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  size_t __n;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  void *__dest;
  long *plVar12;
  long *plVar13;
  ulong local_280;
  size_t sStack_278;
  void *local_270;
  long *local_268;
  ulong local_260;
  long *local_258;
  long lStack_250;
  long *local_248;
  long *plStack_240;
  char local_238;
  long *local_230;
  long local_228;
  long lStack_220;
  long local_218;
  undefined1 auStack_210 [104];
  undefined4 local_1a8 [2];
  ulong local_1a0;
  long lStack_198;
  long local_190;
  long *plStack_188;
  char local_180;
  long *local_178;
  long local_170;
  long lStack_168;
  long local_160;
  ulong local_158;
  size_t sStack_150;
  void *local_148;
  long *plStack_140;
  long *local_138;
  long *local_130;
  long lStack_128;
  long local_120;
  long *plStack_118;
  char local_110;
  long *local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  undefined8 local_e8;
  long lStack_e0;
  char *local_d8;
  long *plStack_d0;
  long *local_80;
  long *local_78;
  long local_70;
  long *local_68;
  
  local_68 = (long *)0x0;
  local_70 = 0;
  if (param_2[1] == 0) {
    local_68 = (long *)0x0;
  }
  else {
    local_68 = (long *)std::__shared_weak_count::lock();
    if ((local_68 != (long *)0x0) && (lVar10 = *param_2, local_70 = lVar10, lVar10 != 0)) {
      FUN_0020ffc0(&local_80,param_2);
      uVar4 = (**(code **)(*local_80 + 0x20))();
      plVar9 = local_78;
      if ((uVar4 & 1) == 0) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (local_78 != (long *)0x0) {
          plVar8 = local_78 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar12 = *(long **)(lVar10 + 0x240);
        puVar11 = *(undefined8 **)(lVar10 + 0x4b8);
        plVar6 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0xf0,8);
        plVar6[2] = 0;
        plVar7 = plVar6 + 1;
        *plVar7 = 0;
        puVar1 = PTR_DAT_047cbcb0;
        plVar6[3] = (long)plVar12;
        plVar8 = plVar6 + 4;
        *plVar6 = (long)(puVar1 + 0x10);
        FUN_006c4254(plVar8);
        plVar6[4] = (long)(PTR_DAT_047cbcb8 + 0x10);
        nn::os::InitializeEvent(plVar6 + 6,0,0);
        plVar6[4] = (long)(PTR_DAT_047cbcc0 + 0x10);
        nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
        *(undefined1 *)(plVar6 + 0x1d) = 0;
        if (plVar6 != (long *)0x0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x158,8);
        plVar13 = plVar7 + 1;
        *plVar13 = 0;
        plVar7[2] = 0;
        plVar7[3] = (long)plVar12;
        *plVar7 = (long)&PTR_LAB_04488918;
        FUN_006c5398(plVar7 + 4);
        plVar7[4] = (long)&PTR_LAB_04488950;
        lVar10 = (**(code **)(*plVar12 + 0x10))(plVar12,0x10000,0x10);
        if (lVar10 == 0) {
          local_138 = (long *)CONCAT44(local_138._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0,(Result *)&local_138,"");
        }
        FUN_006c4058(plVar7 + 10,plVar8,0,lVar10,0x10000,1);
        plVar7[10] = (long)&PTR_LAB_04488980;
        plVar7[0x26] = (long)plVar12;
        plVar7[0x27] = 0x10000;
        *(undefined1 *)((long)plVar7 + 0x151) = 1;
        plVar7[0x28] = (long)plVar8;
        plVar7[0x29] = (long)plVar6;
        plVar7[0x23] = (long)local_80;
        plVar7[0x24] = (long)plVar9;
        local_260 = 0;
        local_258 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_138 = plVar7 + 4;
        local_130 = plVar7;
        (**(code **)*puVar11)(puVar11,&local_138,&local_260);
        if (local_130 != (long *)0x0) {
          plVar9 = local_130 + 1;
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*local_130 + 0x10))(local_130);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_258 != (long *)0x0) {
          plVar9 = local_258 + 1;
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*local_258 + 0x10))(local_258);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = plVar8;
        param_1[1] = plVar6;
        if (plVar7 != (long *)0x0) {
          do {
            lVar10 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      else {
        uVar5 = (**(code **)(*local_80 + 0x38))();
                    /* try { // try from 00210714 to 0021071b has its CatchHandler @ 00210fb4 */
        FUN_001fc604(&local_138,uVar5);
        local_248 = (long *)local_120;
        plVar9 = *(long **)(*(long *)(local_70 + 0x10) + 0x238);
        lStack_250 = lStack_128;
        local_258 = local_130;
        local_130 = (long *)0x0;
        lStack_128 = 0;
        local_120 = 0;
        local_260 = CONCAT44(local_260._4_4_,local_138._0_4_);
        local_238 = '\0';
        plStack_240 = plStack_118;
        if (local_110 != '\0') {
          lStack_220 = lStack_f8;
          local_228 = local_100;
          local_230 = local_108;
          local_218 = local_f0;
          if (local_f0 == 0) {
            local_230 = &local_228;
          }
          else {
            *(long **)(local_100 + 0x10) = &local_228;
            local_108 = &local_100;
            local_100 = 0;
            local_f0 = 0;
          }
          local_238 = '\x01';
        }
                    /* try { // try from 00210be0 to 00210be7 has its CatchHandler @ 00210f68 */
        FUN_00200584(auStack_210,&local_e8);
        __s = local_d8;
        if ((local_e8 & 1) == 0) {
          __s = (char *)((long)&local_e8 + 1);
        }
        plVar8 = (long *)FUN_01cf7e20();
        local_268 = plVar8;
        __n = strlen(__s);
        if (0xffffffffffffffef < __n) {
                    /* try { // try from 00210f50 to 00210f57 has its CatchHandler @ 00210f58 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < 0x17) {
          local_280 = CONCAT71(local_280._1_7_,(char)((int)__n << 1));
          __dest = (void *)((ulong)&local_280 | 1);
          if (__n != 0) goto LAB_00210c6c;
        }
        else {
          uVar4 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar4,1);
          local_280 = uVar4 | 1;
          sStack_278 = __n;
          local_270 = __dest;
LAB_00210c6c:
          memcpy(__dest,__s,__n);
        }
        local_190 = (long)local_248;
        lStack_198 = lStack_250;
        local_1a0 = (ulong)local_258;
        local_148 = local_270;
        sStack_150 = sStack_278;
        local_158 = local_280;
        *(undefined1 *)((long)__dest + __n) = 0;
        lStack_250 = 0;
        local_248 = (long *)0x0;
        local_258 = (long *)0x0;
        local_1a8[0] = (undefined4)local_260;
        plStack_188 = plStack_240;
        local_180 = '\0';
        if (local_238 != '\0') {
          local_178 = local_230;
          lStack_168 = lStack_220;
          local_170 = local_228;
          local_160 = local_218;
          if (local_218 == 0) {
            local_178 = &local_170;
          }
          else {
            *(long **)(local_228 + 0x10) = &local_170;
            local_230 = &local_228;
            local_228 = 0;
            local_218 = 0;
          }
          local_180 = '\x01';
        }
        sStack_278 = 0;
        local_270 = (void *)0x0;
        local_280 = 0;
        plStack_140 = local_268;
        plVar8 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0xe8,8);
        puVar1 = PTR_DAT_047cbca0 + 0x10;
        plVar8[2] = 0;
        plVar8[3] = (long)plVar9;
        *plVar8 = (long)puVar1;
        plVar8[1] = 0;
        FUN_006c4254(plVar8 + 4);
        plVar8[4] = (long)(PTR_DAT_047cbca8 + 0x10);
        *(undefined4 *)(plVar8 + 6) = local_1a8[0];
        plVar8[10] = (long)plStack_188;
        plVar8[9] = local_190;
        plVar8[8] = lStack_198;
        plVar8[7] = local_1a0;
        local_1a0 = 0;
        lStack_198 = 0;
        local_190 = 0;
        *(undefined1 *)(plVar8 + 0xb) = 0;
        if (local_180 != '\0') {
          plVar8[0xc] = (long)local_178;
          plVar8[0xe] = lStack_168;
          plVar8[0xd] = local_170;
          plVar9 = plVar8 + 0xd;
          plVar8[0xf] = local_160;
          if (local_160 == 0) {
            plVar8[0xc] = (long)plVar9;
          }
          else {
            *(long **)(*plVar9 + 0x10) = plVar9;
            local_178 = &local_170;
            local_170 = 0;
            local_160 = 0;
          }
          *(undefined1 *)(plVar8 + 0xb) = 1;
        }
        plVar8[0x11] = sStack_150;
        plVar8[0x10] = local_158;
        plVar8[0x13] = (long)plStack_140;
        plVar8[0x12] = (long)local_148;
        local_158 = 0;
        sStack_150 = 0;
        local_148 = (void *)0x0;
        nn::os::InitializeMutex((MutexType *)(plVar8 + 0x14),false,0);
        nn::os::InitializeEvent((EventType *)(plVar8 + 0x18),0,0);
        nn::os::SignalEvent((EventType *)(plVar8 + 0x18));
        *param_1 = plVar8 + 4;
        param_1[1] = plVar8;
        if ((local_158 & 1) != 0) {
          (**(code **)(*plStack_140 + 0x18))(plStack_140,local_148,local_158 & 0xfffffffffffffffe,1)
          ;
        }
        if (local_180 != '\0') {
          FUN_01cfa44c(&local_178,local_170);
        }
        if ((local_1a0 & 1) != 0) {
          (**(code **)(*plStack_188 + 0x18))(plStack_188,local_190,local_1a0 & 0xfffffffffffffffe,1)
          ;
        }
        if ((local_280 & 1) != 0) {
          (**(code **)(*local_268 + 0x18))(local_268,local_270,local_280 & 0xfffffffffffffffe,1);
        }
        FUN_001fc7e8(&local_260);
        FUN_001fc7e8(&local_138);
      }
      if (local_78 != (long *)0x0) {
        plVar9 = local_78 + 1;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_00210ed4;
    }
  }
  plVar8 = *(long **)(_DAT_00000010 + 0x238);
  local_248 = (long *)FUN_01cf7e20();
  lStack_250 = 0;
  local_260 = 0;
  local_258 = (long *)0x0;
  FUN_00210170(local_1a8,0x290541);
  FUN_002123f4(&local_138,&local_260,0xe,"UserContext already disposed.",local_1a8);
  plVar9 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0xe8,8);
  puVar1 = PTR_DAT_047cbca0 + 0x10;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar8;
  *plVar9 = (long)puVar1;
  plVar9[1] = 0;
  FUN_006c4254(plVar9 + 4);
  plVar9[4] = (long)(PTR_DAT_047cbca8 + 0x10);
  *(undefined4 *)(plVar9 + 6) = local_138._0_4_;
  plVar9[10] = (long)plStack_118;
  plVar9[9] = local_120;
  plVar9[8] = lStack_128;
  plVar9[7] = (long)local_130;
  local_130 = (long *)0x0;
  lStack_128 = 0;
  local_120 = 0;
  *(undefined1 *)(plVar9 + 0xb) = 0;
  if (local_110 != '\0') {
    plVar9[0xc] = (long)local_108;
    plVar9[0xe] = lStack_f8;
    plVar9[0xd] = local_100;
    plVar8 = plVar9 + 0xd;
    plVar9[0xf] = local_f0;
    if (local_f0 == 0) {
      plVar9[0xc] = (long)plVar8;
    }
    else {
      *(long **)(*plVar8 + 0x10) = plVar8;
      local_108 = &local_100;
      local_100 = 0;
      local_f0 = 0;
    }
    *(undefined1 *)(plVar9 + 0xb) = 1;
  }
  plVar9[0x11] = lStack_e0;
  plVar9[0x10] = local_e8;
  plVar9[0x13] = (long)plStack_d0;
  plVar9[0x12] = (long)local_d8;
  local_e8 = 0;
  lStack_e0 = 0;
  local_d8 = (char *)0x0;
  nn::os::InitializeMutex((MutexType *)(plVar9 + 0x14),false,0);
  nn::os::InitializeEvent((EventType *)(plVar9 + 0x18),0,0);
  nn::os::SignalEvent((EventType *)(plVar9 + 0x18));
  *param_1 = plVar9 + 4;
  param_1[1] = plVar9;
  if ((local_e8 & 1) != 0) {
    (**(code **)(*plStack_d0 + 0x18))(plStack_d0,local_d8,local_e8 & 0xfffffffffffffffe,1);
  }
  if (local_110 != '\0') {
    FUN_01cfa44c(&local_108,local_100);
  }
  if (((ulong)local_130 & 1) != 0) {
    (**(code **)(*plStack_118 + 0x18))
              (plStack_118,local_120,(ulong)local_130 & 0xfffffffffffffffe,1);
  }
  FUN_01cfa44c(local_1a8,local_1a0);
  if ((local_260 & 1) != 0) {
    (**(code **)(*local_248 + 0x18))(local_248,lStack_250,local_260 & 0xfffffffffffffffe,1);
  }
LAB_00210ed4:
  if (local_68 != (long *)0x0) {
    plVar9 = local_68 + 1;
    do {
      lVar10 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


