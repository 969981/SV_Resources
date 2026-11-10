/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a299b4; name: FUN_02a299b4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02a299b4(long param_1,ulong param_2)

{
  short *psVar1;
  undefined8 *puVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  short sVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  long lVar18;
  ulong uVar19;
  ushort *puVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  undefined4 *puVar25;
  ulong uVar26;
  long lVar27;
  byte *pbVar28;
  int *piVar29;
  uint uVar30;
  undefined1 *puVar31;
  undefined4 *puVar32;
  undefined4 *unaff_x24;
  undefined8 *puVar33;
  undefined8 uVar34;
  float fVar35;
  long local_118;
  int local_104;
  int local_f4;
  int *local_f0;
  int *local_e8;
  char **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  byte local_bc [12];
  char *local_b0;
  byte *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90 [4];
  undefined4 *local_68;
  
  if ((param_2 & 1) != 0) {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar18 = *(long *)PTR_DAT_047d4ca0;
    *(long *)PTR_DAT_047d4ca8 = lVar18;
    plVar21 = *(long **)(lVar18 + 0x1c8);
    plVar12 = *(long **)(lVar18 + 0x1c0);
    do {
      if (plVar12 == plVar21) goto LAB_02a29a64;
      lVar18 = *plVar12;
      uVar10 = FUN_02a1360c(lVar18 + 0x28);
      plVar12 = plVar12 + 1;
    } while ((uVar10 & 1) == 0);
    lVar27 = **(long **)(param_1 + 0x220);
    if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar27 + 0x1a);
      sVar8 = *(short *)(lVar27 + 0x1a);
LAB_02a2b1d8:
      sVar4 = *psVar1;
      if (sVar4 == sVar8) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02a2b1fc;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a2b1fc:
        bVar6 = false;
      }
      if (!bVar6) goto code_r0x02a2b204;
      lVar27 = *(long *)(lVar27 + 0x10);
      if (lVar27 != 0) {
        lVar16 = FUN_01289558(lVar27 + 0xe0,&local_b0);
        if (lVar16 != 0) {
          local_b0 = *(char **)(lVar18 + 0x80);
          FUN_01faa4e0(lVar16,&local_b0);
        }
        lVar16 = *(long *)(lVar27 + 8);
        psVar1 = (short *)(lVar16 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar16 + 0x10) = 0;
          (**(code **)(*(long *)(lVar27 + -0x28) + 0x50))((long *)(lVar27 + -0x28));
        }
        else if (sVar8 == 0) goto LAB_02a2b434;
      }
    }
LAB_02a29a40:
    lVar27 = *(long *)(*(long *)(param_1 + 0x220) + 0x10);
    if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar27 + 0x1a);
      sVar8 = *(short *)(lVar27 + 0x1a);
LAB_02a2b220:
      sVar4 = *psVar1;
      if (sVar4 == sVar8) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02a2b244;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a2b244:
        bVar6 = false;
      }
      if (!bVar6) goto code_r0x02a2b24c;
      lVar27 = *(long *)(lVar27 + 0x10);
      if (lVar27 != 0) {
        lVar16 = FUN_01289558(lVar27 + 0xe0,&local_b0);
        if (lVar16 != 0) {
          local_b0 = *(char **)(lVar18 + 0xb8);
          FUN_01faa4e0(lVar16,&local_b0);
        }
        lVar16 = *(long *)(lVar27 + 8);
        psVar1 = (short *)(lVar16 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar16 + 0x10) = 0;
          (**(code **)(*(long *)(lVar27 + -0x28) + 0x50))((long *)(lVar27 + -0x28));
        }
        else if (sVar8 == 0) goto LAB_02a2b434;
      }
    }
LAB_02a29a4c:
    lVar27 = *(long *)(*(long *)(param_1 + 0x220) + 0x20);
    if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar27 + 0x1a);
      sVar8 = *(short *)(lVar27 + 0x1a);
LAB_02a2b268:
      sVar4 = *psVar1;
      if (sVar4 == sVar8) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02a2b28c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a2b28c:
        bVar6 = false;
      }
      if (!bVar6) goto code_r0x02a2b294;
      lVar27 = *(long *)(lVar27 + 0x10);
      if (lVar27 != 0) {
        lVar16 = FUN_01289558(lVar27 + 0xe0,&local_b0);
        if (lVar16 != 0) {
          local_b0 = *(char **)(lVar18 + 0xf0);
          FUN_01faa4e0(lVar16,&local_b0);
        }
        lVar16 = *(long *)(lVar27 + 8);
        psVar1 = (short *)(lVar16 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar16 + 0x10) = 0;
          (**(code **)(*(long *)(lVar27 + -0x28) + 0x50))((long *)(lVar27 + -0x28));
        }
        else if (sVar8 == 0) goto LAB_02a2b434;
      }
    }
LAB_02a29a58:
    lVar27 = *(long *)(*(long *)(param_1 + 0x220) + 0x30);
    if ((lVar27 != 0) && (*(short *)(lVar27 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar27 + 0x1a);
      sVar8 = *(short *)(lVar27 + 0x1a);
LAB_02a2b2b0:
      sVar4 = *psVar1;
      if (sVar4 == sVar8) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02a2b2d4;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a2b2d4:
        bVar6 = false;
      }
      if (!bVar6) goto code_r0x02a2b2dc;
      lVar27 = *(long *)(lVar27 + 0x10);
      if (lVar27 != 0) {
        lVar16 = FUN_01289558(lVar27 + 0xe0,&local_b0);
        if (lVar16 != 0) {
          local_b0 = *(char **)(lVar18 + 0x48);
          FUN_01faa4e0(lVar16,&local_b0);
        }
        lVar18 = *(long *)(lVar27 + 8);
        psVar1 = (short *)(lVar18 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar18 + 0x10) = 0;
          (**(code **)(*(long *)(lVar27 + -0x28) + 0x50))((long *)(lVar27 + -0x28));
        }
        else if (sVar8 == 0) goto LAB_02a2b434;
      }
    }
  }
