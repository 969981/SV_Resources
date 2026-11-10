/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ebf090; name: FUN_00ebf090
 */


/* WARNING: Removing unreachable block (ram,0x00ebff8c) */
/* WARNING: Removing unreachable block (ram,0x00ebff90) */
/* WARNING: Removing unreachable block (ram,0x00ebff98) */
/* WARNING: Removing unreachable block (ram,0x00ebffa0) */
/* WARNING: Removing unreachable block (ram,0x00ec0264) */
/* WARNING: Removing unreachable block (ram,0x00ebffa4) */
/* WARNING: Removing unreachable block (ram,0x00ebffa8) */

void FUN_00ebf090(char *param_1,long *param_2,long param_3,ulong *param_4,long *param_5,
                 long *param_6,uint param_7,long *param_8)

{
  ulong *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  byte bVar6;
  ushort uVar7;
  char cVar8;
  ulong uVar9;
  undefined *puVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  size_t sVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  uint *puVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  long *plVar28;
  ulong uVar29;
  long *plVar30;
  long *plVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  uint *puVar36;
  ushort *puVar37;
  byte *pbVar38;
  uint uVar39;
  float fVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  long *local_120;
  long *local_118;
  byte *local_110;
  size_t local_108;
  long *local_100;
  undefined1 *local_f8;
  char *pcStack_f0;
  size_t local_e8;
  long *local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  size_t local_c0;
  long *local_b8;
  undefined1 local_b0 [16];
  size_t local_a0;
  long *local_98;
  undefined1 *local_90;
  byte *pbStack_88;
  size_t local_80;
  long *local_78;
  long *local_70 [2];
  
  uVar33 = *param_4;
  uVar22 = param_4[1];
  uVar19 = param_4[2];
  plVar14 = (long *)param_4[3];
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  *(ulong *)(param_1 + 8) = uVar33;
  *(ulong *)(param_1 + 0x10) = uVar22;
  *param_1 = '\x01';
  *(ulong *)(param_1 + 0x18) = uVar19;
  *(long **)(param_1 + 0x20) = plVar14;
  if (**(char **)(param_3 + 8) != '\0') {
    FUN_00d1e980(&local_118,param_3,&DAT_03c9c9c5,param_4);
    plVar30 = local_118;
    plVar14 = (long *)PTR_DAT_047d8b70;
    if (local_118 != (long *)0x0) {
      plVar14 = local_118 + 6;
    }
    lVar32 = *plVar14;
    plVar14 = (long *)PTR_PTR_047d4508;
    if (local_118 != (long *)0x0) {
      plVar14 = local_118 + 7;
    }
    lVar34 = *plVar14;
    if (local_118 == (long *)0x0) {
      lVar35 = 0;
    }
    else {
      lVar35 = local_118[8];
      (**(code **)(*local_118 + 0x18))(local_118);
    }
    if (*param_1 == '\0') {
      *(long *)(param_1 + 8) = lVar32;
      *(long *)(param_1 + 0x10) = lVar34;
      *param_1 = '\x01';
      *(long *)(param_1 + 0x18) = lVar35;
      *(long **)(param_1 + 0x20) = plVar30;
    }
    else {
      plVar14 = *(long **)(param_1 + 0x20);
      *(long *)(param_1 + 8) = lVar32;
      *(long *)(param_1 + 0x10) = lVar34;
      *(long *)(param_1 + 0x18) = lVar35;
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))();
      }
      *(long **)(param_1 + 0x20) = plVar30;
    }
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 0x20))();
    }
    uVar33 = *(ulong *)(param_1 + 8);
  }
  uVar33 = uVar33 >> 0x37;
  puVar1 = (ulong *)(param_1 + 8);
  plVar14 = param_2 + uVar33 * 4 + 0x1a0a;
  lVar32 = nn::os::GetCurrentThread();
  while (*plVar14 == 0 && param_2[uVar33 * 4 + 0x1a0b] == 0) {
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar11) {
      *plVar14 = lVar32;
      param_2[uVar33 * 4 + 0x1a0b] = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_00ebf1bc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + uVar33 * 4 + 0x1a0c));
  do {
    if (*plVar14 != 0 || param_2[uVar33 * 4 + 0x1a0b] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + uVar33 * 4 + 0x1a0c));
        while (*plVar14 == 0 && param_2[uVar33 * 4 + 0x1a0b] == 0) {
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar11) {
            *plVar14 = lVar32;
            param_2[uVar33 * 4 + 0x1a0b] = 0;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00ebf1bc;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar11) {
      *plVar14 = lVar32;
      param_2[uVar33 * 4 + 0x1a0b] = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00ebf1bc:
  uVar19 = *puVar1;
  uVar22 = param_2[(uVar19 >> 0x37) * 0xd + 10];
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar29 = uVar22 - 1 & uVar19;
    }
    else if (uVar19 < uVar22) {
      uVar29 = uVar19;
    }
    else {
      uVar29 = 0;
      if (uVar22 != 0) {
        uVar29 = uVar19 / uVar22;
      }
      uVar29 = uVar19 - uVar29 * uVar22;
    }
    plVar30 = *(long **)(param_2[(uVar19 >> 0x37) * 0xd + 9] + uVar29 * 8);
    if ((plVar30 == (long *)0x0) || (plVar30 = (long *)*plVar30, plVar30 == (long *)0x0))
    goto LAB_00ebf27c;
    if (uVar24 < 2) {
      do {
        if (plVar30[1] == uVar19) {
          if (plVar30[2] == uVar19) goto LAB_00ebfff0;
        }
        else if ((plVar30[1] & uVar22 - 1) != uVar29) break;
        plVar30 = (long *)*plVar30;
      } while (plVar30 != (long *)0x0);
      goto LAB_00ebf27c;
    }
    while( true ) {
      uVar24 = plVar30[1];
      if (uVar24 != uVar19) {
        if (uVar22 <= uVar24) {
          uVar9 = 0;
          if (uVar22 != 0) {
            uVar9 = uVar24 / uVar22;
          }
          uVar24 = uVar24 - uVar9 * uVar22;
        }
        if (uVar24 == uVar29) goto LAB_00ebf274;
        goto LAB_00ebf27c;
      }
      if (plVar30[2] == uVar19) break;
LAB_00ebf274:
      plVar30 = (long *)*plVar30;
      if (plVar30 == (long *)0x0) goto LAB_00ebf27c;
    }
