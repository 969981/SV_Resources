/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0122a3ac; name: FUN_0122a3ac
 */


void FUN_0122a3ac(long *param_1)

{
  char *__s;
  short *psVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  undefined8 **ppuVar16;
  short sVar17;
  long lVar18;
  byte *pbVar19;
  long lVar20;
  undefined8 *puVar21;
  int *piVar22;
  uint *puVar23;
  ushort *puVar24;
  ulong uVar25;
  long *plVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  long *plVar29;
  float fVar30;
  float fVar31;
  undefined8 *local_138;
  undefined8 uStack_130;
  float local_128;
  undefined8 local_120;
  char local_118;
  undefined4 uStack_117;
  undefined1 uStack_113;
  undefined2 uStack_112;
  code *local_110;
  undefined1 *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  float local_f0;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  char *pcStack_88;
  size_t local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_38;
  
  plVar14 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar14 != (long *)0x0) {
    lVar18 = plVar14[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar17 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar17 == 0) goto LAB_0122accc;
  }
  piVar22 = (int *)param_1[10];
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (*(ushort *)((long)piVar22 - (long)*piVar22) < 7) {
LAB_0122ac58:
    if (((code *)param_1[0xe] != (code *)0x0) && ((*(byte *)((long)param_1 + 100) & 1) != 0)) {
      local_120._0_4_ = 1;
      local_90 = (undefined1 *)CONCAT44(local_90._4_4_,(int)param_1[9]);
      (*(code *)param_1[0xe])(param_1 + 0x12,&local_120,&local_90);
    }
    return;
  }
  puVar23 = (uint *)((long)piVar22 + (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[3]);
  puVar23 = (uint *)((long)puVar23 + (ulong)*puVar23);
  uVar12 = *(uint *)(param_1 + 0xc);
  if (*puVar23 <= uVar12) goto LAB_0122ac58;
  puVar23 = puVar23 + (ulong)uVar12 + 1;
  uVar2 = *puVar23;
  *(uint *)(param_1 + 0xc) = uVar12 + 1;
  piVar22 = (int *)((long)puVar23 + (ulong)uVar2);
  puVar24 = (ushort *)((long)piVar22 - (long)*piVar22);
  lVar18 = -(long)*piVar22;
  uVar4 = *puVar24;
  if (uVar4 < 9) {
    fVar31 = 0.0;
LAB_0122a518:
    if (6 < uVar4) goto LAB_0122a520;
LAB_0122b074:
    lVar18 = 0;
  }
  else {
    if ((ulong)puVar24[4] == 0) {
      fVar31 = 0.0;
    }
    else {
      fVar31 = *(float *)((long)piVar22 + (ulong)puVar24[4]);
    }
    if (((10 < uVar4) && ((ulong)puVar24[5] != 0)) &&
       (0.0 < *(float *)((long)piVar22 + (ulong)puVar24[5]))) {
      if (((DAT_048404b0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_048404b0), iVar13 != 0)) {
        uStack_117 = 0x6d6f646e;
        uStack_113 = 0;
        local_120._0_4_ = CONCAT31(s__dev_urandom_03c1765b._0_3_,0x18);
        local_120._4_4_ = s__dev_urandom_03c1765b._3_4_;
        local_118 = s__dev_urandom_03c1765b[7];
        std::random_device::random_device((random_device *)&DAT_0483fae8,(string *)&local_120);
        if (((uint)local_120 & 1) != 0) {
          operator_delete(local_110);
        }
        FUN_00100190(PTR__random_device_047dcb28,&DAT_0483fae8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048404b0);
      }
      if (((DAT_048404b8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_048404b8), iVar13 != 0)) {
        uVar12 = std::random_device::operator()((random_device *)&DAT_0483fae8);
        iVar13 = (int)((ulong)uVar12 * 2 + (ulong)uVar12 >> 0x20);
        DAT_048404d0 = uVar12 + (iVar13 + (uVar12 - iVar13 >> 1) >> 0x1e) * -0x7fffffff;
        if (DAT_048404d0 == 0) {
          DAT_048404d0 = 1;
        }
        __cxa_guard_release(&DAT_048404b8);
      }
      uVar12 = (DAT_048404d0 % 0xadc8) * 0xbc8f;
      iVar13 = 0x7fffffff;
      if ((DAT_048404d0 / 0xadc8) * 0xd47 <= uVar12) {
        iVar13 = 0;
      }
      DAT_048404d0 = iVar13 + uVar12 + (DAT_048404d0 / 0xadc8) * -0xd47;
      puVar24 = (ushort *)((long)piVar22 - (long)*piVar22);
      fVar30 = 0.0;
      lVar18 = -(long)*piVar22;
      uVar4 = *puVar24;
      if ((10 < uVar4) && (uVar25 = (ulong)puVar24[5], uVar25 != 0)) {
        fVar30 = *(float *)((long)piVar22 + uVar25);
      }
      fVar31 = fVar31 + ((float)(DAT_048404d0 - 1) * 4.656613e-10 + 0.0) * fVar30;
      goto LAB_0122a518;
    }
LAB_0122a520:
    uVar25 = (ulong)*(ushort *)((long)piVar22 + lVar18 + 6);
    if (uVar25 == 0) goto LAB_0122b074;
    puVar23 = (uint *)((long)piVar22 + uVar25);
    lVar18 = (long)puVar23 + (ulong)*puVar23;
  }
  __s = (char *)(lVar18 + 4);
  puVar27 = &DAT_cbf29ce484222645;
  local_80 = strlen(__s);
  bVar3 = *(byte *)(lVar18 + 4);
  if (bVar3 != 0) {
    pbVar19 = (byte *)(lVar18 + 5);
    do {
      puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (bVar3 != 0);
  }
  local_78 = (long *)0x0;
  local_90 = puVar27;
  pcStack_88 = __s;
  if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
     (uVar25 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar25 == 0)) {
LAB_0122a5a0:
    plVar26 = (long *)param_1[8];
    (**(code **)(*param_1 + 0x18))(&local_120,param_1);
    puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    plVar14 = (long *)0x0;
    if (param_1 != (long *)0x0) {
      plVar14 = param_1 + 5;
    }
    if ((long *)puVar21[2] == plVar14) {
      FUN_0122c1d0(&local_a0,&local_120);
      puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
    }
    if (puVar21 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar21 + 3);
      do {
        sVar17 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar22 = (int *)((long)puVar21 + 0x1c);
        do {
          iVar13 = *piVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar6) {
            *piVar22 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_138 = (undefined8 *)*puVar21;
          FUN_00c44438(lVar18 + 0x8040,&local_138);
        }
      }
      else if (sVar17 == 0) goto LAB_0122ae0c;
    }
    if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_0122bcb4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar26;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    plVar14 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,400,0x10);
    if (plVar14 == (long *)0x0) {
LAB_0122bcb8:
      (**(code **)(*plVar26 + 0xe8))(plVar26);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_0122be0c(&local_70,&local_a0);
    puVar8 = PTR_DAT_047d66f8;
    plVar14[2] = 0;
    *(undefined4 *)(plVar14 + 3) = 0;
    *plVar14 = (long)(puVar8 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    puVar8 = PTR_DAT_047d8c78;
    if (lVar15 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = 0;
      if (*(long *)(lVar15 + 0x80) != 0) {
        lVar20 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8);
      }
    }
    *plVar14 = (long)(PTR_DAT_047d8c78 + 0x10);
    plVar14[1] = lVar20;
    plVar14[4] = (long)(puVar8 + 0x88);
    plVar29 = plVar14 + 5;
    *plVar29 = (long)(puVar8 + 0xd8);
    plVar14[7] = 0;
    plVar14[6] = 0;
    FUN_00d1a3f4(plVar14 + 6,plVar29);
    puVar9 = PTR_DAT_047dcb88;
    *plVar14 = (long)(PTR_DAT_047dcb88 + 0x10);
    plVar14[4] = (long)(puVar9 + 0x90);
    puVar8 = PTR_LAB_047dcae8;
    *plVar29 = (long)(puVar9 + 0xe0);
    puVar10 = PTR_LAB_047dcaf8;
    puVar9 = PTR_LAB_047dcaf0;
    plVar14[8] = (long)puVar8;
    plVar14[9] = (long)puVar9;
    puVar8 = PTR_LAB_047dcb00;
    plVar14[0xc] = (long)((double)fVar31 * 1000000000.0);
    plVar14[10] = (long)puVar10;
    plVar14[0xb] = (long)puVar8;
    plVar14[0x1d] = 0;
    plVar14[0x18] = 0;
    plVar14[0x19] = 0;
    plVar14[0x1a] = 0;
    plVar14[0x1b] = 0;
    plVar14[0x1c] = 0;
    FUN_0122be0c(plVar14 + 0x1c,&local_70);
    plVar14[0x28] = 0;
    *(undefined1 *)(plVar14 + 0x2a) = 0;
    plVar14[0x2b] = 0;
    plVar14[0x18] = (long)&LAB_020e44b8;
    plVar14[0x19] = (long)&LAB_020e459c;
    *(undefined4 *)((long)plVar14 + 0x16c) = 1;
    plVar14[0x1a] = (long)&LAB_020e46ac;
    plVar14[0x1b] = (long)&LAB_020e46c0;
    nn::os::InitializeLightEvent(plVar14 + 0x2c,0,1);
    plVar14[0x2e] = 0;
    *(undefined4 *)((long)plVar14 + 0x184) = 1;
    nn::os::InitializeLightEvent(plVar14 + 0x2f,0,1);
    if (((*PTR_DAT_047dcb08 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_047dcb08), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047dcb98,PTR_DAT_047dcb10,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dcb08);
    }
    uVar28 = *(undefined8 *)PTR_DAT_047dcb10;
    *(undefined8 *)PTR_DAT_047dcb18 = uVar28;
    (**(code **)(*plVar14 + 0x18))(&local_120,plVar14);
    puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
    local_138 = (undefined8 *)0x0;
    uStack_130 = 0;
    if ((long *)puVar21[2] == plVar29) {
      FUN_01227cf4(&local_138,&local_120);
      puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
    }
    if (puVar21 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar21 + 3);
      do {
        sVar17 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar22 = (int *)((long)puVar21 + 0x1c);
        do {
          iVar13 = *piVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar6) {
            *piVar22 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_38 = *puVar21;
          FUN_00c44438(lVar15 + 0x8040,&local_38);
        }
      }
      else if (sVar17 == 0) goto LAB_0122ae0c;
    }
    local_120._0_4_ = 0;
    local_120._4_4_ = 0;
    local_118 = '\0';
    uStack_117 = 0;
    uStack_113 = 0;
    uStack_112 = 0;
    FUN_01228018(&local_120,&local_138);
    FUN_012283e8(uVar28,plVar14 + 0x29,&local_120,PTR_FUN_047dcb20);
    puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
    if (puVar21 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar21 + 3);
      do {
        sVar17 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar22 = (int *)((long)puVar21 + 0x1c);
        do {
          iVar13 = *piVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar6) {
            *piVar22 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_38 = *puVar21;
          FUN_00c44438(lVar15 + 0x8040,&local_38);
        }
      }
      else if (sVar17 == 0) goto LAB_0122ae0c;
    }
    puVar21 = local_138;
    if (local_138 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_138 + 3);
      do {
        sVar17 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar22 = (int *)((long)local_138 + 0x1c);
        do {
          iVar13 = *piVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar6) {
            *piVar22 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_38 = *puVar21;
          FUN_00c44438(lVar15 + 0x8040,&local_38);
        }
      }
      else if (sVar17 == 0) goto LAB_0122ae0c;
    }
    puVar21 = local_70;
    puVar8 = PTR_DAT_047dcb90;
    *plVar14 = (long)(PTR_DAT_047dcb90 + 0x10);
    plVar14[4] = (long)(puVar8 + 0x90);
    plVar14[5] = (long)(puVar8 + 0xe0);
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar17 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar22 = (int *)((long)local_70 + 0x1c);
        do {
          iVar13 = *piVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar6) {
            *piVar22 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar15;
          local_120._0_4_ = (uint)*puVar21;
          local_120._4_4_ = (undefined4)((ulong)*puVar21 >> 0x20);
          FUN_00c44438(lVar15 + 0x8040,&local_120);
        }
      }
      else if (sVar17 == 0) goto LAB_0122ae0c;
    }
    *(undefined4 *)(plVar14 + 3) = 0x100190;
    plVar14[1] = (long)plVar26;
    plVar14[2] = (long)plVar14;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    lVar18 = plVar14[6];
    if (*(long *)(lVar18 + 0x10) == 0) {
LAB_0122bce8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar17 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar17 == 0) {
      uVar28 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar28;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar17 == -1) {
LAB_0122bd08:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar26 = (long *)param_1[0x1f];
    param_1[0x1f] = 0;
    if (plVar26 != (long *)0x0) {
      lVar18 = plVar26[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar17 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar26 + 0x50))();
      }
      else if (sVar17 == 0) {
LAB_0122accc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    param_1[0x1f] = (long)plVar14;
    if (local_a0 == (undefined8 *)0x0) goto LAB_0122a8b8;
    psVar1 = (short *)(local_a0 + 3);
    do {
      sVar17 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar17 != 1) {
LAB_0122ae08:
      if (sVar17 == 0) {
LAB_0122ae0c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      goto LAB_0122a8b8;
    }
    piVar22 = (int *)((long)local_a0 + 0x1c);
    do {
      iVar13 = *piVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar6) {
        *piVar22 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0122b2f8:
    puVar21 = local_a0;
    if (iVar13 == -1) goto LAB_0122a8b8;
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    ppuVar16 = (undefined8 **)&local_120;
    lVar18 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar18;
    local_120._0_4_ = (uint)*puVar21;
    local_120._4_4_ = (undefined4)((ulong)*puVar21 >> 0x20);
  }
  else {
    iVar13 = *(int *)((long)piVar22 + uVar25);
    if (iVar13 == 2) {
      uVar11 = (*(code *)param_1[0x20])(param_1 + 0x24,&local_90,param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x1e) = uVar11;
      plVar26 = (long *)param_1[8];
      (**(code **)(*param_1 + 0x18))(&local_120,param_1);
      puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      plVar14 = (long *)0x0;
      if (param_1 != (long *)0x0) {
        plVar14 = param_1 + 5;
      }
      if ((long *)puVar21[2] == plVar14) {
        FUN_0122c1d0(&local_a0,&local_120);
        puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
      }
      if (puVar21 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar21 + 3);
        do {
          sVar17 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar22 = (int *)((long)puVar21 + 0x1c);
          do {
            iVar13 = *piVar22;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar6) {
              *piVar22 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_138 = (undefined8 *)*puVar21;
            FUN_00c44438(lVar18 + 0x8040,&local_138);
          }
        }
        else if (sVar17 == 0) goto LAB_0122ae0c;
      }
      if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar18 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_0122bcb4;
      *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar26;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
      plVar14 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,400,0x10);
      if (plVar14 == (long *)0x0) goto LAB_0122bcb8;
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      FUN_0122be0c(&local_70,&local_a0);
      puVar8 = PTR_DAT_047d66f8;
      plVar14[2] = 0;
      *(undefined4 *)(plVar14 + 3) = 0;
      *plVar14 = (long)(puVar8 + 0x10);
      if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar15 = nn::os::GetTlsValue(DAT_04865a30);
      puVar8 = PTR_DAT_047d8c78;
      if (lVar15 == 0) {
        lVar20 = 0;
      }
      else {
        lVar20 = 0;
        if (*(long *)(lVar15 + 0x80) != 0) {
          lVar20 = *(long *)(lVar15 + *(long *)(lVar15 + 0x80) * 8 + -8);
        }
      }
      *plVar14 = (long)(PTR_DAT_047d8c78 + 0x10);
      plVar14[1] = lVar20;
      plVar14[4] = (long)(puVar8 + 0x88);
      plVar29 = plVar14 + 5;
      *plVar29 = (long)(puVar8 + 0xd8);
      plVar14[7] = 0;
      plVar14[6] = 0;
      FUN_00d1a3f4(plVar14 + 6,plVar29);
      puVar9 = PTR_DAT_047dcb88;
      *plVar14 = (long)(PTR_DAT_047dcb88 + 0x10);
      plVar14[4] = (long)(puVar9 + 0x90);
      puVar8 = PTR_LAB_047dcae8;
      *plVar29 = (long)(puVar9 + 0xe0);
      puVar10 = PTR_LAB_047dcaf8;
      puVar9 = PTR_LAB_047dcaf0;
      plVar14[8] = (long)puVar8;
      plVar14[9] = (long)puVar9;
      puVar8 = PTR_LAB_047dcb00;
      plVar14[0xc] = (long)((double)fVar31 * 1000000000.0);
      plVar14[10] = (long)puVar10;
      plVar14[0xb] = (long)puVar8;
      plVar14[0x1d] = 0;
      plVar14[0x18] = 0;
      plVar14[0x19] = 0;
      plVar14[0x1a] = 0;
      plVar14[0x1b] = 0;
      plVar14[0x1c] = 0;
      FUN_0122be0c(plVar14 + 0x1c,&local_70);
      plVar14[0x28] = 0;
      *(undefined1 *)(plVar14 + 0x2a) = 0;
      plVar14[0x2b] = 0;
      plVar14[0x18] = (long)&LAB_020e4918;
      plVar14[0x19] = (long)&LAB_020e49fc;
      *(undefined4 *)((long)plVar14 + 0x16c) = 1;
      plVar14[0x1a] = (long)&LAB_020e4b0c;
      plVar14[0x1b] = (long)&LAB_020e4b20;
      nn::os::InitializeLightEvent(plVar14 + 0x2c,0,1);
      plVar14[0x2e] = 0;
      *(undefined4 *)((long)plVar14 + 0x184) = 1;
      nn::os::InitializeLightEvent(plVar14 + 0x2f,0,1);
      if (((*PTR_DAT_047dcb08 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047dcb08), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047dcb98,PTR_DAT_047dcb10,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dcb08);
      }
      uVar28 = *(undefined8 *)PTR_DAT_047dcb10;
      *(undefined8 *)PTR_DAT_047dcb18 = uVar28;
      (**(code **)(*plVar14 + 0x18))(&local_120,plVar14);
      puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
      local_138 = (undefined8 *)0x0;
      uStack_130 = 0;
      if ((long *)puVar21[2] == plVar29) {
        FUN_01227cf4(&local_138,&local_120);
        puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
      }
      if (puVar21 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar21 + 3);
        do {
          sVar17 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar22 = (int *)((long)puVar21 + 0x1c);
          do {
            iVar13 = *piVar22;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar6) {
              *piVar22 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_38 = *puVar21;
            FUN_00c44438(lVar15 + 0x8040,&local_38);
          }
        }
        else if (sVar17 == 0) goto LAB_0122ae0c;
      }
      local_120._0_4_ = 0;
      local_120._4_4_ = 0;
      local_118 = '\0';
      uStack_117 = 0;
      uStack_113 = 0;
      uStack_112 = 0;
      FUN_01228018(&local_120,&local_138);
      FUN_012283e8(uVar28,plVar14 + 0x29,&local_120,PTR_FUN_047dcb20);
      puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
      if (puVar21 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar21 + 3);
        do {
          sVar17 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar22 = (int *)((long)puVar21 + 0x1c);
          do {
            iVar13 = *piVar22;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar6) {
              *piVar22 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_38 = *puVar21;
            FUN_00c44438(lVar15 + 0x8040,&local_38);
          }
        }
        else if (sVar17 == 0) goto LAB_0122ae0c;
      }
      puVar21 = local_138;
      if (local_138 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_138 + 3);
        do {
          sVar17 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar22 = (int *)((long)local_138 + 0x1c);
          do {
            iVar13 = *piVar22;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar6) {
              *piVar22 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_38 = *puVar21;
            FUN_00c44438(lVar15 + 0x8040,&local_38);
          }
        }
        else if (sVar17 == 0) goto LAB_0122ae0c;
      }
      puVar21 = local_70;
      puVar8 = PTR_DAT_047dcb90;
      *plVar14 = (long)(PTR_DAT_047dcb90 + 0x10);
      plVar14[4] = (long)(puVar8 + 0x90);
      plVar14[5] = (long)(puVar8 + 0xe0);
      if (local_70 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70 + 3);
        do {
          sVar17 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar22 = (int *)((long)local_70 + 0x1c);
          do {
            iVar13 = *piVar22;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar6) {
              *piVar22 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_120._0_4_ = (uint)*puVar21;
            local_120._4_4_ = (undefined4)((ulong)*puVar21 >> 0x20);
            FUN_00c44438(lVar15 + 0x8040,&local_120);
          }
        }
        else if (sVar17 == 0) goto LAB_0122ae0c;
      }
      *(undefined4 *)(plVar14 + 3) = 0x100190;
      plVar14[1] = (long)plVar26;
      plVar14[2] = (long)plVar14;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
      lVar18 = plVar14[6];
      if (*(long *)(lVar18 + 0x10) == 0) goto LAB_0122bce8;
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar17 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 0) {
        uVar28 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar28;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
      }
      else if (sVar17 == -1) goto LAB_0122bd08;
      plVar26 = (long *)param_1[0x1f];
      param_1[0x1f] = 0;
      if (plVar26 != (long *)0x0) {
        lVar18 = plVar26[6];
        psVar1 = (short *)(lVar18 + 0x1a);
        do {
          sVar17 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*plVar26 + 0x50))();
        }
        else if (sVar17 == 0) goto LAB_0122accc;
      }
      param_1[0x1f] = (long)plVar14;
      if (local_a0 == (undefined8 *)0x0) goto LAB_0122a8b8;
      psVar1 = (short *)(local_a0 + 3);
      do {
        sVar17 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 != 1) goto LAB_0122ae08;
      piVar22 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar13 = *piVar22;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar6) {
          *piVar22 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_0122b2f8;
    }
    if (iVar13 != 3) {
      if (iVar13 != 1) {
        if (iVar13 != 0) goto LAB_0122a8b8;
        goto LAB_0122a5a0;
      }
      (**(code **)(*param_1 + 0x18))(&local_120,param_1);
      puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
      local_138 = (undefined8 *)0x0;
      uStack_130 = 0;
      plVar14 = (long *)0x0;
      if (param_1 != (long *)0x0) {
        plVar14 = param_1 + 5;
      }
      if ((long *)puVar21[2] == plVar14) {
        FUN_0122c1d0(&local_138,&local_120);
        puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
      }
      if (puVar21 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar21 + 3);
        do {
          sVar17 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar17 == 1) {
          piVar22 = (int *)((long)puVar21 + 0x1c);
          do {
            iVar13 = *piVar22;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar6) {
              *piVar22 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar18 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar18;
            local_70 = (undefined8 *)*puVar21;
            FUN_00c44438(lVar18 + 0x8040,&local_70);
          }
        }
        else if (sVar17 == 0) goto LAB_0122ae0c;
      }
      local_120._0_4_ = 0;
      local_120._4_4_ = 0;
      local_118 = '\0';
      uStack_117 = 0;
      uStack_113 = 0;
      uStack_112 = 0;
      local_110 = (code *)0x0;
      puStack_108 = (undefined1 *)0x0;
      FUN_0122c594(&local_120,&local_138);
      uVar11 = (*(code *)param_1[0x20])(param_1 + 0x24,&local_90,&local_120);
      *(undefined4 *)(param_1 + 0x1e) = uVar11;
      pcVar7 = (code *)CONCAT26(uStack_112,CONCAT15(uStack_113,CONCAT41(uStack_117,local_118)));
      if (pcVar7 != (code *)0x0) {
        local_110 = (code *)0x0;
        puStack_108 = (undefined1 *)0x0;
        local_120._0_4_ = 0;
        local_120._4_4_ = 0;
        local_118 = '\0';
        uStack_117 = 0;
        uStack_113 = 0;
        uStack_112 = 0;
        (*pcVar7)(&local_100);
      }
      if (local_138 == (undefined8 *)0x0) goto LAB_0122a8b8;
      psVar1 = (short *)(local_138 + 3);
      do {
        sVar17 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar22 = (int *)((long)local_138 + 0x1c);
        do {
          iVar13 = *piVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar6) {
            *piVar22 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_0122b034;
      }
      goto LAB_0122ae08;
    }
    (**(code **)(*param_1 + 0x18))(&local_120,param_1);
    puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
    local_138 = (undefined8 *)0x0;
    uStack_130 = 0;
    plVar14 = (long *)0x0;
    if (param_1 != (long *)0x0) {
      plVar14 = param_1 + 5;
    }
    if ((long *)puVar21[2] == plVar14) {
      FUN_0122c1d0(&local_138,&local_120);
      puVar21 = (undefined8 *)CONCAT44(local_120._4_4_,(uint)local_120);
    }
    if (puVar21 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar21 + 3);
      do {
        sVar17 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar17 == 1) {
        piVar22 = (int *)((long)puVar21 + 0x1c);
        do {
          iVar13 = *piVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar6) {
            *piVar22 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar18 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar18;
          local_70 = (undefined8 *)*puVar21;
          FUN_00c44438(lVar18 + 0x8040,&local_70);
        }
      }
      else if (sVar17 == 0) goto LAB_0122ae0c;
    }
    local_120._0_4_ = 0;
    local_120._4_4_ = 0;
    local_118 = 0;
    uStack_117 = 0;
    uStack_113 = 0;
    uStack_112 = 0;
    local_110 = (code *)0x0;
    puStack_108 = (undefined1 *)0x0;
    local_100 = 0;
    uStack_f8 = 0;
    local_128 = fVar31;
    FUN_0122be0c(&local_100,&local_138);
    local_f0 = local_128;
    local_120._0_4_ = 0x20e4b34;
    local_120._4_4_ = 0;
    local_118 = -4;
    uStack_117 = 0x20e54;
    uStack_113 = 0;
    uStack_112 = 0;
    local_110 = FUN_01403978;
    puStack_108 = &LAB_020e5828;
    uVar11 = (*(code *)param_1[0x20])(param_1 + 0x24,&local_90,&local_120);
    *(undefined4 *)(param_1 + 0x1e) = uVar11;
    pcVar7 = (code *)CONCAT26(uStack_112,CONCAT15(uStack_113,CONCAT41(uStack_117,local_118)));
    if (pcVar7 != (code *)0x0) {
      local_110 = (code *)0x0;
      puStack_108 = (undefined1 *)0x0;
      local_120._0_4_ = 0;
      local_120._4_4_ = 0;
      local_118 = '\0';
      uStack_117 = 0;
      uStack_113 = 0;
      uStack_112 = 0;
      (*pcVar7)(&local_100);
    }
    if (local_138 == (undefined8 *)0x0) goto LAB_0122a8b8;
    psVar1 = (short *)(local_138 + 3);
    do {
      sVar17 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar17 != 1) goto LAB_0122ae08;
    piVar22 = (int *)((long)local_138 + 0x1c);
    do {
      iVar13 = *piVar22;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar22,0x10);
      if (bVar6) {
        *piVar22 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_0122b034:
    puVar21 = local_138;
    if (iVar13 == -1) goto LAB_0122a8b8;
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    ppuVar16 = &local_70;
    lVar18 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar18;
    local_70 = (undefined8 *)*puVar21;
  }
  FUN_00c44438(lVar18 + 0x8040,ppuVar16);
LAB_0122a8b8:
  if ((param_1[0x1f] == 0) && ((int)param_1[0x1e] == 0)) {
    FUN_0122a3ac(param_1);
  }
  if ((((code *)param_1[0xe] != (code *)0x0) && ((*(byte *)((long)param_1 + 100) >> 1 & 1) != 0)) &&
     (piVar22 = (int *)param_1[10],
     puVar23 = (uint *)((long)piVar22 + (ulong)*(ushort *)((long)piVar22 + (6 - (long)*piVar22))),
     (int)param_1[0xc] == *(int *)((long)puVar23 + (ulong)*puVar23))) {
    local_120._0_4_ = 2;
    local_138 = (undefined8 *)CONCAT44(local_138._4_4_,(int)param_1[9]);
    (*(code *)param_1[0xe])(param_1 + 0x12,&local_120,&local_138);
  }
  if (local_78 == (long *)0x0) {
    return;
  }
  (**(code **)(*local_78 + 0x20))();
  return;
}