LAB_02a29a64:
  lVar18 = *(long *)(param_1 + 0x220);
  plVar21 = *(long **)(lVar18 + 0x40);
  plVar12 = *(long **)(lVar18 + 0x48);
  do {
    while( true ) {
      do {
        if (plVar12 == plVar21) {
          *(long **)(lVar18 + 0x48) = plVar21;
          lVar18 = *(long *)(param_1 + 0x220);
          if (*(long *)(lVar18 + 0xd0) == 0) goto LAB_02a29bec;
          plVar21 = (long *)*(long *)(lVar18 + 0xa8);
          goto joined_r0x02a29ac0;
        }
        plVar12 = plVar12 + -1;
        plVar11 = (long *)*plVar12;
      } while (plVar11 == (long *)0x0);
      plVar24 = plVar11 + 5;
      do {
        lVar27 = *plVar24;
        iVar9 = (int)lVar27 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *(int *)plVar24 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != 0) break;
      (**(code **)(*plVar11 + 0x10))();
    }
  } while ((int)lVar27 != 0);
LAB_02a2b1a0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
code_r0x02a2b204:
  sVar8 = sVar4;
  if (sVar4 == 0) goto LAB_02a29a40;
  goto LAB_02a2b1d8;
code_r0x02a2b24c:
  sVar8 = sVar4;
  if (sVar4 == 0) goto LAB_02a29a4c;
  goto LAB_02a2b220;
code_r0x02a2b294:
  sVar8 = sVar4;
  if (sVar4 == 0) goto LAB_02a29a58;
  goto LAB_02a2b268;
code_r0x02a2b2dc:
  sVar8 = sVar4;
  if (sVar4 == 0) goto LAB_02a29a64;
  goto LAB_02a2b2b0;
joined_r0x02a29ac0:
  if (plVar21 != (long *)0x0) {
    plVar11 = (long *)*plVar21;
    plVar12 = (long *)plVar21[3];
    if (plVar12 != (long *)0x0) {
      plVar24 = plVar12 + 5;
      do {
        lVar27 = *plVar24;
        iVar9 = (int)lVar27 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar6) {
          *(int *)plVar24 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if ((int)lVar27 == 0) goto LAB_02a2b1a0;
    }
    plVar12 = *(long **)(lVar18 + 0xb0);
    uVar10 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar10 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar21,0x20,8);
      plVar21 = plVar11;
    }
    else {
      FUN_00c48fe8(plVar12,plVar21,0x20,8);
      plVar21 = plVar11;
    }
    goto joined_r0x02a29ac0;
  }
  uVar10 = *(ulong *)(lVar18 + 0x80);
  *(undefined8 *)(lVar18 + 0xa8) = 0;
  if (uVar10 != 0) {
    uVar19 = uVar10 & 3;
    if (uVar10 - 1 < 3) {
      uVar26 = 0;
    }
    else {
      uVar26 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar18 + 0x78) + uVar26 * 8) = 0;
        *(undefined8 *)(*(long *)(lVar18 + 0x78) + uVar26 * 8 + 8) = 0;
        *(undefined8 *)(*(long *)(lVar18 + 0x78) + uVar26 * 8 + 0x10) = 0;
        lVar27 = uVar26 * 8;
        uVar26 = uVar26 + 4;
        *(undefined8 *)(*(long *)(lVar18 + 0x78) + lVar27 + 0x18) = 0;
      } while ((uVar10 & 0xfffffffffffffffc) != uVar26);
    }
    if (uVar19 != 0) {
      lVar27 = uVar26 << 3;
      do {
        *(undefined8 *)(*(long *)(lVar18 + 0x78) + lVar27) = 0;
        uVar19 = uVar19 - 1;
        lVar27 = lVar27 + 8;
      } while (uVar19 != 0);
    }
  }
  *(undefined8 *)(lVar18 + 0xd0) = 0;
  lVar18 = *(long *)(param_1 + 0x220);
LAB_02a29bec:
  lVar18 = *(long *)(lVar18 + 0x30);
  if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar18 + 0x1a);
    sVar8 = *(short *)(lVar18 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar8) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02a29cb4;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a29cb4:
        bVar6 = false;
      }
      if (bVar6) {
        lVar18 = *(long *)(lVar18 + 0x10);
        if (lVar18 != 0) {
          lVar27 = FUN_01289558(lVar18 + 0xe0,&local_b0);
          if (lVar27 == 0) goto LAB_02a2b170;
          if (*(char *)(lVar27 + 0x11a) == '\0') {
            local_d0 = 0;
            uStack_c8 = 0;
            local_d8 = (char **)0x0;
          }
          else {
            local_d8 = *(char ***)(lVar27 + 0x120);
            local_d0 = *(undefined8 *)(lVar27 + 0x128);
            uStack_c8 = *(undefined8 *)(lVar27 + 0x130);
          }
          local_b0 = &DAT_fbec41851566601b;
          local_a8 = (byte *)0x3c848d5;
          local_a0 = 6;
          local_98 = (long *)0x0;
          piVar13 = (int *)FUN_00efa07c(&local_d8,&local_b0);
          if (piVar13 == (int *)0x0) {
            local_104 = 0;
          }
          else {
            local_104 = *piVar13;
          }
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          if (local_104 == 0) goto LAB_02a2b170;
          local_f4 = 0;
          goto LAB_02a29e4c;
        }
        break;
      }
      sVar8 = sVar4;
    } while (sVar4 != 0);
  }
  goto LAB_02a29bf4;