LAB_00ebfff0:
    plVar21 = (long *)plVar30[4];
    *(int *)(plVar30 + 5) = (int)plVar30[5] + 1;
    if (plVar21 == (long *)0x0) goto LAB_00ebf27c;
    plVar30 = plVar21 + 5;
    do {
      lVar32 = *plVar30;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar11) {
        *(int *)plVar30 = (int)lVar32 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((int)lVar32 == -1) goto LAB_00ec07bc;
    do {
      iVar13 = (int)*plVar30;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar11) {
        *(int *)plVar30 = iVar13 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar13 + -1 == 0) goto LAB_00ec01ec;
joined_r0x00ec0034:
    if (iVar13 == 0) {
LAB_00ec08f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    goto LAB_00ec0038;
  }
LAB_00ebf27c:
  if (param_8 == (long *)0x0) {
    param_8 = (long *)param_2[1];
  }
  FUN_00ec3aac(&local_118,param_2,puVar1,param_7 & 1,param_8);
  if (*param_1 == '\0') {
    if ((char)local_118 != '\0') {
      *(long **)(param_1 + 0x18) = local_100;
      *(undefined1 **)(param_1 + 0x20) = local_f8;
      *(byte **)(param_1 + 8) = local_110;
      *(size_t *)(param_1 + 0x10) = local_108;
      *param_1 = '\x01';
      goto LAB_00ebf2d4;
    }
  }
  else if ((char)local_118 == '\0') {
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
    }
    *param_1 = '\0';
  }
  else {
    *(byte **)(param_1 + 8) = local_110;
    *(size_t *)(param_1 + 0x10) = local_108;
    plVar30 = *(long **)(param_1 + 0x20);
    *(long **)(param_1 + 0x18) = local_100;
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x20))();
    }
    *(undefined1 **)(param_1 + 0x20) = local_f8;
