/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01157e38; name: FUN_01157e38
 */


void FUN_01157e38(long param_1,long param_2)

{
  long *plVar1;
  undefined1 **ppuVar2;
  short *psVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  short sVar7;
  uint uVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  uint *puVar15;
  long *plVar16;
  char *pcVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  byte *pbVar22;
  char *pcVar23;
  long *plVar24;
  int *piVar25;
  uint *puVar26;
  uint *puVar27;
  undefined4 uVar28;
  ushort *puVar29;
  long *plVar30;
  ushort uVar31;
  byte *pbVar32;
  byte *pbVar33;
  undefined1 *puVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  uint *puVar40;
  ulong uVar41;
  uint *puVar42;
  ulong uVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  uint *puVar49;
  float fVar50;
  uint *local_440;
  uint local_434;
  long local_410;
  long local_3e8;
  long local_3d0;
  long local_3c8;
  undefined1 local_3ac [4];
  long *local_3a8;
  undefined1 **local_3a0;
  size_t local_398;
  long *local_390;
  undefined1 *local_2a8;
  undefined1 **local_2a0;
  size_t local_298;
  long *local_290;
  undefined1 *local_288 [32];
  undefined1 *local_188;
  char *pcStack_180;
  size_t local_178;
  long *local_170;
  long *local_88;
  undefined1 auStack_80 [32];
  
  FUN_00db2500(param_1 + 0x40);
  FUN_00fba0b8(param_1 + 0x48,param_2 + 8);
  lVar36 = *(long *)(param_2 + 0x18);
  if (lVar36 != 0) {
    lVar37 = *(long *)(lVar36 + 0x30);
    if (*(long *)(lVar37 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar3 = (short *)(lVar37 + 0x1a);
    do {
      sVar7 = *psVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar7 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar7 == 0) {
      uVar44 = (**(code **)**(undefined8 **)(lVar37 + 0x10))();
      *(undefined8 *)(lVar37 + 8) = uVar44;
      *(undefined4 *)(lVar37 + 0x1c) = 0xfffffffe;
    }
    else if (sVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar14 = *(long **)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar36;
  if (plVar14 != (long *)0x0) {
    lVar36 = plVar14[6];
    psVar3 = (short *)(lVar36 + 0x1a);
    do {
      sVar7 = *psVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar7 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar36 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))();
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00cef9d0(param_1 + 0x60,param_2 + 0x20);
  FUN_00ceffd4(param_1 + 0x70,param_2 + 0x30);
  plVar14 = (long *)(param_1 + 0x80);
  FUN_0115ba1c(plVar14);
  if (((*(long *)(param_1 + 0x48) != 0) && ((*(byte *)(*(long *)(param_1 + 0x48) + 0x1e8) & 1) != 0)
      ) && (puVar15 = (uint *)(**(code **)(**(long **)(param_1 + 0x48) + 0x70))(),
           puVar15 != (uint *)0x0)) {
    uVar8 = *puVar15;
    piVar25 = (int *)((long)puVar15 + (ulong)uVar8);
    if ((6 < *(ushort *)((long)piVar25 - (long)*piVar25)) &&
       (uVar38 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[3], uVar38 != 0)) {
      uVar41 = (ulong)*(uint *)((long)piVar25 + uVar38);
      puVar4 = (uint *)((long)((long)piVar25 + uVar38) + uVar41);
      fVar50 = (float)NEON_ucvtf(*puVar4);
      FUN_0115bad0(plVar14,(long)(fVar50 / *(float *)(param_1 + 0xe0)));
      uVar21 = (ulong)*puVar4;
      if (uVar21 != 0) {
        lVar36 = param_1 + 0x170;
        plVar1 = (long *)(param_1 + 0xb0);
        lVar37 = uVar41 + uVar38 + (ulong)uVar8;
        pbVar32 = (byte *)((ulong)local_288 | 1);
        local_3e8 = (long)puVar15 + lVar37 + 0xd;
        local_3c8 = (long)puVar15 + lVar37 + 9;
        pbVar33 = (byte *)((ulong)&local_188 | 1);
        puVar15 = puVar4 + 1;
        do {
          puVar34 = &DAT_cbf29ce484222645;
          piVar25 = (int *)((long)puVar15 + (ulong)*puVar15);
          if ((4 < *(ushort *)((long)piVar25 - (long)*piVar25)) &&
             (uVar38 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[2], uVar38 != 0)) {
            puVar26 = (uint *)((long)piVar25 + uVar38);
            piVar25 = (int *)((long)puVar26 + (ulong)*puVar26);
            puVar29 = (ushort *)((long)piVar25 - (long)*piVar25);
            uVar31 = *puVar29;
            if (uVar31 < 5) {
              uVar38 = 0;
LAB_011594e8:
              local_434 = 0;
            }
            else {
              if ((ulong)puVar29[2] == 0) {
                uVar38 = 0;
              }
              else {
                uVar38 = (ulong)*(ushort *)((long)piVar25 + (ulong)puVar29[2]);
              }
              if (uVar31 < 7) goto LAB_011594e8;
              uVar21 = 0;
              if ((ulong)puVar29[3] != 0) {
                uVar21 = (ulong)*(ushort *)((long)piVar25 + (ulong)puVar29[3]);
              }
              uVar38 = uVar38 | uVar21 << 0x10;
              if ((uVar31 < 9) || ((ulong)puVar29[4] == 0)) goto LAB_011594e8;
              local_434 = (uint)*(byte *)((long)piVar25 + (ulong)puVar29[4]);
            }
            FUN_01159c50(&local_88,*(undefined8 *)(param_1 + 8));
            uVar8 = *puVar15;
            piVar25 = (int *)((long)puVar15 + (ulong)uVar8);
            if ((*(ushort *)((long)piVar25 - (long)*piVar25) < 7) ||
               (uVar21 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[3], uVar21 == 0)) {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              local_188 = *(undefined1 **)PTR_DAT_047d3e30;
              pcStack_180 = *(char **)(PTR_DAT_047d3e30 + 8);
              local_178 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              local_170 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (local_170 != (long *)0x0) {
                (**(code **)(*local_170 + 0x18))();
              }
            }
            else {
              puVar26 = (uint *)((long)piVar25 + uVar21);
              uVar41 = (ulong)*puVar26;
              pcVar17 = (char *)((long)puVar26 + uVar41 + 4);
              local_178 = strlen(pcVar17);
              bVar9 = *(byte *)((long)puVar26 + uVar41 + 4);
              local_188 = puVar34;
              if (bVar9 != 0) {
                pbVar22 = (byte *)(local_3c8 + uVar41 + uVar21 + (ulong)uVar8);
                do {
                  local_188 = (undefined1 *)(((ulong)local_188 ^ (ulong)bVar9) * 0x100000001b3);
                  bVar9 = *pbVar22;
                  pbVar22 = pbVar22 + 1;
                } while (bVar9 != 0);
              }
              local_170 = (long *)0x0;
              pcStack_180 = pcVar17;
            }
            FUN_01159bb0(local_288,lVar36,&local_188);
            plVar20 = (long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]);
            plVar30 = (long *)PTR_DAT_047d8b70;
            if (plVar20 != (long *)0x0) {
              plVar30 = plVar20 + 6;
            }
            lVar37 = *plVar30;
            plVar30 = (long *)PTR_PTR_047d4508;
            if (plVar20 != (long *)0x0) {
              plVar30 = plVar20 + 7;
            }
            lVar39 = *plVar30;
            if (plVar20 == (long *)0x0) {
              lVar48 = 0;
            }
            else {
              lVar48 = plVar20[8];
              (**(code **)(*plVar20 + 0x18))(plVar20);
            }
            plVar30 = local_88;
            *local_88 = lVar37;
            local_88[1] = lVar39;
            plVar16 = (long *)local_88[3];
            local_88[2] = lVar48;
            local_88[3] = 0;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x20))();
            }
            plVar30[3] = (long)plVar20;
            if ((long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]) != (long *)0x0) {
              (**(code **)(*(long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]) + 0x20))();
            }
            if (local_170 != (long *)0x0) {
              (**(code **)(*local_170 + 0x20))();
            }
            uVar8 = *puVar15;
            piVar25 = (int *)((long)puVar15 + (ulong)uVar8);
            if ((*(ushort *)((long)piVar25 - (long)*piVar25) < 9) ||
               (uVar21 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[4], uVar21 == 0)) {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              local_188 = *(undefined1 **)PTR_DAT_047d3e30;
              pcStack_180 = *(char **)(PTR_DAT_047d3e30 + 8);
              local_178 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              local_170 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (local_170 != (long *)0x0) {
                (**(code **)(*local_170 + 0x18))();
              }
            }
            else {
              puVar26 = (uint *)((long)piVar25 + uVar21);
              uVar41 = (ulong)*puVar26;
              pcVar17 = (char *)((long)puVar26 + uVar41 + 4);
              local_178 = strlen(pcVar17);
              bVar9 = *(byte *)((long)puVar26 + uVar41 + 4);
              local_188 = puVar34;
              if (bVar9 != 0) {
                pbVar22 = (byte *)(local_3c8 + uVar41 + uVar21 + (ulong)uVar8);
                do {
                  local_188 = (undefined1 *)(((ulong)local_188 ^ (ulong)bVar9) * 0x100000001b3);
                  bVar9 = *pbVar22;
                  pbVar22 = pbVar22 + 1;
                } while (bVar9 != 0);
              }
              local_170 = (long *)0x0;
              pcStack_180 = pcVar17;
            }
            FUN_01159bb0(local_288,lVar36,&local_188);
            plVar20 = (long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]);
            plVar30 = (long *)PTR_DAT_047d8b70;
            if (plVar20 != (long *)0x0) {
              plVar30 = plVar20 + 6;
            }
            lVar37 = *plVar30;
            plVar30 = (long *)PTR_PTR_047d4508;
            if (plVar20 != (long *)0x0) {
              plVar30 = plVar20 + 7;
            }
            lVar39 = *plVar30;
            if (plVar20 == (long *)0x0) {
              lVar48 = 0;
            }
            else {
              lVar48 = plVar20[8];
              (**(code **)(*plVar20 + 0x18))(plVar20);
            }
            plVar30 = local_88;
            local_88[4] = lVar37;
            local_88[5] = lVar39;
            plVar16 = (long *)local_88[7];
            local_88[6] = lVar48;
            local_88[7] = 0;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x20))();
            }
            plVar30[7] = (long)plVar20;
            if ((long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]) != (long *)0x0) {
              (**(code **)(*(long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]) + 0x20))();
            }
            if (local_170 != (long *)0x0) {
              (**(code **)(*local_170 + 0x20))();
            }
            uVar8 = *puVar15;
            piVar25 = (int *)((long)puVar15 + (ulong)uVar8);
            if ((*(ushort *)((long)piVar25 - (long)*piVar25) < 0xb) ||
               (uVar21 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[5], uVar21 == 0)) {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              local_188 = *(undefined1 **)PTR_DAT_047d3e30;
              pcStack_180 = *(char **)(PTR_DAT_047d3e30 + 8);
              local_178 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
              local_170 = *(long **)(PTR_DAT_047d3e30 + 0x18);
              if (local_170 != (long *)0x0) {
                (**(code **)(*local_170 + 0x18))();
              }
            }
            else {
              puVar26 = (uint *)((long)piVar25 + uVar21);
              uVar41 = (ulong)*puVar26;
              pcVar17 = (char *)((long)puVar26 + uVar41 + 4);
              local_178 = strlen(pcVar17);
              bVar9 = *(byte *)((long)puVar26 + uVar41 + 4);
              if (bVar9 != 0) {
                pbVar22 = (byte *)(local_3c8 + uVar41 + uVar21 + (ulong)uVar8);
                do {
                  puVar34 = (undefined1 *)(((ulong)puVar34 ^ (ulong)bVar9) * 0x100000001b3);
                  bVar9 = *pbVar22;
                  pbVar22 = pbVar22 + 1;
                } while (bVar9 != 0);
              }
              local_170 = (long *)0x0;
              local_188 = puVar34;
              pcStack_180 = pcVar17;
            }
            FUN_01159bb0(local_288,lVar36,&local_188);
            plVar20 = (long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]);
            plVar30 = (long *)PTR_DAT_047d8b70;
            if (plVar20 != (long *)0x0) {
              plVar30 = plVar20 + 6;
            }
            lVar37 = *plVar30;
            plVar30 = (long *)PTR_PTR_047d4508;
            if (plVar20 != (long *)0x0) {
              plVar30 = plVar20 + 7;
            }
            lVar39 = *plVar30;
            if (plVar20 == (long *)0x0) {
              lVar48 = 0;
            }
            else {
              lVar48 = plVar20[8];
              (**(code **)(*plVar20 + 0x18))(plVar20);
            }
            plVar30 = local_88;
            local_88[8] = lVar37;
            local_88[9] = lVar39;
            plVar16 = (long *)local_88[0xb];
            local_88[10] = lVar48;
            local_88[0xb] = 0;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x20))();
            }
            plVar30[0xb] = (long)plVar20;
            if ((long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]) != (long *)0x0) {
              (**(code **)(*(long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]) + 0x20))();
            }
            if (local_170 != (long *)0x0) {
              (**(code **)(*local_170 + 0x20))();
            }
            piVar25 = (int *)((long)puVar15 + (ulong)*puVar15);
            puVar29 = (ushort *)((long)piVar25 - (long)*piVar25);
            uVar31 = *puVar29;
            if (uVar31 < 0xd) {
LAB_011594dc:
              uVar28 = 0xffffffff;
            }
            else {
              uVar21 = (ulong)puVar29[6];
              lVar37 = -(long)*piVar25;
              if (uVar21 != 0) {
                uVar41 = (ulong)*(uint *)((long)piVar25 + uVar21);
                puVar26 = (uint *)((long)((long)piVar25 + uVar21) + uVar41);
                if (*puVar26 != 0) {
                  lVar37 = local_3e8 + uVar41 + uVar21 + (ulong)*puVar15;
                  puVar40 = puVar26 + 1;
                  do {
                    plVar30 = (long *)&DAT_cbf29ce484222645;
                    uVar8 = *puVar40;
                    piVar25 = (int *)((long)puVar40 + (ulong)uVar8);
                    if ((*(ushort *)((long)piVar25 - (long)*piVar25) < 7) ||
                       (uVar21 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[3], uVar21 == 0
                       )) {
                      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
                        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3e28);
                      }
                      local_3a8 = *(long **)PTR_DAT_047d3e30;
                      local_3a0 = *(undefined1 ***)(PTR_DAT_047d3e30 + 8);
                      local_398 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
                      local_390 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                      if (local_390 != (long *)0x0) {
                        (**(code **)(*local_390 + 0x18))();
                      }
                    }
                    else {
                      puVar49 = (uint *)((long)piVar25 + uVar21);
                      uVar41 = (ulong)*puVar49;
                      ppuVar2 = (undefined1 **)((long)puVar49 + uVar41 + 4);
                      local_398 = strlen((char *)ppuVar2);
                      bVar9 = *(byte *)((long)puVar49 + uVar41 + 4);
                      local_3a8 = plVar30;
                      if (bVar9 != 0) {
                        pbVar22 = (byte *)(lVar37 + uVar41 + uVar21 + (ulong)uVar8);
                        do {
                          local_3a8 = (long *)(((ulong)local_3a8 ^ (ulong)bVar9) * 0x100000001b3);
                          bVar9 = *pbVar22;
                          pbVar22 = pbVar22 + 1;
                        } while (bVar9 != 0);
                      }
                      local_390 = (long *)0x0;
                      local_3a0 = ppuVar2;
                    }
                    memset(&local_188,0,0x100);
                    ppuVar2 = local_3a0;
                    if (((*(long *)(param_1 + 0x178) != 0) &&
                        (**(char **)(*(long *)(param_1 + 0x178) + 0x38) != '\0')) &&
                       (pcVar17 = strchr((char *)local_3a0,0x2e), pcVar17 != (char *)0x0)) {
                      memset(local_288,0,0x100);
                      strncpy((char *)local_288,(char *)ppuVar2,(long)pcVar17 - (long)ppuVar2);
                      if ((byte)local_288[0] != 0) {
                        pbVar22 = pbVar32;
                        do {
                          bVar9 = *pbVar22;
                          pbVar22 = pbVar22 + 1;
                        } while (bVar9 != 0);
                      }
                      cVar10 = *pcVar17;
                      pcVar23 = pcVar17;
                      while (cVar10 != '\0') {
                        pcVar23 = pcVar23 + 1;
                        cVar10 = *pcVar23;
                      }
                      local_188 = (undefined1 *)((ulong)local_188 & 0xffffffffffffff00);
                      strcat((char *)&local_188,(char *)local_288);
                      puVar5 = (undefined8 *)PTR_PTR_047d4508;
                      if (*(long *)(param_1 + 0x178) != 0) {
                        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x178) + 0x38);
                      }
                      strcat((char *)&local_188,(char *)*puVar5);
                      strcat((char *)&local_188,pcVar17);
                      local_398 = strlen((char *)&local_188);
                      plVar20 = local_390;
                      if ((byte)local_188 != 0) {
                        pbVar22 = pbVar33;
                        bVar9 = (byte)local_188;
                        do {
                          plVar30 = (long *)(((ulong)plVar30 ^ (ulong)bVar9) * 0x100000001b3);
                          bVar9 = *pbVar22;
                          pbVar22 = pbVar22 + 1;
                        } while (bVar9 != 0);
                      }
                      local_3a0 = &local_188;
                      local_390 = (long *)0x0;
                      local_3a8 = plVar30;
                      if (plVar20 != (long *)0x0) {
                        (**(code **)(*plVar20 + 0x20))();
                      }
                      local_390 = (long *)0x0;
                    }
                    FUN_01159bb0(local_288,lVar36,&local_3a8);
                    plVar20 = (long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]);
                    plVar30 = (long *)PTR_DAT_047d8b70;
                    if (plVar20 != (long *)0x0) {
                      plVar30 = plVar20 + 6;
                    }
                    lVar39 = *plVar30;
                    plVar30 = (long *)PTR_PTR_047d4508;
                    if (plVar20 != (long *)0x0) {
                      plVar30 = plVar20 + 7;
                    }
                    lVar48 = *plVar30;
                    if (plVar20 == (long *)0x0) {
                      lVar45 = 0;
                    }
                    else {
                      lVar45 = plVar20[8];
                      (**(code **)(*plVar20 + 0x18))(plVar20);
                    }
                    plVar30 = local_88;
                    piVar25 = (int *)((long)puVar40 + (ulong)*puVar40);
                    if ((*(ushort *)((long)piVar25 - (long)*piVar25) < 5) ||
                       (uVar21 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[2], uVar21 == 0
                       )) {
                      puVar49 = (uint *)0x0;
                    }
                    else {
                      puVar49 = (uint *)(ulong)*(ushort *)((long)piVar25 + uVar21);
                    }
                    puVar42 = (uint *)local_88[0xd];
                    plVar16 = local_88 + 0xc;
                    if (puVar42 == (uint *)0x0) {
LAB_011585bc:
                      plVar18 = (long *)(**(code **)(*(long *)local_88[0x13] + 0x10))
                                                  ((long *)local_88[0x13],0x38,8);
                      if (plVar18 == (long *)0x0) {
                        (**(code **)(*(long *)plVar30[0x13] + 0xe8))();
                      }
                      lVar46 = plVar30[0x13];
                      if (((DAT_04865a38 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                        __cxa_guard_release(&DAT_04865a38);
                      }
                      lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                      if (lVar19 != 0) {
                        if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_01159b60;
                        *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar46;
                        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                      }
                      *(short *)(plVar18 + 2) = (short)puVar49;
                      plVar18[3] = (long)&DAT_cbf29ce484222645;
                      plVar18[6] = 0;
                      plVar18[4] = (long)&DAT_03c886bc;
                      plVar18[5] = 0;
                      if (lVar19 != 0) {
                        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                      }
                      *plVar18 = 0;
                      plVar18[1] = (long)puVar49;
                      if ((puVar42 == (uint *)0x0) ||
                         (puVar27 = local_440,
                         *(float *)(plVar30 + 0x18) * (float)puVar42 < (float)(plVar30[0x17] + 1)))
                      {
                        uVar21 = (ulong)(puVar42 < (uint *)0x3 ||
                                        ((ulong)puVar42 & (long)puVar42 - 1U) != 0) |
                                 (long)puVar42 << 1;
                        uVar41 = (ulong)((float)(plVar30[0x17] + 1) / *(float *)(plVar30 + 0x18));
                        if (uVar41 <= uVar21) {
                          uVar41 = uVar21;
                        }
                        FUN_01024368(plVar16,uVar41);
                        puVar42 = (uint *)plVar30[0xd];
                        if (((ulong)puVar42 & (long)puVar42 - 1U) == 0) {
                          puVar27 = (uint *)((ulong)((int)puVar42 - 1) & (ulong)puVar49);
                        }
                        else if (puVar49 < puVar42) {
                          puVar27 = puVar49;
                        }
                        else {
                          uVar21 = 0;
                          if (puVar42 != (uint *)0x0) {
                            uVar21 = (ulong)puVar49 / (ulong)puVar42;
                          }
                          puVar27 = (uint *)((long)puVar49 - uVar21 * (long)puVar42);
                        }
                      }
                      plVar24 = *(long **)(*plVar16 + (long)puVar27 * 8);
                      if (plVar24 == (long *)0x0) {
                        plVar24 = plVar30 + 0x12;
                        *plVar18 = *plVar24;
                        *plVar24 = (long)plVar18;
                        *(long **)(plVar30[0xc] + (long)puVar27 * 8) = plVar24;
                        if (*plVar18 != 0) {
                          puVar49 = *(uint **)(*plVar18 + 8);
                          if (((ulong)puVar42 & (long)puVar42 - 1U) == 0) {
                            puVar49 = (uint *)((ulong)puVar49 & (long)puVar42 - 1U);
                          }
                          else if (puVar42 <= puVar49) {
                            uVar21 = 0;
                            if (puVar42 != (uint *)0x0) {
                              uVar21 = (ulong)puVar49 / (ulong)puVar42;
                            }
                            puVar49 = (uint *)((long)puVar49 - uVar21 * (long)puVar42);
                          }
                          plVar24 = (long *)(*plVar16 + (long)puVar49 * 8);
                          goto LAB_011596d0;
                        }
                      }
                      else {
                        *plVar18 = *plVar24;
LAB_011596d0:
                        *plVar24 = (long)plVar18;
                      }
                      plVar30[0x17] = plVar30[0x17] + 1;
                    }
                    else if (((ulong)puVar42 & (long)puVar42 - 1U) == 0) {
                      local_440 = (uint *)((ulong)((int)puVar42 - 1) & (ulong)puVar49);
                      plVar18 = *(long **)(*plVar16 + (long)local_440 * 8);
                      if (plVar18 == (long *)0x0) goto LAB_011585bc;
                      do {
                        plVar18 = (long *)*plVar18;
                        if ((plVar18 == (long *)0x0) ||
                           ((uint *)plVar18[1] != puVar49 &&
                            (uint *)((ulong)plVar18[1] & (long)puVar42 - 1U) != local_440))
                        goto LAB_011585bc;
                      } while ((uint)*(ushort *)(plVar18 + 2) != (uint)puVar49);
                    }
                    else {
                      local_440 = puVar49;
                      if (puVar42 <= puVar49) {
                        uVar21 = 0;
                        if (puVar42 != (uint *)0x0) {
                          uVar21 = (ulong)puVar49 / (ulong)puVar42;
                        }
                        local_440 = (uint *)((long)puVar49 - uVar21 * (long)puVar42);
                      }
                      plVar18 = *(long **)(*plVar16 + (long)local_440 * 8);
                      if (plVar18 == (long *)0x0) goto LAB_011585bc;
                      do {
                        plVar18 = (long *)*plVar18;
                        if (plVar18 == (long *)0x0) goto LAB_011585bc;
                        puVar27 = (uint *)plVar18[1];
                        if (puVar27 != puVar49) {
                          if (puVar42 <= puVar27) {
                            uVar21 = 0;
                            if (puVar42 != (uint *)0x0) {
                              uVar21 = (ulong)puVar27 / (ulong)puVar42;
                            }
                            puVar27 = (uint *)((long)puVar27 - uVar21 * (long)puVar42);
                          }
                          if (puVar27 != local_440) goto LAB_011585bc;
                        }
                      } while ((uint)*(ushort *)(plVar18 + 2) != (uint)puVar49);
                    }
                    plVar30 = (long *)plVar18[6];
                    plVar18[3] = lVar39;
                    plVar18[4] = lVar48;
                    plVar18[5] = lVar45;
                    plVar18[6] = 0;
                    if (plVar30 != (long *)0x0) {
                      (**(code **)(*plVar30 + 0x20))();
                    }
                    plVar18[6] = (long)plVar20;
                    if ((long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]) != (long *)0x0) {
                      (**(code **)(*(long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]) + 0x20))
                                ();
                    }
                    if (local_390 != (long *)0x0) {
                      (**(code **)(*local_390 + 0x20))();
                    }
                    puVar40 = puVar40 + 1;
                    lVar37 = lVar37 + 4;
                  } while (puVar40 != puVar26 + 1 + *puVar26);
                  piVar25 = (int *)((long)puVar15 + (ulong)*puVar15);
                  lVar37 = -(long)*piVar25;
                  uVar31 = *(ushort *)((long)piVar25 - (long)*piVar25);
                }
              }
              if (uVar31 < 0xf) goto LAB_011594dc;
              uVar21 = (ulong)*(ushort *)((long)piVar25 + lVar37 + 0xe);
              if (uVar21 != 0) {
                uVar41 = (ulong)*(uint *)((long)piVar25 + uVar21);
                puVar26 = (uint *)((long)((long)piVar25 + uVar21) + uVar41);
                puVar40 = puVar26 + 1;
                if (*puVar26 != 0) {
                  local_3d0 = (long)piVar25 + uVar41 + uVar21 + 9;
                  puVar49 = puVar40;
                  do {
                    uVar8 = *puVar49;
                    piVar25 = (int *)((long)puVar49 + (ulong)uVar8);
                    if ((*(ushort *)((long)piVar25 - (long)*piVar25) < 9) ||
                       (uVar21 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[4], uVar21 == 0
                       )) {
                      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
                        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3e28);
                      }
                      local_2a8 = *(undefined1 **)PTR_DAT_047d3e30;
                      local_2a0 = *(undefined1 ***)(PTR_DAT_047d3e30 + 8);
                      local_298 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
                      local_290 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                      if (local_290 != (long *)0x0) {
                        (**(code **)(*local_290 + 0x18))();
                      }
                    }
                    else {
                      puVar42 = (uint *)((long)piVar25 + uVar21);
                      uVar41 = (ulong)*puVar42;
                      ppuVar2 = (undefined1 **)((long)puVar42 + uVar41 + 4);
                      local_298 = strlen((char *)ppuVar2);
                      bVar9 = *(byte *)((long)puVar42 + uVar41 + 4);
                      local_2a8 = &DAT_cbf29ce484222645;
                      if (bVar9 != 0) {
                        local_2a8 = &DAT_cbf29ce484222645;
                        pbVar22 = (byte *)(local_3d0 + uVar41 + uVar21 + (ulong)uVar8);
                        do {
                          local_2a8 = (undefined1 *)
                                      (((ulong)local_2a8 ^ (ulong)bVar9) * 0x100000001b3);
                          bVar9 = *pbVar22;
                          pbVar22 = pbVar22 + 1;
                        } while (bVar9 != 0);
                      }
                      local_290 = (long *)0x0;
                      local_2a0 = ppuVar2;
                    }
                    puVar34 = &DAT_cbf29ce484222645;
                    memset(&local_188,0,0x100);
                    memset(local_288,0,0x100);
                    ppuVar2 = local_2a0;
                    if (((*(long *)(param_1 + 0x180) != 0) &&
                        (**(char **)(*(long *)(param_1 + 0x180) + 0x38) != '\0')) &&
                       (pcVar17 = strchr((char *)local_2a0,0x2e), pcVar17 != (char *)0x0)) {
                      memset(&local_3a8,0,0x100);
                      strncpy((char *)&local_3a8,(char *)ppuVar2,(long)pcVar17 - (long)ppuVar2);
                      if ((char)local_3a8 != '\0') {
                        pcVar23 = (char *)((ulong)&local_3a8 | 1);
                        do {
                          cVar10 = *pcVar23;
                          pcVar23 = pcVar23 + 1;
                        } while (cVar10 != '\0');
                      }
                      cVar10 = *pcVar17;
                      pcVar23 = pcVar17;
                      while (cVar10 != '\0') {
                        pcVar23 = pcVar23 + 1;
                        cVar10 = *pcVar23;
                      }
                      local_188 = (undefined1 *)((ulong)local_188 & 0xffffffffffffff00);
                      strcat((char *)&local_188,(char *)&local_3a8);
                      puVar5 = (undefined8 *)PTR_PTR_047d4508;
                      if (*(long *)(param_1 + 0x180) != 0) {
                        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x180) + 0x38);
                      }
                      strcat((char *)&local_188,(char *)*puVar5);
                      strcat((char *)&local_188,pcVar17);
                      local_298 = strlen((char *)&local_188);
                      plVar30 = local_290;
                      local_2a8 = puVar34;
                      if ((byte)local_188 != 0) {
                        pbVar22 = pbVar33;
                        bVar9 = (byte)local_188;
                        do {
                          local_2a8 = (undefined1 *)
                                      (((ulong)local_2a8 ^ (ulong)bVar9) * 0x100000001b3);
                          bVar9 = *pbVar22;
                          pbVar22 = pbVar22 + 1;
                        } while (bVar9 != 0);
                      }
                      local_2a0 = &local_188;
                      local_290 = (long *)0x0;
                      if (plVar30 != (long *)0x0) {
                        (**(code **)(*plVar30 + 0x20))();
                      }
                      local_290 = (long *)0x0;
                    }
                    ppuVar2 = local_2a0;
                    if (((*(long *)(param_1 + 0x188) != 0) &&
                        (**(char **)(*(long *)(param_1 + 0x188) + 0x38) != '\0')) &&
                       (pcVar17 = strrchr((char *)local_2a0,0x2f), pcVar17 != (char *)0x0)) {
                      memset(&local_3a8,0,0x100);
                      strncpy((char *)&local_3a8,(char *)ppuVar2,(long)pcVar17 - (long)ppuVar2);
                      if ((char)local_3a8 != '\0') {
                        pcVar23 = (char *)((ulong)&local_3a8 | 1);
                        do {
                          cVar10 = *pcVar23;
                          pcVar23 = pcVar23 + 1;
                        } while (cVar10 != '\0');
                      }
                      cVar10 = *pcVar17;
                      pcVar23 = pcVar17;
                      while (cVar10 != '\0') {
                        pcVar23 = pcVar23 + 1;
                        cVar10 = *pcVar23;
                      }
                      local_288[0]._0_1_ = 0;
                      strcat((char *)local_288,(char *)&local_3a8);
                      puVar5 = (undefined8 *)PTR_PTR_047d4508;
                      if (*(long *)(param_1 + 0x188) != 0) {
                        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x188) + 0x38);
                      }
                      strcat((char *)local_288,(char *)*puVar5);
                      strcat((char *)local_288,pcVar17);
                      local_298 = strlen((char *)local_288);
                      plVar30 = local_290;
                      if ((byte)local_288[0] != 0) {
                        pbVar22 = pbVar32;
                        bVar9 = (byte)local_288[0];
                        do {
                          puVar34 = (undefined1 *)(((ulong)puVar34 ^ (ulong)bVar9) * 0x100000001b3);
                          bVar9 = *pbVar22;
                          pbVar22 = pbVar22 + 1;
                        } while (bVar9 != 0);
                      }
                      local_2a0 = local_288;
                      local_290 = (long *)0x0;
                      local_2a8 = puVar34;
                      if (plVar30 != (long *)0x0) {
                        (**(code **)(*plVar30 + 0x20))();
                      }
                      local_290 = (long *)0x0;
                    }
                    FUN_01159bb0(&local_3a8,lVar36,&local_2a8);
                    plVar20 = local_3a8;
                    plVar30 = (long *)PTR_DAT_047d8b70;
                    if (local_3a8 != (long *)0x0) {
                      plVar30 = local_3a8 + 6;
                    }
                    lVar37 = *plVar30;
                    puVar6 = (ulong *)PTR_PTR_047d4508;
                    if (local_3a8 != (long *)0x0) {
                      puVar6 = (ulong *)(local_3a8 + 7);
                    }
                    uVar21 = *puVar6;
                    if (local_3a8 == (long *)0x0) {
                      local_410 = 0;
                    }
                    else {
                      local_410 = local_3a8[8];
                      (**(code **)(*local_3a8 + 0x18))(local_3a8);
                    }
                    plVar30 = local_88;
                    piVar25 = (int *)((long)puVar49 + (ulong)*puVar49);
                    lVar39 = (long)*piVar25;
                    if ((*(ushort *)((long)piVar25 - lVar39) < 5) ||
                       (uVar41 = (ulong)((ushort *)((long)piVar25 - lVar39))[2], uVar41 == 0)) {
                      uVar41 = 0;
                    }
                    else {
                      uVar41 = (ulong)*(ushort *)((long)piVar25 + uVar41);
                    }
                    uVar43 = local_88[0x1a];
                    plVar16 = local_88 + 0x19;
                    uVar47 = uVar21;
                    if (uVar43 == 0) {
LAB_01158bb8:
                      plVar18 = (long *)(**(code **)(*(long *)local_88[0x20] + 0x10))
                                                  ((long *)local_88[0x20],0x80,8);
                      if (plVar18 == (long *)0x0) {
                        (**(code **)(*(long *)plVar30[0x20] + 0xe8))();
                      }
                      lVar39 = plVar30[0x20];
                      if (((DAT_04865a38 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                        __cxa_guard_release(&DAT_04865a38);
                      }
                      lVar48 = nn::os::GetTlsValue(DAT_04865a30);
                      if (lVar48 == 0) {
                        *(short *)(plVar18 + 2) = (short)uVar41;
                        memset(plVar18 + 3,0,0x68);
                        FUN_0115a574(plVar18 + 3);
                      }
                      else {
                        if (0xf < *(ulong *)(lVar48 + 0x80)) goto LAB_01159b60;
                        *(long *)(lVar48 + *(ulong *)(lVar48 + 0x80) * 8) = lVar39;
                        *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + 1;
                        *(short *)(plVar18 + 2) = (short)uVar41;
                        memset(plVar18 + 3,0,0x68);
                        FUN_0115a574(plVar18 + 3);
                        *(long *)(lVar48 + 0x80) = *(long *)(lVar48 + 0x80) + -1;
                      }
                      *plVar18 = 0;
                      plVar18[1] = uVar41;
                      if ((uVar43 == 0) ||
                         (*(float *)(plVar30 + 0x25) * (float)uVar43 < (float)(plVar30[0x24] + 1)))
                      {
                        uVar47 = (ulong)(uVar43 < 3 || (uVar43 & uVar43 - 1) != 0) | uVar43 << 1;
                        uVar43 = (ulong)((float)(plVar30[0x24] + 1) / *(float *)(plVar30 + 0x25));
                        if (uVar43 <= uVar47) {
                          uVar43 = uVar47;
                        }
                        FUN_01025774(plVar16,uVar43);
                        uVar43 = plVar30[0x1a];
                        if ((uVar43 & uVar43 - 1) == 0) {
                          uVar47 = (int)uVar43 - 1 & uVar41;
                        }
                        else if (uVar41 < uVar43) {
                          uVar47 = uVar41;
                        }
                        else {
                          uVar47 = 0;
                          if (uVar43 != 0) {
                            uVar47 = uVar41 / uVar43;
                          }
                          uVar47 = uVar41 - uVar47 * uVar43;
                        }
                      }
                      plVar24 = *(long **)(*plVar16 + uVar47 * 8);
                      if (plVar24 == (long *)0x0) {
                        plVar24 = plVar30 + 0x1f;
                        *plVar18 = *plVar24;
                        *plVar24 = (long)plVar18;
                        *(long **)(plVar30[0x19] + uVar47 * 8) = plVar24;
                        if (*plVar18 != 0) {
                          uVar41 = *(ulong *)(*plVar18 + 8);
                          if ((uVar43 & uVar43 - 1) == 0) {
                            uVar41 = uVar41 & uVar43 - 1;
                          }
                          else if (uVar43 <= uVar41) {
                            uVar47 = 0;
                            if (uVar43 != 0) {
                              uVar47 = uVar41 / uVar43;
                            }
                            uVar41 = uVar41 - uVar47 * uVar43;
                          }
                          plVar24 = (long *)(*plVar16 + uVar41 * 8);
                          goto LAB_0115965c;
                        }
                      }
                      else {
                        *plVar18 = *plVar24;
LAB_0115965c:
                        *plVar24 = (long)plVar18;
                      }
                      plVar30[0x24] = plVar30[0x24] + 1;
                      piVar25 = (int *)((long)puVar49 + (ulong)*puVar49);
                      lVar39 = (long)*piVar25;
                    }
                    else if ((uVar43 & uVar43 - 1) == 0) {
                      uVar47 = (int)uVar43 - 1 & uVar41;
                      plVar18 = *(long **)(*plVar16 + uVar47 * 8);
                      if (plVar18 == (long *)0x0) goto LAB_01158bb8;
                      do {
                        plVar18 = (long *)*plVar18;
                        if ((plVar18 == (long *)0x0) ||
                           (plVar18[1] != uVar41 && (plVar18[1] & uVar43 - 1) != uVar47))
                        goto LAB_01158bb8;
                      } while ((uint)*(ushort *)(plVar18 + 2) != (uint)uVar41);
                    }
                    else {
                      uVar47 = uVar41;
                      if (uVar43 <= uVar41) {
                        uVar47 = 0;
                        if (uVar43 != 0) {
                          uVar47 = uVar41 / uVar43;
                        }
                        uVar47 = uVar41 - uVar47 * uVar43;
                      }
                      plVar18 = *(long **)(*plVar16 + uVar47 * 8);
                      if (plVar18 == (long *)0x0) goto LAB_01158bb8;
                      do {
                        plVar18 = (long *)*plVar18;
                        if (plVar18 == (long *)0x0) goto LAB_01158bb8;
                        uVar35 = plVar18[1];
                        if (uVar35 != uVar41) {
                          if (uVar43 <= uVar35) {
                            uVar12 = 0;
                            if (uVar43 != 0) {
                              uVar12 = uVar35 / uVar43;
                            }
                            uVar35 = uVar35 - uVar12 * uVar43;
                          }
                          if (uVar35 != uVar47) goto LAB_01158bb8;
                        }
                      } while ((uint)*(ushort *)(plVar18 + 2) != (uint)uVar41);
                    }
                    if (*(ushort *)((long)piVar25 - lVar39) < 7) {
                      local_3ac[0] = 0;
                    }
                    else {
                      uVar41 = (ulong)((ushort *)((long)piVar25 - lVar39))[3];
                      if (uVar41 == 0) {
                        local_3ac[0] = 0;
                      }
                      else {
                        local_3ac[0] = *(undefined1 *)((long)piVar25 + uVar41);
                      }
                    }
                    plVar30 = (long *)FUN_0115a278(plVar18 + 3,local_3ac);
                    *plVar30 = lVar37;
                    plVar30[1] = uVar21;
                    plVar30[2] = local_410;
                    plVar16 = (long *)plVar30[3];
                    plVar30[3] = 0;
                    if (plVar16 != (long *)0x0) {
                      (**(code **)(*plVar16 + 0x20))();
                    }
                    plVar30[3] = (long)plVar20;
                    if (local_3a8 != (long *)0x0) {
                      (**(code **)(*local_3a8 + 0x20))();
                    }
                    if (local_290 != (long *)0x0) {
                      (**(code **)(*local_290 + 0x20))();
                    }
                    puVar49 = puVar49 + 1;
                    local_3d0 = local_3d0 + 4;
                  } while (puVar49 != puVar40 + *puVar26);
                  piVar25 = (int *)((long)puVar15 + (ulong)*puVar15);
                  lVar37 = -(long)*piVar25;
                  uVar31 = *(ushort *)((long)piVar25 - (long)*piVar25);
                  local_440 = puVar40;
                }
              }
              if (uVar31 < 0x13) goto LAB_011594dc;
              uVar21 = (ulong)*(ushort *)((long)piVar25 + lVar37 + 0x12);
              uVar28 = 0xffffffff;
              if (uVar21 != 0) {
                uVar28 = *(undefined4 *)((long)piVar25 + uVar21);
              }
            }
            plVar30 = local_88;
            *(undefined4 *)(local_88 + 0x26) = uVar28;
            uVar8 = *puVar15;
            puVar26 = (uint *)(uVar38 | (ulong)(local_434 & 1) << 0x20);
            piVar25 = (int *)((long)puVar15 + (ulong)uVar8);
            puVar40 = puVar15;
            if (0x10 < *(ushort *)((long)piVar25 - (long)*piVar25)) {
              uVar38 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[8];
              puVar40 = (uint *)0x0;
              if (uVar38 != 0) {
                puVar40 = (uint *)((long)piVar25 + uVar38);
                uVar21 = (ulong)*puVar40;
                ppuVar2 = (undefined1 **)((long)puVar40 + uVar21 + 4);
                local_398 = strlen((char *)ppuVar2);
                bVar9 = *(byte *)((long)puVar40 + uVar21 + 4);
                local_3a8 = (long *)&DAT_cbf29ce484222645;
                if (bVar9 != 0) {
                  local_3a8 = (long *)&DAT_cbf29ce484222645;
                  pbVar22 = (byte *)(local_3c8 + uVar21 + uVar38 + (ulong)uVar8);
                  do {
                    local_3a8 = (long *)(((ulong)local_3a8 ^ (ulong)bVar9) * 0x100000001b3);
                    bVar9 = *pbVar22;
                    pbVar22 = pbVar22 + 1;
                  } while (bVar9 != 0);
                }
                local_390 = (long *)0x0;
                local_3a0 = ppuVar2;
                memset(&local_188,0,0x100);
                if (((*(long *)(param_1 + 400) != 0) &&
                    (**(char **)(*(long *)(param_1 + 400) + 0x38) != '\0')) &&
                   (pcVar17 = strrchr((char *)ppuVar2,0x2f), pcVar17 != (char *)0x0)) {
                  memset(local_288,0,0x100);
                  strncpy((char *)local_288,(char *)ppuVar2,(long)pcVar17 - (long)ppuVar2);
                  if ((byte)local_288[0] != 0) {
                    pbVar22 = pbVar32;
                    do {
                      bVar9 = *pbVar22;
                      pbVar22 = pbVar22 + 1;
                    } while (bVar9 != 0);
                  }
                  cVar10 = *pcVar17;
                  pcVar23 = pcVar17;
                  while (cVar10 != '\0') {
                    pcVar23 = pcVar23 + 1;
                    cVar10 = *pcVar23;
                  }
                  local_188 = (undefined1 *)((ulong)local_188 & 0xffffffffffffff00);
                  strcat((char *)&local_188,(char *)local_288);
                  puVar5 = (undefined8 *)PTR_PTR_047d4508;
                  if (*(long *)(param_1 + 400) != 0) {
                    puVar5 = (undefined8 *)(*(long *)(param_1 + 400) + 0x38);
                  }
                  strcat((char *)&local_188,(char *)*puVar5);
                  strcat((char *)&local_188,pcVar17);
                  local_398 = strlen((char *)&local_188);
                  plVar20 = local_390;
                  local_3a8 = (long *)&DAT_cbf29ce484222645;
                  if ((byte)local_188 != 0) {
                    local_3a8 = (long *)&DAT_cbf29ce484222645;
                    pbVar22 = pbVar33;
                    bVar9 = (byte)local_188;
                    do {
                      local_3a8 = (long *)(((ulong)local_3a8 ^ (ulong)bVar9) * 0x100000001b3);
                      bVar9 = *pbVar22;
                      pbVar22 = pbVar22 + 1;
                    } while (bVar9 != 0);
                  }
                  local_3a0 = &local_188;
                  local_390 = (long *)0x0;
                  if (plVar20 != (long *)0x0) {
                    (**(code **)(*plVar20 + 0x20))();
                  }
                  local_390 = (long *)0x0;
                }
                FUN_01159bb0(local_288,lVar36,&local_3a8);
                plVar16 = (long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]);
                plVar20 = (long *)PTR_DAT_047d8b70;
                if (plVar16 != (long *)0x0) {
                  plVar20 = plVar16 + 6;
                }
                lVar37 = *plVar20;
                puVar6 = (ulong *)PTR_PTR_047d4508;
                if (plVar16 != (long *)0x0) {
                  puVar6 = (ulong *)(plVar16 + 7);
                }
                puVar40 = (uint *)*puVar6;
                if (plVar16 == (long *)0x0) {
                  lVar39 = 0;
                }
                else {
                  lVar39 = plVar16[8];
                  (**(code **)(*plVar16 + 0x18))(plVar16);
                }
                plVar20 = (long *)plVar30[0x2a];
                plVar30[0x27] = lVar37;
                plVar30[0x28] = (long)puVar40;
                plVar30[0x29] = lVar39;
                plVar30[0x2a] = 0;
                if (plVar20 != (long *)0x0) {
                  (**(code **)(*plVar20 + 0x20))();
                }
                plVar30[0x2a] = (long)plVar16;
                if ((long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]) != (long *)0x0) {
                  (**(code **)(*(long *)CONCAT71(local_288[0]._1_7_,(byte)local_288[0]) + 0x20))();
                }
                if (local_390 != (long *)0x0) {
                  (**(code **)(*local_390 + 0x20))();
                }
              }
            }
            puVar49 = *(uint **)(param_1 + 0x88);
            if (puVar49 == (uint *)0x0) {
LAB_011591e8:
              plVar20 = (long *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x10))
                                          (*(long **)(param_1 + 0xb8),0x170,8);
              if (plVar20 == (long *)0x0) {
                (**(code **)(**(long **)(param_1 + 0xb8) + 0xe8))();
              }
              uVar44 = *(undefined8 *)(param_1 + 0xb8);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar37 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar37 != 0) {
                if (0xf < *(ulong *)(lVar37 + 0x80)) {
LAB_01159b60:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar37 + *(ulong *)(lVar37 + 0x80) * 8) = uVar44;
                *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + 1;
              }
              plVar20[2] = (long)puVar26;
              memset(plVar20 + 0xf,0,0xf8);
              plVar20[5] = 0;
              plVar20[6] = 0;
              plVar20[3] = (long)&DAT_cbf29ce484222645;
              plVar20[4] = (long)&DAT_03c886bc;
              plVar20[7] = (long)&DAT_cbf29ce484222645;
              plVar20[8] = (long)&DAT_03c886bc;
              plVar20[9] = 0;
              plVar20[10] = 0;
              plVar20[0xb] = (long)&DAT_cbf29ce484222645;
              plVar20[0xc] = (long)&DAT_03c886bc;
              plVar20[0xd] = 0;
              plVar20[0xe] = 0;
              FUN_01159db8(plVar20 + 0xf);
              FUN_0115a014(plVar20 + 0x1c);
              plVar20[0x2a] = (long)&DAT_cbf29ce484222645;
              plVar20[0x2b] = (long)&DAT_03c886bc;
              plVar20[0x2c] = 0;
              plVar20[0x2d] = 0;
              if (lVar37 != 0) {
                *(long *)(lVar37 + 0x80) = *(long *)(lVar37 + 0x80) + -1;
              }
              *plVar20 = 0;
              plVar20[1] = (long)puVar26;
              fVar50 = (float)(*(long *)(param_1 + 0xd8) + 1);
              if ((puVar49 == (uint *)0x0) || (*(float *)(param_1 + 0xe0) * (float)puVar49 < fVar50)
                 ) {
                uVar38 = (ulong)(puVar49 < (uint *)0x3 || ((ulong)puVar49 & (long)puVar49 - 1U) != 0
                                ) | (long)puVar49 << 1;
                uVar21 = (ulong)(fVar50 / *(float *)(param_1 + 0xe0));
                if (uVar21 <= uVar38) {
                  uVar21 = uVar38;
                }
                FUN_0115bad0(plVar14,uVar21);
                puVar49 = *(uint **)(param_1 + 0x88);
                if (((ulong)puVar49 & (long)puVar49 - 1U) == 0) {
                  puVar40 = (uint *)((long)puVar49 - 1U & (ulong)puVar26);
                }
                else if (puVar26 < puVar49) {
                  puVar40 = puVar26;
                }
                else {
                  uVar38 = 0;
                  if (puVar49 != (uint *)0x0) {
                    uVar38 = (ulong)puVar26 / (ulong)puVar49;
                  }
                  puVar40 = (uint *)((long)puVar26 - uVar38 * (long)puVar49);
                }
              }
              plVar16 = *(long **)(*plVar14 + (long)puVar40 * 8);
              if (plVar16 == (long *)0x0) {
                *plVar20 = *plVar1;
                *plVar1 = (long)plVar20;
                *(long **)(*plVar14 + (long)puVar40 * 8) = plVar1;
                if (*plVar20 != 0) {
                  puVar26 = *(uint **)(*plVar20 + 8);
                  if (((ulong)puVar49 & (long)puVar49 - 1U) == 0) {
                    puVar26 = (uint *)((ulong)puVar26 & (long)puVar49 - 1U);
                  }
                  else if (puVar49 <= puVar26) {
                    uVar38 = 0;
                    if (puVar49 != (uint *)0x0) {
                      uVar38 = (ulong)puVar26 / (ulong)puVar49;
                    }
                    puVar26 = (uint *)((long)puVar26 - uVar38 * (long)puVar49);
                  }
                  plVar16 = (long *)(*plVar14 + (long)puVar26 * 8);
                  goto LAB_01159340;
                }
              }
              else {
                *plVar20 = *plVar16;
LAB_01159340:
                *plVar16 = (long)plVar20;
              }
              *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
              plVar16 = local_88;
            }
            else {
              uVar38 = (long)puVar49 - 1;
              if (((ulong)puVar49 & uVar38) == 0) {
                puVar40 = (uint *)(uVar38 & (ulong)puVar26);
                plVar20 = *(long **)(*plVar14 + (long)puVar40 * 8);
                if (plVar20 == (long *)0x0) goto LAB_011591e8;
                do {
                  plVar20 = (long *)*plVar20;
                  if ((plVar20 == (long *)0x0) ||
                     ((uint *)plVar20[1] != puVar26 &&
                      (uint *)((ulong)plVar20[1] & uVar38) != puVar40)) goto LAB_011591e8;
                } while ((uint *)plVar20[2] != puVar26);
              }
              else {
                puVar40 = puVar26;
                if (puVar49 <= puVar26) {
                  uVar38 = 0;
                  if (puVar49 != (uint *)0x0) {
                    uVar38 = (ulong)puVar26 / (ulong)puVar49;
                  }
                  puVar40 = (uint *)((long)puVar26 - uVar38 * (long)puVar49);
                }
                plVar20 = *(long **)(*plVar14 + (long)puVar40 * 8);
                if (plVar20 == (long *)0x0) goto LAB_011591e8;
                do {
                  plVar20 = (long *)*plVar20;
                  if (plVar20 == (long *)0x0) goto LAB_011591e8;
                  puVar42 = (uint *)plVar20[1];
                  if (puVar42 != puVar26) {
                    if (puVar49 <= puVar42) {
                      uVar38 = 0;
                      if (puVar49 != (uint *)0x0) {
                        uVar38 = (ulong)puVar42 / (ulong)puVar49;
                      }
                      puVar42 = (uint *)((long)puVar42 - uVar38 * (long)puVar49);
                    }
                    if (puVar42 != puVar40) goto LAB_011591e8;
                  }
                } while ((uint *)plVar20[2] != puVar26);
              }
              plVar16 = plVar30;
            }
            FUN_0115b23c(plVar20 + 3,plVar30);
            local_88 = (long *)0x0;
            if (plVar16 != (long *)0x0) {
              FUN_0115a7d0(auStack_80,plVar16);
            }
            uVar21 = (ulong)*puVar4;
          }
          local_3c8 = local_3c8 + 4;
          puVar15 = puVar15 + 1;
          local_3e8 = local_3e8 + 4;
        } while (puVar15 != puVar4 + 1 + uVar21);
      }
    }
  }
  return;
}