code_r0x02a29d04:
  sVar8 = sVar4;
  if (sVar4 == 0) goto LAB_02a29c00;
  goto LAB_02a29cd8;
code_r0x02a29d4c:
  sVar8 = sVar4;
  if (sVar4 == 0) goto LAB_02a29c0c;
  goto LAB_02a29d20;
LAB_02a29e4c:
  do {
    local_b0 = &DAT_fbec41851566601b;
    local_98 = (long *)0x0;
    local_a8 = (byte *)0x3c848d5;
    local_a0 = 6;
    FUN_00e90ee0(&local_f0,&local_d8,&local_b0,local_f4);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (((local_e8 == (int *)0x0) || (*(ushort *)((long)local_e8 - (long)*local_e8) < 7)) ||
       (uVar10 = (ulong)((ushort *)((long)local_e8 - (long)*local_e8))[3], uVar10 == 0)) {
LAB_02a29f84:
      local_68 = (undefined4 *)0x0;
    }
    else {
      puVar14 = (uint *)((long)local_e8 + uVar10);
      puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
      local_b0 = "id";
      puVar14 = bsearch(&local_b0,puVar14 + 1,(ulong)*puVar14,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar14 == (uint *)0x0) || (local_f0 == (int *)0x0)) goto LAB_02a29f84;
      piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
      puVar20 = (ushort *)((long)piVar13 - (long)*piVar13);
      if (*puVar20 < 7) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)0x0;
        if ((ulong)puVar20[3] != 0) {
          puVar14 = (uint *)((long)piVar13 + (ulong)puVar20[3]);
          piVar29 = (int *)((long)puVar14 + (ulong)*puVar14);
        }
      }
      if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar10 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = (long)*(char *)((long)piVar29 + uVar10) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar10 * 8) == 8) {
        local_68 = (undefined4 *)FUN_015efc20();
      }
      else {
        if ((*puVar20 < 0xd) || ((ulong)puVar20[6] == 0)) goto LAB_02a29f84;
        local_68 = *(undefined4 **)((long)piVar13 + (ulong)puVar20[6]);
      }
    }
    plVar21 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar27 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar27 + 0x80)) goto LAB_02a2b584;
    *(long **)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = plVar21;
    *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
    plVar12 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0x150,8);
    if (plVar12 == (long *)0x0) {
      (**(code **)(*plVar21 + 0xe8))();
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    FUN_0125d1c8(plVar12,&local_f0);
    *plVar12 = (long)&PTR_FUN_045682a8;
    plVar12[4] = (long)&PTR_LAB_045682e0;
    local_b0 = (char *)0x4ec6467ade87f7e4;
    local_a8 = &DAT_03c0b479;
    local_a0 = 4;
    local_98 = (long *)0x0;
    FUN_00d996a8(local_90,&local_f0,&local_b0);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    uVar30 = 0;
    do {
      uVar30 = uVar30 + 1;
      snprintf((char *)local_bc,10,"_%d",(ulong)uVar30);
      local_b0 = &DAT_cbf29ce484222645;
      if (local_bc[0] != 0) {
        local_b0 = &DAT_cbf29ce484222645;
        pbVar28 = (byte *)((ulong)local_bc | 1);
        bVar7 = local_bc[0];
        do {
          local_b0 = (char *)(((ulong)local_b0 ^ (ulong)bVar7) * 0x100000001b3);
          bVar7 = *pbVar28;
          pbVar28 = pbVar28 + 1;
        } while (bVar7 != 0);
      }
      local_a8 = local_bc;
      local_a0 = 9;
      local_98 = (long *)0x0;
      uVar10 = FUN_00cf7518(local_90,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if ((uVar10 & 1) != 0) {
        uVar10 = (ulong)local_b0 >> 8;
        local_b0 = (char *)CONCAT71((int7)uVar10,(char)uVar30);
        FUN_02a28048(plVar12 + 0x18,&local_b0);
      }
    } while (uVar30 != 0x17);
    if (((local_e8 == (int *)0x0) || (*(ushort *)((long)local_e8 - (long)*local_e8) < 7)) ||
       (uVar10 = (ulong)((ushort *)((long)local_e8 - (long)*local_e8))[3], uVar10 == 0)) {
LAB_02a2a1e8:
      puVar31 = (undefined1 *)0x0;
LAB_02a2a1ec:
      puVar2 = (undefined8 *)plVar12[0x20];
      if (puVar2 == (undefined8 *)plVar12[0x21]) {
        uVar10 = plVar12[0x23];
        lVar16 = (long)puVar2 - plVar12[0x1f] >> 3;
        if (0x7ffffffffffffffe < uVar10) {
          uVar10 = 0x7fffffffffffffff;
        }
        uVar19 = lVar16 + 1;
        if (uVar10 < uVar19) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar22 = plVar12[0x21] - plVar12[0x1f];
        uVar26 = lVar22 >> 2;
        if (uVar19 <= uVar26) {
          uVar19 = uVar26;
        }
        if (uVar10 >> 1 <= (ulong)(lVar22 >> 3)) {
          uVar19 = uVar10;
        }
        if (uVar19 == 0) {
          local_118 = 0;
        }
        else {
          local_118 = (**(code **)(*(long *)plVar12[0x22] + 0x10))
                                ((long *)plVar12[0x22],uVar19 << 3,8);
          if (local_118 == 0) {
            (**(code **)(*(long *)plVar12[0x22] + 0xe8))();
          }
        }
        puVar2 = (undefined8 *)(local_118 + lVar16 * 8);
        lVar16 = plVar12[0x22];
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          unaff_x24 = &DAT_04865a30;
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar22 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar22 == 0) {
          *puVar2 = puVar31;
        }
        else {
          if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_02a2b584;
          *(long *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = lVar16;
          *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
          *puVar2 = puVar31;
          *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
        }
        lVar16 = plVar12[0x1f];
        lVar22 = plVar12[0x20];
        puVar33 = puVar2;
        if (lVar22 != lVar16) {
          do {
            unaff_x24 = (undefined4 *)plVar12[0x22];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar15 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar15 == 0) {
              puVar33[-1] = *(undefined8 *)(lVar22 + -8);
            }
            else {
              if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_02a2b584;
              *(undefined4 **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = unaff_x24;
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
              puVar33[-1] = *(undefined8 *)(lVar22 + -8);
              *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
            }
            lVar22 = lVar22 + -8;
            puVar33 = puVar33 + -1;
          } while (lVar16 != lVar22);
          lVar16 = plVar12[0x1f];
        }
        plVar12[0x1f] = (long)puVar33;
        plVar12[0x20] = (long)(puVar2 + 1);
        lVar22 = plVar12[0x21];
        plVar12[0x21] = local_118 + uVar19 * 8;
        if (lVar16 != 0) {
          plVar11 = (long *)plVar12[0x22];
          uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
          if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,lVar16,lVar22 - lVar16,8);
          }
          else {
            FUN_00c48fe8(plVar11,lVar16,lVar22 - lVar16,8);
          }
        }
      }
      else {
        unaff_x24 = (undefined4 *)plVar12[0x22];
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar16 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar16 == 0) {
          *puVar2 = puVar31;
        }
        else {
          if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_02a2b584;
          *(undefined4 **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = unaff_x24;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
          *puVar2 = puVar31;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        }
        plVar12[0x20] = (long)(puVar2 + 1);
      }
    }
    else {
      puVar14 = (uint *)((long)local_e8 + uVar10);
      puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
      local_b0 = "locationName";
      puVar14 = bsearch(&local_b0,puVar14 + 1,(ulong)*puVar14,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar14 == (uint *)0x0) || (local_f0 == (int *)0x0)) goto LAB_02a2a1e8;
      piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
      puVar20 = (ushort *)((long)piVar13 - (long)*piVar13);
      if (*puVar20 < 7) {
        piVar29 = (int *)0x0;
      }
      else {
        piVar29 = (int *)0x0;
        if ((ulong)puVar20[3] != 0) {
          puVar14 = (uint *)((long)piVar13 + (ulong)puVar20[3]);
          piVar29 = (int *)((long)puVar14 + (ulong)*puVar14);
        }
      }
      if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar10 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = (long)*(char *)((long)piVar29 + uVar10) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar10 * 8) == 8) {
        puVar31 = (undefined1 *)FUN_015efc20();
      }
      else {
        if ((*puVar20 < 0xd) || ((ulong)puVar20[6] == 0)) goto LAB_02a2a1e8;
        puVar31 = *(undefined1 **)((long)piVar13 + (ulong)puVar20[6]);
      }
      if (puVar31 != &DAT_cbf29ce484222645) goto LAB_02a2a1ec;
    }
    local_98 = (long *)0x0;
    local_b0 = (char *)0x77e8ba2237272b26;
    local_a8 = (byte *)0x3bfd451;
    local_a0 = 0x14;
    bVar7 = FUN_00cf7518(&local_f0,&local_b0);
    *(byte *)(plVar12 + 0x26) = bVar7 & 1;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    fVar35 = 0.0;
    if (local_e8 != (int *)0x0) {
      fVar35 = 0.0;
      if (6 < *(ushort *)((long)local_e8 - (long)*local_e8)) {
        uVar10 = (ulong)((ushort *)((long)local_e8 - (long)*local_e8))[3];
        fVar35 = 0.0;
        if (uVar10 != 0) {
          puVar14 = (uint *)((long)local_e8 + uVar10);
          puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
          local_b0 = "rarePercentage";
          puVar14 = bsearch(&local_b0,puVar14 + 1,(ulong)*puVar14,4,(__compar_fn_t)PTR_LAB_047d5600)
          ;
          if (puVar14 == (uint *)0x0) {
            fVar35 = 0.0;
          }
          else {
            fVar35 = 0.0;
            if (local_f0 != (int *)0x0) {
              piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
              puVar20 = (ushort *)((long)piVar13 - (long)*piVar13);
              uVar3 = *puVar20;
              if (uVar3 < 7) {
                piVar29 = (int *)0x0;
              }
              else {
                piVar29 = (int *)0x0;
                if ((ulong)puVar20[3] != 0) {
                  puVar14 = (uint *)((long)piVar13 + (ulong)puVar20[3]);
                  piVar29 = (int *)((long)puVar14 + (ulong)*puVar14);
                }
              }
              if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
                 (uVar10 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar10 == 0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = (long)*(char *)((long)piVar29 + uVar10) & 0xffffffff;
              }
              if (*(long *)(PTR_DAT_047d5608 + uVar10 * 8) == 4) {
                if (uVar3 < 0xb) {
                  uVar30 = 0;
LAB_02a2a5c0:
                  fVar35 = 0.0;
                }
                else {
                  uVar30 = 0;
                  if ((ulong)puVar20[5] != 0) {
                    uVar30 = (uint)*(ushort *)((long)piVar13 + (ulong)puVar20[5]);
                  }
                  if ((uVar3 < 0xf) || ((ulong)puVar20[7] == 0)) goto LAB_02a2a5c0;
                  fVar35 = (float)*(double *)((long)piVar13 + (ulong)puVar20[7]);
                }
                if ((uVar30 < *(ushort *)((long)local_f0 - (long)*local_f0)) &&
                   (uVar10 = (ulong)*(ushort *)(((long)local_f0 - (long)*local_f0) + (ulong)uVar30),
                   uVar10 != 0)) {
                  fVar35 = *(float *)((long)local_f0 + uVar10);
                }
              }
              else {
                fVar35 = 0.0;
                if (0xe < uVar3) {
                  fVar35 = 0.0;
                  if ((ulong)puVar20[7] != 0) {
                    fVar35 = (float)*(double *)((long)piVar13 + (ulong)puVar20[7]);
                  }
                }
              }
            }
          }
        }
      }
    }
    *(float *)((long)plVar12 + 0x134) = fVar35;
    local_b0 = (char *)0x65da26c8ca72af84;
    local_98 = (long *)0x0;
    local_a8 = (byte *)0x3c64090;
    local_a0 = 0xd;
    piVar13 = (int *)FUN_00d27b5c(&local_f0,&local_b0);
    if ((piVar13 == (int *)0x0) || (*(ushort *)((long)piVar13 - (long)*piVar13) < 7)) {
      uVar17 = 0;
    }
    else {
      uVar10 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3];
      uVar17 = 0;
      if (uVar10 != 0) {
        uVar17 = *(undefined4 *)((long)piVar13 + uVar10);
      }
    }
    *(undefined4 *)(plVar12 + 0x27) = uVar17;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    fVar35 = 0.0;
    if (local_e8 != (int *)0x0) {
      fVar35 = 0.0;
      if (6 < *(ushort *)((long)local_e8 - (long)*local_e8)) {
        uVar10 = (ulong)((ushort *)((long)local_e8 - (long)*local_e8))[3];
        fVar35 = 0.0;
        if (uVar10 != 0) {
          puVar14 = (uint *)((long)local_e8 + uVar10);
          puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
          local_b0 = "addRibbonPercentage";
          puVar14 = bsearch(&local_b0,puVar14 + 1,(ulong)*puVar14,4,(__compar_fn_t)PTR_LAB_047d5600)
          ;
          if (puVar14 == (uint *)0x0) {
            fVar35 = 0.0;
          }
          else {
            fVar35 = 0.0;
            if (local_f0 != (int *)0x0) {
              piVar13 = (int *)((long)puVar14 + (ulong)*puVar14);
              puVar20 = (ushort *)((long)piVar13 - (long)*piVar13);
              uVar3 = *puVar20;
              if (uVar3 < 7) {
                piVar29 = (int *)0x0;
              }
              else {
                piVar29 = (int *)0x0;
                if ((ulong)puVar20[3] != 0) {
                  puVar14 = (uint *)((long)piVar13 + (ulong)puVar20[3]);
                  piVar29 = (int *)((long)puVar14 + (ulong)*puVar14);
                }
              }
              if ((*(ushort *)((long)piVar29 - (long)*piVar29) < 5) ||
                 (uVar10 = (ulong)((ushort *)((long)piVar29 - (long)*piVar29))[2], uVar10 == 0)) {
                uVar10 = 0;
              }
              else {
                uVar10 = (long)*(char *)((long)piVar29 + uVar10) & 0xffffffff;
              }
              if (*(long *)(PTR_DAT_047d5608 + uVar10 * 8) == 4) {
                if (uVar3 < 0xb) {
                  uVar30 = 0;
LAB_02a2a748:
                  fVar35 = 0.0;
                }
                else {
                  uVar30 = 0;
                  if ((ulong)puVar20[5] != 0) {
                    uVar30 = (uint)*(ushort *)((long)piVar13 + (ulong)puVar20[5]);
                  }
                  if ((uVar3 < 0xf) || ((ulong)puVar20[7] == 0)) goto LAB_02a2a748;
                  fVar35 = (float)*(double *)((long)piVar13 + (ulong)puVar20[7]);
                }
                if ((uVar30 < *(ushort *)((long)local_f0 - (long)*local_f0)) &&
                   (uVar10 = (ulong)*(ushort *)(((long)local_f0 - (long)*local_f0) + (ulong)uVar30),
                   uVar10 != 0)) {
                  fVar35 = *(float *)((long)local_f0 + uVar10);
                }
              }
              else {
                fVar35 = 0.0;
                if (0xe < uVar3) {
                  fVar35 = 0.0;
                  if ((ulong)puVar20[7] != 0) {
                    fVar35 = (float)*(double *)((long)piVar13 + (ulong)puVar20[7]);
                  }
                }
              }
            }
          }
        }
      }
    }
    *(float *)((long)plVar12 + 0x13c) = fVar35;
    local_b0 = (char *)0x614643893a0d9471;
    local_98 = (long *)0x0;
    local_a8 = (byte *)0x3c5d917;
    local_a0 = 0x10;
    bVar7 = FUN_00cf7518(&local_f0,&local_b0);
    *(byte *)(plVar12 + 0x28) = bVar7 & 1;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = (char *)0xc765e25e6b91cc37;
    local_a8 = (byte *)0x3c853f7;
    local_a0 = 8;
    sVar8 = FUN_00d928d0(&local_f0,&local_b0);
    *(int *)((long)plVar12 + 0x144) = (int)sVar8;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_98 = (long *)0x0;
    local_b0 = (char *)0x59677a606e69180d;
    local_a8 = (byte *)0x3c7153e;
    local_a0 = 8;
    sVar8 = FUN_00d928d0(&local_f0,&local_b0);
    *(int *)(plVar12 + 0x29) = (int)sVar8;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    plVar12[1] = (long)plVar21;
    plVar12[2] = (long)plVar12;
    *(undefined4 *)(plVar12 + 3) = 0x80150;
    *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
    plVar21 = plVar12 + 5;
    do {
      lVar27 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)lVar27 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar27 == -1) goto LAB_02a2b588;
    lVar27 = *(long *)(param_1 + 0x220);
    plVar21 = (long *)(lVar27 + 0x78);
    puVar32 = *(undefined4 **)(lVar27 + 0x80);
    if (puVar32 == (undefined4 *)0x0) {
LAB_02a2a950:
      plVar11 = (long *)(**(code **)(**(long **)(lVar27 + 0xb0) + 0x10))
                                  (*(long **)(lVar27 + 0xb0),0x20,8);
      if (plVar11 == (long *)0x0) {
        (**(code **)(**(long **)(lVar27 + 0xb0) + 0xe8))();
      }
      uVar34 = *(undefined8 *)(lVar27 + 0xb0);
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar16 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar16 == 0) {
        plVar11[2] = (long)local_68;
        plVar11[3] = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_02a2b584:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar34;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
        plVar11[2] = (long)local_68;
        plVar11[3] = 0;
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      *plVar11 = 0;
      plVar11[1] = (long)local_68;
      fVar35 = (float)(*(long *)(lVar27 + 0xd0) + 1);
      if ((puVar32 == (undefined4 *)0x0) || (*(float *)(lVar27 + 0xd8) * (float)puVar32 < fVar35)) {
        uVar10 = (ulong)(puVar32 < (undefined4 *)0x3 || ((ulong)puVar32 & (long)puVar32 - 1U) != 0)
                 | (long)puVar32 << 1;
        uVar19 = (ulong)(fVar35 / *(float *)(lVar27 + 0xd8));
        if (uVar19 <= uVar10) {
          uVar19 = uVar10;
        }
        if (uVar19 - 1 == 0) {
          uVar19 = 2;
        }
        else if ((uVar19 & uVar19 - 1) != 0) {
          uVar19 = std::__next_prime(uVar19);
        }
        uVar10 = *(ulong *)(lVar27 + 0x80);
        if (uVar10 < uVar19) {
          uVar26 = uVar19;
LAB_02a2abc0:
          FUN_02a2b9f4(plVar21,uVar26);
        }
        else if (uVar19 < uVar10) {
          uVar26 = (ulong)((float)*(ulong *)(lVar27 + 0xd0) / *(float *)(lVar27 + 0xd8));
          if ((uVar10 < 3) ||
             (uVar23 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
             uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333),
             1 < (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
            uVar26 = std::__next_prime(uVar26);
          }
          else if (1 < uVar26) {
            uVar26 = 1L << (-LZCOUNT(uVar26 - 1) & 0x3fU);
          }
          if (uVar26 <= uVar19) {
            uVar26 = uVar19;
          }
          if (uVar26 < uVar10) goto LAB_02a2abc0;
        }
        puVar32 = *(undefined4 **)(lVar27 + 0x80);
        if (((ulong)puVar32 & (long)puVar32 - 1U) == 0) {
          unaff_x24 = (undefined4 *)((long)puVar32 - 1U & (ulong)local_68);
        }
        else if (local_68 < puVar32) {
          unaff_x24 = local_68;
        }
        else {
          uVar10 = 0;
          if (puVar32 != (undefined4 *)0x0) {
            uVar10 = (ulong)local_68 / (ulong)puVar32;
          }
          unaff_x24 = (undefined4 *)((long)local_68 - uVar10 * (long)puVar32);
        }
      }
      plVar24 = *(long **)(*plVar21 + (long)unaff_x24 * 8);
      if (plVar24 == (long *)0x0) {
        plVar24 = (long *)(lVar27 + 0xa8);
        *plVar11 = *plVar24;
        *plVar24 = (long)plVar11;
        *(long **)(*(long *)(lVar27 + 0x78) + (long)unaff_x24 * 8) = plVar24;
        if (*plVar11 != 0) {
          puVar25 = *(undefined4 **)(*plVar11 + 8);
          if (((ulong)puVar32 & (long)puVar32 - 1U) == 0) {
            puVar25 = (undefined4 *)((ulong)puVar25 & (long)puVar32 - 1U);
          }
          else if (puVar32 <= puVar25) {
            uVar10 = 0;
            if (puVar32 != (undefined4 *)0x0) {
              uVar10 = (ulong)puVar25 / (ulong)puVar32;
            }
            puVar25 = (undefined4 *)((long)puVar25 - uVar10 * (long)puVar32);
          }
          plVar24 = (long *)(*plVar21 + (long)puVar25 * 8);
          goto LAB_02a2ac70;
        }
      }
      else {
        *plVar11 = *plVar24;
LAB_02a2ac70:
        *plVar24 = (long)plVar11;
      }
      *(long *)(lVar27 + 0xd0) = *(long *)(lVar27 + 0xd0) + 1;
    }
    else {
      uVar10 = (long)puVar32 - 1;
      if (((ulong)puVar32 & uVar10) == 0) {
        unaff_x24 = (undefined4 *)(uVar10 & (ulong)local_68);
        plVar11 = *(long **)(*plVar21 + (long)unaff_x24 * 8);
        if (plVar11 == (long *)0x0) goto LAB_02a2a950;
        do {
          plVar11 = (long *)*plVar11;
          if ((plVar11 == (long *)0x0) ||
             ((undefined4 *)plVar11[1] != local_68 &&
              (undefined4 *)((ulong)plVar11[1] & uVar10) != unaff_x24)) goto LAB_02a2a950;
        } while ((undefined4 *)plVar11[2] != local_68);
      }
      else {
        unaff_x24 = local_68;
        if (puVar32 <= local_68) {
          uVar10 = 0;
          if (puVar32 != (undefined4 *)0x0) {
            uVar10 = (ulong)local_68 / (ulong)puVar32;
          }
          unaff_x24 = (undefined4 *)((long)local_68 - uVar10 * (long)puVar32);
        }
        plVar11 = *(long **)(*plVar21 + (long)unaff_x24 * 8);
        if (plVar11 == (long *)0x0) goto LAB_02a2a950;
        do {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_02a2a950;
          puVar25 = (undefined4 *)plVar11[1];
          if (puVar25 != local_68) {
            if (puVar32 <= puVar25) {
              uVar10 = 0;
              if (puVar32 != (undefined4 *)0x0) {
                uVar10 = (ulong)puVar25 / (ulong)puVar32;
              }
              puVar25 = (undefined4 *)((long)puVar25 - uVar10 * (long)puVar32);
            }
            if (puVar25 != unaff_x24) goto LAB_02a2a950;
          }
        } while ((undefined4 *)plVar11[2] != local_68);
      }
    }
    plVar21 = plVar12 + 5;
    do {
      lVar27 = *plVar21;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = (int)lVar27 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar27 == -1) goto LAB_02a2b588;
    plVar21 = (long *)plVar11[3];
    plVar11[3] = (long)plVar12;
    if (plVar21 != (long *)0x0) {
      plVar11 = plVar21 + 5;
      do {
        lVar27 = *plVar11;
        iVar9 = (int)lVar27 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *(int *)plVar11 = iVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar21 + 0x10))();
      }
      else if ((int)lVar27 == 0) goto LAB_02a2b1a0;
    }
    plVar21 = plVar12 + 5;
    do {
      lVar27 = *plVar21;
      iVar9 = (int)lVar27 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *(int *)plVar21 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar27 == 0) goto LAB_02a2b1a0;
    local_f4 = local_f4 + 1;
  } while (local_f4 != local_104);