LAB_00ebf2d4:
    local_f8 = (undefined1 *)0x0;
    local_118 = (long *)((ulong)local_118 & 0xffffffffffffff00);
  }
  uVar19 = *puVar1;
  local_70[0] = (long *)0x0;
  uVar22 = param_2[(uVar19 >> 0x37) * 0xd + 10];
  if (uVar22 != 0) {
    uVar24 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
    uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
    uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar24 < 2) {
      uVar29 = uVar22 - 1 & uVar19;
    }
    else if (uVar19 < uVar22) {
      uVar29 = uVar19;
    }
    else {
      uVar29 = 0;
      if (uVar22 != 0) {
        uVar29 = uVar19 / uVar22;
      }
      uVar29 = uVar19 - uVar29 * uVar22;
    }
    plVar30 = *(long **)(param_2[(uVar19 >> 0x37) * 0xd + 9] + uVar29 * 8);
    if (plVar30 != (long *)0x0) {
      plVar30 = (long *)*plVar30;
      if (plVar30 != (long *)0x0) {
        if (uVar24 < 2) {
          do {
            if (plVar30[1] == uVar19) {
              if (plVar30[2] == uVar19) goto LAB_00ebf378;
            }
            else if ((plVar30[1] & uVar22 - 1) != uVar29) break;
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
        else {
          do {
            uVar24 = plVar30[1];
            if (uVar24 != uVar19) {
              if (uVar22 <= uVar24) {
                uVar9 = 0;
                if (uVar22 != 0) {
                  uVar9 = uVar24 / uVar22;
                }
                uVar24 = uVar24 - uVar9 * uVar22;
              }
              if (uVar24 == uVar29) goto LAB_00ec0110;
              break;
            }
            if (plVar30[2] == uVar19) goto LAB_00ebf378;
LAB_00ec0110:
            plVar30 = (long *)*plVar30;
          } while (plVar30 != (long *)0x0);
        }
      }
    }
  }
LAB_00ebf3a8:
  piVar20 = (int *)param_4[0x12];
  puVar2 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (6 - (long)*piVar20)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar25 = puVar2 + 1;
  uVar19 = (ulong)*puVar2;
  if (uVar19 != 0) {
    puVar2 = puVar25 + uVar19;
    do {
      puVar26 = &DAT_cbf29ce484222645;
      piVar20 = (int *)((long)puVar25 + (ulong)*puVar25);
      if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
         (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar19 == 0)) {
        lVar32 = 0;
      }
      else {
        puVar36 = (uint *)((long)piVar20 + uVar19);
        lVar32 = (long)puVar36 + (ulong)*puVar36;
      }
      pbVar38 = (byte *)(lVar32 + 4);
      local_80 = strlen((char *)pbVar38);
      bVar6 = *(byte *)(lVar32 + 4);
      if (bVar6 != 0) {
        pbVar27 = (byte *)(lVar32 + 5);
        do {
          puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (bVar6 != 0);
      }
      local_78 = (long *)0x0;
      lVar32 = param_2[0x1a09];
      local_90 = puVar26;
      pbStack_88 = pbVar38;
      if (lVar32 == 0) {
        puVar15 = (undefined8 *)PTR_DAT_047d3e30;
        if ((*PTR_DAT_047d3e28 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28);
          puVar15 = (undefined8 *)PTR_DAT_047d3e30;
          if (iVar13 != 0) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
        }
      }
      else {
        puVar15 = (undefined8 *)FUN_00ddd400(lVar32,&local_90);
      }
      local_b0._0_8_ = *puVar15;
      local_b0._8_8_ = puVar15[1];
      local_a0 = puVar15[2];
      local_98 = (long *)puVar15[3];
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x18))();
      }
      if (*(byte *)local_b0._8_8_ == 0) {
        pbVar38 = (byte *)(**(code **)(*DAT_0485a020 + 0x28))(DAT_0485a020,0);
        if (pbVar38 == (byte *)0x0) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          puVar26 = *(undefined1 **)PTR_DAT_047d3e30;
          pbVar38 = *(byte **)(PTR_DAT_047d3e30 + 8);
          sVar16 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          plVar30 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (plVar30 != (long *)0x0) {
            (**(code **)(*plVar30 + 0x18))(plVar30);
          }
        }
        else {
          sVar16 = strlen((char *)pbVar38);
          bVar6 = *pbVar38;
          if (bVar6 == 0) {
            plVar30 = (long *)0x0;
            puVar26 = &DAT_cbf29ce484222645;
          }
          else {
            puVar26 = &DAT_cbf29ce484222645;
            pbVar27 = pbVar38;
            do {
              pbVar27 = pbVar27 + 1;
              puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar27;
            } while (bVar6 != 0);
            plVar30 = (long *)0x0;
          }
        }
        plVar21 = local_98;
        local_98 = (long *)0x0;
        local_b0._0_8_ = puVar26;
        local_b0._8_8_ = pbVar38;
        local_a0 = sVar16;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x20))();
        }
        local_98 = plVar30;
      }
      lVar32 = param_2[0x1a09];
      if (lVar32 == 0) {
        puVar15 = (undefined8 *)PTR_DAT_047d3e30;
        if ((*PTR_DAT_047d3e28 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28);
          puVar15 = (undefined8 *)PTR_DAT_047d3e30;
          if (iVar13 != 0) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
        }
      }
      else {
        puVar15 = (undefined8 *)FUN_00ddd214(lVar32,&local_90);
      }
      local_d0._0_8_ = *puVar15;
      local_d0._8_8_ = puVar15[1];
      local_c0 = puVar15[2];
      local_b8 = (long *)puVar15[3];
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x18))();
      }
      if (*(byte *)local_d0._8_8_ == 0) {
        pbVar38 = (byte *)(**(code **)(*DAT_0485a020 + 0x20))(DAT_0485a020,0);
        if (pbVar38 == (byte *)0x0) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          puVar26 = *(undefined1 **)PTR_DAT_047d3e30;
          pbVar38 = *(byte **)(PTR_DAT_047d3e30 + 8);
          sVar16 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          plVar30 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (plVar30 != (long *)0x0) {
            (**(code **)(*plVar30 + 0x18))(plVar30);
          }
        }
        else {
          sVar16 = strlen((char *)pbVar38);
          bVar6 = *pbVar38;
          if (bVar6 == 0) {
            plVar30 = (long *)0x0;
            puVar26 = &DAT_cbf29ce484222645;
          }
          else {
            puVar26 = &DAT_cbf29ce484222645;
            pbVar27 = pbVar38;
            do {
              pbVar27 = pbVar27 + 1;
              puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar27;
            } while (bVar6 != 0);
            plVar30 = (long *)0x0;
          }
        }
        plVar21 = local_b8;
        local_b8 = (long *)0x0;
        local_d0._0_8_ = puVar26;
        local_d0._8_8_ = pbVar38;
        local_c0 = sVar16;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x20))();
        }
        local_b8 = plVar30;
      }
      uVar12 = FUN_00ec32b4(local_70[0],&local_90,local_b0);
      FUN_00ec2b10(local_70[0],uVar12,0x1f,local_d0);
      puVar3 = (uint *)((long)piVar20 + (ulong)*(ushort *)((long)piVar20 + (6 - (long)*piVar20)));
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      puVar36 = puVar3 + 1;
      uVar19 = (ulong)*puVar3;
      if (uVar19 != 0) {
        puVar3 = puVar36 + uVar19;
        do {
          piVar20 = (int *)((long)puVar36 + (ulong)*puVar36);
          puVar37 = (ushort *)((long)piVar20 - (long)*piVar20);
          uVar7 = *puVar37;
          if ((uVar7 < 5) || ((ulong)puVar37[2] == 0)) {
            lVar32 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar20 + (ulong)puVar37[2]);
            lVar32 = (long)puVar4 + (ulong)*puVar4;
          }
          sVar16 = strlen((char *)(lVar32 + 4));
          bVar6 = *(byte *)(lVar32 + 4);
          plVar30 = (long *)&DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            plVar30 = (long *)&DAT_cbf29ce484222645;
            pbVar38 = (byte *)(lVar32 + 5);
            do {
              plVar30 = (long *)(((ulong)plVar30 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar38;
              pbVar38 = pbVar38 + 1;
            } while (bVar6 != 0);
          }
          if ((uVar7 < 7) || ((ulong)puVar37[3] == 0)) {
            lVar34 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar20 + (ulong)puVar37[3]);
            lVar34 = (long)puVar4 + (ulong)*puVar4;
          }
          local_e8 = strlen((char *)(lVar34 + 4));
          bVar6 = *(byte *)(lVar34 + 4);
          local_f8 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            local_f8 = &DAT_cbf29ce484222645;
            pbVar38 = (byte *)(lVar34 + 5);
            do {
              local_f8 = (undefined1 *)(((ulong)local_f8 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar38;
              pbVar38 = pbVar38 + 1;
            } while (bVar6 != 0);
          }
          local_e0 = (long *)0x0;
          local_d8 = 0;
          local_100 = (long *)0x0;
          local_118 = plVar30;
          local_110 = (byte *)(lVar32 + 4);
          local_108 = sVar16;
          pcStack_f0 = (char *)(lVar34 + 4);
          FUN_00ec0dec(local_70[0],uVar12,&local_118);
          if (local_e0 != (long *)0x0) {
            (**(code **)(*local_e0 + 0x20))();
          }
          if (local_100 != (long *)0x0) {
            (**(code **)(*local_100 + 0x20))();
          }
          puVar36 = puVar36 + 1;
        } while (puVar36 != puVar3);
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      puVar25 = puVar25 + 1;
    } while (puVar25 != puVar2);
  }
  if ((int)((ulong)(local_70[0][0x12] - local_70[0][0x11]) >> 3) * 0x3e0f83e1 == 0) {
    pbVar38 = (byte *)(**(code **)(*DAT_0485a020 + 0x20))(DAT_0485a020,0);
    if (pbVar38 == (byte *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_118 = *(long **)PTR_DAT_047d3e30;
      local_110 = *(byte **)(PTR_DAT_047d3e30 + 8);
      local_108 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      local_100 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x18))();
      }
    }
    else {
      local_108 = strlen((char *)pbVar38);
      bVar6 = *pbVar38;
      local_118 = (long *)&DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_118 = (long *)&DAT_cbf29ce484222645;
        pbVar27 = pbVar38;
        do {
          pbVar27 = pbVar27 + 1;
          local_118 = (long *)(((ulong)local_118 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar27;
        } while (bVar6 != 0);
      }
      local_100 = (long *)0x0;
      local_110 = pbVar38;
    }
    pbVar38 = (byte *)(**(code **)(*DAT_0485a020 + 0x28))(DAT_0485a020,0);
    if (pbVar38 == (byte *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_90 = *(undefined1 **)PTR_DAT_047d3e30;
      pbStack_88 = *(byte **)(PTR_DAT_047d3e30 + 8);
      local_80 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      local_78 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))();
      }
    }
    else {
      local_80 = strlen((char *)pbVar38);
      bVar6 = *pbVar38;
      local_90 = &DAT_cbf29ce484222645;
      if (bVar6 != 0) {
        local_90 = &DAT_cbf29ce484222645;
        pbVar27 = pbVar38;
        do {
          pbVar27 = pbVar27 + 1;
          local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar27;
        } while (bVar6 != 0);
      }
      local_78 = (long *)0x0;
      pbStack_88 = pbVar38;
    }
    local_b0._0_8_ = (undefined1 *)0x5272eeea2c32d946;
    local_b0._8_8_ = "NotFound";
    local_a0 = 8;
    local_98 = (long *)0x0;
    uVar12 = FUN_00ec32b4(local_70[0],local_b0,&local_90);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    FUN_00ec2b10(local_70[0],uVar12,0x1f,&local_118);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
  }
  puVar26 = &DAT_cbf29ce484222645;
  piVar20 = (int *)param_4[0x12];
  if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 0x23) ||
     (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0x11], uVar19 == 0)) {
    lVar32 = 0;
  }
  else {
    puVar25 = (uint *)((long)piVar20 + uVar19);
    lVar32 = (long)puVar25 + (ulong)*puVar25;
  }
  bVar6 = *(byte *)(lVar32 + 4);
  if (bVar6 == 0) {
LAB_00ec05e0:
    iVar13 = (uint)(puVar26 == (undefined1 *)0xaee74fd70d5cfe1e) << 2;
    iVar23 = (uint)(puVar26 == (undefined1 *)0xaee74fd70d5cfe1e) << 1;
  }
  else {
    pbVar38 = (byte *)(lVar32 + 5);
    do {
      puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar38;
      pbVar38 = pbVar38 + 1;
    } while (bVar6 != 0);
    if (puVar26 == (undefined1 *)0x18577acd275fc5fe) {
      iVar13 = 0;
      iVar23 = 0;
    }
    else {
      if ((long)puVar26 < -0x408d9a9252f5448) {
        if (puVar26 != (undefined1 *)0xdbac252696b90121) {
          if (puVar26 != (undefined1 *)0xb76a832681bace94) goto LAB_00ec05e0;
          iVar13 = 4;
          iVar23 = 4;
          goto LAB_00ebf7f4;
        }
        iVar23 = 6;
      }
      else if (puVar26 == (undefined1 *)0xfbf72656dad0abb8) {
        iVar23 = 1;
      }
      else {
        if (puVar26 != (undefined1 *)0x52d15d26d99b5e35) goto LAB_00ec05e0;
        iVar23 = 8;
      }
      iVar13 = 4;
    }
  }
