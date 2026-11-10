/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012267bc; name: FUN_012267bc
 */


void FUN_012267bc(undefined1 *param_1)

{
  undefined *puVar1;
  short *psVar2;
  long *plVar3;
  uint *puVar4;
  char *__s;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  short sVar8;
  byte bVar9;
  ushort uVar10;
  char cVar11;
  bool bVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  long lVar26;
  int *piVar27;
  byte *pbVar28;
  code *pcVar29;
  ushort *puVar30;
  ulong uVar31;
  ulong uVar32;
  uint *puVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  long *plVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 *local_230;
  code *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined1 *apuStack_210 [12];
  long *local_1b0;
  code *pcStack_1a8;
  undefined8 local_1a0;
  undefined1 *local_198;
  undefined1 *puStack_190;
  float local_188;
  double local_128;
  string local_120;
  undefined7 uStack_11f;
  char local_118;
  undefined4 uStack_117;
  undefined1 uStack_113;
  undefined2 uStack_112;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  long *local_f0;
  code *pcStack_e8;
  undefined2 local_e0;
  undefined2 local_de;
  undefined4 local_dc;
  undefined1 *local_a0;
  char *local_98;
  size_t local_90;
  long *local_88;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x180));
  plVar20 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar20 != (long *)0x0) {
    lVar21 = plVar20[6];
    psVar2 = (short *)(lVar21 + 0x1a);
    do {
      sVar8 = *psVar2;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar12) {
        *psVar2 = sVar8 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar21 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))();
    }
    else if (sVar8 == 0) goto LAB_01226b18;
  }
  puVar37 = (undefined8 *)(param_1 + 0xa0);
  plVar20 = (long *)*puVar37;
  plVar39 = *(long **)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1 = PTR_DAT_047d8280;
  if (plVar20 != plVar39) {
    lVar21 = *plVar20;
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar19 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    puVar14 = PTR_DAT_047d8290;
    puVar13 = PTR_DAT_047d8288;
    lVar22 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar22;
    plVar23 = *(long **)(*(long *)(lVar22 + 0x200) + 0x60);
    (**(code **)(*plVar23 + 0x98))(0,plVar23,"ENV_POKE_VOICE",lVar21,0,4,0);
    if (((*puVar1 & 1) == 0) && (iVar19 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar19 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar22 = *(long *)puVar13;
    *(long *)puVar14 = lVar22;
    if (lVar21 != -1) {
      plVar23 = *(long **)(*(long *)(lVar22 + 0x200) + 0x60);
      (**(code **)(*plVar23 + 0x120))(plVar23,lVar21,0,0);
    }
    puVar15 = PTR_DAT_047dcae0;
    FUN_01228988(*(undefined8 *)PTR_DAT_047dcae0,lVar21);
    while (plVar20 = plVar20 + 1, plVar20 != plVar39) {
      lVar21 = *plVar20;
      if (((*puVar1 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar1), iVar19 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,puVar13,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar1);
      }
      lVar22 = *(long *)puVar13;
      *(long *)puVar14 = lVar22;
      plVar23 = *(long **)(*(long *)(lVar22 + 0x200) + 0x60);
      (**(code **)(*plVar23 + 0x98))(0,plVar23,"ENV_POKE_VOICE",lVar21,0,4,0);
      if (((*puVar1 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar1), iVar19 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,puVar13,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar1);
      }
      lVar22 = *(long *)puVar13;
      *(long *)puVar14 = lVar22;
      if (lVar21 != -1) {
        plVar23 = *(long **)(*(long *)(lVar22 + 0x200) + 0x60);
        (**(code **)(*plVar23 + 0x120))(plVar23,lVar21,0,0);
      }
      FUN_01228988(*(undefined8 *)puVar15,lVar21);
    }
    plVar20 = (long *)*puVar37;
  }
  *(long **)(param_1 + 0xa8) = plVar20;
  fVar43 = DAT_0457f460;
  if (*(long *)(param_1 + 0x78) == 0) {
    plVar20 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar21 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar21 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = plVar20;
    *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
    plVar39 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,400,0x10);
    if (plVar39 == (long *)0x0) {
      (**(code **)(*plVar20 + 0xe8))(plVar20);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    puVar1 = PTR_DAT_047d66f8 + 0x10;
    *(undefined4 *)(plVar39 + 3) = 0;
    *plVar39 = (long)puVar1;
    plVar39[2] = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    puVar1 = PTR_DAT_047d8c78;
    if (lVar22 == 0) {
      lVar26 = 0;
    }
    else {
      lVar26 = 0;
      if (*(long *)(lVar22 + 0x80) != 0) {
        lVar26 = *(long *)(lVar22 + *(long *)(lVar22 + 0x80) * 8 + -8);
      }
    }
    *plVar39 = (long)(PTR_DAT_047d8c78 + 0x10);
    plVar39[1] = lVar26;
    plVar39[4] = (long)(puVar1 + 0x88);
    plVar23 = plVar39 + 5;
    *plVar23 = (long)(puVar1 + 0xd8);
    plVar39[7] = 0;
    plVar39[6] = 0;
    FUN_00d1a3f4(plVar39 + 6,plVar23);
    *plVar39 = (long)&PTR_LAB_0457f5e8;
    plVar39[4] = (long)&PTR_LAB_0457f668;
    *plVar23 = (long)&DAT_0457f6b8;
    puVar1 = PTR_LAB_047dcae8;
    plVar39[0xc] = (long)((double)fVar43 * 1000000000.0);
    puVar14 = PTR_LAB_047dcaf8;
    puVar13 = PTR_LAB_047dcaf0;
    plVar39[8] = (long)puVar1;
    plVar39[9] = (long)puVar13;
    puVar1 = PTR_LAB_047dcb00;
    plVar39[10] = (long)puVar14;
    plVar39[0xb] = (long)puVar1;
    plVar39[0x18] = (long)&LAB_012267b4;
    plVar39[0x19] = (long)&LAB_02aca6e4;
    plVar39[0x1a] = (long)&LAB_02aca6e8;
    plVar39[0x28] = 0;
    plVar39[0x1b] = (long)&LAB_02aca6f4;
    plVar39[0x1c] = (long)param_1;
    *(undefined1 *)(plVar39 + 0x2a) = 0;
    plVar39[0x2b] = 0;
    *(undefined4 *)((long)plVar39 + 0x16c) = 1;
    nn::os::InitializeLightEvent(plVar39 + 0x2c,0,1);
    plVar39[0x2e] = 0;
    *(undefined4 *)((long)plVar39 + 0x184) = 1;
    nn::os::InitializeLightEvent(plVar39 + 0x2f,0,1);
    if (((*PTR_DAT_047dcb08 & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(PTR_DAT_047dcb08), iVar19 != 0)) {
      FUN_00100190(&LAB_02aca700,PTR_DAT_047dcb10,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dcb08);
    }
    uVar38 = *(undefined8 *)PTR_DAT_047dcb10;
    *(undefined8 *)PTR_DAT_047dcb18 = uVar38;
    (**(code **)(*plVar39 + 0x18))(&local_120,plVar39);
    puVar37 = (undefined8 *)CONCAT71(uStack_11f,local_120);
    local_1b0 = (long *)0x0;
    pcStack_1a8 = (code *)0x0;
    if ((long *)puVar37[2] == plVar23) {
      FUN_01227cf4(&local_1b0,&local_120);
      puVar37 = (undefined8 *)CONCAT71(uStack_11f,local_120);
    }
    if (puVar37 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar37 + 3);
      do {
        sVar8 = *psVar2;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar8 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar8 == 1) {
        piVar27 = (int *)((long)puVar37 + 0x1c);
        do {
          iVar19 = *piVar27;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar12) {
            *piVar27 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar19 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_230 = (undefined1 *)*puVar37;
          FUN_00c44438(lVar22 + 0x8040,&local_230);
        }
      }
      else if (sVar8 == 0) goto LAB_01226c8c;
    }
    local_120 = (string)0x0;
    uStack_11f = 0;
    local_118 = '\0';
    uStack_117 = 0;
    uStack_113 = 0;
    uStack_112 = 0;
    FUN_01228018(&local_120,&local_1b0);
    FUN_012283e8(uVar38,plVar39 + 0x29,&local_120,PTR_FUN_047dcb20);
    puVar37 = (undefined8 *)CONCAT71(uStack_11f,local_120);
    if (puVar37 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar37 + 3);
      do {
        sVar8 = *psVar2;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar8 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar8 == 1) {
        piVar27 = (int *)((long)puVar37 + 0x1c);
        do {
          iVar19 = *piVar27;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar12) {
            *piVar27 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar19 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_230 = (undefined1 *)*puVar37;
          FUN_00c44438(lVar22 + 0x8040,&local_230);
        }
      }
      else if (sVar8 == 0) goto LAB_01226c8c;
    }
    plVar23 = local_1b0;
    if (local_1b0 != (long *)0x0) {
      plVar3 = local_1b0 + 3;
      do {
        sVar8 = (short)*plVar3;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *(short *)plVar3 = sVar8 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar8 == 1) {
        piVar27 = (int *)((long)local_1b0 + 0x1c);
        do {
          iVar19 = *piVar27;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar27,0x10);
          if (bVar12) {
            *piVar27 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar19 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar22 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar22;
          local_230 = (undefined1 *)*plVar23;
          FUN_00c44438(lVar22 + 0x8040,&local_230);
        }
      }
      else if (sVar8 == 0) {
LAB_01226c8c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    plVar39[2] = (long)plVar39;
    *plVar39 = (long)&PTR_LAB_0457f4c0;
    plVar39[1] = (long)plVar20;
    plVar39[4] = (long)&PTR_LAB_0457f540;
    plVar39[5] = (long)&DAT_0457f590;
    *(undefined4 *)(plVar39 + 3) = 0x100190;
    *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
    lVar21 = plVar39[6];
    if (*(long *)(lVar21 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar21 + 0x1a);
    do {
      sVar8 = *psVar2;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar12) {
        *psVar2 = sVar8 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar8 == 0) {
      uVar38 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
      *(undefined8 *)(lVar21 + 8) = uVar38;
      *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
    }
    else if (sVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar20 = *(long **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plVar20 != (long *)0x0) {
      lVar21 = plVar20[6];
      psVar2 = (short *)(lVar21 + 0x1a);
      do {
        sVar8 = *psVar2;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar8 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar21 + 0x10) = 0;
        (**(code **)(*plVar20 + 0x50))();
      }
      else if (sVar8 == 0) goto LAB_01226b18;
    }
    *(long **)(param_1 + 0x28) = plVar39;
    goto LAB_01226ac8;
  }
  if (((DAT_0483dca0 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_0483dca0), iVar19 != 0)) {
    local_120 = (string)0x18;
    uStack_117 = 0x6d6f646e;
    uStack_11f = s__dev_urandom_03c1765b._0_7_;
    local_118 = s__dev_urandom_03c1765b[7];
    uStack_113 = 0;
    std::random_device::random_device((random_device *)&DAT_0483d2d8,&local_120);
    puVar24 = local_110;
    if ((((byte)local_120 & 1) != 0) && (local_110 != (undefined1 *)0x0)) {
      lVar21 = tpidr_el0;
      plVar20 = *(long **)(lVar21 + 0x30);
      if (plVar20 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04859438), iVar19 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar20 = DAT_04859430;
        *(long **)(lVar21 + 0x30) = DAT_04859430;
      }
      uVar31 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar31 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,puVar24,0,8);
      }
      else {
        FUN_00c48fe8(plVar20,puVar24,0,8);
      }
    }
    FUN_00100190(PTR__random_device_047dcb28,&DAT_0483d2d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483dca0);
  }
  if (((DAT_0483dca8 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_0483dca8), iVar19 != 0)) {
    uVar18 = std::random_device::operator()((random_device *)&DAT_0483d2d8);
    iVar19 = (int)((ulong)uVar18 * 2 + (ulong)uVar18 >> 0x20);
    DAT_0483e6c4 = uVar18 + (iVar19 + (uVar18 - iVar19 >> 1) >> 0x1e) * -0x7fffffff;
    if (DAT_0483e6c4 == 0) {
      DAT_0483e6c4 = 1;
    }
    __cxa_guard_release(&DAT_0483dca8);
  }
  piVar27 = *(int **)(param_1 + 0x18);
  puVar30 = (ushort *)((long)piVar27 - (long)*piVar27);
  uVar10 = *puVar30;
  if (uVar10 < 0xd) {
    fVar43 = 0.0;
  }
  else {
    if ((ulong)puVar30[6] == 0) {
      fVar43 = 0.0;
    }
    else {
      fVar43 = *(float *)((long)piVar27 + (ulong)puVar30[6]);
    }
    if (0xe < uVar10) {
      if (((ulong)puVar30[7] != 0) &&
         (fVar40 = *(float *)((long)piVar27 + (ulong)puVar30[7]), 0.0 < fVar40)) {
        uVar18 = (DAT_0483e6c4 % 0xadc8) * 0xbc8f;
        iVar19 = 0x7fffffff;
        if ((DAT_0483e6c4 / 0xadc8) * 0xd47 <= uVar18) {
          iVar19 = 0;
        }
        DAT_0483e6c4 = iVar19 + uVar18 + (DAT_0483e6c4 / 0xadc8) * -0xd47;
        fVar43 = fVar43 + fVar40 * ((float)(DAT_0483e6c4 - 1) * 4.656613e-10 + 0.0);
      }
      if (((0x10 < uVar10) && ((ulong)puVar30[8] != 0)) &&
         (fVar40 = *(float *)((long)piVar27 + (ulong)puVar30[8]), 0.0 < fVar40)) {
        fVar43 = fVar43 + fVar40 * *(float *)(param_1 + 0xd8);
      }
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_a0 = *(undefined1 **)PTR_DAT_047d3e30;
  local_98 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_90 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
  local_88 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x18))();
  }
  piVar27 = *(int **)(param_1 + 0x18);
  fVar40 = 0.0;
  uVar31 = (ulong)*(ushort *)((long)piVar27 + (8 - (long)*piVar27));
  uVar32 = (ulong)*(uint *)((long)piVar27 + uVar31);
  puVar5 = (uint *)((long)((long)piVar27 + uVar31) + uVar32);
  puVar33 = puVar5 + 1;
  uVar34 = (ulong)*puVar5;
  puVar6 = puVar33 + uVar34;
  if (uVar34 != 0) {
    piVar7 = (int *)((long)puVar33 + (ulong)*puVar33);
    fVar40 = 0.0;
    if (6 < *(ushort *)((long)piVar7 - (long)*piVar7)) {
      uVar35 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3];
      fVar40 = 0.0;
      if (uVar35 != 0) {
        fVar40 = *(float *)((long)piVar7 + uVar35);
      }
    }
    fVar40 = fVar40 + 0.0;
    if (*puVar5 != 1) {
      piVar7 = (int *)((long)(puVar5 + 2) + (ulong)puVar5[2]);
      fVar41 = 0.0;
      if ((6 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
         (uVar35 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar35 != 0)) {
        fVar41 = *(float *)((long)piVar7 + uVar35);
      }
      fVar40 = fVar40 + fVar41;
      puVar4 = puVar5 + 3;
      if (puVar4 != puVar6) {
        piVar7 = (int *)((long)puVar4 + (ulong)*puVar4);
        fVar41 = 0.0;
        if ((6 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
           (uVar35 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[3], uVar35 != 0)) {
          fVar41 = *(float *)((long)piVar7 + uVar35);
        }
        fVar40 = fVar40 + fVar41;
        if (puVar5 + 4 != puVar6) {
          lVar22 = uVar32 + uVar31;
          lVar21 = 0;
          do {
            uVar35 = (ulong)*(uint *)((long)piVar27 + lVar21 + lVar22 + 0x10);
            lVar26 = lVar21 + (uVar35 - (long)*(int *)((long)piVar27 +
                                                      lVar21 + uVar35 + lVar22 + 0x10)) + lVar22;
            fVar41 = 0.0;
            if (6 < *(ushort *)((long)piVar27 + lVar26 + 0x10)) {
              uVar36 = (ulong)*(ushort *)((long)piVar27 + lVar26 + 0x16);
              fVar41 = 0.0;
              if (uVar36 != 0) {
                fVar41 = *(float *)((long)piVar27 + lVar21 + uVar35 + uVar36 + lVar22 + 0x10);
              }
            }
            fVar40 = fVar40 + fVar41;
            lVar21 = lVar21 + 4;
          } while (uVar34 * 4 + -0xc != lVar21);
        }
      }
    }
  }
  uVar18 = (DAT_0483e6c4 % 0xadc8) * 0xbc8f;
  iVar19 = 0x7fffffff;
  if ((DAT_0483e6c4 / 0xadc8) * 0xd47 <= uVar18) {
    iVar19 = 0;
  }
  DAT_0483e6c4 = iVar19 + uVar18 + (DAT_0483e6c4 / 0xadc8) * -0xd47;
  if (puVar33 != puVar6) {
    lVar22 = uVar32 + uVar31;
    lVar21 = 0;
    fVar41 = 0.0;
LAB_01226ea4:
    uVar35 = (ulong)*(uint *)((long)piVar27 + lVar21 + lVar22 + 4);
    lVar26 = lVar21 + (uVar35 - (long)*(int *)((long)piVar27 + lVar21 + uVar35 + lVar22 + 4)) +
                      lVar22;
    uVar10 = *(ushort *)((long)piVar27 + lVar26 + 4);
    fVar42 = 0.0;
    if (6 < uVar10) {
      uVar36 = (ulong)*(ushort *)((long)piVar27 + lVar26 + 10);
      fVar42 = 0.0;
      if (uVar36 != 0) {
        fVar42 = *(float *)((long)piVar27 + lVar21 + uVar35 + uVar36 + lVar22 + 4);
      }
    }
    fVar41 = fVar41 + fVar42;
    if (fVar41 < fVar40 * (float)(DAT_0483e6c4 - 1) * 4.656613e-10 + 0.0) goto code_r0x01226efc;
    if ((uVar10 < 5) || (uVar34 = (ulong)*(ushort *)((long)piVar27 + lVar26 + 8), uVar34 == 0)) {
      lVar21 = 0;
    }
    else {
      lVar21 = (long)piVar27 +
               lVar21 + uVar34 + *(uint *)((long)piVar27 +
                                          lVar21 + uVar34 + uVar35 + uVar31 + uVar32 + 4) + uVar35 +
                        uVar31 + uVar32 + 4;
    }
    __s = (char *)(lVar21 + 4);
    puVar24 = &DAT_cbf29ce484222645;
    local_90 = strlen(__s);
    plVar20 = local_88;
    bVar9 = *(byte *)(lVar21 + 4);
    if (bVar9 != 0) {
      pbVar28 = (byte *)(lVar21 + 5);
      do {
        puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar9) * 0x100000001b3);
        bVar9 = *pbVar28;
        pbVar28 = pbVar28 + 1;
      } while (bVar9 != 0);
    }
    local_88 = (long *)0x0;
    local_a0 = puVar24;
    local_98 = __s;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x20))();
    }
    local_88 = (long *)0x0;
  }