LAB_02a2b170:
  lVar27 = *(long *)(lVar18 + 8);
  psVar1 = (short *)(lVar27 + 0x1a);
  do {
    sVar8 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar8 == 1) {
    *(undefined8 *)(lVar27 + 0x10) = 0;
    (**(code **)(*(long *)(lVar18 + -0x28) + 0x50))();
  }
  else if (sVar8 == 0) {
LAB_02a2b434:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_02a29bf4:
  lVar18 = **(long **)(param_1 + 0x220);
  if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar18 + 0x1a);
    sVar8 = *(short *)(lVar18 + 0x1a);
LAB_02a29cd8:
    sVar4 = *psVar1;
    if (sVar4 == sVar8) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a29cfc;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02a29cfc:
      bVar6 = false;
    }
    if (!bVar6) goto code_r0x02a29d04;
    lVar18 = *(long *)(lVar18 + 0x10);
    if (lVar18 != 0) {
      lVar27 = FUN_01289558(lVar18 + 0xe0,&local_b0);
      if (lVar27 != 0) {
        if (*(char *)(lVar27 + 0x11a) == '\0') {
          local_a8 = (byte *)0x0;
          local_a0 = 0;
          local_b0 = (char *)0x0;
        }
        else {
          local_b0 = *(char **)(lVar27 + 0x120);
          local_a8 = *(byte **)(lVar27 + 0x128);
          local_a0 = *(undefined8 *)(lVar27 + 0x130);
        }
        local_d8 = &local_b0;
        lVar27 = *(long *)(param_1 + 0x220);
        local_90[0] = (long *)FUN_02a2bd38(*(undefined8 *)(param_1 + 8),&local_d8);
        if (local_90[0] != (long *)0x0) {
          plVar21 = local_90[0] + 5;
          do {
            lVar16 = *plVar21;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar6) {
              *(int *)plVar21 = (int)lVar16 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar16 == -1) goto LAB_02a2b588;
        }
        FUN_02a2b5e8(lVar27 + 0x40,local_90);
        if (local_90[0] != (long *)0x0) {
          plVar21 = local_90[0] + 5;
          do {
            lVar27 = *plVar21;
            iVar9 = (int)lVar27 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar6) {
              *(int *)plVar21 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_90[0] + 0x10))();
          }
          else if ((int)lVar27 == 0) goto LAB_02a2b1a0;
        }
      }
      lVar27 = *(long *)(lVar18 + 8);
      psVar1 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar27 + 0x10) = 0;
        (**(code **)(*(long *)(lVar18 + -0x28) + 0x50))();
      }
      else if (sVar8 == 0) goto LAB_02a2b434;
    }
  }
