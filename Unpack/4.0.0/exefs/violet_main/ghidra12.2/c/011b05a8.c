/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b05a8; name: FUN_011b05a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011b05a8(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 *param_4,
                 undefined8 *param_5,ushort *param_6,long *param_7,int param_8,byte param_9,
                 byte param_10,byte param_11)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  bool bVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  undefined4 *__s;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  undefined1 uVar28;
  uint uVar29;
  char cVar30;
  ushort uVar31;
  uint uVar32;
  ushort uVar33;
  undefined8 uVar34;
  undefined4 *puVar35;
  long *plVar36;
  long *plVar37;
  undefined8 uVar38;
  long *local_d0;
  long *local_c8;
  long *local_c0 [2];
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70 [2];
  
  local_d0 = *(long **)(param_3 + 8);
  __s = (undefined4 *)(**(code **)(*local_d0 + 0x10))(local_d0,0x110,0x10);
  if (__s == (undefined4 *)0x0) {
    local_d0 = (long *)0x0;
    uVar38 = 0;
    uVar34 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04865a38), iVar17 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_011b1078;
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = local_d0;
    uVar38 = 0x110;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    memset(__s,0,0x110);
    __s[8] = 0xffffffff;
    *(undefined8 *)(__s + 0x14) = 0;
    *(undefined8 *)(__s + 0x16) = 0;
    uVar20 = _UNK_03cabe58;
    uVar34 = _DAT_03cabe50;
    *(undefined1 *)(__s + 0x1c) = 0;
    *(undefined8 *)(__s + 10) = 0;
    *(undefined8 *)(__s + 0xc) = 0;
    *(undefined8 *)(__s + 0xe) = 0;
    *(undefined8 *)(__s + 0x10) = 0;
    *(undefined8 *)(__s + 0x22) = 0;
    *(undefined8 *)(__s + 0x24) = 0;
    *(undefined8 *)(__s + 0x26) = 0;
    *(undefined8 *)(__s + 0x28) = 0;
    *(undefined8 *)(__s + 0x1a) = uVar20;
    *(undefined8 *)(__s + 0x18) = uVar34;
    *(undefined8 *)(__s + 0x2a) = 0;
    *(undefined8 *)(__s + 0x2c) = 0;
    puVar1 = PTR_DAT_047d94a8 + 0x10;
    *(undefined8 *)(__s + 0x3e) = 0;
    *(undefined1 *)((long)__s + 0x102) = 0;
    *(undefined **)(__s + 0x2e) = puVar1;
    *(undefined8 *)(__s + 0x30) = 0;
    *(undefined **)(__s + 0x1e) = puVar1;
    *(undefined8 *)(__s + 0x20) = 0;
    *(undefined2 *)(__s + 0x40) = 0x100;
    *(undefined8 *)(__s + 0x32) = 0;
    *(undefined8 *)(__s + 0x34) = 0;
    *(undefined8 *)(__s + 0x36) = 0;
    *(undefined8 *)(__s + 0x38) = 0;
    *(undefined8 *)(__s + 0x3a) = 0;
    *(undefined8 *)(__s + 0x3c) = 0;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    uVar34 = 0x10;
  }
  *__s = 0;
  __s[1] = param_8;
  lVar18 = *param_7;
  if (lVar18 != 0) {
    piVar3 = (int *)(lVar18 + 0x28);
    do {
      iVar17 = *piVar3;
      cVar30 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar13) {
        *piVar3 = iVar17 + 1;
        cVar30 = ExclusiveMonitorsStatus();
      }
    } while (cVar30 != '\0');
    if (iVar17 == -1) goto LAB_011b0cb0;
  }
  plVar19 = *(long **)(__s + 2);
  *(long *)(__s + 2) = lVar18;
  if (plVar19 == (long *)0x0) {
LAB_011b070c:
    if (((*PTR_DAT_047d8938 & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar17 != 0)) {
      FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8938);
    }
    uVar20 = *(undefined8 *)PTR_DAT_047d8940;
    *(undefined8 *)PTR_DAT_047d8948 = uVar20;
    uVar33 = *param_6;
    uVar31 = param_6[1];
    uVar14 = param_6[2];
    uVar15 = param_6[3];
    uVar21 = FUN_011b0350(uVar20,param_6);
    uVar10 = *(undefined1 *)((long)param_6 + 5);
    uVar16 = (uint)uVar21;
    uVar29 = (uint)(uVar21 >> 0x20);
    uVar32 = uVar29 & 1;
    cVar30 = (char)uVar32;
    uVar6 = *(undefined4 *)(param_6 + 4);
    uVar7 = *(undefined4 *)(param_6 + 6);
    uVar29 = uVar29 >> 1 & 1;
    uVar28 = (undefined1)uVar29;
    uVar8 = *(undefined4 *)(param_6 + 8);
    if ((uint)uVar33 == (uVar16 & 0xffff)) {
      cVar30 = (char)param_6[2];
      if ((((uint)uVar31 != uVar16 >> 0x10) || (((char)uVar14 != '\x01') == uVar32)) ||
         (((char)uVar15 != '\0') != uVar29)) {
        uVar16 = (uint)uVar33;
        if ((uVar21 >> 0x20 & 1) == 0) {
          cVar30 = (cVar30 == '\x02') << 1;
        }
        else {
          cVar30 = '\x01';
        }
        goto LAB_011b0c88;
      }
      uVar33 = *param_6;
      uVar31 = param_6[1];
      uVar28 = (undefined1)param_6[3];
    }
    else {
LAB_011b0c88:
      uVar33 = (ushort)uVar16;
      uVar31 = (ushort)(uVar21 >> 0x10);
    }
    *(ushort *)(__s + 4) = uVar33;
    *(ushort *)((long)__s + 0x12) = uVar31;
    *(char *)(__s + 5) = cVar30;
    *(undefined1 *)((long)__s + 0x15) = uVar10;
    *(undefined1 *)((long)__s + 0x16) = uVar28;
    __s[6] = uVar6;
    __s[7] = uVar7;
    __s[8] = uVar8;
    plVar19 = (long *)*param_4;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x58))(plVar19);
    }
    plVar22 = *(long **)(__s + 0x10);
    *(long **)(__s + 0x10) = plVar19;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x60))();
    }
    *(byte *)(__s + 0x40) = param_9 & 1;
    *(byte *)((long)__s + 0x101) = param_10 & 1;
    *(long *)(__s + 0x16) = param_1._8_8_;
    *(long *)(__s + 0x14) = param_1._0_8_;
    *(long *)(__s + 0x1a) = param_2._8_8_;
    *(long *)(__s + 0x18) = param_2._0_8_;
    switch(param_8) {
    case 1:
    case 2:
    case 0xb:
      local_c0[0] = (long *)0x3bfce17;
      FUN_00e52f24(&local_b0,local_c0);
      FUN_010c7db4(__s + 0x1e,&local_b0);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      puVar35 = __s + 0x2e;
      break;
    case 3:
      puVar35 = __s + 0x1e;
      break;
    default:
      goto switchD_011b082c_caseD_4;
    case 9:
      local_c0[0] = (long *)0x3c2722d;
      FUN_00e52f24(&local_b0,local_c0);
      FUN_010c7db4(__s + 0x1e,&local_b0);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      puVar35 = __s + 0x2e;
      local_c0[0] = (long *)0x3c20254;
      goto LAB_011b087c;
    }
    local_c0[0] = (long *)0x3be8c00;
