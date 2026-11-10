/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00baf670; name: FUN_00baf670
 */


ulong FUN_00baf670(ulong param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  FILE *pFVar12;
  void *pvVar13;
  undefined8 local_130;
  size_t local_128;
  void *local_120;
  undefined8 local_118;
  size_t local_110;
  void *local_108;
  uint local_100;
  char *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined **local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined1 local_51;
  
  iVar7 = (int)param_1;
  if (3000000 < (int)param_2) {
    local_100 = 3;
    local_f0 = 0x44;
    local_f8 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/stubs/common.cc"
    ;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = (char *)0x0;
    std::string::append((char *)&local_e8);
    snprintf((char *)&local_d0,0x80,"%d.%d.%d",param_2 / 1000000,
             param_2 / 1000 + (int)(((ulong)param_2 * 0x10624dd3) / 0xfa0000000000) * -1000,
             param_2 % 1000);
    local_51 = 0;
    sVar8 = strlen((char *)&local_d0);
    if (0xffffffffffffffef < sVar8) goto LAB_00bb02f4;
    if (sVar8 < 0x17) {
      local_118 = CONCAT71(local_118._1_7_,(char)((int)sVar8 << 1));
      pvVar13 = (void *)((ulong)&local_118 | 1);
      if (sVar8 != 0) goto LAB_00baf760;
    }
    else {
      uVar9 = sVar8 + 0x10 & 0xfffffffffffffff0;
      lVar10 = tpidr_el0;
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      pvVar13 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar9,8);
      local_118 = uVar9 | 1;
      local_110 = sVar8;
      local_108 = pvVar13;
LAB_00baf760:
      memcpy(pvVar13,&local_d0,sVar8);
    }
    *(undefined1 *)((long)pvVar13 + sVar8) = 0;
    pvVar13 = local_108;
    if ((local_118 & 1) == 0) {
      pvVar13 = (void *)((long)&local_118 + 1);
    }
    std::string::append((char *)&local_e8,(ulong)pvVar13);
    std::string::append((char *)&local_e8);
    snprintf((char *)&local_d0,0x80,"%d.%d.%d",3,0,0);
    local_51 = 0;
    sVar8 = strlen((char *)&local_d0);
    if (0xffffffffffffffef < sVar8) goto LAB_00bb02fc;
    if (sVar8 < 0x17) {
      local_130 = CONCAT71(local_130._1_7_,(char)((int)sVar8 << 1));
      pvVar13 = (void *)((ulong)&local_130 | 1);
      if (sVar8 != 0) goto LAB_00baf7f8;
    }
    else {
      uVar9 = sVar8 + 0x10 & 0xfffffffffffffff0;
      lVar10 = tpidr_el0;
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      pvVar13 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar9,8);
      local_130 = uVar9 | 1;
      local_128 = sVar8;
      local_120 = pvVar13;
LAB_00baf7f8:
      memcpy(pvVar13,&local_d0,sVar8);
    }
    *(undefined1 *)((long)pvVar13 + sVar8) = 0;
    pvVar13 = local_120;
    if ((local_130 & 1) == 0) {
      pvVar13 = (void *)((long)&local_130 + 1);
    }
    std::string::append((char *)&local_e8,(ulong)pvVar13);
    std::string::append((char *)&local_e8);
    std::string::append((char *)&local_e8);
    std::string::append((char *)&local_e8);
    if (local_100 != 3) {
      if (DAT_0483a6b0 != 2) {
        local_c0 = 0;
        local_d0 = &PTR_LAB_0455a4d8;
        puStack_c8 = &LAB_00bb0700;
        if (DAT_0483a6b0 != 2) {
          do {
            lVar10 = DAT_0483a6b0;
            if (DAT_0483a6b0 != 0) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(0x483a6b0,0x10);
            if (bVar3) {
              DAT_0483a6b0 = 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          DataMemoryBarrier(2,3);
          if (lVar10 == 0) {
            (*(code *)PTR_FUN_0455a4e8)(&local_d0);
            DAT_0483a6b0 = 2;
          }
          else {
            while (lVar10 == 1) {
              sched_yield();
              lVar10 = DAT_0483a6b0;
            }
          }
        }
      }
      uVar4 = DAT_0483a6b8;
      FUN_00bb1344(DAT_0483a6b8);
      FUN_00bb14b8(uVar4);
    }
    pFVar12 = *(FILE **)PTR_stderr_047cb8b8;
    pcVar1 = local_d8;
    if ((local_e8 & 1) == 0) {
      pcVar1 = (char *)((long)&local_e8 + 1);
    }
    fprintf(pFVar12,"[libprotobuf %s %s:%d] %s\n",(&PTR_DAT_0455a4a8)[local_100],local_f8,local_f0,
            pcVar1);
    uVar5 = fflush(pFVar12);
    pvVar13 = local_120;
    param_1 = (ulong)uVar5;
    if (local_100 == 3) goto LAB_00bb0304;
    if (((local_130 & 1) != 0) && (local_120 != (void *)0x0)) {
      lVar10 = tpidr_el0;
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        param_1 = (**(code **)(*plVar11 + 0x18))(plVar11,pvVar13,0,8);
      }
      else {
        param_1 = FUN_00c48fe8(plVar11,pvVar13,0,8);
      }
    }
    pvVar13 = local_108;
    if (((local_118 & 1) != 0) && (local_108 != (void *)0x0)) {
      lVar10 = tpidr_el0;
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        param_1 = (**(code **)(*plVar11 + 0x18))(plVar11,pvVar13,0,8);
      }
      else {
        param_1 = FUN_00c48fe8(plVar11,pvVar13,0,8);
      }
    }
    pcVar1 = local_d8;
    if (((local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
      lVar10 = tpidr_el0;
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        param_1 = (**(code **)(*plVar11 + 0x18))(plVar11,pcVar1,0,8);
      }
      else {
        param_1 = FUN_00c48fe8(plVar11,pcVar1,0,8);
      }
    }
  }
  if (2999999 < iVar7) {
    return param_1;
  }
  local_d8 = (char *)0x0;
  local_100 = 3;
  local_f0 = 0x4f;
  local_f8 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/stubs/common.cc"
  ;
  local_e8 = 0;
  uStack_e0 = 0;
  std::string::append((char *)&local_e8);
  snprintf((char *)&local_d0,0x80,"%d.%d.%d",iVar7 / 1000000,(iVar7 / 1000) % 1000,iVar7 % 1000);
  local_51 = 0;
  sVar8 = strlen((char *)&local_d0);
  if (0xffffffffffffffef < sVar8) {
LAB_00bb02f4:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_118 = CONCAT71(local_118._1_7_,(char)((int)sVar8 << 1));
    pvVar13 = (void *)((ulong)&local_118 | 1);
    if (sVar8 != 0) goto LAB_00bafb18;
  }
  else {
    uVar9 = sVar8 + 0x10 & 0xfffffffffffffff0;
    lVar10 = tpidr_el0;
    plVar11 = *(long **)(lVar10 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    pvVar13 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar9,8);
    local_118 = uVar9 | 1;
    local_110 = sVar8;
    local_108 = pvVar13;
LAB_00bafb18:
    memcpy(pvVar13,&local_d0,sVar8);
  }
  *(undefined1 *)((long)pvVar13 + sVar8) = 0;
  pvVar13 = local_108;
  if ((local_118 & 1) == 0) {
    pvVar13 = (void *)((long)&local_118 + 1);
  }
  std::string::append((char *)&local_e8,(ulong)pvVar13);
  std::string::append((char *)&local_e8);
  snprintf((char *)&local_d0,0x80,"%d.%d.%d",3,0,0);
  local_51 = 0;
  sVar8 = strlen((char *)&local_d0);
  if (0xffffffffffffffef < sVar8) {
LAB_00bb02fc:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_130 = CONCAT71(local_130._1_7_,(char)((int)sVar8 << 1));
    pvVar13 = (void *)((ulong)&local_130 | 1);
    if (sVar8 != 0) goto LAB_00bafbb0;
  }
  else {
    uVar9 = sVar8 + 0x10 & 0xfffffffffffffff0;
    lVar10 = tpidr_el0;
    plVar11 = *(long **)(lVar10 + 0x30);
    if (plVar11 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar11 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    pvVar13 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar9,8);
    local_130 = uVar9 | 1;
    local_128 = sVar8;
    local_120 = pvVar13;
LAB_00bafbb0:
    memcpy(pvVar13,&local_d0,sVar8);
  }
  *(undefined1 *)((long)pvVar13 + sVar8) = 0;
  pvVar13 = local_120;
  if ((local_130 & 1) == 0) {
    pvVar13 = (void *)((long)&local_130 + 1);
  }
  std::string::append((char *)&local_e8,(ulong)pvVar13);
  std::string::append((char *)&local_e8);
  std::string::append((char *)&local_e8);
  std::string::append((char *)&local_e8);
  if (local_100 != 3) {
    if (DAT_0483a6b0 != 2) {
      local_c0 = 0;
      local_d0 = &PTR_LAB_0455a4d8;
      puStack_c8 = &LAB_00bb0700;
      if (DAT_0483a6b0 != 2) {
        do {
          lVar10 = DAT_0483a6b0;
          if (DAT_0483a6b0 != 0) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0x483a6b0,0x10);
          if (bVar3) {
            DAT_0483a6b0 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar10 == 0) {
          (*(code *)PTR_FUN_0455a4e8)(&local_d0);
          DAT_0483a6b0 = 2;
        }
        else {
          while (lVar10 == 1) {
            sched_yield();
            lVar10 = DAT_0483a6b0;
          }
        }
      }
    }
    uVar4 = DAT_0483a6b8;
    FUN_00bb1344(DAT_0483a6b8);
    FUN_00bb14b8(uVar4);
  }
  pFVar12 = *(FILE **)PTR_stderr_047cb8b8;
  pcVar1 = local_d8;
  if ((local_e8 & 1) == 0) {
    pcVar1 = (char *)((long)&local_e8 + 1);
  }
  fprintf(pFVar12,"[libprotobuf %s %s:%d] %s\n",(&PTR_DAT_0455a4a8)[local_100],local_f8,local_f0,
          pcVar1);
  uVar5 = fflush(pFVar12);
  pvVar13 = local_120;
  uVar9 = (ulong)uVar5;
  if (local_100 != 3) {
    if (((local_130 & 1) != 0) && (local_120 != (void *)0x0)) {
      lVar10 = tpidr_el0;
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        uVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,pvVar13,0,8);
      }
      else {
        uVar9 = FUN_00c48fe8(plVar11,pvVar13,0,8);
      }
    }
    pvVar13 = local_108;
    if (((local_118 & 1) != 0) && (local_108 != (void *)0x0)) {
      lVar10 = tpidr_el0;
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        uVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,pvVar13,0,8);
      }
      else {
        uVar9 = FUN_00c48fe8(plVar11,pvVar13,0,8);
      }
    }
    pcVar1 = local_d8;
    if (((local_e8 & 1) != 0) && (local_d8 != (char *)0x0)) {
      lVar10 = tpidr_el0;
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        uVar9 = (**(code **)(*plVar11 + 0x18))(plVar11,pcVar1,0,8);
      }
      else {
        uVar9 = FUN_00c48fe8(plVar11,pcVar1,0,8);
      }
    }
    return uVar9;
  }
LAB_00bb0304:
                    /* WARNING: Subroutine does not return */
  abort();
}


