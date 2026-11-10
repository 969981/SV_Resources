/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f606a0; name: FUN_00f606a0
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f606a0(long param_1,long param_2,long param_3,int *param_4,undefined8 param_5)

{
  code *pcVar1;
  short *psVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  char cVar10;
  undefined *puVar11;
  undefined1 **__src;
  int iVar12;
  uint *puVar13;
  long *plVar14;
  char *pcVar15;
  size_t sVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  byte *pbVar21;
  ushort *puVar22;
  long lVar23;
  byte *pbVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  char *pcVar29;
  ulong uVar30;
  bool bVar31;
  short sVar32;
  long *plVar33;
  long lVar34;
  byte *pbVar35;
  uint *puVar36;
  byte *pbVar37;
  byte *pbVar38;
  byte *pbVar39;
  float fVar40;
  long local_548;
  undefined1 *local_510;
  code *local_508;
  undefined1 *local_500;
  byte *pbStack_4f8;
  undefined *local_4f0;
  undefined8 uStack_4e8;
  long local_4e0;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  byte *local_e8;
  byte *pbStack_e0;
  size_t local_d8;
  long *local_d0;
  undefined1 *local_c8;
  byte *pbStack_c0;
  size_t local_b8;
  long *local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  undefined1 *local_88;
  undefined1 **local_80;
  size_t local_78;
  long *local_70;
  
  if (((param_4 == (int *)0x0) || (*(ushort *)((long)param_4 - (long)*param_4) < 0xf)) ||
     (uVar20 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[7], uVar20 == 0)) {
    local_548 = 0;
  }
  else {
    puVar13 = (uint *)((long)param_4 + uVar20);
    local_548 = (long)puVar13 + (ulong)*puVar13;
  }
  puVar13 = (uint *)(**(code **)(**(long **)(param_2 + 8) + 0x70))();
  uVar6 = *puVar13;
  plVar14 = (long *)FUN_00f618d8(param_2);
  puVar5 = (undefined8 *)PTR_PTR_047d4508;
  if (*plVar14 != 0) {
    puVar5 = (undefined8 *)(*plVar14 + 0x38);
  }
  pcVar15 = strrchr((char *)*puVar5,0x2f);
  puVar11 = PTR_DAT_047d3e30;
  pbVar37 = (byte *)0x0;
  if (pcVar15 == (char *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_e8 = *(byte **)puVar11;
    pbStack_e0 = *(byte **)(puVar11 + 8);
    local_d8 = *(size_t *)(puVar11 + 0x10);
    plVar14 = *(long **)(puVar11 + 0x18);
    local_d0 = plVar14;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  else {
    pbVar37 = (byte *)(pcVar15 + 1);
    pbVar21 = &DAT_cbf29ce484222645;
    local_d8 = strlen((char *)pbVar37);
    bVar7 = *pbVar37;
    if (bVar7 != 0) {
      pbVar35 = (byte *)(pcVar15 + 2);
      do {
        pbVar21 = (byte *)(((ulong)pbVar21 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar7 != 0);
    }
    plVar14 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_e8 = pbVar21;
    pbStack_e0 = pbVar37;
  }
  if (puVar13 != (uint *)0x0) {
    piVar3 = (int *)((long)puVar13 + (ulong)uVar6);
    if ((6 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
       (uVar20 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar20 != 0)) {
      uVar28 = (ulong)*(uint *)((long)piVar3 + uVar20);
      puVar4 = (uint *)((long)((long)piVar3 + uVar20) + uVar28);
      puVar36 = puVar4 + 1;
      uVar30 = (ulong)*puVar4;
      if (uVar30 != 0) {
        puVar4 = puVar36 + uVar30;
        lVar34 = (long)puVar13 + uVar28 + uVar20 + (ulong)uVar6 + 9;
        plVar14 = (long *)(param_1 + 0xb0);
        pbVar21 = (byte *)((ulong)&local_510 | 1);
        do {
          pbVar35 = (byte *)(ulong)*puVar36;
          pbVar39 = (byte *)((long)puVar36 + (long)pbVar35);
          puVar22 = (ushort *)(pbVar39 + -(long)*(int *)pbVar39);
          uVar8 = *puVar22;
          if ((uVar8 < 5) || ((ulong)puVar22[2] == 0)) goto LAB_00f60ba0;
          if (uVar8 < 7 || pbVar39[puVar22[2]] != 1) {
            if ((uVar8 < 7 || pbVar39[puVar22[2]] != 2) ||
               (pbVar37 = (byte *)(ulong)puVar22[3], pbVar37 == (byte *)0x0)) goto LAB_00f60ba0;
            uVar20 = (ulong)*(uint *)(pbVar39 + (long)pbVar37);
            piVar3 = (int *)((long)(pbVar39 + (long)pbVar37) + uVar20);
            uVar19 = FUN_00da4b88(**(undefined8 **)(param_1 + 0x70),0,piVar3,local_548);
            if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
               (uVar28 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar28 == 0)) {
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              local_510 = *(undefined1 **)PTR_DAT_047d3e30;
              local_508 = *(code **)(PTR_DAT_047d3e30 + 8);
              local_500 = *(undefined1 **)(PTR_DAT_047d3e30 + 0x10);
              pbVar37 = *(byte **)(PTR_DAT_047d3e30 + 0x18);
              pbStack_4f8 = pbVar37;
              if (pbVar37 == (byte *)0x0) goto LAB_00f60c9c;
              (**(code **)(*(long *)pbVar37 + 0x18))(pbVar37);
              uVar18 = FUN_00da58b8(local_548,&local_510);
              (**(code **)(*(long *)pbVar37 + 0x20))(pbVar37);
            }
            else {
              puVar13 = (uint *)((long)piVar3 + uVar28);
              uVar30 = (ulong)*puVar13;
              pcVar1 = (code *)((long)puVar13 + uVar30 + 4);
              local_500 = (undefined1 *)strlen((char *)pcVar1);
              bVar7 = *(byte *)((long)puVar13 + uVar30 + 4);
              local_510 = &DAT_cbf29ce484222645;
              if (bVar7 != 0) {
                local_510 = &DAT_cbf29ce484222645;
                pbVar35 = pbVar37 + uVar30 + uVar28 + uVar20 + (long)pbVar35 + lVar34;
                do {
                  local_510 = (undefined1 *)(((ulong)local_510 ^ (ulong)bVar7) * 0x100000001b3);
                  bVar7 = *pbVar35;
                  pbVar35 = pbVar35 + 1;
                } while (bVar7 != 0);
              }
              pbStack_4f8 = (byte *)0x0;
              local_508 = pcVar1;
LAB_00f60c9c:
              uVar18 = FUN_00da58b8(local_548,&local_510);
            }
            memset(&local_510,0,0x400);
            FUN_00da5618(&local_510,param_3,piVar3,local_548);
            local_78 = strlen((char *)&local_510);
            local_88 = &DAT_cbf29ce484222645;
            if ((byte)local_510 != 0) {
              local_88 = &DAT_cbf29ce484222645;
              pbVar35 = pbVar21;
              bVar7 = (byte)local_510;
              do {
                local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar35;
                pbVar35 = pbVar35 + 1;
              } while (bVar7 != 0);
            }
            local_80 = &local_510;
            local_70 = (long *)0x0;
            FUN_00f606a0(param_1,uVar19,&local_88,piVar3,uVar18);
            local_78 = strlen((char *)&local_510);
            local_88 = &DAT_cbf29ce484222645;
            if ((byte)local_510 != 0) {
              local_88 = &DAT_cbf29ce484222645;
              pbVar35 = pbVar21;
              bVar7 = (byte)local_510;
              do {
                local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar7) * 0x100000001b3);
                bVar7 = *pbVar35;
                pbVar35 = pbVar35 + 1;
              } while (bVar7 != 0);
            }
            local_80 = &local_510;
            local_70 = (long *)0x0;
            lVar23 = FUN_00da49fc(param_1,piVar3,&local_88,local_548);
            if (lVar23 != 0) {
              plVar33 = (long *)FUN_00f618d8(uVar19);
              puVar5 = (undefined8 *)PTR_PTR_047d4508;
              if (*plVar33 != 0) {
                puVar5 = (undefined8 *)(*plVar33 + 0x38);
              }
              pcVar15 = strrchr((char *)*puVar5,0x2f);
              if (pcVar15 == (char *)0x0) {
                if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
                  FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3e28);
                }
                plVar33 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                if (plVar33 != (long *)0x0) {
                  (**(code **)(*plVar33 + 0x18))(plVar33);
                }
              }
              else if (pcVar15[1] == '\0') {
                plVar33 = (long *)0x0;
              }
              else {
                pcVar15 = pcVar15 + 2;
                do {
                  cVar10 = *pcVar15;
                  plVar33 = (long *)0x0;
                  pcVar15 = pcVar15 + 1;
                } while (cVar10 != '\0');
              }
              if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xb) ||
                 (uVar20 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5], uVar20 == 0)) {
                pcVar15 = (char *)0x0;
              }
              else {
                puVar13 = (uint *)((long)piVar3 + uVar20);
                pcVar15 = (char *)((long)puVar13 + (ulong)*puVar13);
              }
              FUN_00f61e2c(param_1,lVar23,pcVar15,piVar3,param_5);
              if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0xd) ||
                 (uVar20 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[6], uVar20 == 0)) {
                pcVar15 = (char *)0x0;
              }
              else {
                puVar13 = (uint *)((long)piVar3 + uVar20);
                pcVar15 = (char *)((long)puVar13 + (ulong)*puVar13);
              }
              FUN_00f62670(param_1,lVar23,pcVar15,piVar3,param_5);
              if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
                 (uVar20 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar20 == 0)) {
                pcVar15 = (char *)0x0;
              }
              else {
                puVar13 = (uint *)((long)piVar3 + uVar20);
                pcVar15 = (char *)((long)puVar13 + (ulong)*puVar13);
              }
              if (pcVar15[4] != '\0') {
                pcVar29 = pcVar15 + 5;
                do {
                  cVar10 = *pcVar29;
                  pcVar29 = pcVar29 + 1;
                } while (cVar10 != '\0');
              }
              *(char **)(lVar23 + 200) = pcVar15 + 4;
              if (plVar33 != (long *)0x0) {
                (**(code **)(*plVar33 + 0x20))(plVar33);
              }
            }
          }
          else if ((ulong)puVar22[3] != 0) {
            lVar23 = *(long *)(param_1 + 0x30);
            if (lVar23 != 0) {
              if (*(short *)(lVar23 + 0x1a) != 0) {
                pbVar37 = (byte *)((long)(pbVar39 + puVar22[3]) +
                                  (ulong)*(uint *)(pbVar39 + puVar22[3]));
                psVar2 = (short *)(lVar23 + 0x1a);
                sVar32 = *(short *)(lVar23 + 0x1a);
LAB_00f611e0:
                sVar9 = *psVar2;
                if (sVar9 == sVar32) {
                  cVar10 = '\x01';
                  bVar31 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar31) {
                    *psVar2 = sVar32 + 1;
                    cVar10 = ExclusiveMonitorsStatus();
                  }
                  if (cVar10 != '\0') goto LAB_00f61204;
                  bVar31 = true;
                }
                else {
                  ClearExclusiveLocal();
LAB_00f61204:
                  bVar31 = false;
                }
                if (!bVar31) goto code_r0x00f6120c;
                lVar23 = *(long *)(lVar23 + 0x10);
                plVar33 = (long *)(lVar23 + -0x28);
                if (lVar23 != 0) {
                  if ((*(ushort *)(pbVar37 + -(long)*(int *)pbVar37) < 7) ||
                     (uVar20 = (ulong)*(ushort *)((long)(pbVar37 + -(long)*(int *)pbVar37) + 6),
                     uVar20 == 0)) {
                    pbVar35 = (byte *)0x0;
                  }
                  else {
                    pbVar35 = (byte *)((long)(pbVar37 + uVar20) + (ulong)*(uint *)(pbVar37 + uVar20)
                                      );
                  }
                  local_78 = strlen((char *)(pbVar35 + 4));
                  bVar7 = pbVar35[4];
                  local_88 = &DAT_cbf29ce484222645;
                  if (bVar7 != 0) {
                    local_88 = &DAT_cbf29ce484222645;
                    pbVar39 = pbVar35 + 5;
                    do {
                      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar7) * 0x100000001b3);
                      bVar7 = *pbVar39;
                      pbVar39 = pbVar39 + 1;
                    } while (bVar7 != 0);
                  }
                  local_70 = (long *)0x0;
                  local_80 = (undefined1 **)(pbVar35 + 4);
                  (**(code **)(*plVar33 + 0x68))
                            (&local_a8,plVar33,*(undefined8 *)(param_1 + 0x60),&local_88);
                  lVar17 = local_a8;
                  if (local_a8 == 0) {
                    local_f8 = 0;
                    local_f0 = 0;
                    local_108 = 0;
                    local_100 = 0;
                  }
                  else {
                    if ((*(ushort *)(pbVar37 + -(long)*(int *)pbVar37) < 5) ||
                       (uVar20 = (ulong)*(ushort *)((long)(pbVar37 + -(long)*(int *)pbVar37) + 4),
                       uVar20 == 0)) {
                      pbVar35 = (byte *)0x0;
                    }
                    else {
                      pbVar35 = (byte *)((long)(pbVar37 + uVar20) +
                                        (ulong)*(uint *)(pbVar37 + uVar20));
                    }
                    local_b8 = strlen((char *)(pbVar35 + 4));
                    bVar7 = pbVar35[4];
                    local_c8 = &DAT_cbf29ce484222645;
                    if (bVar7 != 0) {
                      local_c8 = &DAT_cbf29ce484222645;
                      pbVar39 = pbVar35 + 5;
                      do {
                        local_c8 = (undefined1 *)(((ulong)local_c8 ^ (ulong)bVar7) * 0x100000001b3);
                        bVar7 = *pbVar39;
                        pbVar39 = pbVar39 + 1;
                      } while (bVar7 != 0);
                    }
                    local_b0 = (long *)0x0;
                    pbStack_c0 = pbVar35 + 4;
                    FUN_029f0010(lVar17,&local_c8);
                    FUN_029f001c(local_a8,&local_e8);
                    if ((*(ushort *)(pbVar37 + -(long)*(int *)pbVar37) < 9) ||
                       (uVar20 = (ulong)*(ushort *)((long)(pbVar37 + -(long)*(int *)pbVar37) + 8),
                       uVar20 == 0)) {
                      pcVar15 = (char *)0x0;
                    }
                    else {
                      pcVar15 = (char *)((long)(pbVar37 + uVar20) +
                                        (ulong)*(uint *)(pbVar37 + uVar20));
                    }
                    uVar19 = FUN_029f0028(&local_c8,param_4,param_5);
                    local_4e0 = local_a8;
                    local_510 = &LAB_02e69f28;
                    local_508 = FUN_02e69f44;
                    local_4f0 = PTR_LAB_047e32d0;
                    uStack_4e8 = 0;
                    local_500 = &LAB_02e69f48;
                    pbStack_4f8 = &LAB_02e69f5c;
                    FUN_029f01f0(pcVar15,uVar19,&local_510);
                    pcVar1 = local_508;
                    if (local_508 != (code *)0x0) {
                      local_500 = (undefined1 *)0x0;
                      pbStack_4f8 = (byte *)0x0;
                      local_510 = (undefined1 *)0x0;
                      local_508 = (code *)0x0;
                      (*pcVar1)(&local_4f0);
                    }
                    if (local_b0 != (long *)0x0) {
                      (**(code **)(*local_b0 + 0x20))();
                    }
                    if ((*(ushort *)(pbVar37 + -(long)*(int *)pbVar37) < 0xb) ||
                       (uVar20 = (ulong)*(ushort *)((long)(pbVar37 + -(long)*(int *)pbVar37) + 10),
                       uVar20 == 0)) {
                      pcVar15 = (char *)0x0;
                    }
                    else {
                      pcVar15 = (char *)((long)(pbVar37 + uVar20) +
                                        (ulong)*(uint *)(pbVar37 + uVar20));
                    }
                    FUN_00f61e2c(param_1,local_a8,pcVar15,param_4,param_5);
                    if ((*(ushort *)(pbVar37 + -(long)*(int *)pbVar37) < 0xd) ||
                       (uVar20 = (ulong)*(ushort *)((long)(pbVar37 + -(long)*(int *)pbVar37) + 0xc),
                       uVar20 == 0)) {
                      pcVar15 = (char *)0x0;
                    }
                    else {
                      pcVar15 = (char *)((long)(pbVar37 + uVar20) +
                                        (ulong)*(uint *)(pbVar37 + uVar20));
                    }
                    FUN_00f62670(param_1,local_a8,pcVar15,param_4,param_5);
                    local_108 = local_a8;
                    local_100 = lStack_a0;
                    local_f8 = local_98;
                    local_f0 = lStack_90;
                  }
                  if (local_70 != (long *)0x0) {
                    (**(code **)(*local_70 + 0x20))();
                  }
                  lVar23 = *(long *)(lVar23 + 8);
                  psVar2 = (short *)(lVar23 + 0x1a);
                  do {
                    sVar32 = *psVar2;
                    cVar10 = '\x01';
                    bVar31 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                    if (bVar31) {
                      *psVar2 = sVar32 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (sVar32 == 1) {
                    *(undefined8 *)(lVar23 + 0x10) = 0;
                    (**(code **)(*plVar33 + 0x50))(plVar33);
                  }
                  else if (sVar32 == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                               ,0x60,"Reference counter underflows.");
                  }
                  goto LAB_00f60860;
                }
              }
            }