LAB_011b087c:
    FUN_00e52f24(&local_b0,local_c0);
    FUN_010c7db4(puVar35,&local_b0);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
switchD_011b082c_caseD_4:
    plVar19 = *(long **)(param_3 + 8);
    uVar11 = *(undefined2 *)(__s + 4);
    uVar12 = *(undefined2 *)((long)__s + 0x12);
    uVar10 = *(undefined1 *)(__s + 5);
    if (((DAT_04865a38 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_04865a38), iVar17 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar18 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_011b1078:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar19;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    lVar23 = (**(code **)(*plVar19 + 0x10))(plVar19,0xd0,0x10);
    if (lVar23 == 0) {
      (**(code **)(*plVar19 + 0xe8))(plVar19);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    FUN_01e3aac8(lVar23,uVar11,uVar12,uVar10);
    *(undefined4 *)(lVar23 + 0x18) = 0x1000d0;
    *(long **)(lVar23 + 8) = plVar19;
    *(long *)(lVar23 + 0x10) = lVar23;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    lVar18 = *(long *)(lVar23 + 0x30);
    if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar18 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar30 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar13) {
        *psVar2 = sVar5 + 1;
        cVar30 = ExclusiveMonitorsStatus();
      }
    } while (cVar30 != '\0');
    if (sVar5 == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar20;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
      pcVar24 = "count != 0";
      pcVar25 = "AddReference";
      pcVar26 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar27 = "Reference counter overflows.";
      goto LAB_011b1130;
    }
    plVar19 = *(long **)(__s + 0x3e);
    *(undefined8 *)(__s + 0x3e) = 0;
    if (plVar19 != (long *)0x0) {
      lVar18 = plVar19[6];
      psVar2 = (short *)(lVar18 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar30 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar13) {
          *psVar2 = sVar5 + -1;
          cVar30 = ExclusiveMonitorsStatus();
        }
      } while (cVar30 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar19 + 0x50))();
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(long *)(__s + 0x3e) = lVar23;
    if (((*PTR_DAT_047d8938 & 1) == 0) &&
       (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar17 != 0)) {
      FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8938);
    }
    uVar20 = *(undefined8 *)PTR_DAT_047d8940;
    *(undefined8 *)PTR_DAT_047d8948 = uVar20;
    uVar20 = FUN_011b047c(uVar20,(ulong)CONCAT14(*(char *)(__s + 5) == '\x01',__s[4]) |
                                 (ulong)*(byte *)((long)__s + 0x16) << 0x21,0);
    plVar19 = (long *)(param_3 + 0x178);
    lVar23 = *plVar19;
    lVar18 = nn::os::GetCurrentThread();
    if (lVar18 == lVar23) {
      plVar19 = (long *)0x0;
      bVar13 = true;
    }
    else {
      lVar18 = nn::os::GetCurrentThread();
      do {
        if (*plVar19 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_3 + 0x180));
            while (*plVar19 == 0) {
              cVar30 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar13) {
                *plVar19 = lVar18;
                cVar30 = ExclusiveMonitorsStatus();
              }
              if (cVar30 == '\0') goto LAB_011b103c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar30 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar13) {
          *plVar19 = lVar18;
          cVar30 = ExclusiveMonitorsStatus();
        }
      } while (cVar30 != '\0');
