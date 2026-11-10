/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0170e108; name: FUN_0170e108
 */


void FUN_0170e108(long *param_1,long param_2,long *param_3,ulong param_4,ulong param_5)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  uint *puVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  int *piVar15;
  ushort *puVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  int *piVar22;
  ulong uVar23;
  int *piVar24;
  long *plVar25;
  long *local_120;
  undefined1 *local_118;
  long *local_110;
  undefined1 auStack_108 [24];
  long *local_f0;
  undefined1 auStack_e8 [24];
  long *local_d0;
  undefined1 auStack_c8 [24];
  long *local_b0;
  undefined1 auStack_a8 [24];
  long *local_90;
  char *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  
  plVar25 = param_3 + 1;
  piVar15 = (int *)*plVar25;
  if (piVar15 == (int *)0x0) {
LAB_0170f9f0:
    cVar5 = FUN_0113b7d0(*param_1);
    cVar6 = FUN_01155170(*param_1);
    if (cVar5 == cVar6) {
      lVar17 = *param_1;
    }
    else {
      if ((param_4 & 1) == 0) {
        nn::crypto::GenerateCryptographicallyRandomBytes(&local_88,8);
        pcVar18 = local_88 + -0x7d5d4e8add6295a5;
      }
      else {
        pcVar18 = *(char **)(param_2 + 0x10);
      }
      lVar17 = *param_1;
      if (((ulong)pcVar18 & 1) != 0) {
        uVar9 = FUN_01155170(lVar17);
        goto LAB_0170fba4;
      }
    }
    uVar9 = FUN_0113b7d0(lVar17);
  }
  else {
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar15 + uVar19);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
    local_88 = "wazaType";
    pvVar10 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar10 != (void *)0x0) {
      local_88 = (char *)0xa10ad490370dfd7c;
      pcStack_80 = "wazaType";
      local_78 = 8;
      local_70 = (long *)0x0;
      piVar15 = (int *)FUN_00d27b5c(param_3,&local_88);
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((long)piVar15 + uVar19);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (iVar8 == 1) {
        local_90 = (long *)*param_1;
        if (local_90 != (long *)0x0) {
          plVar21 = local_90 + 5;
          do {
            lVar17 = *plVar21;
            cVar5 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *(int *)plVar21 = (int)lVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar17 == -1) goto LAB_0170ff80;
        }
        local_88 = (char *)0x45196a632d2403ff;
        pcStack_80 = "waza1";
        local_78 = 5;
        local_70 = (long *)0x0;
        FUN_00d996a8(auStack_a8,param_3,&local_88);
        FUN_01e22f60(&local_90,0,auStack_a8);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_90 != (long *)0x0) {
          plVar21 = local_90 + 5;
          do {
            lVar17 = *plVar21;
            iVar8 = (int)lVar17 + -1;
            cVar5 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *(int *)plVar21 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_90 + 0x10))();
          }
          else if ((int)lVar17 == 0) goto LAB_0170ffa8;
        }
        local_b0 = (long *)*param_1;
        if (local_b0 != (long *)0x0) {
          plVar21 = local_b0 + 5;
          do {
            lVar17 = *plVar21;
            cVar5 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *(int *)plVar21 = (int)lVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar17 == -1) goto LAB_0170ff80;
        }
        local_88 = (char *)0x45196b632d2405b2;
        pcStack_80 = "waza2";
        local_78 = 5;
        local_70 = (long *)0x0;
        FUN_00d996a8(auStack_c8,param_3,&local_88);
        FUN_01e22f60(&local_b0,1,auStack_c8);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_b0 != (long *)0x0) {
          plVar21 = local_b0 + 5;
          do {
            lVar17 = *plVar21;
            iVar8 = (int)lVar17 + -1;
            cVar5 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *(int *)plVar21 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_b0 + 0x10))();
          }
          else if ((int)lVar17 == 0) goto LAB_0170ffa8;
        }
        local_d0 = (long *)*param_1;
        if (local_d0 != (long *)0x0) {
          plVar21 = local_d0 + 5;
          do {
            lVar17 = *plVar21;
            cVar5 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *(int *)plVar21 = (int)lVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar17 == -1) goto LAB_0170ff80;
        }
        local_88 = (char *)0x45196c632d240765;
        pcStack_80 = "waza3";
        local_78 = 5;
        local_70 = (long *)0x0;
        FUN_00d996a8(auStack_e8,param_3,&local_88);
        FUN_01e22f60(&local_d0,2,auStack_e8);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_d0 != (long *)0x0) {
          plVar21 = local_d0 + 5;
          do {
            lVar17 = *plVar21;
            iVar8 = (int)lVar17 + -1;
            cVar5 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *(int *)plVar21 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_d0 + 0x10))();
          }
          else if ((int)lVar17 == 0) goto LAB_0170ffa8;
        }
        local_f0 = (long *)*param_1;
        if (local_f0 != (long *)0x0) {
          plVar21 = local_f0 + 5;
          do {
            lVar17 = *plVar21;
            cVar5 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *(int *)plVar21 = (int)lVar17 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar17 == -1) goto LAB_0170ff80;
        }
        local_88 = (char *)0x451965632d23fb80;
        pcStack_80 = "waza4";
        local_78 = 5;
        local_70 = (long *)0x0;
        FUN_00d996a8(auStack_108,param_3,&local_88);
        FUN_01e22f60(&local_f0,3,auStack_108);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_f0 != (long *)0x0) {
          plVar21 = local_f0 + 5;
          do {
            lVar17 = *plVar21;
            iVar8 = (int)lVar17 + -1;
            cVar5 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *(int *)plVar21 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_f0 + 0x10))();
          }
          else if ((int)lVar17 == 0) goto LAB_0170ffa8;
        }
      }
    }
    piVar15 = (int *)*plVar25;
    if (piVar15 == (int *)0x0) goto LAB_0170f9f0;
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar15 + uVar19);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
    local_88 = "useNickName";
    pvVar10 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar10 != (void *)0x0) {
      local_88 = (char *)0xef91f7d2b0a99080;
      pcStack_80 = "useNickName";
      local_78 = 0xb;
      local_70 = (long *)0x0;
      uVar19 = FUN_00cf7518(param_3,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if ((uVar19 & 1) != 0) {
        piVar15 = (int *)*plVar25;
        if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
           (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
LAB_0170e5e8:
          puVar12 = (undefined1 *)0x0;
        }
        else {
          puVar11 = (uint *)((long)piVar15 + uVar19);
          puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
          local_88 = "nicknameLabel";
          puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600)
          ;
          puVar12 = (undefined1 *)0x0;
          if ((puVar11 != (uint *)0x0) && (puVar12 = (undefined1 *)0x0, *param_3 != 0)) {
            piVar15 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar16 = (ushort *)((long)piVar15 - (long)*piVar15);
            if (*puVar16 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar16[3] != 0) {
                puVar11 = (uint *)((long)piVar15 + (ulong)puVar16[3]);
                piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar19 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar19 == 0)) {
              uVar19 = 0;
            }
            else {
              uVar19 = (long)*(char *)((long)piVar22 + uVar19) & 0xffffffff;
            }
            if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 8) {
              puVar12 = (undefined1 *)FUN_015efc20();
            }
            else {
              if ((*puVar16 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170e5e8;
              puVar12 = *(undefined1 **)((long)piVar15 + (ulong)puVar16[6]);
            }
          }
        }
        if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8ac0);
        }
        local_88 = (char *)0x64272b665a520e36;
        pcStack_80 = "field_trade";
        uVar20 = *(undefined8 *)PTR_DAT_047d8ac8;
        local_78 = 0xb;
        local_70 = (long *)0x0;
        *(undefined8 *)PTR_DAT_047d8ad0 = uVar20;
        local_118 = puVar12;
        FUN_00f1203c(&local_110,uVar20,&local_88,&local_118,0);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        FUN_01dbf0f8(*param_1,local_110);
        if (local_110 != (long *)0x0) {
          plVar21 = local_110 + 5;
          do {
            lVar17 = *plVar21;
            iVar8 = (int)lVar17 + -1;
            cVar5 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *(int *)plVar21 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_110 + 0x10))();
          }
          else if ((int)lVar17 == 0) goto LAB_0170ffa8;
        }
      }
    }
    piVar15 = (int *)*plVar25;
    if (piVar15 == (int *)0x0) goto LAB_0170f9f0;
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar15 + uVar19);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
    local_88 = "parentNameLabel";
    pvVar10 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar10 != (void *)0x0) {
      piVar15 = (int *)*plVar25;
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
LAB_0170e7e0:
        puVar12 = (undefined1 *)0x0;
LAB_0170e7e4:
        if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8ac0);
        }
        local_88 = (char *)0x64272b665a520e36;
        pcStack_80 = "field_trade";
        uVar20 = *(undefined8 *)PTR_DAT_047d8ac8;
        local_78 = 0xb;
        local_70 = (long *)0x0;
        *(undefined8 *)PTR_DAT_047d8ad0 = uVar20;
        local_118 = puVar12;
        FUN_00f1203c(&local_110,uVar20,&local_88,&local_118,0);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        lVar17 = *param_1;
        uVar20 = FUN_0196c644(local_110);
        if ((param_5 & 1) == 0) {
          FUN_021f4834(*(undefined8 *)(lVar17 + 0x70),uVar20);
        }
        else {
          FUN_00e69cec();
        }
        if (local_110 != (long *)0x0) {
          plVar21 = local_110 + 5;
          do {
            lVar17 = *plVar21;
            iVar8 = (int)lVar17 + -1;
            cVar5 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *(int *)plVar21 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*local_110 + 0x10))();
          }
          else if ((int)lVar17 == 0) goto LAB_0170ffa8;
        }
      }
      else {
        puVar11 = (uint *)((long)piVar15 + uVar19);
        local_88 = "parentNameLabel";
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
        puVar12 = (undefined1 *)0x0;
        if ((puVar11 == (uint *)0x0) || (puVar12 = (undefined1 *)0x0, *param_3 == 0))
        goto LAB_0170e7e4;
        piVar15 = (int *)((long)puVar11 + (ulong)*puVar11);
        puVar16 = (ushort *)((long)piVar15 - (long)*piVar15);
        if (*puVar16 < 7) {
          piVar22 = (int *)0x0;
        }
        else {
          piVar22 = (int *)0x0;
          if ((ulong)puVar16[3] != 0) {
            puVar11 = (uint *)((long)piVar15 + (ulong)puVar16[3]);
            piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
          }
        }
        if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
           (uVar19 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar19 == 0)) {
          uVar19 = 0;
        }
        else {
          uVar19 = (long)*(char *)((long)piVar22 + uVar19) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 8) {
          puVar12 = (undefined1 *)FUN_015efc20();
        }
        else {
          if ((*puVar16 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170e7e0;
          puVar12 = *(undefined1 **)((long)piVar15 + (ulong)puVar16[6]);
        }
        if (puVar12 != &DAT_cbf29ce484222645) goto LAB_0170e7e4;
      }
      local_88 = (char *)0x90aa7d5f1a93823f;
      pcStack_80 = "parentSex";
      local_78 = 9;
      local_70 = (long *)0x0;
      piVar15 = (int *)FUN_00d27b5c(param_3,&local_88);
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((long)piVar15 + uVar19);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (iVar8 == 2) {
        lVar17 = *param_1;
        uVar20 = 1;
LAB_0170e924:
        if ((param_5 & 1) == 0) {
          FUN_021f4c98(*(undefined8 *)(lVar17 + 0x70),uVar20);
        }
        else {
          FUN_00e69998();
        }
      }
      else if (iVar8 == 1) {
        lVar17 = *param_1;
        uVar20 = 0;
        goto LAB_0170e924;
      }
      local_88 = (char *)0x9736f1c4a4b65a98;
      pcStack_80 = "parentLangId";
      local_78 = 0xc;
      local_70 = (long *)0x0;
      piVar15 = (int *)FUN_00d27b5c(param_3,&local_88);
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((long)piVar15 + uVar19);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      lVar17 = *param_1;
      if (iVar8 == 0) {
        if ((param_5 & 1) == 0) {
          FUN_021f4fe4(*(undefined8 *)(lVar17 + 0x70),
                       *(undefined1 *)(*(long *)PTR_DAT_047d90c8 + 0x3d0));
        }
        else {
          FUN_00eeef6c();
        }
      }
      else {
        if ((param_5 & 1) == 0) {
          local_88 = (char *)0x9736f1c4a4b65a98;
          pcStack_80 = "parentLangId";
          local_78 = 0xc;
          local_70 = (long *)0x0;
          piVar15 = (int *)FUN_00d27b5c(param_3,&local_88);
          if ((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) {
            uVar9 = 0;
          }
          else {
            uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3];
            uVar9 = 0;
            if (uVar19 != 0) {
              uVar9 = (uint)*(byte *)((long)piVar15 + uVar19);
            }
          }
          FUN_021f4fe4(*(undefined8 *)(lVar17 + 0x70),uVar9 - 1);
        }
        else {
          local_88 = (char *)0x9736f1c4a4b65a98;
          pcStack_80 = "parentLangId";
          local_78 = 0xc;
          local_70 = (long *)0x0;
          piVar15 = (int *)FUN_00d27b5c(param_3,&local_88);
          if ((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) {
            uVar9 = 0;
          }
          else {
            uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3];
            uVar9 = 0;
            if (uVar19 != 0) {
              uVar9 = (uint)*(byte *)((long)piVar15 + uVar19);
            }
          }
          FUN_00eeef6c(*(undefined8 *)(lVar17 + 0x70),uVar9 - 1);
        }
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
      }
      lVar17 = *param_1;
      piVar15 = (int *)*plVar25;
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
LAB_0170f950:
        uVar14 = 0;
      }
      else {
        puVar11 = (uint *)((long)piVar15 + uVar19);
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        local_88 = "parentMemoryCode";
        puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar11 == (uint *)0x0) || (piVar15 = (int *)*param_3, piVar15 == (int *)0x0))
        goto LAB_0170f950;
        piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
        puVar16 = (ushort *)((long)piVar22 - (long)*piVar22);
        uVar2 = *puVar16;
        if (uVar2 < 7) {
          piVar24 = (int *)0x0;
        }
        else {
          piVar24 = (int *)0x0;
          if ((ulong)puVar16[3] != 0) {
            puVar11 = (uint *)((long)piVar22 + (ulong)puVar16[3]);
            piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
          }
        }
        if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
           (uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar19 == 0)) {
          uVar19 = 0;
        }
        else {
          uVar19 = (long)*(char *)((long)piVar24 + uVar19) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 4) {
          if (uVar2 < 0xb) {
            uVar9 = 0;
LAB_0170ebd0:
            uVar14 = 0;
          }
          else {
            uVar9 = 0;
            if ((ulong)puVar16[5] != 0) {
              uVar9 = (uint)*(ushort *)((long)piVar22 + (ulong)puVar16[5]);
            }
            if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170ebd0;
            uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
          }
          if ((uVar9 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
             (uVar19 = (ulong)*(ushort *)(((long)piVar15 - (long)*piVar15) + (ulong)uVar9),
             uVar19 != 0)) {
            uVar14 = *(undefined4 *)((long)piVar15 + uVar19);
          }
        }
        else {
          if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170f950;
          uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
        }
      }
      FUN_00e6b1cc(*(undefined8 *)(lVar17 + 0x70),uVar14);
      lVar17 = *param_1;
      piVar15 = (int *)*plVar25;
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
LAB_0170f970:
        uVar14 = 0;
      }
      else {
        puVar11 = (uint *)((long)piVar15 + uVar19);
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        local_88 = "parentMemoryData";
        puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar11 == (uint *)0x0) || (piVar15 = (int *)*param_3, piVar15 == (int *)0x0))
        goto LAB_0170f970;
        piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
        puVar16 = (ushort *)((long)piVar22 - (long)*piVar22);
        uVar2 = *puVar16;
        if (uVar2 < 7) {
          piVar24 = (int *)0x0;
        }
        else {
          piVar24 = (int *)0x0;
          if ((ulong)puVar16[3] != 0) {
            puVar11 = (uint *)((long)piVar22 + (ulong)puVar16[3]);
            piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
          }
        }
        if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
           (uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar19 == 0)) {
          uVar19 = 0;
        }
        else {
          uVar19 = (long)*(char *)((long)piVar24 + uVar19) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 4) {
          if (uVar2 < 0xb) {
            uVar9 = 0;
LAB_0170ed08:
            uVar14 = 0;
          }
          else {
            uVar9 = 0;
            if ((ulong)puVar16[5] != 0) {
              uVar9 = (uint)*(ushort *)((long)piVar22 + (ulong)puVar16[5]);
            }
            if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170ed08;
            uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
          }
          if ((uVar9 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
             (uVar19 = (ulong)*(ushort *)(((long)piVar15 - (long)*piVar15) + (ulong)uVar9),
             uVar19 != 0)) {
            uVar14 = *(undefined4 *)((long)piVar15 + uVar19);
          }
        }
        else {
          if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170f970;
          uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
        }
      }
      FUN_00e6b518(*(undefined8 *)(lVar17 + 0x70),uVar14);
      lVar17 = *param_1;
      piVar15 = (int *)*plVar25;
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
LAB_0170f990:
        uVar14 = 0;
      }
      else {
        puVar11 = (uint *)((long)piVar15 + uVar19);
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        local_88 = "parentMemoryFeel";
        puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar11 == (uint *)0x0) || (piVar15 = (int *)*param_3, piVar15 == (int *)0x0))
        goto LAB_0170f990;
        piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
        puVar16 = (ushort *)((long)piVar22 - (long)*piVar22);
        uVar2 = *puVar16;
        if (uVar2 < 7) {
          piVar24 = (int *)0x0;
        }
        else {
          piVar24 = (int *)0x0;
          if ((ulong)puVar16[3] != 0) {
            puVar11 = (uint *)((long)piVar22 + (ulong)puVar16[3]);
            piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
          }
        }
        if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
           (uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar19 == 0)) {
          uVar19 = 0;
        }
        else {
          uVar19 = (long)*(char *)((long)piVar24 + uVar19) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 4) {
          if (uVar2 < 0xb) {
            uVar9 = 0;
LAB_0170ee40:
            uVar14 = 0;
          }
          else {
            uVar9 = 0;
            if ((ulong)puVar16[5] != 0) {
              uVar9 = (uint)*(ushort *)((long)piVar22 + (ulong)puVar16[5]);
            }
            if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170ee40;
            uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
          }
          if ((uVar9 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
             (uVar19 = (ulong)*(ushort *)(((long)piVar15 - (long)*piVar15) + (ulong)uVar9),
             uVar19 != 0)) {
            uVar14 = *(undefined4 *)((long)piVar15 + uVar19);
          }
        }
        else {
          if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170f990;
          uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
        }
      }
      FUN_00e6b864(*(undefined8 *)(lVar17 + 0x70),uVar14);
      lVar17 = *param_1;
      piVar15 = (int *)*plVar25;
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
LAB_0170f9b0:
        uVar14 = 0;
      }
      else {
        puVar11 = (uint *)((long)piVar15 + uVar19);
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        local_88 = "parentMemoryLevel";
        puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar11 == (uint *)0x0) || (piVar15 = (int *)*param_3, piVar15 == (int *)0x0))
        goto LAB_0170f9b0;
        piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
        puVar16 = (ushort *)((long)piVar22 - (long)*piVar22);
        uVar2 = *puVar16;
        if (uVar2 < 7) {
          piVar24 = (int *)0x0;
        }
        else {
          piVar24 = (int *)0x0;
          if ((ulong)puVar16[3] != 0) {
            puVar11 = (uint *)((long)piVar22 + (ulong)puVar16[3]);
            piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
          }
        }
        if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
           (uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar19 == 0)) {
          uVar19 = 0;
        }
        else {
          uVar19 = (long)*(char *)((long)piVar24 + uVar19) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 4) {
          if (uVar2 < 0xb) {
            uVar9 = 0;
LAB_0170ef78:
            uVar14 = 0;
          }
          else {
            uVar9 = 0;
            if ((ulong)puVar16[5] != 0) {
              uVar9 = (uint)*(ushort *)((long)piVar22 + (ulong)puVar16[5]);
            }
            if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170ef78;
            uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
          }
          if ((uVar9 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
             (uVar19 = (ulong)*(ushort *)(((long)piVar15 - (long)*piVar15) + (ulong)uVar9),
             uVar19 != 0)) {
            uVar14 = *(undefined4 *)((long)piVar15 + uVar19);
          }
        }
        else {
          if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170f9b0;
          uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
        }
      }
      FUN_00e6ae80(*(undefined8 *)(lVar17 + 0x70),uVar14);
    }
    piVar15 = (int *)*plVar25;
    if (piVar15 == (int *)0x0) goto LAB_0170f9f0;
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar15 + uVar19);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
    local_88 = "langId";
    pvVar10 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar10 != (void *)0x0) {
      local_88 = (char *)0xd43e24493f419310;
      pcStack_80 = "langId";
      local_78 = 6;
      local_70 = (long *)0x0;
      piVar15 = (int *)FUN_00d27b5c(param_3,&local_88);
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((long)piVar15 + uVar19);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (iVar8 != 0) {
        lVar17 = *param_1;
        local_88 = (char *)0xd43e24493f419310;
        pcStack_80 = "langId";
        local_78 = 6;
        local_70 = (long *)0x0;
        piVar15 = (int *)FUN_00d27b5c(param_3,&local_88);
        if ((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) {
          uVar9 = 0;
        }
        else {
          uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3];
          uVar9 = 0;
          if (uVar19 != 0) {
            uVar9 = (uint)*(byte *)((long)piVar15 + uVar19);
          }
        }
        FUN_00eeef6c(*(undefined8 *)(lVar17 + 0x70),uVar9 - 1);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
      }
    }
    piVar15 = (int *)*plVar25;
    if (piVar15 == (int *)0x0) goto LAB_0170f9f0;
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar15 + uVar19);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
    local_88 = "ballId";
    pvVar10 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar10 != (void *)0x0) {
      lVar17 = *param_1;
      piVar15 = (int *)*plVar25;
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
LAB_0170f9d0:
        uVar14 = 0;
      }
      else {
        puVar11 = (uint *)((long)piVar15 + uVar19);
        local_88 = "ballId";
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar11 == (uint *)0x0) || (piVar15 = (int *)*param_3, piVar15 == (int *)0x0))
        goto LAB_0170f9d0;
        piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
        puVar16 = (ushort *)((long)piVar22 - (long)*piVar22);
        uVar2 = *puVar16;
        if (uVar2 < 7) {
          piVar24 = (int *)0x0;
        }
        else {
          piVar24 = (int *)0x0;
          if ((ulong)puVar16[3] != 0) {
            puVar11 = (uint *)((long)piVar22 + (ulong)puVar16[3]);
            piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
          }
        }
        if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
           (uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar19 == 0)) {
          uVar19 = 0;
        }
        else {
          uVar19 = (long)*(char *)((long)piVar24 + uVar19) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 4) {
          if (uVar2 < 0xb) {
            uVar9 = 0;
LAB_0170f230:
            uVar14 = 0;
          }
          else {
            uVar9 = 0;
            if ((ulong)puVar16[5] != 0) {
              uVar9 = (uint)*(ushort *)((long)piVar22 + (ulong)puVar16[5]);
            }
            if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170f230;
            uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
          }
          if ((uVar9 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
             (uVar19 = (ulong)*(ushort *)(((long)piVar15 - (long)*piVar15) + (ulong)uVar9),
             uVar19 != 0)) {
            uVar14 = *(undefined4 *)((long)piVar15 + uVar19);
          }
        }
        else {
          if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170f9d0;
          uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
        }
      }
      FUN_01892140(*(undefined8 *)(lVar17 + 0x70),uVar14);
    }
    piVar15 = (int *)*plVar25;
    if (piVar15 == (int *)0x0) goto LAB_0170f9f0;
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar15 + uVar19);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
    local_88 = "setRibbon";
    pvVar10 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar10 != (void *)0x0) {
      local_88 = (char *)0xd65a14851f9135bb;
      pcStack_80 = "setRibbon";
      local_78 = 9;
      local_70 = (long *)0x0;
      piVar15 = (int *)FUN_00d27b5c(param_3,&local_88);
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((long)piVar15 + uVar19);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (iVar8 != 0) {
        lVar17 = *param_1;
        local_88 = (char *)0xd65a14851f9135bb;
        pcStack_80 = "setRibbon";
        local_78 = 9;
        local_70 = (long *)0x0;
        piVar15 = (int *)FUN_00d27b5c(param_3,&local_88);
        if ((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) {
          iVar8 = 0;
        }
        else {
          uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3];
          iVar8 = 0;
          if (uVar19 != 0) {
            iVar8 = *(int *)((long)piVar15 + uVar19);
          }
        }
        if (iVar8 - 1U <= *(uint *)(*(long *)PTR_DAT_047d90c8 + 0x3d4)) {
          FUN_01e2ab50(*(undefined8 *)(lVar17 + 0x70));
        }
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
      }
    }
    piVar15 = (int *)*plVar25;
    if (piVar15 == (int *)0x0) goto LAB_0170f9f0;
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar15 + uVar19);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
    local_88 = "eventFlg";
    pvVar10 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar10 != (void *)0x0) {
      local_88 = (char *)0x8ca212c74f009bd6;
      pcStack_80 = "eventFlg";
      local_78 = 8;
      local_70 = (long *)0x0;
      uVar19 = FUN_00cf7518(param_3,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if ((uVar19 & 1) != 0) {
        FUN_00ef60f4(*(undefined8 *)(*param_1 + 0x70),1);
      }
    }
    piVar15 = (int *)*plVar25;
    if (piVar15 == (int *)0x0) goto LAB_0170f9f0;
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar15 + uVar19);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
    local_88 = "gemType";
    pvVar10 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((((pvVar10 == (void *)0x0) || (piVar15 = (int *)*plVar25, piVar15 == (int *)0x0)) ||
        (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0))
    goto LAB_0170f9f0;
    puVar11 = (uint *)((long)piVar15 + uVar19);
    local_88 = "gemType";
    puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    puVar4 = PTR_DAT_047d5608;
    if ((puVar11 == (uint *)0x0) || (piVar15 = (int *)*param_3, piVar15 == (int *)0x0))
    goto LAB_0170f9f0;
    piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
    puVar16 = (ushort *)((long)piVar22 - (long)*piVar22);
    uVar2 = *puVar16;
    if (uVar2 < 7) {
      piVar24 = (int *)0x0;
    }
    else {
      piVar24 = (int *)0x0;
      if ((ulong)puVar16[3] != 0) {
        puVar11 = (uint *)((long)piVar22 + (ulong)puVar16[3]);
        piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
      }
    }
    if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
       (uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar19 == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (long)*(char *)((long)piVar24 + uVar19) & 0xffffffff;
    }
    if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 4) {
      if (uVar2 < 0xb) {
        uVar9 = 0;
LAB_0170f5b8:
        iVar8 = 0;
      }
      else {
        uVar9 = 0;
        if ((ulong)puVar16[5] != 0) {
          uVar9 = (uint)*(ushort *)((long)piVar22 + (ulong)puVar16[5]);
        }
        if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170f5b8;
        iVar8 = *(int *)((long)piVar22 + (ulong)puVar16[6]);
      }
      if ((uVar9 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
         (uVar19 = (ulong)*(ushort *)(((long)piVar15 - (long)*piVar15) + (ulong)uVar9), uVar19 != 0)
         ) {
        iVar8 = *(int *)((long)piVar15 + uVar19);
      }
    }
    else {
      if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170f9f0;
      iVar8 = *(int *)((long)piVar22 + (ulong)puVar16[6]);
    }
    if (iVar8 == 0) goto LAB_0170f9f0;
    piVar15 = (int *)*plVar25;
    if (piVar15 == (int *)0x0) {
      lVar17 = *param_1;
      goto LAB_0170ff60;
    }
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
LAB_0170fa80:
      piVar15 = (int *)*plVar25;
      lVar17 = *param_1;
      if ((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7))
      goto LAB_0170ff60;
      uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3];
      iVar8 = 0;
      if (uVar19 != 0) {
        puVar11 = (uint *)((long)piVar15 + uVar19);
        local_88 = "gemType";
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar11 != (uint *)0x0) && (piVar15 = (int *)*param_3, piVar15 != (int *)0x0)) {
          piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
          puVar16 = (ushort *)((long)piVar22 - (long)*piVar22);
          uVar2 = *puVar16;
          if (uVar2 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar16[3] != 0) {
              puVar11 = (uint *)((long)piVar22 + (ulong)puVar16[3]);
              piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar19 == 0)) {
            uVar19 = 0;
          }
          else {
            uVar19 = (long)*(char *)((long)piVar24 + uVar19) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar19 * 8) == 4) {
            if (uVar2 < 0xb) {
              uVar9 = 0;
LAB_0170fb7c:
              iVar8 = 0;
            }
            else {
              uVar9 = 0;
              if ((ulong)puVar16[5] != 0) {
                uVar9 = (uint)*(ushort *)((long)piVar22 + (ulong)puVar16[5]);
              }
              if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170fb7c;
              iVar8 = *(int *)((long)piVar22 + (ulong)puVar16[6]);
            }
            if ((uVar9 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
               (uVar19 = (ulong)*(ushort *)(((long)piVar15 - (long)*piVar15) + (ulong)uVar9),
               uVar19 != 0)) {
              iVar8 = *(int *)((long)piVar15 + uVar19);
            }
            goto LAB_0170fba0;
          }
          if ((0xc < uVar2) && ((ulong)puVar16[6] != 0)) {
            iVar8 = *(int *)((long)piVar22 + (ulong)puVar16[6]);
            goto LAB_0170fba0;
          }
        }
