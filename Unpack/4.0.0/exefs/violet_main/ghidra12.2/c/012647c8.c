/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012647c8; name: FUN_012647c8
 */


void FUN_012647c8(long *param_1,int *param_2)

{
  undefined8 *puVar1;
  long *******ppppppplVar2;
  short *psVar3;
  uint *puVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  int iVar13;
  char *pcVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *******ppppppplVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 *puVar24;
  ulong uVar25;
  uint *puVar26;
  long *******ppppppplVar27;
  long *******ppppppplVar28;
  byte *pbVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  long ******pppppplVar33;
  long *******ppppppplVar34;
  int *piVar35;
  undefined8 *puVar36;
  long lVar37;
  long *******ppppppplVar38;
  char *__s;
  long *******ppppppplVar39;
  long ******pppppplVar40;
  long lVar41;
  ulong uVar42;
  long *******ppppppplVar43;
  long ******pppppplVar44;
  long ******pppppplVar45;
  long *plVar46;
  float fVar47;
  float fVar48;
  undefined1 auStack_120 [8];
  long *local_118;
  uint *local_110;
  long *******local_108;
  long *local_100;
  long *******local_f8;
  long *local_f0;
  long *******local_e8;
  long *******local_e0;
  long *local_d8;
  int *local_d0;
  uint *local_c8;
  long *******local_c0;
  long ******local_b8;
  long ******local_b0;
  long ******local_a8;
  long *******local_a0;
  long *******local_98;
  long *******local_90;
  long *******local_88;
  long *******local_80;
  long *local_78;
  undefined4 local_70;
  
  __s = auStack_120;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0x15) ||
     (uVar20 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[10], uVar20 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","Setup",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/combine_lod_entity.cpp"
               ,0x32,"configure is not found.");
  }
  puVar4 = (uint *)((long)param_2 + uVar20);
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  puVar26 = puVar4 + 1;
  uVar20 = (ulong)*puVar4;
  local_d0 = param_2;
  if (uVar20 != 0) {
    local_110 = puVar26 + uVar20;
    local_118 = param_1 + 0x11e;
    do {
      piVar35 = (int *)((long)puVar26 + (ulong)*puVar26);
      if (*(ushort *)((long)piVar35 - (long)*piVar35) < 5) {
        local_b8 = (long ******)0x0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[2];
        local_b8 = (long ******)0x0;
        if (uVar20 != 0) {
          puVar4 = (uint *)((long)piVar35 + uVar20);
          local_b8 = (long ******)((long)puVar4 + (ulong)*puVar4);
        }
      }
      local_c8 = puVar26;
      FUN_00cf95c4(&local_98,&local_b8);
      uVar12 = local_70;
      plVar46 = local_78;
      ppppppplVar38 = local_80;
      ppppppplVar43 = local_88;
      ppppppplVar18 = local_90;
      local_c0 = local_98;
      if ((*(ushort *)((long)piVar35 - (long)*piVar35) < 7) ||
         (uVar20 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[3], uVar20 == 0)) {
        if (((*PTR_DAT_047d8c18 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8c18), iVar13 != 0)) {
          if (((*PTR_DAT_047d8c28 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar13 != 0)) {
            local_98 = (long *******)FUN_00d44228();
            puVar8 = PTR_DAT_047d8c30;
            FUN_00d1e764(PTR_DAT_047d8c30,&local_98);
            FUN_00100190(PTR_LAB_047d9240,puVar8,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8c28);
          }
          puVar8 = PTR_DAT_047d8c20;
          FUN_01db7420(PTR_DAT_047d8c20,PTR_DAT_047d8c30,0);
          FUN_00100190(PTR_FUN_047dc9f0,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c18);
        }
        local_98 = *(long ********)PTR_DAT_047d8c20;
        if (local_98 != (long *******)0x0) {
          (*(code *)(*local_98)[3])();
        }
        puVar8 = PTR_DAT_047d8c20;
        local_90 = *(long ********)(PTR_DAT_047d8c20 + 8);
        local_88 = *(long ********)(PTR_DAT_047d8c20 + 0x10);
        local_80 = *(long ********)(PTR_DAT_047d8c20 + 0x18);
        local_78 = *(long **)(PTR_DAT_047d8c20 + 0x20);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x18))();
        }
        local_70 = *(undefined4 *)(puVar8 + 0x28);
      }
      else {
        puVar26 = (uint *)((long)piVar35 + uVar20);
        local_b8 = (long ******)((long)puVar26 + (ulong)*puVar26);
        FUN_00cf95c4(&local_98,&local_b8);
      }
      ppppppplVar34 = local_98;
      local_d8 = (long *)CONCAT44(local_d8._4_4_,uVar12);
      if (local_98 != (long *******)0x0) {
        (*(code *)(*local_98)[3])(local_98);
      }
      plVar23 = local_78;
      ppppppplVar39 = local_80;
      local_e8 = local_90;
      local_e0 = local_88;
      if (local_78 == (long *)0x0) {
        local_f0 = (long *)CONCAT44(local_f0._4_4_,local_70);
      }
      else {
        (**(code **)(*local_78 + 0x18))(local_78);
        local_f0 = (long *)CONCAT44(local_f0._4_4_,local_70);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
      }
      if (local_98 != (long *******)0x0) {
        (*(code *)(*local_98)[4])();
      }
      if (*(ushort *)((long)piVar35 - (long)*piVar35) < 9) {
        local_b8 = (long ******)0x0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[4];
        local_b8 = (long ******)0x0;
        if (uVar20 != 0) {
          puVar26 = (uint *)((long)piVar35 + uVar20);
          local_b8 = (long ******)((long)puVar26 + (ulong)*puVar26);
        }
      }
      FUN_00ea0a7c(&local_98,&local_b8);
      puVar31 = (undefined8 *)param_1[0x11f];
      local_100 = plVar23;
      local_f8 = local_98;
      if (puVar31 < (undefined8 *)param_1[0x120]) {
        lVar32 = param_1[0x121];
        if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0))
        {
          local_108 = ppppppplVar34;
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          plVar23 = local_100;
          ppppppplVar34 = local_108;
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar37 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar37 != 0) {
          if (0xf < *(ulong *)(lVar37 + 0x80)) goto LAB_01266194;
          *(long *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = lVar32;
          *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
        }
        *puVar31 = local_c0;
        puVar31[1] = ppppppplVar18;
        puVar31[2] = ppppppplVar43;
        puVar31[3] = ppppppplVar38;
        *(undefined4 *)(puVar31 + 5) = local_d8._0_4_;
        puVar31[4] = plVar46;
        puVar31[6] = ppppppplVar34;
        puVar31[7] = local_e8;
        puVar31[8] = local_e0;
        puVar31[9] = ppppppplVar39;
        *(undefined4 *)(puVar31 + 0xb) = local_f0._0_4_;
        puVar31[10] = plVar23;
        puVar31[0xc] = local_f8;
        puVar31[0xd] = 0;
        puVar31[0xe] = 0;
        if (lVar37 != 0) {
          *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
        }
        param_1[0x11f] = (long)(puVar31 + 0xf);
      }
      else {
        lVar32 = (long)puVar31 - param_1[0x11e] >> 3;
        ppppppplVar28 = (long *******)param_1[0x122];
        if ((long *******)0x7ffffffffffffffe < ppppppplVar28) {
          ppppppplVar28 = (long *******)0x7fffffffffffffff;
        }
        ppppppplVar2 = (long *******)(lVar32 * -0x1111111111111111 + 1);
        if (ppppppplVar28 < ppppppplVar2) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar37 = param_1[0x120] - param_1[0x11e] >> 3;
        ppppppplVar27 = (long *******)(lVar37 * -0x2222222222222222);
        if (ppppppplVar2 <= ppppppplVar27) {
          ppppppplVar2 = ppppppplVar27;
        }
        local_108 = ppppppplVar2;
        if ((ulong)ppppppplVar28 >> 1 <= (ulong)(lVar37 * -0x1111111111111111)) {
          local_108 = ppppppplVar28;
        }
        if (local_108 == (long *******)0x0) {
          lVar37 = 0;
        }
        else {
          lVar37 = (**(code **)(*(long *)param_1[0x121] + 0x10))
                             ((long *)param_1[0x121],(long)local_108 * 0x78,8);
          if (lVar37 == 0) {
            (**(code **)(*(long *)param_1[0x121] + 0xe8))();
          }
        }
        lVar41 = param_1[0x121];
        if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar16 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar16 != 0) {
          if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01266194;
          *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar41;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        }
        puVar31 = (undefined8 *)(lVar37 + lVar32 * 8);
        lVar32 = lVar37 + lVar32 * 8;
        *puVar31 = local_c0;
        *(undefined8 *)(lVar32 + 0x70) = 0;
        *(long ********)(lVar32 + 8) = ppppppplVar18;
        *(long ********)(lVar32 + 0x10) = ppppppplVar43;
        *(long ********)(lVar32 + 0x18) = ppppppplVar38;
        *(long **)(lVar32 + 0x20) = plVar46;
        *(undefined4 *)(lVar32 + 0x28) = local_d8._0_4_;
        *(long ********)(lVar32 + 0x30) = ppppppplVar34;
        *(long ********)(lVar32 + 0x38) = local_e8;
        *(long ********)(lVar32 + 0x40) = local_e0;
        *(long ********)(lVar32 + 0x48) = ppppppplVar39;
        *(long **)(lVar32 + 0x50) = local_100;
        *(undefined4 *)(lVar32 + 0x58) = local_f0._0_4_;
        *(long ********)(lVar32 + 0x60) = local_f8;
        *(undefined8 *)(lVar32 + 0x68) = 0;
        if (lVar16 != 0) {
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        }
        lVar41 = param_1[0x11e];
        lVar32 = param_1[0x11f];
        if (lVar32 == lVar41) {
          puVar36 = puVar31;
          lVar32 = lVar41;
        }
        else {
          lVar16 = 0;
          do {
            lVar17 = param_1[0x121];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar19 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar19 != 0) {
              if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_01266194;
              *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar17;
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
            }
            lVar17 = lVar32 + lVar16;
            uVar15 = *(undefined8 *)(lVar17 + -0x78);
            *(undefined8 *)(lVar17 + -0x78) = 0;
            *(undefined8 *)((long)puVar31 + lVar16 + -0x78) = uVar15;
            *(undefined8 *)((long)puVar31 + lVar16 + -0x70) = *(undefined8 *)(lVar17 + -0x70);
            *(undefined8 *)((long)puVar31 + lVar16 + -0x68) = *(undefined8 *)(lVar17 + -0x68);
            *(undefined8 *)((long)puVar31 + lVar16 + -0x60) = *(undefined8 *)(lVar17 + -0x60);
            uVar15 = *(undefined8 *)(lVar17 + -0x58);
            *(undefined8 *)(lVar17 + -0x58) = 0;
            *(undefined8 *)((long)puVar31 + lVar16 + -0x58) = uVar15;
            *(undefined4 *)((long)puVar31 + lVar16 + -0x50) = *(undefined4 *)(lVar17 + -0x50);
            uVar15 = *(undefined8 *)(lVar17 + -0x48);
            *(undefined8 *)(lVar17 + -0x48) = 0;
            *(undefined8 *)((long)puVar31 + lVar16 + -0x48) = uVar15;
            *(undefined8 *)((long)puVar31 + lVar16 + -0x40) = *(undefined8 *)(lVar17 + -0x40);
            *(undefined8 *)((long)puVar31 + lVar16 + -0x38) = *(undefined8 *)(lVar17 + -0x38);
            *(undefined8 *)((long)puVar31 + lVar16 + -0x30) = *(undefined8 *)(lVar17 + -0x30);
            uVar15 = *(undefined8 *)(lVar17 + -0x28);
            *(undefined8 *)(lVar17 + -0x28) = 0;
            *(undefined8 *)((long)puVar31 + lVar16 + -0x28) = uVar15;
            *(undefined4 *)((long)puVar31 + lVar16 + -0x20) = *(undefined4 *)(lVar17 + -0x20);
            uVar15 = *(undefined8 *)(lVar17 + -0x18);
            *(undefined8 *)(lVar17 + -0x18) = 0;
            *(undefined8 *)((long)puVar31 + lVar16 + -0x18) = uVar15;
            uVar15 = *(undefined8 *)(lVar17 + -0x10);
            *(undefined8 *)(lVar17 + -0x10) = 0;
            *(undefined8 *)((long)puVar31 + lVar16 + -0x10) = uVar15;
            *(undefined8 *)((long)puVar31 + lVar16 + -8) = *(undefined8 *)(lVar17 + -8);
            if (lVar19 != 0) {
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
            }
            lVar16 = lVar16 + -0x78;
          } while (lVar41 - lVar32 != lVar16);
          lVar41 = param_1[0x11e];
          puVar36 = (undefined8 *)((long)puVar31 + lVar16);
          lVar32 = param_1[0x11f];
        }
        lVar16 = param_1[0x120];
        param_1[0x11e] = (long)puVar36;
        param_1[0x11f] = (long)(puVar31 + 0xf);
        param_1[0x120] = lVar37 + (long)local_108 * 0x78;
        if ((lVar32 != lVar41) && (FUN_00cb776c(lVar32 + -0x78), lVar32 + -0x78 != lVar41)) {
          do {
            FUN_00cb776c(lVar32 + -0xf0);
            lVar32 = lVar32 + -0x78;
          } while (lVar41 + 0x78 != lVar32);
        }
        if (lVar41 != 0) {
          plVar46 = (long *)param_1[0x121];
          uVar20 = (**(code **)(*plVar46 + 0xf8))(plVar46);
          if (((uVar20 & 1) == 0) || (lVar32 = FUN_00c4e600(), *(int *)(lVar32 + 0x12c8) < 1)) {
            (**(code **)(*plVar46 + 0x18))(plVar46,lVar41,lVar16 - lVar41,8);
          }
          else {
            FUN_00c48fe8(plVar46,lVar41,lVar16 - lVar41,8);
          }
        }
      }
      puVar26 = local_c8 + 1;
    } while (puVar26 != local_110);
  }
  puVar10 = PTR_LAB_047d3de8;
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  puVar31 = (undefined8 *)param_1[0x109];
  puVar36 = (undefined8 *)param_1[0x10a];
  if (puVar36 != puVar31) {
    pbVar29 = PTR_DAT_047d3908;
    do {
      puVar36 = puVar36 + -2;
      puVar24 = (undefined8 *)*puVar36;
      if (puVar24 != (undefined8 *)0x0) {
        psVar3 = (short *)(puVar24 + 3);
        do {
          sVar5 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar35 = (int *)((long)puVar24 + 0x1c);
          do {
            iVar13 = *piVar35;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar35,0x10);
            if (bVar7) {
              *piVar35 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 != -1) {
            if (((*pbVar29 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
              FUN_00100190(puVar10,puVar8,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar32 = *(long *)puVar8;
            *(long *)puVar9 = lVar32;
            local_98 = (long *******)*puVar24;
            FUN_00c44438(lVar32 + 0x8040,&local_98);
            pbVar29 = PTR_DAT_047d3908;
          }
        }
        else if (sVar5 == 0) goto LAB_012657a0;
      }
    } while (puVar36 != puVar31);
  }
  param_1[0x10a] = (long)puVar31;
  lVar32 = param_1[0x102];
  lVar37 = param_1[0x103];
  if (lVar37 != lVar32) {
    if (*(long **)(lVar37 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar37 + -8) + 0x20))();
    }
    if (lVar37 + -0x20 != lVar32) {
      do {
        if (*(long **)(lVar37 + -0x28) != (long *)0x0) {
          (**(code **)(**(long **)(lVar37 + -0x28) + 0x20))();
        }
        lVar37 = lVar37 + -0x20;
      } while (lVar32 + 0x20 != lVar37);
    }
  }
  param_1[0x103] = lVar32;
  lVar32 = param_1[0x110];
  lVar37 = param_1[0x111];
  if (lVar37 != lVar32) {
    if (*(long **)(lVar37 + -8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar37 + -8) + 0x20))();
    }
    if (lVar37 + -0x28 != lVar32) {
      if (*(long **)(lVar37 + -0x30) != (long *)0x0) {
        (**(code **)(**(long **)(lVar37 + -0x30) + 0x20))();
      }
      if (lVar37 + -0x50 != lVar32) {
        do {
          if (*(long **)(lVar37 + -0x58) != (long *)0x0) {
            (**(code **)(**(long **)(lVar37 + -0x58) + 0x20))();
          }
          lVar37 = lVar37 + -0x28;
        } while (lVar32 + 0x50 != lVar37);
      }
    }
  }
  param_1[0x111] = lVar32;
  puVar11 = PTR_LAB_047d3de8;
  puVar10 = PTR_DAT_047d3918;
  puVar9 = PTR_DAT_047d3910;
  puVar8 = PTR_DAT_047d3908;
  puVar36 = (undefined8 *)param_1[0x117];
  puVar31 = (undefined8 *)param_1[0x118];
  while (puVar31 != puVar36) {
    puVar31 = puVar31 + -2;
    puVar24 = (undefined8 *)*puVar31;
    if (puVar24 != (undefined8 *)0x0) {
      psVar3 = (short *)(puVar24 + 3);
      do {
        sVar5 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar35 = (int *)((long)puVar24 + 0x1c);
        do {
          iVar13 = *piVar35;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar35,0x10);
          if (bVar7) {
            *piVar35 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            FUN_00100190(puVar11,puVar9,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar8);
          }
          lVar32 = *(long *)puVar9;
          *(long *)puVar10 = lVar32;
          local_98 = (long *******)*puVar24;
          FUN_00c44438(lVar32 + 0x8040,&local_98);
        }
      }
      else if (sVar5 == 0) {
LAB_012657a0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  param_1[0x118] = (long)puVar36;
  puVar4 = (uint *)((long)local_d0 + (ulong)*(ushort *)((long)local_d0 + (8 - (long)*local_d0)));
  puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
  puVar26 = puVar4 + 1;
  uVar20 = (ulong)*puVar4;
  if (uVar20 != 0) {
    local_f0 = param_1 + 0x102;
    local_f8 = (long *******)(param_1 + 0x110);
    local_c8 = puVar26 + uVar20;
    local_e8 = &local_a8;
    local_d8 = param_1 + 0x105;
    local_e0 = (long *******)&local_90;
    ppppppplVar18 = (long *******)PTR_PTR_047d4508;
    pbVar29 = PTR_DAT_047d4240;
    ppppppplVar43 = (long *******)PTR_DAT_047d8b70;
    puVar31 = (undefined8 *)PTR_DAT_047d4248;
    do {
      puVar4 = (uint *)((long)puVar26 + (ulong)*puVar26);
      __s = __s + -((ulong)(*puVar4 + 1) + 0xf & 0x1fffffff0);
      memcpy(__s,puVar4 + 1,(ulong)(*puVar4 + 1));
      __s[*puVar4] = '\0';
      pcVar14 = strchr(__s,0x2e);
      if (pcVar14 != (char *)0x0) {
        *pcVar14 = '\0';
        if (*__s == '\0') {
          ppppppplVar38 = (long *******)FUN_00d44228();
          if (ppppppplVar38 != (long *******)0x0) {
            (*(code *)(*ppppppplVar38)[3])(ppppppplVar38);
          }
        }
        else {
          if (((*pbVar29 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar29), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,puVar31,&PTR_LOOP_04483000);
            __cxa_guard_release(pbVar29);
          }
          uVar15 = *puVar31;
          *(undefined8 *)PTR_DAT_047d4250 = uVar15;
          FUN_00cf9884(&local_98,uVar15,__s);
          ppppppplVar38 = local_98;
        }
        ppppppplVar34 = ppppppplVar43;
        if (ppppppplVar38 != (long *******)0x0) {
          ppppppplVar34 = ppppppplVar38 + 6;
        }
        local_b8 = *ppppppplVar34;
        ppppppplVar34 = ppppppplVar18;
        if (ppppppplVar38 != (long *******)0x0) {
          ppppppplVar34 = ppppppplVar38 + 7;
        }
        local_b0 = *ppppppplVar34;
        if (ppppppplVar38 == (long *******)0x0) {
          *local_e8 = (long ******)0x0;
          local_e8[1] = (long ******)0x0;
        }
        else {
          local_a8 = ppppppplVar38[8];
          local_a0 = (long *******)0x0;
          (*(code *)(*ppppppplVar38)[3])(ppppppplVar38);
          local_a0 = ppppppplVar38;
          (*(code *)(*ppppppplVar38)[4])(ppppppplVar38);
        }
        if (pcVar14[1] == '\0') {
          ppppppplVar38 = (long *******)FUN_00d44228();
          if (ppppppplVar38 != (long *******)0x0) {
            (*(code *)(*ppppppplVar38)[3])(ppppppplVar38);
          }
        }
        else {
          if (((*pbVar29 & 1) == 0) && (iVar13 = __cxa_guard_acquire(pbVar29), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,puVar31,&PTR_LOOP_04483000);
            __cxa_guard_release(pbVar29);
          }
          uVar15 = *puVar31;
          *(undefined8 *)PTR_DAT_047d4250 = uVar15;
          FUN_00cf9884(&local_98,uVar15,pcVar14 + 1);
          ppppppplVar38 = local_98;
        }
        ppppppplVar34 = ppppppplVar43;
        if (ppppppplVar38 != (long *******)0x0) {
          ppppppplVar34 = ppppppplVar38 + 6;
        }
        pppppplVar45 = *ppppppplVar34;
        if (ppppppplVar38 != (long *******)0x0) {
          ppppppplVar18 = ppppppplVar38 + 7;
        }
        pppppplVar44 = *ppppppplVar18;
        if (ppppppplVar38 == (long *******)0x0) {
          pppppplVar40 = (long ******)0x0;
        }
        else {
          pppppplVar40 = ppppppplVar38[8];
          (*(code *)(*ppppppplVar38)[3])(ppppppplVar38);
          (*(code *)(*ppppppplVar38)[4])(ppppppplVar38);
        }
        pppppplVar33 = local_b8;
        puVar36 = (undefined8 *)param_1[0x102];
        puVar24 = (undefined8 *)param_1[0x103];
        puVar31 = puVar36;
        if ((puVar36 != puVar24) && ((long ******)*puVar36 != local_b8)) {
          puVar30 = puVar36;
          do {
            if (puVar24 + -4 == puVar30) {
              puVar31 = puVar24;
              break;
            }
            puVar1 = puVar30 + 4;
            puVar31 = puVar30 + 4;
            puVar30 = puVar30 + 4;
          } while ((long ******)*puVar1 != local_b8);
        }
        if (puVar24 == puVar31) {
          ppppppplVar18 = (long *******)((long)puVar24 - (long)puVar36 >> 5);
          local_c0 = ppppppplVar18;
          if (puVar24 < (undefined8 *)param_1[0x104]) {
            FUN_01266a2c(local_f0,&local_b8);
          }
          else {
            uVar42 = param_1[0x106];
            uVar20 = (long)ppppppplVar18 + 1;
            if (0x7ffffffffffffffe < uVar42) {
              uVar42 = 0x7fffffffffffffff;
            }
            if (uVar42 < uVar20) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar32 = param_1[0x104] - (long)puVar36;
            uVar25 = lVar32 >> 4;
            if (uVar20 <= uVar25) {
              uVar20 = uVar25;
            }
            local_80 = (long *******)0x0;
            local_78 = local_d8;
            if (uVar42 >> 1 <= (ulong)(lVar32 >> 5)) {
              uVar20 = uVar42;
            }
            if (uVar20 == 0) {
              ppppppplVar43 = (long *******)0x0;
            }
            else {
              ppppppplVar43 =
                   (long *******)
                   (**(code **)(*(long *)*local_d8 + 0x10))((long *)*local_d8,uVar20 << 5,8);
              if (ppppppplVar43 == (long *******)0x0) {
                (**(code **)(*(long *)*local_d8 + 0xe8))();
              }
            }
            ppppppplVar18 = ppppppplVar43 + (long)ppppppplVar18 * 4;
            local_80 = ppppppplVar43 + uVar20 * 4;
            lVar32 = *local_d8;
            local_98 = ppppppplVar43;
            local_90 = ppppppplVar18;
            local_88 = ppppppplVar18;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar37 = nn::os::GetTlsValue(DAT_04865a30);
            ppppppplVar43 = local_a0;
            if (lVar37 != 0) {
              if (0xf < *(ulong *)(lVar37 + 0x80)) goto LAB_01266194;
              *(long *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = lVar32;
              *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
              pppppplVar33 = local_b8;
            }
            *ppppppplVar18 = pppppplVar33;
            ppppppplVar18[1] = local_b0;
            ppppppplVar18[2] = local_a8;
            local_a0 = (long *******)0x0;
            ppppppplVar18[3] = (long ******)ppppppplVar43;
            if (lVar37 != 0) {
              *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
            }
            local_88 = local_88 + 4;
            FUN_01266494(local_d8,param_1[0x102],param_1[0x103],local_e0);
            ppppppplVar39 = (long *******)param_1[0x102];
            param_1[0x102] = (long)local_90;
            ppppppplVar18 = (long *******)param_1[0x103];
            param_1[0x103] = (long)local_88;
            ppppppplVar34 = (long *******)param_1[0x104];
            param_1[0x104] = (long)local_80;
            local_98 = ppppppplVar39;
            local_90 = ppppppplVar39;
            local_88 = ppppppplVar18;
            local_80 = ppppppplVar34;
            ppppppplVar43 = (long *******)PTR_DAT_047d8b70;
            while (PTR_DAT_047d8b70 = (undefined *)ppppppplVar43, ppppppplVar18 != ppppppplVar39) {
              local_88 = ppppppplVar18 + -4;
              ppppppplVar28 = ppppppplVar18 + -1;
              ppppppplVar18 = local_88;
              if (*ppppppplVar28 != (long ******)0x0) {
                (*(code *)(**ppppppplVar28)[4])();
                ppppppplVar43 = (long *******)PTR_DAT_047d8b70;
              }
            }
            if (ppppppplVar39 != (long *******)0x0) {
              lVar32 = (long)ppppppplVar34 - (long)ppppppplVar39;
              plVar46 = (long *)*local_78;
              uVar20 = (**(code **)(*plVar46 + 0xf8))(plVar46);
              if (((uVar20 & 1) == 0) || (lVar37 = FUN_00c4e600(), *(int *)(lVar37 + 0x12c8) < 1)) {
                (**(code **)(*plVar46 + 0x18))(plVar46,ppppppplVar39,lVar32,8);
              }
              else {
                FUN_00c48fe8(plVar46,ppppppplVar39,lVar32,8);
              }
            }
          }
        }
        else {
          local_c0 = (long *******)((long)puVar31 - (long)puVar36 >> 5);
        }
        puVar31 = (undefined8 *)param_1[0x111];
        if (puVar31 < (undefined8 *)param_1[0x112]) {
          lVar32 = param_1[0x113];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar37 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar37 != 0) {
            if (0xf < *(ulong *)(lVar37 + 0x80)) goto LAB_01266194;
            *(long *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = lVar32;
            *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
          }
          *puVar31 = local_c0;
          puVar31[1] = pppppplVar45;
          puVar31[2] = pppppplVar44;
          puVar31[3] = pppppplVar40;
          puVar31[4] = ppppppplVar38;
          if (lVar37 != 0) {
            *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
          }
          param_1[0x111] = (long)(puVar31 + 5);
          ppppppplVar18 = (long *******)PTR_PTR_047d4508;
          pbVar29 = PTR_DAT_047d4240;
          puVar31 = (undefined8 *)PTR_DAT_047d4248;
        }
        else {
          uVar20 = param_1[0x114];
          lVar32 = (long)puVar31 - param_1[0x110] >> 3;
          if (0x7ffffffffffffffe < uVar20) {
            uVar20 = 0x7fffffffffffffff;
          }
          uVar42 = lVar32 * -0x3333333333333333 + 1;
          if (uVar20 < uVar42) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar37 = param_1[0x112] - param_1[0x110] >> 3;
          uVar25 = lVar37 * -0x6666666666666666;
          if (uVar42 <= uVar25) {
            uVar42 = uVar25;
          }
          if (uVar20 >> 1 <= (ulong)(lVar37 * -0x3333333333333333)) {
            uVar42 = uVar20;
          }
          if (uVar42 == 0) {
            lVar37 = 0;
          }
          else {
            lVar37 = (**(code **)(*(long *)param_1[0x113] + 0x10))
                               ((long *)param_1[0x113],uVar42 * 0x28,8);
            if (lVar37 == 0) {
              (**(code **)(*(long *)param_1[0x113] + 0xe8))();
            }
          }
          lVar41 = param_1[0x113];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 != 0) {
            if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01266194;
            *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar41;
            *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
          }
          puVar31 = (undefined8 *)(lVar37 + lVar32 * 8);
          lVar32 = lVar37 + lVar32 * 8;
          *puVar31 = local_c0;
          *(long *******)(lVar32 + 8) = pppppplVar45;
          *(long *******)(lVar32 + 0x10) = pppppplVar44;
          *(long *******)(lVar32 + 0x18) = pppppplVar40;
          *(long ********)(lVar32 + 0x20) = ppppppplVar38;
          if (lVar16 != 0) {
            *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
          }
          lVar32 = param_1[0x110];
          lVar41 = param_1[0x111];
          puVar36 = puVar31;
          if (lVar41 == lVar32) {
            lVar41 = lVar32;
          }
          else {
            do {
              lVar16 = param_1[0x113];
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar17 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar17 != 0) {
                if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_01266194;
                *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar16;
                *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
              }
              puVar36[-5] = *(undefined8 *)(lVar41 + -0x28);
              puVar36[-4] = *(undefined8 *)(lVar41 + -0x20);
              puVar36[-3] = *(undefined8 *)(lVar41 + -0x18);
              puVar36[-2] = *(undefined8 *)(lVar41 + -0x10);
              uVar15 = *(undefined8 *)(lVar41 + -8);
              *(undefined8 *)(lVar41 + -8) = 0;
              lVar41 = lVar41 + -0x28;
              puVar36[-1] = uVar15;
              if (lVar17 != 0) {
                *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
              }
              puVar36 = puVar36 + -5;
            } while (lVar32 != lVar41);
            lVar32 = param_1[0x111];
            lVar41 = param_1[0x110];
          }
          param_1[0x110] = (long)puVar36;
          param_1[0x111] = (long)(puVar31 + 5);
          lVar16 = param_1[0x112];
          param_1[0x112] = lVar37 + uVar42 * 0x28;
          ppppppplVar43 = (long *******)PTR_DAT_047d8b70;
          puVar31 = (undefined8 *)PTR_DAT_047d4248;
          pbVar29 = PTR_DAT_047d4240;
          if (lVar32 != lVar41) {
            if (*(long **)(lVar32 + -8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar32 + -8) + 0x20))();
            }
            if (lVar32 + -0x28 != lVar41) {
              if (*(long **)(lVar32 + -0x30) != (long *)0x0) {
                (**(code **)(**(long **)(lVar32 + -0x30) + 0x20))();
              }
              if (lVar32 + -0x50 != lVar41) {
                do {
                  if (*(long **)(lVar32 + -0x58) != (long *)0x0) {
                    (**(code **)(**(long **)(lVar32 + -0x58) + 0x20))();
                  }
                  lVar32 = lVar32 + -0x28;
                } while (lVar41 + 0x50 != lVar32);
              }
            }
          }
          ppppppplVar18 = (long *******)PTR_PTR_047d4508;
          if (lVar41 != 0) {
            plVar46 = (long *)param_1[0x113];
            uVar20 = (**(code **)(*plVar46 + 0xf8))(plVar46);
            if (((uVar20 & 1) == 0) || (lVar32 = FUN_00c4e600(), *(int *)(lVar32 + 0x12c8) < 1)) {
              (**(code **)(*plVar46 + 0x18))(plVar46,lVar41,lVar16 - lVar41,8);
            }
            else {
              FUN_00c48fe8(plVar46,lVar41,lVar16 - lVar41,8);
            }
          }
        }
        if (local_a0 != (long *******)0x0) {
          (*(code *)(*local_a0)[4])();
        }
      }
      puVar26 = puVar26 + 1;
    } while (puVar26 != local_c8);
  }
  uVar20 = param_1[0x103] - param_1[0x102] >> 5;
  lVar32 = param_1[0x109];
  uVar42 = param_1[0x10a] - lVar32 >> 4;
  if (uVar42 < uVar20) {
    if ((ulong)(param_1[0x10b] - param_1[0x10a] >> 4) < uVar20 - uVar42) {
      uVar25 = param_1[0x10d];
      if (0x7ffffffffffffffe < uVar25) {
        uVar25 = 0x7fffffffffffffff;
      }
      if (uVar25 < uVar20) goto LAB_012661e8;
      lVar32 = param_1[0x10b] - lVar32;
      uVar21 = lVar32 >> 3;
      uVar22 = uVar20;
      if (uVar20 <= uVar21) {
        uVar22 = uVar21;
      }
      plVar46 = param_1 + 0x10c;
      local_80 = (long *******)0x0;
      if (uVar25 >> 1 <= (ulong)(lVar32 >> 4)) {
        uVar22 = uVar25;
      }
      local_78 = plVar46;
      if (uVar22 == 0) {
        ppppppplVar18 = (long *******)0x0;
      }
      else {
        ppppppplVar18 =
             (long *******)(**(code **)(*(long *)*plVar46 + 0x10))((long *)*plVar46,uVar22 << 4,8);
        if (ppppppplVar18 == (long *******)0x0) {
          (**(code **)(*(long *)*plVar46 + 0xe8))();
        }
      }
      puVar8 = PTR_LAB_047d3900;
      ppppppplVar43 = ppppppplVar18 + uVar42 * 2;
      local_80 = ppppppplVar18 + uVar22 * 2;
      lVar32 = uVar20 * 0x10 + uVar42 * -0x10;
      plVar23 = plVar46;
      local_98 = ppppppplVar18;
      local_90 = ppppppplVar43;
      local_88 = ppppppplVar43;
      while( true ) {
        lVar32 = lVar32 + -0x10;
        lVar37 = *plVar23;
        if (((DAT_04865a38 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar8,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar41 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar41 == 0) {
          *ppppppplVar43 = (long ******)0x0;
          ppppppplVar43[1] = (long ******)0x0;
        }
        else {
          if (0xf < *(ulong *)(lVar41 + 0x80)) goto LAB_01266194;
          *(long *)(lVar41 + *(ulong *)(lVar41 + 0x80) * 8) = lVar37;
          *(long *)(lVar41 + 0x80) = *(long *)(lVar41 + 0x80) + 1;
          *ppppppplVar43 = (long ******)0x0;
          ppppppplVar43[1] = (long ******)0x0;
          *(long *)(lVar41 + 0x80) = *(long *)(lVar41 + 0x80) + -1;
        }
        if (lVar32 == 0) break;
        ppppppplVar43 = ppppppplVar43 + 2;
        plVar23 = local_78;
      }
      ppppppplVar43 = (long *******)param_1[0x109];
      ppppppplVar38 = (long *******)param_1[0x10a];
      if (ppppppplVar38 == ppppppplVar43) {
        ppppppplVar34 = local_90;
        local_88 = ppppppplVar43;
      }
      else {
        ppppppplVar34 = local_90 + -2;
        local_88 = ppppppplVar18 + uVar20 * 2;
        FUN_01266934(plVar46,ppppppplVar34,ppppppplVar38 + -2);
        if (ppppppplVar38 + -2 != ppppppplVar43) {
          do {
            ppppppplVar34 = ppppppplVar34 + -2;
            FUN_01266934(plVar46,ppppppplVar34,ppppppplVar38 + -4);
            ppppppplVar38 = ppppppplVar38 + -2;
          } while (ppppppplVar43 + 2 != ppppppplVar38);
        }
        ppppppplVar43 = (long *******)param_1[0x109];
        local_88 = (long *******)param_1[0x10a];
      }
      param_1[0x109] = (long)ppppppplVar34;
      ppppppplVar38 = (long *******)param_1[0x10b];
      param_1[0x10a] = (long)(ppppppplVar18 + uVar20 * 2);
      param_1[0x10b] = (long)local_80;
      local_98 = ppppppplVar43;
      local_90 = ppppppplVar43;
      local_80 = ppppppplVar38;
      FUN_01266730(&local_98);
    }
    else {
      FUN_01266b30();
    }
  }
  else if (uVar20 < uVar42) {
    FUN_021bfbac(param_1 + 0x109,lVar32 + uVar20 * 0x10);
  }
  piVar35 = local_d0;
  lVar32 = param_1[0x111] - param_1[0x110] >> 3;
  uVar20 = lVar32 * -0x3333333333333333;
  lVar37 = param_1[0x117];
  uVar42 = param_1[0x118] - lVar37 >> 4;
  if (uVar42 < uVar20) {
    if ((ulong)(param_1[0x119] - param_1[0x118] >> 4) < uVar20 - uVar42) {
      uVar25 = param_1[0x11b];
      if (0x7ffffffffffffffe < uVar25) {
        uVar25 = 0x7fffffffffffffff;
      }
      if (uVar20 <= uVar25) {
        lVar37 = param_1[0x119] - lVar37;
        uVar22 = lVar37 >> 3;
        if (uVar20 <= uVar22) {
          uVar20 = uVar22;
        }
        plVar46 = param_1 + 0x11a;
        local_80 = (long *******)0x0;
        if (uVar25 >> 1 <= (ulong)(lVar37 >> 4)) {
          uVar20 = uVar25;
        }
        local_78 = plVar46;
        if (uVar20 == 0) {
          ppppppplVar18 = (long *******)0x0;
        }
        else {
          ppppppplVar18 =
               (long *******)(**(code **)(*(long *)*plVar46 + 0x10))((long *)*plVar46,uVar20 << 4,8)
          ;
          if (ppppppplVar18 == (long *******)0x0) {
            (**(code **)(*(long *)*plVar46 + 0xe8))();
          }
        }
        puVar8 = PTR_LAB_047d3900;
        ppppppplVar43 = ppppppplVar18 + uVar42 * 2;
        local_80 = ppppppplVar18 + uVar20 * 2;
        lVar37 = lVar32 * -0x3333333333333330 + uVar42 * -0x10;
        plVar23 = plVar46;
        local_98 = ppppppplVar18;
        local_90 = ppppppplVar43;
        local_88 = ppppppplVar43;
        do {
          lVar37 = lVar37 + -0x10;
          lVar41 = *plVar23;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(puVar8,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar16 == 0) {
            *ppppppplVar43 = (long ******)0x0;
            ppppppplVar43[1] = (long ******)0x0;
          }
          else {
            if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_01266194:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar41;
            *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
            *ppppppplVar43 = (long ******)0x0;
            ppppppplVar43[1] = (long ******)0x0;
            *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
          }
          if (lVar37 == 0) goto LAB_01265244;
          ppppppplVar43 = ppppppplVar43 + 2;
          plVar23 = local_78;
        } while( true );
      }
LAB_012661e8:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_01266c40();
  }
  else if (uVar20 < uVar42) {
    FUN_01266d50(param_1 + 0x117,lVar37 + lVar32 * -0x3333333333333330);
  }
LAB_0126529c:
  *(undefined1 *)((long)param_1 + 0x7e9) = 0;
  lVar32 = 0;
  uVar20 = 0;
  if ((10 < *(ushort *)((long)piVar35 - (long)*piVar35)) &&
     (uVar42 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[5], uVar42 != 0)) {
    plVar46 = (long *)((long)piVar35 + uVar42);
    lVar32 = *plVar46;
    uVar20 = (ulong)*(uint *)(plVar46 + 1);
  }
  param_1[0x1d] = uVar20;
  param_1[0x1c] = lVar32;
  if (*(char *)((long)param_1 + 0xf4) == '\0') {
    *(undefined1 *)((long)param_1 + 0xf4) = 1;
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  fVar47 = 0.0;
  fVar48 = 0.0;
  if (0xc < *(ushort *)((long)piVar35 - (long)*piVar35)) {
    uVar20 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[6];
    fVar48 = 0.0;
    if (uVar20 != 0) {
      fVar48 = *(float *)((long)piVar35 + uVar20);
    }
  }
  *(float *)(param_1 + 0x101) = fVar48 * fVar48;
  if ((0xe < *(ushort *)((long)piVar35 - (long)*piVar35)) &&
     (uVar20 = (ulong)((ushort *)((long)piVar35 - (long)*piVar35))[7], uVar20 != 0)) {
    fVar47 = *(float *)((long)piVar35 + uVar20);
  }
  *(undefined1 *)(param_1 + 0xfd) = 1;
  *(float *)((long)param_1 + 0x80c) = fVar47 * fVar47;
  return;
LAB_01265244:
  local_88 = ppppppplVar18 + lVar32 * -0x666666666666666;
  FUN_01266360(plVar46,param_1[0x117],param_1[0x118],&local_90);
  local_98 = (long *******)param_1[0x117];
  param_1[0x117] = (long)local_90;
  ppppppplVar18 = (long *******)param_1[0x118];
  param_1[0x118] = (long)local_88;
  ppppppplVar43 = (long *******)param_1[0x119];
  param_1[0x119] = (long)local_80;
  local_90 = local_98;
  local_88 = ppppppplVar18;
  local_80 = ppppppplVar43;
  FUN_012665c8(&local_98);
  ppppppplVar18 = local_98;
  piVar35 = local_d0;
  if (local_98 != (long *******)0x0) {
    lVar32 = (long)local_80 - (long)local_98;
    plVar46 = (long *)*local_78;
    uVar20 = (**(code **)(*plVar46 + 0xf8))(plVar46);
    if (((uVar20 & 1) == 0) || (lVar37 = FUN_00c4e600(), *(int *)(lVar37 + 0x12c8) < 1)) {
      (**(code **)(*plVar46 + 0x18))(plVar46,ppppppplVar18,lVar32,8);
    }
    else {
      FUN_00c48fe8(plVar46,ppppppplVar18,lVar32,8);
    }
  }
  goto LAB_0126529c;
}