LAB_01226fa4:
  if (*local_98 != '\0') {
    local_110 = (undefined1 *)0x0;
    local_108 = (undefined1 *)0x0;
    local_120 = (string)0x0;
    uStack_11f = 0;
    local_118 = '\0';
    uStack_117 = 0;
    uStack_113 = 0;
    uStack_112 = 0;
    piVar27 = *(int **)(param_1 + 0x18);
    if (((*(ushort *)((long)piVar27 - (long)*piVar27) < 0x13) ||
        (uVar31 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[9], uVar31 == 0)) ||
       (*(char *)((long)piVar27 + uVar31) == '\0')) {
      local_1b0 = (long *)0x0;
      pcStack_1a8 = (code *)0x0;
      local_1a0 = (undefined1 *)0x0;
      uVar31 = FUN_01232724(param_1,&local_1b0);
      if ((uVar31 & 1) == 0) {
        pcVar29 = (code *)CONCAT26(uStack_112,CONCAT15(uStack_113,CONCAT41(uStack_117,local_118)));
        if (pcVar29 != (code *)0x0) {
          local_110 = (undefined1 *)0x0;
          local_108 = (undefined1 *)0x0;
          local_120 = (string)0x0;
          uStack_11f = 0;
          local_118 = '\0';
          uStack_117 = 0;
          uStack_113 = 0;
          uStack_112 = 0;
          (*pcVar29)(&local_100);
        }
        goto LAB_01227280;
      }
      puVar24 = (undefined1 *)FUN_01232cd8(*(undefined8 *)PTR_DAT_047dcae0);
      local_230 = puVar24;
      FUN_012329ac(puVar37,&local_230);
      pcStack_e8 = pcStack_1a8;
      local_f0 = local_1b0;
      local_e0 = (undefined2)local_1a0;
      local_de = local_1a0._2_2_;
      local_dc = local_1a0._4_4_;
      pcVar29 = (code *)CONCAT26(uStack_112,CONCAT15(uStack_113,CONCAT41(uStack_117,local_118)));
      if (pcVar29 != (code *)0x0) {
        local_120 = (string)0x0;
        uStack_11f = 0;
        local_118 = 0;
        uStack_117 = 0;
        uStack_113 = 0;
        uStack_112 = 0;
        local_110 = (undefined1 *)0x0;
        local_108 = (undefined1 *)0x0;
        (*pcVar29)(&local_100);
      }
      pcVar29 = (code *)&LAB_020db5f8;
      local_120 = (string)0xf8;
      uStack_11f = 0x20db5;
      local_118 = ' ';
      local_110 = &LAB_02aca724;
      local_108 = &LAB_02aca760;
      piVar27 = *(int **)(param_1 + 0x18);
      puStack_f8 = puVar24;
    }
    else {
      pcVar29 = FUN_0123267c;
      local_120 = (string)0x7c;
      uStack_11f = 0x12326;
      local_118 = '\x04';
      local_110 = &LAB_02aca708;
      local_108 = &LAB_02aca714;
    }
    uStack_112 = 0;
    uStack_113 = 0;
    uStack_117 = 0x2aca7;
    local_100 = param_1;
    if ((*(ushort *)((long)piVar27 - (long)*piVar27) < 7) ||
       (uVar31 = (ulong)((ushort *)((long)piVar27 - (long)*piVar27))[3], uVar31 == 0)) {
LAB_01227028:
      local_128 = (double)fVar43 * 1000000000.0;
      local_230 = param_1;
      FUN_012288b8(&local_1b0,*(undefined8 *)(param_1 + 8),&local_230,&local_128);
      plVar20 = *(long **)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      if (plVar20 != (long *)0x0) {
        lVar21 = plVar20[6];
        psVar2 = (short *)(lVar21 + 0x1a);
        do {
          sVar8 = *psVar2;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar12) {
            *psVar2 = sVar8 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar21 + 0x10) = 0;
          (**(code **)(*plVar20 + 0x50))();
        }
        else if (sVar8 == 0) {
LAB_01226b18:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *(long **)(param_1 + 0x28) = local_1b0;
      local_198 = &LAB_02aca7c8;
      local_1b0 = (long *)&LAB_020dbb30;
      pcStack_1a8 = FUN_02aca7b8;
      local_1a0 = &LAB_02aca7bc;
      puStack_190 = param_1;
      uVar17 = (*(code *)CONCAT71(uStack_11f,local_120))(&local_100,&local_a0,&local_1b0);
      *(undefined4 *)(param_1 + 0x24) = uVar17;
      pcVar29 = pcStack_1a8;
joined_r0x012270bc:
      pcStack_1a8 = pcVar29;
      if (pcVar29 != (code *)0x0) {
        local_198 = (undefined1 *)0x0;
        local_1a0 = (undefined1 *)0x0;
        local_1b0 = (long *)0x0;
        pcStack_1a8 = (code *)0x0;
        (*pcVar29)(&puStack_190);
      }
    }
    else {
      iVar19 = *(int *)((long)piVar27 + uVar31);
      if (iVar19 == 3) {
        if (((*PTR_DAT_047d82a0 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_047d82a0), iVar19 != 0)) {
          FUN_00100190(PTR_LAB_047d8a98,PTR_DAT_047d82a8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d82a0);
        }
        local_1b0 = (long *)&LAB_020dcb94;
        pcStack_1a8 = FUN_02aca860;
        uVar38 = *(undefined8 *)PTR_DAT_047d82a8;
        local_198 = &LAB_02aca88c;
        local_1a0 = &LAB_02aca880;
        *(undefined8 *)PTR_DAT_047d82b0 = uVar38;
        local_220 = &LAB_02aca89c;
        uVar25 = 1;
        local_230 = &LAB_0119ff54;
        local_228 = FUN_02aca898;
        local_218 = &LAB_02aca8a8;
LAB_01227220:
        apuStack_210[0] = param_1;
        puStack_190 = param_1;
        local_188 = fVar43;
        uVar17 = FUN_01229314(uVar38,&local_a0,0,uVar25,&local_1b0,&local_120,&local_230);
        pcVar16 = local_228;
        *(undefined4 *)(param_1 + 0x20) = uVar17;
        bVar12 = local_228 != (code *)0x0;
        local_228 = (code *)0x0;
        pcVar29 = pcStack_1a8;
        if (bVar12) {
          local_220 = (undefined1 *)0x0;
          local_218 = (undefined1 *)0x0;
          local_230 = (undefined1 *)0x0;
          local_228 = (code *)0x0;
          (*pcVar16)(apuStack_210);
          pcVar29 = pcStack_1a8;
        }
        goto joined_r0x012270bc;
      }
      if (iVar19 == 1) {
        local_1b0 = (long *)&LAB_020dbb3c;
        pcStack_1a8 = FUN_02aca7d4;
        local_1a0 = &LAB_02aca7f4;
        local_198 = &LAB_02aca800;
        puStack_190 = param_1;
        local_188 = fVar43;
        uVar17 = (*pcVar29)(&local_100,&local_a0,&local_1b0);
        *(undefined4 *)(param_1 + 0x24) = uVar17;
        pcVar29 = pcStack_1a8;
        goto joined_r0x012270bc;
      }
      if (iVar19 == 2) {
        if (((*PTR_DAT_047d82a0 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_047d82a0), iVar19 != 0)) {
          FUN_00100190(PTR_LAB_047d8a98,PTR_DAT_047d82a8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d82a0);
        }
        local_1b0 = (long *)&LAB_020dc364;
        pcStack_1a8 = (code *)&LAB_02aca80c;
        uVar38 = *(undefined8 *)PTR_DAT_047d82a8;
        local_198 = &LAB_02aca838;
        local_1a0 = &LAB_02aca82c;
        local_230 = &LAB_020dcb88;
        local_228 = (code *)&LAB_02aca844;
        *(undefined8 *)PTR_DAT_047d82b0 = uVar38;
        local_220 = &LAB_02aca848;
        local_218 = &LAB_02aca854;
        uVar25 = 2;
        goto LAB_01227220;
      }
      if (iVar19 == 0) goto LAB_01227028;
    }
    pcVar29 = (code *)CONCAT26(uStack_112,CONCAT15(uStack_113,CONCAT41(uStack_117,local_118)));
    if (pcVar29 != (code *)0x0) {
      local_110 = (undefined1 *)0x0;
      local_108 = (undefined1 *)0x0;
      local_120 = (string)0x0;
      uStack_11f = 0;
      local_118 = '\0';
      uStack_117 = 0;
      uStack_113 = 0;
      uStack_112 = 0;
      (*pcVar29)(&local_100);
    }
    if (((*(long *)(param_1 + 0x28) == 0) && (*(int *)(param_1 + 0x24) == 0)) &&
       (*(int *)(param_1 + 0x20) == 0)) {
      FUN_013f29c8(param_1);
    }
  }
LAB_01227280:
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
LAB_01226ac8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x180));
  return;
code_r0x01226efc:
  lVar21 = lVar21 + 4;
  if (uVar34 * 4 == lVar21) goto LAB_01226fa4;
  goto LAB_01226ea4;
}