LAB_011b103c:
      bVar13 = false;
    }
    FUN_0132a9c0(__s + 0xe,uVar20,*(undefined8 *)(param_3 + 8));
    if (*(long *)(__s + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_pokeSetupHandler","LoadAsync",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include\\pokemon/pokemon_model_system/poke_setup_file.h"
                 ,0x1e);
    }
    FUN_0132b848();
    local_b0 = (long *)*param_5;
    uStack_a8 = param_5[1];
    local_a0 = param_5[2];
    local_98 = (long *)param_5[3];
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))();
    }
    local_88 = local_d0;
    local_90 = (long *)__s;
    local_80 = uVar38;
    local_78 = uVar34;
    FUN_0147b814(param_3 + 0x28,&local_b0);
    plVar22 = local_90;
    local_90 = (long *)0x0;
    if (plVar22 != (long *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar18 = FUN_00c4e600();
      iVar9 = *(int *)(lVar18 + 0x12c8);
      iVar17 = iVar9 + 1;
      *(int *)(lVar18 + 0x12c8) = iVar17;
      if (*(int *)(lVar18 + 0x12cc) <= iVar9) {
        *(int *)(lVar18 + 0x12cc) = iVar17;
      }
      FUN_00de955c(plVar22);
      uVar38 = local_78;
      uVar34 = local_80;
      plVar4 = local_88;
      uVar21 = (**(code **)(*local_88 + 0xf8))(local_88);
      if (((uVar21 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,plVar22,uVar34,uVar38);
      }
      else {
        FUN_00c48fe8(plVar4,plVar22,uVar34,uVar38);
      }
      lVar18 = FUN_00c4e600();
      iVar17 = *(int *)(lVar18 + 0x12c8) + -1;
      *(int *)(lVar18 + 0x12c8) = iVar17;
      if (iVar17 == 0) {
        plVar22 = (long *)FUN_00c4e600();
        if (plVar22[600] != 0) {
          local_70[0] = plVar22 + plVar22[600] * 3;
          local_c0[0] = plVar22;
          FUN_00c4ea30(local_c0,local_70);
          plVar37 = (long *)*plVar22;
          plVar4 = plVar22;
          if (plVar22[600] != 0) {
            plVar4 = plVar22 + plVar22[600] * 3;
          }
          if (plVar4 == plVar22) {
            lVar23 = 0;
            local_d0 = (long *)0x0;
          }
          else {
            lVar23 = 0;
            local_d0 = (long *)0x0;
            plVar36 = plVar22;
            do {
              (**(code **)(*(long *)*plVar36 + 0xd0))();
              if ((long *)*plVar36 != plVar37) {
                (**(code **)(*plVar37 + 0x100))(plVar37,plVar22 + (long)local_d0 * 3,plVar36);
                plVar37 = (long *)*plVar36;
                local_d0 = (long *)lVar23;
              }
              plVar36 = plVar36 + 3;
              lVar23 = lVar23 + 1;
            } while (plVar4 != plVar36);
          }
          (**(code **)(*plVar37 + 0x100))(plVar37,plVar22 + (long)local_d0 * 3,plVar22 + lVar23 * 3)
          ;
          plVar22[600] = 0;
        }
        *(undefined4 *)(lVar18 + 0x12cc) = 0;
      }
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (!bVar13) {
      *plVar19 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar19 + 1));
    }
    if (*param_7 == 0) {
      return;
    }
    if ((param_9 & 1) != 0) {
      return;
    }
    if ((param_11 & 1) == 0) {
      return;
    }
    if (param_8 == 3) {
      local_a0 = 0;
      local_98 = (long *)0x0;
      local_b0 = (long *)0x0;
      uStack_a8 = 0;
      snprintf((char *)&local_b0,0x20,"%s",param_5[1]);
      FUN_0186d774(&local_b0,param_7);
      return;
    }
    if (param_8 != 1) {
      return;
    }
    local_a0 = 0;
    local_98 = (long *)0x0;
    local_b0 = (long *)0x0;
    uStack_a8 = 0;
    snprintf((char *)&local_b0,0x20,"%s",param_5[1]);
    param_7 = (long *)*param_7;
    local_c8 = param_7;
    if (param_7 == (long *)0x0) {
      FUN_00e9725c(local_c0,&local_c8);
      goto LAB_011b0b38;
    }
    plVar19 = param_7 + 5;
    do {
      lVar18 = *plVar19;
      cVar30 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar13) {
        *(int *)plVar19 = (int)lVar18 + 1;
        cVar30 = ExclusiveMonitorsStatus();
      }
    } while (cVar30 != '\0');
    if ((int)lVar18 == -1) {
LAB_011b0cb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00e9725c(local_c0,&local_c8);
    if (param_7 == (long *)0x0) {
LAB_011b0b38:
      FUN_019cad70(&local_b0,local_c0);
      return;
    }
    plVar19 = param_7 + 5;
    do {
      lVar18 = *plVar19;
      iVar17 = (int)lVar18 + -1;
      cVar30 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar13) {
        *(int *)plVar19 = iVar17;
        cVar30 = ExclusiveMonitorsStatus();
      }
    } while (cVar30 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*param_7 + 0x10))(param_7);
      goto LAB_011b0b38;
    }
    if ((int)lVar18 != 0) goto LAB_011b0b38;
  }
  else {
    plVar22 = plVar19 + 5;
    do {
      lVar18 = *plVar22;
      iVar17 = (int)lVar18 + -1;
      cVar30 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar13) {
        *(int *)plVar22 = iVar17;
        cVar30 = ExclusiveMonitorsStatus();
      }
    } while (cVar30 != '\0');
    if (iVar17 == 0) {
      (**(code **)(*plVar19 + 0x10))();
      goto LAB_011b070c;
    }
    if ((int)lVar18 != 0) goto LAB_011b070c;
  }
  pcVar24 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar25 = "DecrementReferenceInternal";
  pcVar26 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
  ;
  pcVar27 = "Reference counter underflows.";
LAB_011b1130:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar24,pcVar25,pcVar26,0x58,pcVar27);
}


