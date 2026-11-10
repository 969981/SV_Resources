/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019100c0; name: FUN_019100c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019100c0(long *param_1,long *param_2,undefined4 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  char *pcVar24;
  byte *pbVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  undefined1 auVar31 [16];
  undefined8 *local_180;
  long **pplStack_178;
  undefined8 local_170;
  long *local_168;
  long *local_160;
  char *pcStack_158;
  undefined8 local_150;
  long *local_148;
  long local_48;
  
  puVar18 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar18 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar20 = __cxa_guard_acquire(&DAT_04865a38), iVar20 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar21 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar21 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = 0;
    if (*(long *)(lVar21 + 0x80) != 0) {
      lVar23 = *(long *)(lVar21 + *(long *)(lVar21 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  plVar27 = param_1 + 9;
  param_1[7] = 0;
  *param_1 = (long)&PTR_FUN_04569288;
  param_1[1] = lVar23;
  param_1[4] = (long)&PTR_LAB_045692c0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  FUN_00ddaef8(plVar27,&DAT_03c886bc,0);
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  memset(param_1 + 10,0,0x43);
  lVar8 = _UNK_03cab848;
  lVar7 = _DAT_03cab840;
  lVar23 = _UNK_03caa9a8;
  lVar21 = _DAT_03caa9a0;
  plVar29 = param_1 + 0x18;
  *plVar29 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  plVar30 = param_1 + 0x15;
  *plVar30 = 0;
  param_1[0x1f] = lVar23;
  param_1[0x1e] = lVar21;
  param_1[0x21] = lVar8;
  param_1[0x20] = lVar7;
  lVar7 = _DAT_03cab500;
  lVar23 = _UNK_03cab1e8;
  lVar21 = _DAT_03cab1e0;
  param_1[0x23] = _UNK_03cab508;
  param_1[0x22] = lVar7;
  param_1[0x25] = lVar23;
  param_1[0x24] = lVar21;
  lVar7 = _DAT_03caaca0;
  lVar23 = _UNK_03caa7e8;
  lVar21 = _DAT_03caa7e0;
  param_1[0x27] = _UNK_03caaca8;
  param_1[0x26] = lVar7;
  param_1[0x29] = lVar23;
  param_1[0x28] = lVar21;
  lVar7 = _DAT_03cab510;
  lVar23 = _UNK_03cab488;
  lVar21 = _DAT_03cab480;
  param_1[0x2b] = _UNK_03cab518;
  param_1[0x2a] = lVar7;
  param_1[0x2d] = lVar23;
  param_1[0x2c] = lVar21;
  lVar7 = _DAT_03cab790;
  lVar23 = _UNK_03caa5f8;
  lVar21 = _DAT_03caa5f0;
  param_1[0x2f] = _UNK_03cab798;
  param_1[0x2e] = lVar7;
  param_1[0x31] = lVar23;
  param_1[0x30] = lVar21;
  lVar15 = _UNK_03cac028;
  lVar14 = _DAT_03cac020;
  lVar13 = _UNK_03cabf78;
  lVar12 = _DAT_03cabf70;
  lVar23 = _UNK_03cab7a8;
  lVar21 = _DAT_03cab7a0;
  lVar9 = _UNK_03caa7f8;
  lVar8 = _DAT_03caa7f0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  param_1[0x1b] = 0;
  param_1[0x33] = lVar15;
  param_1[0x32] = lVar14;
  param_1[0x35] = lVar13;
  param_1[0x34] = lVar12;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x37] = lVar23;
  param_1[0x36] = lVar21;
  param_1[0x39] = lVar9;
  param_1[0x38] = lVar8;
  lVar17 = _UNK_03cac038;
  lVar16 = _DAT_03cac030;
  lVar21 = _DAT_03caafe0;
  param_1[0x3b] = _UNK_03caafe8;
  param_1[0x3a] = lVar21;
  param_1[0x3d] = lVar17;
  param_1[0x3c] = lVar16;
  lVar7 = _UNK_03caa618;
  lVar23 = _DAT_03caa610;
  lVar21 = _DAT_03caa600;
  param_1[0x3f] = _UNK_03caa608;
  param_1[0x3e] = lVar21;
  param_1[0x41] = lVar7;
  param_1[0x40] = lVar23;
  lVar11 = _UNK_03cabf88;
  lVar10 = _DAT_03cabf80;
  lVar21 = _DAT_03cabc30;
  param_1[0x43] = _UNK_03cabc38;
  param_1[0x42] = lVar21;
  param_1[0x45] = lVar11;
  param_1[0x44] = lVar10;
  lVar11 = _DAT_03cab7b0;
  lVar10 = _UNK_03cab668;
  lVar21 = _DAT_03cab660;
  param_1[0x47] = _UNK_03cab7b8;
  param_1[0x46] = lVar11;
  param_1[0x49] = lVar10;
  param_1[0x48] = lVar21;
  lVar11 = _DAT_03cabb10;
  lVar10 = _UNK_03caaab8;
  lVar21 = _DAT_03caaab0;
  param_1[0x4b] = _UNK_03cabb18;
  param_1[0x4a] = lVar11;
  param_1[0x4d] = lVar10;
  param_1[0x4c] = lVar21;
  lVar11 = _UNK_03cabb28;
  lVar10 = _DAT_03cabb20;
  lVar21 = _DAT_03caa620;
  param_1[0x4f] = _UNK_03caa628;
  param_1[0x4e] = lVar21;
  param_1[0x51] = lVar11;
  param_1[0x50] = lVar10;
  lVar11 = _DAT_03cabd40;
  lVar10 = _UNK_03cabc48;
  lVar21 = _DAT_03cabc40;
  param_1[0x53] = _UNK_03cabd48;
  param_1[0x52] = lVar11;
  param_1[0x55] = lVar10;
  param_1[0x54] = lVar21;
  lVar10 = _UNK_03cabf98;
  lVar21 = _DAT_03cabf90;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x57] = lVar10;
  param_1[0x56] = lVar21;
  param_1[0x59] = lVar15;
  param_1[0x58] = lVar14;
  lVar10 = _UNK_03cab3c8;
  lVar21 = _DAT_03cab3c0;
  param_1[0x5b] = lVar13;
  param_1[0x5a] = lVar12;
  param_1[0x5d] = lVar10;
  param_1[0x5c] = lVar21;
  lVar10 = _UNK_03caaff8;
  lVar21 = _DAT_03caaff0;
  param_1[0x5f] = lVar9;
  param_1[0x5e] = lVar8;
  param_1[0x61] = lVar10;
  param_1[0x60] = lVar21;
  lVar8 = _UNK_03cabd58;
  lVar21 = _DAT_03cabd50;
  param_1[99] = lVar17;
  param_1[0x62] = lVar16;
  param_1[0x65] = lVar8;
  param_1[100] = lVar21;
  lVar8 = _UNK_03cab8f8;
  lVar21 = _DAT_03cab8f0;
  param_1[0x67] = lVar7;
  param_1[0x66] = lVar23;
  param_1[0x69] = lVar8;
  param_1[0x68] = lVar21;
  lVar9 = _UNK_03cac118;
  lVar8 = _DAT_03cac110;
  lVar21 = _DAT_03caa8f0;
  param_1[0x6b] = _UNK_03caa8f8;
  param_1[0x6a] = lVar21;
  param_1[0x6d] = lVar9;
  param_1[0x6c] = lVar8;
  lVar7 = _DAT_03caa900;
  lVar23 = _UNK_03caa638;
  lVar21 = _DAT_03caa630;
  param_1[0x6f] = _UNK_03caa908;
  param_1[0x6e] = lVar7;
  param_1[0x71] = lVar23;
  param_1[0x70] = lVar21;
  lVar7 = _UNK_03cab498;
  lVar23 = _DAT_03cab490;
  lVar21 = _DAT_03caa730;
  param_1[0x73] = _UNK_03caa738;
  param_1[0x72] = lVar21;
  param_1[0x75] = lVar7;
  param_1[0x74] = lVar23;
  lVar7 = _DAT_03cab2b0;
  lVar23 = _UNK_03caacb8;
  lVar21 = _DAT_03caacb0;
  param_1[0x77] = _UNK_03cab2b8;
  param_1[0x76] = lVar7;
  param_1[0x79] = lVar23;
  param_1[0x78] = lVar21;
  lVar7 = _UNK_03cabe78;
  lVar23 = _DAT_03cabe70;
  lVar21 = _DAT_03cab520;
  param_1[0x7b] = _UNK_03cab528;
  param_1[0x7a] = lVar21;
  param_1[0x7d] = lVar7;
  param_1[0x7c] = lVar23;
  lVar7 = _DAT_03cab2c0;
  lVar23 = _UNK_03caae68;
  lVar21 = _DAT_03caae60;
  param_1[0x7f] = _UNK_03cab2c8;
  param_1[0x7e] = lVar7;
  param_1[0x81] = lVar23;
  param_1[0x80] = lVar21;
  lVar23 = _UNK_03caa648;
  lVar21 = _DAT_03caa640;
  param_1[0x83] = lVar9;
  param_1[0x82] = lVar8;
  param_1[0x85] = lVar23;
  param_1[0x84] = lVar21;
  lVar7 = _UNK_03cab008;
  lVar23 = _DAT_03cab000;
  lVar21 = _DAT_03caa800;
  param_1[0x87] = _UNK_03caa808;
  param_1[0x86] = lVar21;
  param_1[0x89] = lVar7;
  param_1[0x88] = lVar23;
  lVar7 = _DAT_03cac040;
  lVar23 = _UNK_03caada8;
  lVar21 = _DAT_03caada0;
  param_1[0x8b] = _UNK_03cac048;
  param_1[0x8a] = lVar7;
  param_1[0x8d] = lVar23;
  param_1[0x8c] = lVar21;
  lVar7 = _UNK_03cac058;
  lVar23 = _DAT_03cac050;
  lVar21 = _DAT_03caa910;
  param_1[0x8f] = _UNK_03caa918;
  param_1[0x8e] = lVar21;
  param_1[0x91] = lVar7;
  param_1[0x90] = lVar23;
  lVar8 = _UNK_03cab7c8;
  lVar7 = _DAT_03cab7c0;
  lVar23 = _UNK_03caaac8;
  lVar21 = _DAT_03caaac0;
  param_1[0xa9] = _UNK_03caaac8;
  param_1[0xa8] = lVar21;
  param_1[0x93] = lVar23;
  param_1[0x92] = lVar21;
  param_1[0x95] = lVar8;
  param_1[0x94] = lVar7;
  lVar7 = _DAT_03cabd60;
  lVar23 = _UNK_03cab1f8;
  lVar21 = _DAT_03cab1f0;
  param_1[0x97] = _UNK_03cabd68;
  param_1[0x96] = lVar7;
  param_1[0x99] = lVar23;
  param_1[0x98] = lVar21;
  lVar21 = _DAT_03cab7d0;
  param_1[0x9b] = _UNK_03cab7d8;
  param_1[0x9a] = lVar21;
  lVar21 = _DAT_03caa9b0;
  param_1[0x9d] = _UNK_03caa9b8;
  param_1[0x9c] = lVar21;
  lVar21 = _DAT_03cabd70;
  param_1[0x9f] = _UNK_03cabd78;
  param_1[0x9e] = lVar21;
  lVar21 = _DAT_03caa920;
  param_1[0xa1] = _UNK_03caa928;
  param_1[0xa0] = lVar21;
  lVar21 = _DAT_03cab0e0;
  param_1[0xa3] = _UNK_03cab0e8;
  param_1[0xa2] = lVar21;
  lVar21 = _DAT_03caabd0;
  param_1[0xa5] = _UNK_03caabd8;
  param_1[0xa4] = lVar21;
  lVar7 = _UNK_03cabc58;
  lVar23 = _DAT_03cabc50;
  lVar21 = _DAT_03caacc0;
  param_1[0xa7] = _UNK_03caacc8;
  param_1[0xa6] = lVar21;
  param_1[0xab] = lVar7;
  param_1[0xaa] = lVar23;
  lVar21 = _DAT_03caa9c0;
  param_1[0xad] = _UNK_03caa9c8;
  param_1[0xac] = lVar21;
  lVar21 = _DAT_03caa810;
  param_1[0xaf] = _UNK_03caa818;
  param_1[0xae] = lVar21;
  lVar21 = _DAT_03caaad0;
  param_1[0xb1] = _UNK_03caaad8;
  param_1[0xb0] = lVar21;
  auVar31 = NEON_fmov(0x3f800000,4);
  param_1[0xb3] = auVar31._8_8_;
  param_1[0xb2] = auVar31._0_8_;
  lVar21 = _DAT_03caaae0;
  param_1[0xb5] = _UNK_03caaae8;
  param_1[0xb4] = lVar21;
  lVar23 = *param_2;
  local_160 = (long *)0x0;
  pcStack_158 = (char *)0x0;
  FUN_00c43ef0(&local_160,lVar23 + 0x30);
  local_180 = (undefined8 *)0x0;
  pplStack_178 = (long **)0x0;
  lVar21 = 0;
  if (lVar23 != 0) {
    lVar21 = lVar23 + 0x28;
  }
  if (local_160[2] == lVar21) {
    FUN_00e29918(&local_180,&local_160);
  }
  plVar28 = local_160;
  if (local_160 != (long *)0x0) {
    plVar22 = local_160 + 3;
    do {
      sVar3 = (short)*plVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar6) {
        *(short *)plVar22 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_160 + 0x1c);
      do {
        iVar20 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar20 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar20 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_48 = *plVar28;
        FUN_00c44438(lVar21 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_01910684;
  }
  FUN_00dbd160(param_1 + 6,&local_180);
  puVar19 = local_180;
  if (local_180 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_180 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_180 + 0x1c);
      do {
        iVar20 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar20 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar20 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar21 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar21;
        local_160 = (long *)*puVar19;
        FUN_00c44438(lVar21 + 0x8040,&local_160);
      }
    }
    else if (sVar3 == 0) {
LAB_01910684:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined4 *)(param_1 + 8) = *param_3;
  plVar28 = *(long **)(param_3 + 2);
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  plVar22 = (long *)*plVar27;
  *plVar27 = (long)plVar28;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))();
  }
  plVar27 = (long *)&DAT_cbf29ce484222645;
  memcpy(param_1 + 10,param_3 + 4,0x48);
  if ((char)param_1[0x12] == '\0') {
    snprintf((char *)&local_160,0x100,
             "world/obj_template/parts/raid/field_raid_jewelry_%02d_/field_raid_jewelry_%02d.trsot",
             (int)param_1[0xe],(int)param_1[0xe]);
    local_180 = (undefined8 *)&DAT_cbf29ce484222645;
    if ((byte)local_160 != 0) {
      local_180 = (undefined8 *)&DAT_cbf29ce484222645;
      pbVar25 = (byte *)((ulong)&local_160 | 1);
      bVar4 = (byte)local_160;
      do {
        local_180 = (undefined8 *)(((ulong)local_180 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar25;
        pbVar25 = pbVar25 + 1;
      } while (bVar4 != 0);
    }
    local_170 = 0xff;
    local_168 = (long *)0x0;
    pplStack_178 = &local_160;
    FUN_01050078(&local_48,&local_180);
    plVar28 = (long *)*plVar30;
    *plVar30 = 0;
    if (plVar28 != (long *)0x0) {
      lVar21 = plVar28[6];
      psVar1 = (short *)(lVar21 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*plVar28 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_0191070c;
    }
    lVar21 = local_48;
    local_48 = 0;
    *plVar30 = lVar21;
    plVar30 = local_168;
  }
  else {
    local_160 = (long *)0xcaf6d37bf955ebd7;
    pcStack_158 = 
    "world/obj_template/parts/raid/field_raid_jewelry_kwm_/field_raid_jewelry_kwm.trsot";
    local_150 = 0x52;
    local_148 = (long *)0x0;
    FUN_01050078(&local_180,&local_160);
    plVar28 = (long *)*plVar30;
    *plVar30 = 0;
    if (plVar28 != (long *)0x0) {
      lVar21 = plVar28[6];
      psVar1 = (short *)(lVar21 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*plVar28 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_0191070c;
    }
    puVar19 = local_180;
    local_180 = (undefined8 *)0x0;
    *plVar30 = (long)puVar19;
    plVar30 = local_148;
  }
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 0x20))();
  }
  if (*(char *)((long)param_1 + 0x92) == '\0') goto LAB_01910618;
  if ((int)param_1[8] == 0) {
    uVar26 = 0x77;
    pcVar24 = 
    "world/obj_template/effect/field_raid_jewel_distant_view00_objtemp_/field_raid_jewel_distant_view00_objtemp.trsot"
    ;
    do {
      pcVar24 = pcVar24 + 1;
      plVar27 = (long *)(((ulong)plVar27 ^ uVar26) * 0x100000001b3);
      uVar26 = (ulong)(byte)*pcVar24;
    } while (*pcVar24 != 0);
    pcStack_158 = 
    "world/obj_template/effect/field_raid_jewel_distant_view00_objtemp_/field_raid_jewel_distant_view00_objtemp.trsot"
    ;
    local_150 = 0x70;
    local_148 = (long *)0x0;
    local_160 = plVar27;
    FUN_01050078(&local_180,&local_160);
    plVar27 = (long *)*plVar29;
    *plVar29 = 0;
    if (plVar27 != (long *)0x0) {
      lVar21 = plVar27[6];
      psVar1 = (short *)(lVar21 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01910700:
      if (sVar3 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*plVar27 + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_0191070c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  else {
    uVar26 = 0x77;
    pcVar24 = 
    "world/obj_template/effect/field_raid_jewel_distant_view01_objtemp_/field_raid_jewel_distant_view01_objtemp.trsot"
    ;
    do {
      pcVar24 = pcVar24 + 1;
      plVar27 = (long *)(((ulong)plVar27 ^ uVar26) * 0x100000001b3);
      uVar26 = (ulong)(byte)*pcVar24;
    } while (*pcVar24 != 0);
    pcStack_158 = 
    "world/obj_template/effect/field_raid_jewel_distant_view01_objtemp_/field_raid_jewel_distant_view01_objtemp.trsot"
    ;
    local_150 = 0x70;
    local_148 = (long *)0x0;
    local_160 = plVar27;
    FUN_01050078(&local_180,&local_160);
    plVar27 = (long *)*plVar29;
    *plVar29 = 0;
    if (plVar27 != (long *)0x0) {
      lVar21 = plVar27[6];
      psVar1 = (short *)(lVar21 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_01910700;
    }
  }
  puVar19 = local_180;
  local_180 = (undefined8 *)0x0;
  *plVar29 = (long)puVar19;
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x20))();
  }
LAB_01910618:
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}