LAB_0170ff60:
        iVar8 = 0;
      }
LAB_0170fba0:
      uVar9 = iVar8 - 2;
    }
    else {
      puVar11 = (uint *)((long)piVar15 + uVar19);
      local_88 = "gemType";
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
      puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar11 == (uint *)0x0) || (piVar15 = (int *)*param_3, piVar15 == (int *)0x0))
      goto LAB_0170fa80;
      piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
      puVar16 = (ushort *)((long)piVar22 - (long)*piVar22);
      uVar2 = *puVar16;
      if (uVar2 < 7) {
        piVar24 = (int *)0x0;
      }
      else {
        piVar24 = (int *)0x0;
        if ((ulong)puVar16[3] != 0) {
          puVar11 = (uint *)((long)piVar22 + (ulong)puVar16[3]);
          piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
        }
      }
      if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
         (uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar19 == 0)) {
        uVar19 = 0;
      }
      else {
        uVar19 = (long)*(char *)((long)piVar24 + uVar19) & 0xffffffff;
      }
      if (*(long *)(puVar4 + uVar19 * 8) == 4) {
        if (uVar2 < 0xb) {
          uVar9 = 0;
LAB_0170f728:
          iVar8 = 0;
        }
        else {
          uVar9 = 0;
          if ((ulong)puVar16[5] != 0) {
            uVar9 = (uint)*(ushort *)((long)piVar22 + (ulong)puVar16[5]);
          }
          if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170f728;
          iVar8 = *(int *)((long)piVar22 + (ulong)puVar16[6]);
        }
        if ((uVar9 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
           (uVar19 = (ulong)*(ushort *)(((long)piVar15 - (long)*piVar15) + (ulong)uVar9),
           uVar19 != 0)) {
          iVar8 = *(int *)((long)piVar15 + uVar19);
        }
      }
      else {
        if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170fa80;
        iVar8 = *(int *)((long)piVar22 + (ulong)puVar16[6]);
      }
      if (iVar8 != 1) goto LAB_0170fa80;
      if ((param_4 & 1) == 0) {
        uVar19 = 0x82a2b175229d6a5b;
        nn::crypto::GenerateCryptographicallyRandomBytes(&local_88,8);
        pcVar18 = local_88;
        do {
          uVar23 = (ulong)pcVar18 ^ uVar19;
          iVar8 = (int)uVar19;
          uVar19 = uVar23 >> 0x1b | uVar23 << 0x25;
          uVar9 = (int)pcVar18 + iVar8 & 0x1f;
          pcVar18 = (char *)(uVar23 ^ ((ulong)pcVar18 >> 0x28 | (long)pcVar18 << 0x18) ^
                            uVar23 << 0x10);
        } while (0x11 < uVar9);
      }
      else {
        uVar9 = (int)*(ulong *)(param_2 + 0x10) + (int)(*(ulong *)(param_2 + 0x10) / 0x12) * -0x12;
      }
      lVar17 = *param_1;
    }
  }