LAB_00ebf7f4:
  *(int *)(local_70[0][0x11] + 0xb8) = iVar23;
  *(int *)(local_70[0][0x11] + 0xbc) = iVar13;
  piVar20 = (int *)param_4[0x12];
  if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 0x21) ||
     (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0x10], uVar19 == 0)) {
    piVar20 = (int *)0x0;
  }
  else {
    puVar25 = (uint *)((long)piVar20 + uVar19);
    piVar20 = (int *)((long)puVar25 + (ulong)*puVar25);
  }
  if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 7) ||
     (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[3], uVar19 == 0)) {
    iVar13 = 2;
  }
  else {
    iVar13 = *(int *)((long)piVar20 + uVar19);
    if (2 < iVar13 - 1U) {
      iVar13 = 0;
    }
  }
  *(int *)(local_70[0][0x11] + 0xe8) = iVar13;
  puVar37 = (ushort *)((long)piVar20 - (long)*piVar20);
  uVar7 = *puVar37;
  uVar12 = 0;
  if (uVar7 < 9) {
    fVar40 = 0.0;
LAB_00ec0150:
    uVar41 = 0;
  }
  else {
    iVar13 = 0;
    if ((ulong)puVar37[4] != 0) {
      iVar13 = *(int *)((long)piVar20 + (ulong)puVar37[4]);
    }
    fVar40 = (float)iVar13;
    if (uVar7 < 0xb) goto LAB_00ec0150;
    uVar41 = 0;
    uVar12 = 0;
    if ((ulong)puVar37[5] != 0) {
      uVar12 = *(undefined4 *)((long)piVar20 + (ulong)puVar37[5]);
    }
    if ((0xc < uVar7) && ((ulong)puVar37[6] != 0)) {
      uVar41 = *(undefined4 *)((long)piVar20 + (ulong)puVar37[6]);
    }
  }
  *(float *)(local_70[0][0x11] + 0xf4) = fVar40;
  *(undefined4 *)(local_70[0][0x11] + 0xf8) = uVar12;
  *(undefined4 *)(local_70[0][0x11] + 0xfc) = uVar41;
  piVar20 = (int *)param_4[0x12];
  if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 0x1f) ||
     (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0xf], uVar19 == 0)) {
    piVar20 = (int *)0x0;
  }
  else {
    puVar25 = (uint *)((long)piVar20 + uVar19);
    piVar20 = (int *)((long)puVar25 + (ulong)*puVar25);
  }
  if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
     (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar19 == 0)) {
    bVar11 = true;
  }
  else {
    bVar11 = *(char *)((long)piVar20 + uVar19) != '\0';
  }
  *(bool *)(local_70[0][0x11] + 0xc1) = bVar11;
  if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 7) ||
     (uVar19 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[3], uVar19 == 0)) {
    bVar11 = true;
  }
  else {
    bVar11 = *(char *)((long)piVar20 + uVar19) != '\0';
  }
  *(bool *)(local_70[0][0x11] + 0xc0) = bVar11;
  uVar19 = param_4[4];
  if ((int)(param_4[5] - uVar19 >> 3) * -0x33333333 != 0) {
    uVar22 = 0;
    do {
      uVar19 = (**(code **)(*DAT_0485a020 + 0x18))(DAT_0485a020,uVar19 + uVar22 * 0x28);
      if ((uVar19 & 0xff) != 0) {
        memcpy(&local_118,
               (void *)(param_4[0xb] + (long)*(int *)(param_4[4] + uVar22 * 0x28 + 0x20) * 0x48),
               0x48);
        lVar32 = *(long *)(*(long *)(*(long *)(*param_5 + uVar22 * 0x40 + 8) + 0x1f8) + 0x58);
        if (lVar32 == 0) {
          pbVar38 = &DAT_03c886bc;
        }
        else {
          pbVar38 = (byte *)(*(long *)(**(long **)(lVar32 + 0x28) + 0x60) + 2);
        }
        local_80 = strlen((char *)pbVar38);
        plVar30 = DAT_04859fe0;
        bVar6 = *pbVar38;
        local_90 = &DAT_cbf29ce484222645;
        if (bVar6 != 0) {
          local_90 = &DAT_cbf29ce484222645;
          pbVar27 = pbVar38;
          do {
            pbVar27 = pbVar27 + 1;
            local_90 = (undefined1 *)(((ulong)local_90 ^ (ulong)bVar6) * 0x100000001b3);
            bVar6 = *pbVar27;
          } while (bVar6 != 0);
        }
        local_78 = (long *)0x0;
        pbStack_88 = pbVar38;
        if (*pbVar38 == 0) {
          local_120 = DAT_04859fe0;
          if (DAT_04859fe0 != (long *)0x0) {
            plVar21 = DAT_04859fe0 + 5;
            do {
              lVar32 = *plVar21;
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar11) {
                *(int *)plVar21 = (int)lVar32 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if ((int)lVar32 == -1) goto LAB_00ec07bc;
            if (plVar30 != (long *)0x0) {
              local_118 = (long *)((ulong)local_118 & 0xffffffff);
              auVar42 = FUN_00d07744(*(undefined8 *)(param_2[7] + 0x30),&local_118);
              local_b0._0_8_ = 0xc4888aa43b135706;
              local_98 = (long *)0x0;
              local_b0._8_8_ = "_dummy";
              local_a0 = 6;
              local_d0 = auVar42;
              FUN_02712d70(local_70[0],uVar19 >> 0x20,local_b0,local_d0);
              if (local_98 != (long *)0x0) {
                (**(code **)(*local_98 + 0x20))();
              }
              local_b0._0_8_ = 0xc4888aa43b135706;
              local_b0._8_8_ = "_dummy";
              local_a0 = 6;
              local_98 = (long *)0x0;
              FUN_01344120(*param_6,local_b0,&local_120);
              plVar21 = plVar30 + 5;
              do {
                lVar32 = *plVar21;
                iVar13 = (int)lVar32 + -1;
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar11) {
                  *(int *)plVar21 = iVar13;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar13 == 0) {
                (**(code **)(*plVar30 + 0x10))(plVar30);
              }
              else if ((int)lVar32 == 0) goto LAB_00ec08f4;
            }
          }
        }
        else {
          auVar42 = FUN_00d07744(*(undefined8 *)(param_2[7] + 0x30),&local_118);
          local_b0 = auVar42;
          FUN_02712d70(local_70[0],uVar19 >> 0x20,&local_90,local_b0);
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
      }
      uVar22 = uVar22 + 1;
      uVar19 = param_4[4];
    } while (uVar22 < (uint)((int)(param_4[5] - uVar19 >> 3) * -0x33333333));
  }
  lVar34 = param_5[1];
  for (lVar32 = *param_5; lVar32 != lVar34; lVar32 = lVar32 + 0x40) {
    lVar35 = *(long *)(*(long *)(*(long *)(lVar32 + 8) + 0x1f8) + 0x58);
    if ((lVar35 != 0) && (*(int *)(*(long *)(lVar35 + 0x38) + 4) != 0)) {
      uVar39 = 0;
LAB_00ebfb1c:
      lVar35 = *(long *)(*(long *)(*(long *)(lVar35 + 0x28) + (long)(int)uVar39 * 8) + 0x60);
      pbVar38 = (byte *)(lVar35 + 2);
      local_108 = strlen((char *)pbVar38);
      bVar6 = *(byte *)(lVar35 + 2);
      local_110 = pbVar38;
      if (bVar6 != 0) {
        plVar30 = (long *)&DAT_cbf29ce484222645;
        pbVar27 = (byte *)(lVar35 + 3);
        do {
          plVar30 = (long *)(((ulong)plVar30 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (bVar6 != 0);
        local_100 = (long *)0x0;
        lVar35 = *param_6;
        local_118 = plVar30;
        uVar17 = FUN_00ec0c08(*(undefined8 *)(lVar32 + 8),pbVar38);
        plVar21 = *(long **)(lVar35 + 0x110);
        if (plVar21 != (long *)0x0) {
          uVar19 = (long)plVar21 - ((ulong)plVar21 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            plVar18 = (long *)((ulong)((long)plVar21 + -1) & (ulong)plVar30);
          }
          else {
            plVar18 = plVar30;
            if (plVar21 <= plVar30) {
              uVar22 = 0;
              if (plVar21 != (long *)0x0) {
                uVar22 = (ulong)plVar30 / (ulong)plVar21;
              }
              plVar18 = (long *)((long)plVar30 - uVar22 * (long)plVar21);
            }
          }
          plVar28 = *(long **)(*(long *)(lVar35 + 0x108) + (long)plVar18 * 8);
          if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
            if (uVar19 < 2) {
              do {
                if ((long *)plVar28[1] == plVar30) {
                  if ((long *)plVar28[2] == plVar30) goto LAB_00ebfc98;
                }
                else if ((long *)((ulong)plVar28[1] & (ulong)((long)plVar21 + -1)) != plVar18)
                break;
                plVar28 = (long *)*plVar28;
              } while (plVar28 != (long *)0x0);
            }
            else {
              do {
                plVar31 = (long *)plVar28[1];
                if (plVar31 == plVar30) {
                  if ((long *)plVar28[2] == plVar30) goto LAB_00ebfc98;
                }
                else {
                  if (plVar21 <= plVar31) {
                    uVar19 = 0;
                    if (plVar21 != (long *)0x0) {
                      uVar19 = (ulong)plVar31 / (ulong)plVar21;
                    }
                    plVar31 = (long *)((long)plVar31 - uVar19 * (long)plVar21);
                  }
                  if (plVar31 != plVar18) break;
                }
                plVar28 = (long *)*plVar28;
              } while (plVar28 != (long *)0x0);
            }
          }
        }
        goto LAB_00ebfc70;
      }
      local_118 = (long *)&DAT_cbf29ce484222645;
      local_100 = (long *)0x0;
      goto LAB_00ebfce8;
    }
LAB_00ebfb08:
  }
  FUN_00ec2ec4(local_70[0],param_6);
  if ((DAT_04865a38 & 1) == 0) {
    iVar13 = __cxa_guard_acquire(&DAT_04865a38);
    if (iVar13 != 0) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
  }
  lVar32 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar32 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar32 + *(ulong *)(lVar32 + 0x80) * 8) = param_8;
  *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + 1;
  plVar30 = (long *)(**(code **)(*param_8 + 0x10))(param_8,0x40,8);
  puVar10 = PTR_DAT_047d66f8;
  if (plVar30 == (long *)0x0) {
    (**(code **)(*param_8 + 0xe8))();
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  plVar30[2] = 0;
  *(undefined4 *)(plVar30 + 3) = 0;
  *plVar30 = (long)(puVar10 + 0x10);
  if ((DAT_04865a38 & 1) == 0) {
    iVar13 = __cxa_guard_acquire(&DAT_04865a38);
    if (iVar13 != 0) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
  }
  nn::os::GetTlsValue(DAT_04865a30);
  plVar21 = plVar30 + 5;
  *(int *)plVar21 = 0;
  plVar30[4] = (long)&PTR_LAB_045d1418;
  plVar30[2] = (long)plVar30;
  plVar30[6] = (long)&PTR_LAB_045d1448;
  plVar30[7] = (long)param_4;
  *plVar30 = (long)&PTR_LAB_045d1340;
  plVar30[1] = (long)param_8;
  *(undefined4 *)(plVar30 + 3) = 0x80040;
  *(long *)(lVar32 + 0x80) = *(long *)(lVar32 + 0x80) + -1;
  do {
    lVar32 = *plVar21;
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar11) {
      *(int *)plVar21 = (int)lVar32 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((int)lVar32 == -1) {
LAB_00ec07bc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  do {
    lVar32 = *plVar21;
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar11) {
      *(int *)plVar21 = (int)lVar32 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((int)lVar32 == -1) goto LAB_00ec07bc;
  do {
    lVar32 = *plVar21;
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar11) {
      *(int *)plVar21 = (int)lVar32 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((int)lVar32 == -1) goto LAB_00ec07bc;
  plVar18 = (long *)local_70[0][0x1f];
  local_70[0][0x1f] = (long)plVar30;
  if (plVar18 != (long *)0x0) {
    plVar28 = plVar18 + 5;
    do {
      lVar32 = *plVar28;
      iVar13 = (int)lVar32 + -1;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar11) {
        *(int *)plVar28 = iVar13;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
    else if ((int)lVar32 == 0) goto LAB_00ec08f4;
  }
  do {
    lVar32 = *plVar21;
    iVar13 = (int)lVar32 + -1;
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar11) {
      *(int *)plVar21 = iVar13;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar30 + 0x10))(plVar30);
  }
  else if ((int)lVar32 == 0) goto LAB_00ec08f4;
  plVar18 = DAT_0485a020;
  local_118 = param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)(param_2[4] + 0x10))(param_2 + 4);
  }
  (**(code **)(*plVar18 + 0xb8))(plVar18,&local_118,local_70);
  if (local_118 != (long *)0x0) {
    (**(code **)(local_118[4] + 0x18))();
  }
  do {
    lVar32 = *plVar21;
    iVar13 = (int)lVar32 + -1;
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar11) {
      *(int *)plVar21 = iVar13;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar30 + 0x10))(plVar30);
  }
  else if ((int)lVar32 == 0) goto LAB_00ec08f4;
  if (local_70[0] != (long *)0x0) {
    plVar30 = local_70[0] + 5;
    do {
      iVar13 = (int)*plVar30;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar11) {
        *(int *)plVar30 = iVar13 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    plVar21 = local_70[0];
    if (iVar13 + -1 != 0) goto joined_r0x00ec0034;
LAB_00ec01ec:
    (**(code **)(*plVar21 + 0x10))();
  }
LAB_00ec0038:
  do {
    lVar32 = *plVar14;
    lVar34 = param_2[uVar33 * 4 + 0x1a0b];
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar11) {
      *plVar14 = lVar32;
      param_2[uVar33 * 4 + 0x1a0b] = lVar34;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar35 = *plVar14;
    lVar5 = param_2[uVar33 * 4 + 0x1a0b];
    if (lVar35 != lVar32 || lVar5 != lVar34) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00ec0074;
    }
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar11) {
      *plVar14 = 0;
      *(long *)((long)param_2 + uVar33 * 0x20 + 0xd054) = lVar34;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar11 = true;
LAB_00ec0074:
  if (!bVar11) {
    do {
      lVar32 = *plVar14;
      lVar34 = param_2[uVar33 * 4 + 0x1a0b];
      if (lVar32 != lVar35 || lVar34 != lVar5) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00ec0758;
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar11) {
        *plVar14 = 0;
        *(long *)((long)param_2 + uVar33 * 0x20 + 0xd054) = lVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar11 = true;
joined_r0x00ec0758:
    if (!bVar11) {
      do {
        lVar35 = *plVar14;
        lVar5 = param_2[uVar33 * 4 + 0x1a0b];
        if (lVar35 != lVar32 || lVar5 != lVar34) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar32 = lVar35;
          lVar34 = lVar5;
          goto joined_r0x00ec0758;
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar11) {
          *plVar14 = 0;
          *(long *)((long)param_2 + uVar33 * 0x20 + 0xd054) = lVar34;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar11 = true;
      lVar32 = lVar35;
      lVar34 = lVar5;
      goto joined_r0x00ec0758;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + uVar33 * 4 + 0x1a0c));
  return;
LAB_00ebf378:
  plVar30 = (long *)plVar30[3];
  if (plVar30 == (long *)0x0) {
    local_70[0] = plVar30;
  }
  else {
    plVar21 = plVar30 + 5;
    do {
      lVar32 = *plVar21;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(int *)plVar21 = (int)lVar32 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((int)lVar32 == -1) goto LAB_00ec07bc;
    local_70[0] = plVar30;
  }
  goto LAB_00ebf3a8;
LAB_00ebfc98:
  plVar30 = (long *)plVar28[6];
  if (plVar30 == (long *)0x0) {
LAB_00ebfc70:
    local_90 = *(undefined1 **)(lVar35 + 0x30);
    plVar30 = (long *)FUN_00cf3764(local_d0,*(undefined8 *)(local_90 + 8),&local_90);
    local_b0._0_8_ = plVar30;
    if (plVar30 == (long *)0x0) {
      plVar30 = (long *)0x0;
    }
    else {
      plVar21 = plVar30 + 5;
      do {
        lVar5 = *plVar21;
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar11) {
          *(int *)plVar21 = (int)lVar5 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((int)lVar5 == -1) goto LAB_00ec07bc;
    }
    FUN_00ec0d30(plVar30,uVar17,1);
    FUN_00ec235c(lVar35,&local_118,local_b0);
    if (plVar30 == (long *)0x0) goto LAB_00ebfcd4;
    plVar21 = plVar30 + 5;
    do {
      iVar13 = (int)*plVar21;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(int *)plVar21 = iVar13 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar13 + -1 == 0) {
      (**(code **)(*plVar30 + 0x10))(plVar30);
      goto LAB_00ebfcd4;
    }
  }
  else {
    plVar21 = plVar30 + 5;
    do {
      lVar35 = *plVar21;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(int *)plVar21 = (int)lVar35 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((int)lVar35 == -1) goto LAB_00ec07bc;
    do {
      iVar13 = (int)*plVar21;
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar11) {
        *(int *)plVar21 = iVar13 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar13 + -1 == 0) {
      (**(code **)(*plVar30 + 0x10))();
      goto LAB_00ebfcd4;
    }
  }
  if (iVar13 == 0) goto LAB_00ec08f4;
LAB_00ebfcd4:
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
LAB_00ebfce8:
  lVar35 = *(long *)(*(long *)(*(long *)(lVar32 + 8) + 0x1f8) + 0x58);
  if ((lVar35 == 0) || (uVar39 = uVar39 + 1, *(uint *)(*(long *)(lVar35 + 0x38) + 4) <= uVar39))
  goto LAB_00ebfb08;
  goto LAB_00ebfb1c;
}