LAB_00f60858:
            local_f8 = 0;
            local_f0 = 0;
            local_108 = 0;
            local_100 = 0;
LAB_00f60860:
            lVar23 = local_108;
            if (local_108 != 0) {
              memset(&local_510,0,0x400);
              FUN_00f617cc(&local_88,lVar23);
              __src = local_80;
              local_510 = (undefined1 *)((ulong)local_510 & 0xffffffffffffff00);
              strcat((char *)&local_510,*(char **)(param_3 + 8));
              sVar16 = strlen((char *)&local_510);
              *(undefined2 *)((long)&local_510 + sVar16) = 0x2f;
              strcat((char *)&local_510,(char *)__src);
              if (local_70 != (long *)0x0) {
                (**(code **)(*local_70 + 0x20))();
              }
              pbVar39 = local_e8;
              pbVar38 = *(byte **)(param_1 + 0xb8);
              if (pbVar38 == (byte *)0x0) {
LAB_00f60f8c:
                plVar33 = (long *)(**(code **)(**(long **)(param_1 + 0xe8) + 0x10))
                                            (*(long **)(param_1 + 0xe8),0x80,8);
                if (plVar33 == (long *)0x0) {
                  (**(code **)(**(long **)(param_1 + 0xe8) + 0xe8))();
                }
                pbVar35 = *(byte **)(param_1 + 0xe8);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar23 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar23 == 0) {
                  plVar33[2] = (long)local_e8;
                  memset(plVar33 + 3,0,0x68);
                  FUN_00f62eec(plVar33 + 3);
                }
                else {
                  if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_00f61758;
                  *(byte **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = pbVar35;
                  *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
                  pbVar35 = (byte *)(plVar33 + 3);
                  plVar33[2] = (long)local_e8;
                  memset(pbVar35,0,0x68);
                  FUN_00f62eec(pbVar35);
                  *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
                }
                *plVar33 = 0;
                plVar33[1] = (long)pbVar39;
                fVar40 = (float)(*(long *)(param_1 + 0x108) + 1);
                if ((pbVar38 == (byte *)0x0) ||
                   (*(float *)(param_1 + 0x110) * (float)pbVar38 < fVar40)) {
                  uVar20 = (ulong)(pbVar38 < (byte *)0x3 ||
                                  ((ulong)pbVar38 & (ulong)(pbVar38 + -1)) != 0) |
                           (long)pbVar38 << 1;
                  uVar28 = (ulong)(fVar40 / *(float *)(param_1 + 0x110));
                  if (uVar28 <= uVar20) {
                    uVar28 = uVar20;
                  }
                  FUN_014b6650(plVar14,uVar28);
                  pbVar38 = *(byte **)(param_1 + 0xb8);
                  if (((ulong)pbVar38 & (ulong)(pbVar38 + -1)) == 0) {
                    pbVar37 = (byte *)((ulong)(pbVar38 + -1) & (ulong)pbVar39);
                  }
                  else if (pbVar39 < pbVar38) {
                    pbVar37 = pbVar39;
                  }
                  else {
                    uVar20 = 0;
                    if (pbVar38 != (byte *)0x0) {
                      uVar20 = (ulong)pbVar39 / (ulong)pbVar38;
                    }
                    pbVar37 = pbVar39 + -(uVar20 * (long)pbVar38);
                  }
                }
                plVar27 = *(long **)(*plVar14 + (long)pbVar37 * 8);
                if (plVar27 == (long *)0x0) {
                  plVar27 = (long *)(param_1 + 0xe0);
                  *plVar33 = *plVar27;
                  *plVar27 = (long)plVar33;
                  *(long **)(*(long *)(param_1 + 0xb0) + (long)pbVar37 * 8) = plVar27;
                  if (*plVar33 != 0) {
                    pbVar37 = *(byte **)(*plVar33 + 8);
                    if (((ulong)pbVar38 & (ulong)(pbVar38 + -1)) == 0) {
                      pbVar37 = (byte *)((ulong)pbVar37 & (ulong)(pbVar38 + -1));
                    }
                    else if (pbVar38 <= pbVar37) {
                      uVar20 = 0;
                      if (pbVar38 != (byte *)0x0) {
                        uVar20 = (ulong)pbVar37 / (ulong)pbVar38;
                      }
                      pbVar37 = pbVar37 + -(uVar20 * (long)pbVar38);
                    }
                    plVar27 = (long *)(*plVar14 + (long)pbVar37 * 8);
                    goto LAB_00f610a4;
                  }
                }
                else {
                  *plVar33 = *plVar27;
LAB_00f610a4:
                  *plVar27 = (long)plVar33;
                }
                *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 1;
              }
              else {
                pbVar24 = pbVar38 + -1;
                if (((ulong)pbVar38 & (ulong)pbVar24) == 0) {
                  pbVar37 = (byte *)((ulong)pbVar24 & (ulong)local_e8);
                  plVar33 = *(long **)(*plVar14 + (long)pbVar37 * 8);
                  if (plVar33 == (long *)0x0) goto LAB_00f60f8c;
                  do {
                    plVar33 = (long *)*plVar33;
                    if ((plVar33 == (long *)0x0) ||
                       ((byte *)plVar33[1] != local_e8 &&
                        (byte *)((ulong)plVar33[1] & (ulong)pbVar24) != pbVar37)) goto LAB_00f60f8c;
                  } while ((byte *)plVar33[2] != local_e8);
                }
                else {
                  pbVar37 = local_e8;
                  if (pbVar38 <= local_e8) {
                    uVar20 = 0;
                    if (pbVar38 != (byte *)0x0) {
                      uVar20 = (ulong)local_e8 / (ulong)pbVar38;
                    }
                    pbVar37 = local_e8 + -(uVar20 * (long)pbVar38);
                  }
                  plVar33 = *(long **)(*plVar14 + (long)pbVar37 * 8);
                  if (plVar33 == (long *)0x0) goto LAB_00f60f8c;
                  do {
                    plVar33 = (long *)*plVar33;
                    if (plVar33 == (long *)0x0) goto LAB_00f60f8c;
                    pbVar24 = (byte *)plVar33[1];
                    if (pbVar24 != local_e8) {
                      if (pbVar38 <= pbVar24) {
                        uVar20 = 0;
                        if (pbVar38 != (byte *)0x0) {
                          uVar20 = (ulong)pbVar24 / (ulong)pbVar38;
                        }
                        pbVar24 = pbVar24 + -(uVar20 * (long)pbVar38);
                      }
                      if (pbVar24 != pbVar37) goto LAB_00f60f8c;
                    }
                  } while ((byte *)plVar33[2] != local_e8);
                }
              }
              pbVar39 = &DAT_cbf29ce484222645;
              if ((byte)local_510 != 0) {
                pbVar39 = &DAT_cbf29ce484222645;
                pbVar37 = pbVar21;
                bVar7 = (byte)local_510;
                do {
                  pbVar39 = (byte *)(((ulong)pbVar39 ^ (ulong)bVar7) * 0x100000001b3);
                  bVar7 = *pbVar37;
                  pbVar37 = pbVar37 + 1;
                } while (bVar7 != 0);
              }
              pbVar37 = (byte *)plVar33[4];
              plVar27 = plVar33 + 3;
              if (pbVar37 == (byte *)0x0) {
LAB_00f60a6c:
                plVar25 = (long *)(**(code **)(*(long *)plVar33[10] + 0x10))
                                            ((long *)plVar33[10],0x38,8);
                if (plVar25 == (long *)0x0) {
                  (**(code **)(*(long *)plVar33[10] + 0xe8))();
                }
                lVar23 = plVar33[10];
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar17 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar17 == 0) {
                  plVar25[2] = (long)pbVar39;
                  plVar25[3] = local_108;
                  plVar25[5] = local_f8;
                  plVar25[6] = local_f0;
                  plVar25[4] = local_100;
                }
                else {
                  if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_00f61758:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar23;
                  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
                  plVar25[2] = (long)pbVar39;
                  plVar25[3] = local_108;
                  plVar25[5] = local_f8;
                  plVar25[6] = local_f0;
                  plVar25[4] = local_100;
                  *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
                }
                local_108 = 0;
                *plVar25 = 0;
                plVar25[1] = (long)pbVar39;
                if ((pbVar37 == (byte *)0x0) ||
                   (*(float *)(plVar33 + 0xf) * (float)pbVar37 < (float)(plVar33[0xe] + 1))) {
                  uVar20 = (ulong)(pbVar37 < (byte *)0x3 ||
                                  ((ulong)pbVar37 & (ulong)(pbVar37 + -1)) != 0) |
                           (long)pbVar37 << 1;
                  uVar28 = (ulong)((float)(plVar33[0xe] + 1) / *(float *)(plVar33 + 0xf));
                  if (uVar28 <= uVar20) {
                    uVar28 = uVar20;
                  }
                  FUN_00f619d4(plVar27,uVar28);
                  pbVar37 = (byte *)plVar33[4];
                  if (((ulong)pbVar37 & (ulong)(pbVar37 + -1)) == 0) {
                    pbVar35 = (byte *)((ulong)(pbVar37 + -1) & (ulong)pbVar39);
                  }
                  else if (pbVar39 < pbVar37) {
                    pbVar35 = pbVar39;
                  }
                  else {
                    uVar20 = 0;
                    if (pbVar37 != (byte *)0x0) {
                      uVar20 = (ulong)pbVar39 / (ulong)pbVar37;
                    }
                    pbVar35 = pbVar39 + -(uVar20 * (long)pbVar37);
                  }
                }
                plVar26 = *(long **)(*plVar27 + (long)pbVar35 * 8);
                if (plVar26 == (long *)0x0) {
                  plVar26 = plVar33 + 9;
                  *plVar25 = *plVar26;
                  *plVar26 = (long)plVar25;
                  *(long **)(plVar33[3] + (long)pbVar35 * 8) = plVar26;
                  if (*plVar25 != 0) {
                    pbVar35 = *(byte **)(*plVar25 + 8);
                    if (((ulong)pbVar37 & (ulong)(pbVar37 + -1)) == 0) {
                      pbVar35 = (byte *)((ulong)pbVar35 & (ulong)(pbVar37 + -1));
                    }
                    else if (pbVar37 <= pbVar35) {
                      uVar20 = 0;
                      if (pbVar37 != (byte *)0x0) {
                        uVar20 = (ulong)pbVar35 / (ulong)pbVar37;
                      }
                      pbVar35 = pbVar35 + -(uVar20 * (long)pbVar37);
                    }
                    plVar26 = (long *)(*plVar27 + (long)pbVar35 * 8);
                    goto LAB_00f60b84;
                  }
                }
                else {
                  *plVar25 = *plVar26;
LAB_00f60b84:
                  *plVar26 = (long)plVar25;
                }
                plVar33[0xe] = plVar33[0xe] + 1;
              }
              else {
                pbVar38 = pbVar37 + -1;
                if (((ulong)pbVar37 & (ulong)pbVar38) == 0) {
                  pbVar35 = (byte *)((ulong)pbVar38 & (ulong)pbVar39);
                  plVar25 = *(long **)(*plVar27 + (long)pbVar35 * 8);
                  if (plVar25 == (long *)0x0) goto LAB_00f60a6c;
                  do {
                    plVar25 = (long *)*plVar25;
                    if ((plVar25 == (long *)0x0) ||
                       ((byte *)plVar25[1] != pbVar39 &&
                        (byte *)((ulong)plVar25[1] & (ulong)pbVar38) != pbVar35)) goto LAB_00f60a6c;
                  } while ((byte *)plVar25[2] != pbVar39);
                }
                else {
                  pbVar35 = pbVar39;
                  if (pbVar37 <= pbVar39) {
                    uVar20 = 0;
                    if (pbVar37 != (byte *)0x0) {
                      uVar20 = (ulong)pbVar39 / (ulong)pbVar37;
                    }
                    pbVar35 = pbVar39 + -(uVar20 * (long)pbVar37);
                  }
                  plVar25 = *(long **)(*plVar27 + (long)pbVar35 * 8);
                  if (plVar25 == (long *)0x0) goto LAB_00f60a6c;
                  do {
                    plVar25 = (long *)*plVar25;
                    if (plVar25 == (long *)0x0) goto LAB_00f60a6c;
                    pbVar38 = (byte *)plVar25[1];
                    if (pbVar38 != pbVar39) {
                      if (pbVar37 <= pbVar38) {
                        uVar20 = 0;
                        if (pbVar37 != (byte *)0x0) {
                          uVar20 = (ulong)pbVar38 / (ulong)pbVar37;
                        }
                        pbVar38 = pbVar38 + -(uVar20 * (long)pbVar37);
                      }
                      if (pbVar38 != pbVar35) goto LAB_00f60a6c;
                    }
                  } while ((byte *)plVar25[2] != pbVar39);
                }
              }
              lVar23 = local_108;
              local_108 = 0;
              if (lVar23 != 0) {
                FUN_029f0438(&local_100);
              }
            }
          }
LAB_00f60ba0:
          puVar36 = puVar36 + 1;
          lVar34 = lVar34 + 4;
        } while (puVar36 != puVar4);
        plVar14 = local_d0;
      }
    }
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return;
code_r0x00f6120c:
  sVar32 = sVar9;
  if (sVar9 == 0) goto LAB_00f60858;
  goto LAB_00f611e0;
}