LAB_02a29c00:
  lVar18 = *(long *)(*(long *)(param_1 + 0x220) + 0x10);
  if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar18 + 0x1a);
    sVar8 = *(short *)(lVar18 + 0x1a);
LAB_02a29d20:
    sVar4 = *psVar1;
    if (sVar4 == sVar8) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02a29d44;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02a29d44:
      bVar6 = false;
    }
    if (!bVar6) goto code_r0x02a29d4c;
    lVar18 = *(long *)(lVar18 + 0x10);
    if (lVar18 != 0) {
      lVar27 = FUN_01289558(lVar18 + 0xe0,&local_b0);
      if (lVar27 != 0) {
        if (*(char *)(lVar27 + 0x11a) == '\0') {
          local_a8 = (byte *)0x0;
          local_a0 = 0;
          local_b0 = (char *)0x0;
        }
        else {
          local_b0 = *(char **)(lVar27 + 0x120);
          local_a8 = *(byte **)(lVar27 + 0x128);
          local_a0 = *(undefined8 *)(lVar27 + 0x130);
        }
        local_d8 = &local_b0;
        lVar27 = *(long *)(param_1 + 0x220);
        local_90[0] = (long *)FUN_02a2bd38(*(undefined8 *)(param_1 + 8),&local_d8);
        if (local_90[0] != (long *)0x0) {
          plVar21 = local_90[0] + 5;
          do {
            lVar16 = *plVar21;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar6) {
              *(int *)plVar21 = (int)lVar16 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((int)lVar16 == -1) goto LAB_02a2b588;
        }
        FUN_02a2b5e8(lVar27 + 0x40,local_90);
        if (local_90[0] != (long *)0x0) {
          plVar21 = local_90[0] + 5;
          do {
            lVar27 = *plVar21;
            iVar9 = (int)lVar27 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar6) {
              *(int *)plVar21 = iVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*local_90[0] + 0x10))();
          }
          else if ((int)lVar27 == 0) goto LAB_02a2b1a0;
        }
      }
      lVar27 = *(long *)(lVar18 + 8);
      psVar1 = (short *)(lVar27 + 0x1a);
      do {
        sVar8 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar27 + 0x10) = 0;
        (**(code **)(*(long *)(lVar18 + -0x28) + 0x50))();
      }
      else if (sVar8 == 0) goto LAB_02a2b434;
    }
  }
