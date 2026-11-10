/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01534dcc; name: FUN_01534dcc
 */


void FUN_01534dcc(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,int param_6,long *param_7,undefined8 param_8,
                 ulong param_9,undefined4 param_10)

{
  short *psVar1;
  int *piVar2;
  ulong *puVar3;
  byte *__s;
  byte bVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  size_t __n;
  undefined8 *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long *plVar15;
  byte *pbVar16;
  code *pcVar17;
  short sVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  char *pcVar24;
  void *pvVar25;
  uint *puVar26;
  ulong *local_228;
  long local_1d0;
  code *local_1c8;
  code *local_1c0;
  long local_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 *local_150;
  undefined8 uStack_148;
  ulong *local_140;
  byte *pbStack_138;
  void *local_130;
  long *local_128;
  byte local_120 [16];
  void *local_110;
  byte local_108;
  undefined7 uStack_107;
  void *local_f8;
  ulong local_f0 [2];
  void *local_e0;
  long *local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  byte *local_b0;
  ulong local_a8;
  size_t local_a0;
  void *local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  uVar20 = *(undefined8 *)(param_5 + 8);
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar8 + 0x30) = DAT_04859430;
  }
  local_78 = *(undefined8 *)(lVar8 + 0x30);
  local_70 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined8 *)(lVar8 + 0x30) = uVar20;
  *(undefined2 *)(lVar8 + 0x38) = 1;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_01535e90(&local_90,param_6);
  if ((local_90 == (long *)0x0) || ((*(byte *)(local_90[0x16] + 0x6c) & 1) == 0)) {
LAB_01534ef0:
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01535fd0(param_1,&local_88);
LAB_01534f00:
    if (local_90 != (long *)0x0) {
      lVar11 = local_90[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar18 == 0) {
LAB_01535004:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    puVar12 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_140 = (ulong *)*puVar12;
          FUN_00c44438(lVar11 + 0x8040,&local_140);
        }
      }
      else if (sVar18 == 0) {
LAB_01534fb8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(undefined8 *)(lVar8 + 0x30) = local_78;
    *(undefined2 *)(lVar8 + 0x38) = (undefined2)local_70;
    return;
  }
  lVar21 = local_90[0x16];
  plVar22 = (long *)(lVar21 + 0x78);
  lVar11 = nn::os::GetCurrentThread();
LAB_01534e98:
  if (*plVar22 == 0) goto code_r0x01534ea0;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x80));
  do {
    if (*plVar22 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0x80));
        while (*plVar22 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar7) {
            *plVar22 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01534ea8;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar7) {
      *plVar22 = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01534ea8:
  iVar10 = *(int *)(lVar21 + 0x68);
  cVar6 = *(char *)(lVar21 + 100);
  *(undefined8 *)(lVar21 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0x80));
  if (((((iVar10 != 0) || (cVar6 == '\0')) || (*(long *)(param_5 + 0x40) == 0)) ||
      ((*(short *)(*(long *)(param_5 + 0x40) + 0x1a) == 0 ||
       (lVar11 = *(long *)(param_5 + 0x40), lVar11 == 0)))) || (*(short *)(lVar11 + 0x1a) == 0))
  goto LAB_01534ef0;
  psVar1 = (short *)(lVar11 + 0x1a);
  sVar18 = *(short *)(lVar11 + 0x1a);
  do {
    sVar5 = *psVar1;
    if (sVar5 == sVar18) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_01535110;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01535110:
      bVar7 = false;
    }
    if (bVar7) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) goto LAB_01534ef0;
      pcVar24 = *(char **)(lVar11 + 0x348);
      if (*pcVar24 == '\0') {
        puVar13 = (ulong *)FUN_00d44228();
        if (puVar13 != (ulong *)0x0) {
          (**(code **)(*puVar13 + 0x18))(puVar13);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar20 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar20;
        FUN_00cf9884(&local_140,uVar20,pcVar24);
        puVar13 = local_140;
      }
      puVar3 = (ulong *)PTR_PTR_047d4508;
      if (puVar13 != (ulong *)0x0) {
        puVar3 = puVar13 + 7;
      }
      pcVar24 = (char *)*puVar3;
      __n = strlen(pcVar24);
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        local_a8 = CONCAT71(local_a8._1_7_,(char)((int)__n << 1));
        pvVar25 = (void *)((ulong)&local_a8 | 1);
        if (__n != 0) goto LAB_015351c4;
      }
      else {
        uVar14 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar25 = operator_new(uVar14);
        local_a8 = uVar14 | 1;
        local_a0 = __n;
        local_98 = pvVar25;
LAB_015351c4:
        memcpy(pvVar25,pcVar24,__n);
      }
      *(undefined1 *)((long)pvVar25 + __n) = 0;
      if (puVar13 != (ulong *)0x0) {
        (**(code **)(*puVar13 + 0x20))(puVar13);
      }
      std::operator+("picnic_effect_",(string *)&local_a8);
      std::to_string(param_6);
      pvVar25 = (void *)((ulong)&local_108 | 1);
      if ((local_108 & 1) != 0) {
        pvVar25 = local_f8;
      }
      puVar12 = (undefined8 *)std::string::append((char *)local_f0,(ulong)pvVar25);
      uStack_d0 = puVar12[1];
      local_c8 = (void *)puVar12[2];
      local_d8 = (long *)*puVar12;
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0;
      puVar13 = (ulong *)std::string::append((char *)&local_d8);
      pbStack_138 = (byte *)puVar13[1];
      local_130 = (void *)puVar13[2];
      local_140 = (ulong *)*puVar13;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      puVar26 = (uint *)(param_5 + (long)param_6 * 4 + 0x50);
      std::to_string(*puVar26);
      pvVar25 = (void *)((ulong)local_120 | 1);
      if ((local_120[0] & 1) != 0) {
        pvVar25 = local_110;
      }
      puVar13 = (ulong *)std::string::append((char *)&local_140,(ulong)pvVar25);
      uStack_b8 = puVar13[1];
      local_b0 = (byte *)puVar13[2];
      local_c0 = *puVar13;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      if ((local_120[0] & 1) != 0) {
        operator_delete(local_110);
      }
      if (((ulong)local_140 & 1) != 0) {
        operator_delete(local_130);
      }
      if (((ulong)local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      plVar22 = (long *)(lVar11 + -0x28);
      if ((local_108 & 1) != 0) {
        operator_delete(local_f8);
      }
      if ((local_f0[0] & 1) != 0) {
        operator_delete(local_e0);
      }
      FUN_00cebc38(&local_d8,plVar22);
      plVar19 = local_d8;
      __s = (byte *)((ulong)&local_c0 | 1);
      if ((local_c0 & 1) != 0) {
        __s = local_b0;
      }
      if (__s == (byte *)0x0) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        local_140 = *(ulong **)PTR_DAT_047d3e30;
        pbStack_138 = *(byte **)(PTR_DAT_047d3e30 + 8);
        local_130 = *(void **)(PTR_DAT_047d3e30 + 0x10);
        local_128 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (local_128 != (long *)0x0) {
          (**(code **)(*local_128 + 0x18))();
        }
      }
      else {
        local_228 = (ulong *)&DAT_cbf29ce484222645;
        local_130 = (void *)strlen((char *)__s);
        bVar4 = *__s;
        if (bVar4 != 0) {
          pbVar16 = __s;
          do {
            pbVar16 = pbVar16 + 1;
            local_228 = (ulong *)(((ulong)local_228 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar16;
          } while (bVar4 != 0);
        }
        local_140 = local_228;
        local_128 = (long *)0x0;
        pbStack_138 = __s;
      }
      FUN_010b6530(&local_108,plVar19,&local_140,&local_90,0,1);
      if (local_128 != (long *)0x0) {
        (**(code **)(*local_128 + 0x20))();
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x60))();
      }
      plVar19 = (long *)CONCAT71(uStack_107,local_108);
      if (plVar19 == (long *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        plVar19[0x1d] = param_2._8_8_;
        plVar19[0x1c] = param_2._0_8_;
        if (*(char *)((long)plVar19 + 0xf4) == '\0') {
          *(undefined1 *)((long)plVar19 + 0xf4) = 1;
          (**(code **)(*plVar19 + 0x78))();
          plVar19 = (long *)CONCAT71(uStack_107,local_108);
        }
        plVar19[0x1b] = param_3._8_8_;
        plVar19[0x1a] = param_3._0_8_;
        if (*(char *)((long)plVar19 + 0xf4) == '\0') {
          *(undefined1 *)((long)plVar19 + 0xf4) = 1;
          (**(code **)(*plVar19 + 0x78))();
          plVar19 = (long *)CONCAT71(uStack_107,local_108);
          plVar19[0x19] = param_4._8_8_;
          plVar19[0x18] = param_4._0_8_;
          if (*(char *)((long)plVar19 + 0xf4) == '\0') {
            *(undefined1 *)((long)plVar19 + 0xf4) = 1;
            (**(code **)(*plVar19 + 0x78))();
          }
        }
        else {
          plVar19[0x19] = param_4._8_8_;
          plVar19[0x18] = param_4._0_8_;
        }
        *puVar26 = *puVar26 + 1;
        if ((param_9 & 1) != 0) {
          FUN_00dfba48(CONCAT71(uStack_107,local_108),plVar22);
          FUN_0133ce14(CONCAT71(uStack_107,local_108),plVar22,param_8);
          lVar21 = FUN_0120fc08(CONCAT71(uStack_107,local_108) + 0x108,&local_140);
          if (lVar21 != 0) {
            *(undefined4 *)(lVar21 + 0x228) = param_10;
          }
        }
        plVar19 = *(long **)(param_5 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar21 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar21 + 0x80)) {
LAB_01535b94:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = plVar19;
        *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
        plVar15 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x100,0x10);
        if (plVar15 == (long *)0x0) {
          (**(code **)(*plVar19 + 0xe8))(plVar19);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                     ,0x40);
        }
        FUN_01e3ce50();
        *(undefined4 *)(plVar15 + 3) = 0x100100;
        plVar15[1] = (long)plVar19;
        plVar15[2] = (long)plVar15;
        *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
        lVar21 = plVar15[6];
        if (*(long *)(lVar21 + 0x10) == 0) {
LAB_01535b98:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar21 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar18 == 0) {
          uVar20 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
          *(undefined8 *)(lVar21 + 8) = uVar20;
          *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
        }
        else if (sVar18 == -1) goto LAB_01535bdc;
        *(int *)(plVar15 + 8) = param_6;
        *(undefined1 *)((long)plVar15 + 0x44) = 1;
        plVar9 = (long *)CONCAT71(uStack_107,local_108);
        (**(code **)(*plVar9 + 0x18))(&local_140,plVar9);
        local_150 = (undefined8 *)0x0;
        uStack_148 = 0;
        plVar19 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          plVar19 = plVar9 + 5;
        }
        if ((long *)local_140[2] == plVar19) {
          FUN_00cbc6dc(&local_150,&local_140);
        }
        puVar13 = local_140;
        if (local_140 != (ulong *)0x0) {
          puVar3 = local_140 + 3;
          do {
            sVar18 = (short)*puVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar7) {
              *(short *)puVar3 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            piVar2 = (int *)((long)local_140 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar21;
              local_d8 = (long *)*puVar13;
              FUN_00c44438(lVar21 + 0x8040,&local_d8);
            }
          }
          else if (sVar18 == 0) goto LAB_01534fb8;
        }
        FUN_00ca1a48(plVar15 + 9,&local_150);
        puVar12 = local_150;
        if (local_150 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_150 + 3);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            piVar2 = (int *)((long)local_150 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar21;
              local_140 = (ulong *)*puVar12;
              FUN_00c44438(lVar21 + 0x8040,&local_140);
            }
          }
          else if (sVar18 == 0) goto LAB_01534fb8;
        }
        local_1c0 = (code *)0x0;
        local_1b8 = 0;
        local_1d0 = 0;
        local_1c8 = (code *)0x0;
        if ((code *)param_7[2] != (code *)0x0) {
          (*(code *)param_7[2])(param_7 + 4,auStack_1b0);
          local_1b8 = param_7[3];
          local_1c8 = (code *)param_7[1];
          local_1d0 = *param_7;
          local_1c0 = (code *)param_7[2];
        }
        pcVar17 = (code *)plVar15[0xf];
        if (pcVar17 != (code *)0x0) {
          plVar15[0x10] = 0;
          plVar15[0x11] = 0;
          plVar15[0xe] = 0;
          plVar15[0xf] = 0;
          (*pcVar17)(plVar15 + 0x12);
        }
        if (local_1c0 != (code *)0x0) {
          (*local_1c0)(auStack_1b0,plVar15 + 0x12);
          plVar15[0x11] = local_1b8;
          plVar15[0xe] = local_1d0;
          plVar15[0xf] = (long)local_1c8;
          plVar15[0x10] = (long)local_1c0;
        }
        if (local_1c8 != (code *)0x0) {
          (*local_1c8)(auStack_1b0);
        }
        (**(code **)(*plVar15 + 0x18))(&local_140,plVar15);
        local_d8 = (long *)0x0;
        uStack_d0 = 0;
        if ((long *)local_140[2] == plVar15 + 5) {
          FUN_01d55528(&local_d8,&local_140);
        }
        puVar13 = local_140;
        if (local_140 != (ulong *)0x0) {
          puVar3 = local_140 + 3;
          do {
            sVar18 = (short)*puVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar7) {
              *(short *)puVar3 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            piVar2 = (int *)((long)local_140 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar21;
              local_f0[0] = *puVar13;
              FUN_00c44438(lVar21 + 0x8040,local_f0);
            }
          }
          else if (sVar18 == 0) goto LAB_01534fb8;
        }
        FUN_01535fd0(&local_88,&local_d8);
        plVar19 = local_d8;
        if (local_d8 != (long *)0x0) {
          plVar9 = local_d8 + 3;
          do {
            sVar18 = (short)*plVar9;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar7) {
              *(short *)plVar9 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            piVar2 = (int *)((long)local_d8 + 0x1c);
            do {
              iVar10 = *piVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar7) {
                *piVar2 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar21 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar21;
              local_140 = (ulong *)*plVar19;
              FUN_00c44438(lVar21 + 0x8040,&local_140);
            }
          }
          else if (sVar18 == 0) goto LAB_01534fb8;
        }
        plVar19 = (long *)(**(code **)(**(long **)(param_5 + 0x158) + 0x10))
                                    (*(long **)(param_5 + 0x158),0x18,8);
        if (plVar19 == (long *)0x0) {
          (**(code **)(**(long **)(param_5 + 0x158) + 0xe8))();
        }
        *plVar19 = 0;
        uVar20 = *(undefined8 *)(param_5 + 0x158);
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar21 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar21 != 0) {
          if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_01535b94;
          *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar20;
          *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
        }
        plVar19[2] = (long)plVar15;
        lVar23 = plVar15[6];
        if (*(long *)(lVar23 + 0x10) == 0) goto LAB_01535b98;
        psVar1 = (short *)(lVar23 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar18 == 0) {
          uVar20 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
          *(undefined8 *)(lVar23 + 8) = uVar20;
          *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
        }
        else if (sVar18 == -1) {
LAB_01535bdc:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
        if (lVar21 != 0) {
          *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
        }
        plVar19[1] = param_5 + 0x140;
        lVar21 = *(long *)(param_5 + 0x140);
        *plVar19 = lVar21;
        *(long **)(lVar21 + 8) = plVar19;
        *(long **)(param_5 + 0x140) = plVar19;
        *(long *)(param_5 + 0x150) = *(long *)(param_5 + 0x150) + 1;
        *param_1 = 0;
        param_1[1] = 0;
        FUN_01535fd0(param_1,&local_88);
        lVar21 = plVar15[6];
        psVar1 = (short *)(lVar21 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar18 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar21 + 0x10) = 0;
          (**(code **)(*plVar15 + 0x50))(plVar15);
        }
        else if (sVar18 == 0) goto LAB_01535004;
        plVar19 = (long *)CONCAT71(uStack_107,local_108);
        if (plVar19 != (long *)0x0) {
          lVar21 = plVar19[6];
          psVar1 = (short *)(lVar21 + 0x1a);
          do {
            sVar18 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar18 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar18 == 1) {
            *(undefined8 *)(lVar21 + 0x10) = 0;
            (**(code **)(*plVar19 + 0x50))();
          }
          else if (sVar18 == 0) goto LAB_01535004;
        }
      }
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      lVar11 = *(long *)(lVar11 + 8);
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar18 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar18 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar18 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar22 + 0x50))(plVar22);
      }
      else if (sVar18 == 0) goto LAB_01535004;
      goto LAB_01534f00;
    }
    sVar18 = sVar5;
    if (sVar5 == 0) goto LAB_01534ef0;
  } while( true );
code_r0x01534ea0:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar7) {
    *plVar22 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01534ea8;
  goto LAB_01534e98;
}