LAB_0170fba4:
  FUN_00f8921c(*(undefined8 *)(lVar17 + 0x70),uVar9);
  piVar15 = (int *)*plVar25;
  if (piVar15 == (int *)0x0) goto LAB_0170fe08;
  if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
     (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
    puVar11 = (uint *)0x0;
  }
  else {
    puVar11 = (uint *)((long)piVar15 + uVar19);
    puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
  }
  local_88 = "pokememo";
  pvVar10 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
  if (pvVar10 == (void *)0x0) goto LAB_0170fe08;
  local_88 = (char *)0x66ddd5482a797f66;
  pcStack_80 = "pokememo";
  local_78 = 8;
  local_70 = (long *)0x0;
  piVar15 = (int *)FUN_01033a58(param_3,&local_88);
  if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
     (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = *(char *)((long)piVar15 + uVar19);
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (cVar5 == '\0') goto LAB_0170fe08;
  piVar15 = (int *)*plVar25;
  if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
     (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
LAB_0170ff54:
    uVar14 = 0;
  }
  else {
    puVar11 = (uint *)((long)piVar15 + uVar19);
    puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    local_88 = "pokememoPlace";
    puVar11 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar11 == (uint *)0x0) || (piVar15 = (int *)*param_3, piVar15 == (int *)0x0))
    goto LAB_0170ff54;
    piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
    puVar16 = (ushort *)((long)piVar22 - (long)*piVar22);
    uVar2 = *puVar16;
    if (uVar2 < 7) {
      piVar24 = (int *)0x0;
    }
    else {
      piVar24 = (int *)0x0;
      if ((ulong)puVar16[3] != 0) {
        puVar11 = (uint *)((long)piVar22 + (ulong)puVar16[3]);
        piVar24 = (int *)((long)puVar11 + (ulong)*puVar11);
      }
    }
    if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
       (uVar19 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar19 == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = (long)*(char *)((long)piVar24 + uVar19) & 0xffffffff;
    }
    if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 4) {
      if (uVar2 < 0xb) {
        uVar9 = 0;
LAB_0170fd88:
        uVar14 = 0;
      }
      else {
        uVar9 = 0;
        if ((ulong)puVar16[5] != 0) {
          uVar9 = (uint)*(ushort *)((long)piVar22 + (ulong)puVar16[5]);
        }
        if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170fd88;
        uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
      }
      if ((uVar9 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
         (uVar19 = (ulong)*(ushort *)(((long)piVar15 - (long)*piVar15) + (ulong)uVar9), uVar19 != 0)
         ) {
        uVar14 = *(undefined4 *)((long)piVar15 + uVar19);
      }
    }
    else {
      if ((uVar2 < 0xd) || ((ulong)puVar16[6] == 0)) goto LAB_0170ff54;
      uVar14 = *(undefined4 *)((long)piVar22 + (ulong)puVar16[6]);
    }
  }
  plVar21 = (long *)*param_1;
  local_120 = plVar21;
  if (plVar21 == (long *)0x0) {
    FUN_00a3a53c(&local_120,cVar5 + -1,uVar14);
  }
  else {
    plVar1 = plVar21 + 5;
    do {
      lVar17 = *plVar1;
      cVar6 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar17 == -1) {
LAB_0170ff80:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00a3a53c(&local_120,cVar5 + -1,uVar14);
    if (plVar21 != (long *)0x0) {
      plVar1 = plVar21 + 5;
      do {
        lVar17 = *plVar1;
        iVar8 = (int)lVar17 + -1;
        cVar5 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
      else if ((int)lVar17 == 0) {
LAB_0170ffa8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
LAB_0170fe08:
  sVar7 = FUN_00cf44f4(*(undefined8 *)(*param_1 + 0x70));
  if ((sVar7 == 0x365) && (piVar15 = (int *)*plVar25, piVar15 != (int *)0x0)) {
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 7) ||
       (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
      puVar11 = (uint *)0x0;
    }
    else {
      puVar11 = (uint *)((long)piVar15 + uVar19);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
    }
    local_88 = "mahoippuViewId";
    pvVar10 = bsearch(&local_88,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar10 != (void *)0x0) {
      lVar17 = *param_1;
      local_88 = (char *)0x8de41cef03937bf8;
      pcStack_80 = "mahoippuViewId";
      local_78 = 0xe;
      local_70 = (long *)0x0;
      piVar15 = (int *)FUN_01033a58(param_3,&local_88);
      if (((piVar15 == (int *)0x0) || (*(ushort *)((long)piVar15 - (long)*piVar15) < 7)) ||
         (uVar19 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[3], uVar19 == 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined1 *)((long)piVar15 + uVar19);
      }
      FUN_01e2afa8(lVar17,uVar13);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
  return;
}