LAB_02a29c0c:
  lVar18 = *(long *)(*(long *)(param_1 + 0x220) + 0x20);
  if ((lVar18 != 0) && (*(short *)(lVar18 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar18 + 0x1a);
    sVar8 = *(short *)(lVar18 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar8) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02a29d8c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a29d8c:
        bVar6 = false;
      }
      if (bVar6) {
        lVar18 = *(long *)(lVar18 + 0x10);
        if (lVar18 != 0) {
          lVar27 = FUN_01289558(lVar18 + 0xe0,&local_b0);
          if (lVar27 != 0) {
            if (*(char *)(lVar27 + 0x11a) == '\0') {
              local_a8 = (byte *)0x0;
              local_a0 = 0;
              local_b0 = (char *)0x0;
            }
            else {
              local_b0 = *(char **)(lVar27 + 0x120);
              local_a8 = *(byte **)(lVar27 + 0x128);
              local_a0 = *(undefined8 *)(lVar27 + 0x130);
            }
            local_d8 = &local_b0;
            lVar27 = *(long *)(param_1 + 0x220);
            local_90[0] = (long *)FUN_02a2bd38(*(undefined8 *)(param_1 + 8),&local_d8);
            if (local_90[0] != (long *)0x0) {
              plVar21 = local_90[0] + 5;
              do {
                lVar16 = *plVar21;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar6) {
                  *(int *)plVar21 = (int)lVar16 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((int)lVar16 == -1) {
LAB_02a2b588:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","IncrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x53,"Reference counter overflows.");
              }
            }
            FUN_02a2b5e8(lVar27 + 0x40,local_90);
            if (local_90[0] != (long *)0x0) {
              plVar21 = local_90[0] + 5;
              do {
                lVar27 = *plVar21;
                iVar9 = (int)lVar27 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar6) {
                  *(int *)plVar21 = iVar9;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar9 == 0) {
                (**(code **)(*local_90[0] + 0x10))();
              }
              else if ((int)lVar27 == 0) goto LAB_02a2b1a0;
            }
          }
          lVar27 = *(long *)(lVar18 + 8);
          psVar1 = (short *)(lVar27 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar8 != 1) {
            if (sVar8 != 0) break;
            goto LAB_02a2b434;
          }
          *(undefined8 *)(lVar27 + 0x10) = 0;
          (**(code **)(*(long *)(lVar18 + -0x28) + 0x50))();
        }
        break;
      }
      sVar8 = sVar4;
    } while (sVar4 != 0);
  }
  *(undefined1 *)(param_1 + 0x240) = 1;
  return;
}


