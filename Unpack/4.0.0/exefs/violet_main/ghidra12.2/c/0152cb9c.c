/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152cb9c; name: FUN_0152cb9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0152cb9c(long *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  long **pplVar3;
  long *plVar4;
  short sVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  undefined *puVar11;
  long *plVar12;
  long **pplVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *extraout_x8;
  undefined8 *puVar23;
  undefined1 *extraout_x9;
  code *pcVar24;
  byte *pbVar25;
  ulong uVar26;
  ulong extraout_x10;
  undefined1 *puVar27;
  undefined1 *extraout_x11;
  long extraout_x13;
  undefined1 *puVar28;
  undefined1 *puVar29;
  long *plVar30;
  uint *puVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  long *plVar35;
  long *local_2f0;
  code *local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  undefined8 local_2d0;
  long *plStack_2c8;
  undefined8 local_270;
  undefined *puStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  long *local_250;
  long local_248;
  undefined *puStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  long *local_228;
  long *local_220;
  char *pcStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  long *local_200;
  long *local_1f8;
  long **local_1f0;
  long local_1e8;
  long local_1e0;
  long *local_1d8;
  long local_1d0;
  long lStack_1c8;
  long local_1c0;
  long *local_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  long *local_198;
  long local_190;
  long lStack_188;
  long local_180;
  long *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  long *local_158;
  long local_150 [9];
  long local_108;
  long local_100;
  long local_f8;
  long *plStack_f0;
  long local_d0;
  undefined1 *local_c8;
  long *plStack_c0;
  undefined8 local_a0;
  
  puVar31 = (uint *)*param_4;
  lVar20 = *param_2;
  plVar30 = (long *)*param_3;
  uVar6 = *puVar31;
  lVar15 = FUN_0104b474(lVar20 + 0x108,&local_1f0);
  if (lVar15 != 0) {
    piVar2 = (int *)((long)puVar31 + (ulong)uVar6);
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
      return plVar30;
    }
    if (((ushort *)((long)piVar2 - (long)*piVar2))[3] == 0) {
      return plVar30;
    }
    plVar32 = *(long **)(lVar15 + 0x170);
    if (plVar32 == (long *)0x0) {
      FUN_0104c208(&local_d0,_DAT_00000638 + 0x48);
    }
    else {
      lVar15 = plVar32[6];
      if (*(long *)(lVar15 + 0x10) == 0) goto LAB_0152dc24;
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar5 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 0) {
        uVar19 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        *(undefined8 *)(lVar15 + 8) = uVar19;
        *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) goto LAB_0152dc44;
      FUN_0104c208(&local_d0,plVar32[199] + 0x48);
      lVar15 = plVar32[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar32 + 0x50))(plVar32);
      }
      else if (sVar5 == 0) goto LAB_0152dc6c;
    }
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
       (uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar21 == 0)) {
      lVar15 = 0;
    }
    else {
      puVar31 = (uint *)((long)piVar2 + uVar21);
      lVar15 = (long)puVar31 + (ulong)*puVar31;
    }
    bVar7 = *(byte *)(lVar15 + 4);
    puVar22 = &DAT_cbf29ce484222645;
    if (bVar7 != 0) {
      puVar22 = &DAT_cbf29ce484222645;
      pbVar25 = (byte *)(lVar15 + 5);
      do {
        puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar7) * 0x100000001b3);
        bVar7 = *pbVar25;
        pbVar25 = pbVar25 + 1;
      } while (bVar7 != 0);
    }
    if (local_c8 != (undefined1 *)0x0) {
      uVar21 = 0;
      if (local_c8 != (undefined1 *)0x0) {
        uVar21 = (ulong)puVar22 / (ulong)local_c8;
      }
      uVar26 = (long)local_c8 - ((ulong)local_c8 >> 1 & 0x5555555555555555);
      uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
      uVar26 = (uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar26 < 2) {
        puVar28 = (undefined1 *)((ulong)(local_c8 + -1) & (ulong)puVar22);
      }
      else {
        puVar28 = puVar22;
        if (local_c8 <= puVar22) {
          puVar28 = puVar22 + -(uVar21 * (long)local_c8);
        }
      }
      plVar32 = *(long **)(local_d0 + (long)puVar28 * 8);
      if ((plVar32 != (long *)0x0) && (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
        puVar27 = local_c8 + -1;
        if (uVar26 < 2) {
          do {
            if ((undefined1 *)plVar32[1] == puVar22) {
              if ((undefined1 *)plVar32[2] == puVar22) goto LAB_0152cdf0;
            }
            else if ((undefined1 *)((ulong)plVar32[1] & (ulong)puVar27) != puVar28) break;
            plVar32 = (long *)*plVar32;
          } while (plVar32 != (long *)0x0);
        }
        else {
          do {
            puVar29 = (undefined1 *)plVar32[1];
            if (puVar29 == puVar22) {
              if ((undefined1 *)plVar32[2] == puVar22) {
LAB_0152cdf0:
                puVar28 = local_c8;
                lVar15 = local_d0;
                if (uVar26 < 2) goto LAB_0152ce60;
                puVar29 = puVar22;
                if (local_c8 <= puVar22) {
                  puVar29 = puVar22 + -(uVar21 * (long)local_c8);
                }
                do {
                  plVar32 = *(long **)(lVar15 + (long)puVar29 * 8);
                  if ((plVar32 != (long *)0x0) &&
                     (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0)) {
                    if (uVar26 < 2) {
                      do {
                        if ((undefined1 *)plVar32[1] == puVar22) {
                          if ((undefined1 *)plVar32[2] == puVar22) goto LAB_0152ce94;
                        }
                        else if ((undefined1 *)((ulong)plVar32[1] & (ulong)puVar27) != puVar29)
                        break;
                        plVar32 = (long *)*plVar32;
                      } while (plVar32 != (long *)0x0);
                    }
                    else {
                      do {
                        puVar27 = (undefined1 *)plVar32[1];
                        if (puVar27 == puVar22) {
                          if ((undefined1 *)plVar32[2] == puVar22) goto LAB_0152ce94;
                        }
                        else {
                          if (puVar28 <= puVar27) {
                            uVar21 = 0;
                            if (puVar28 != (undefined1 *)0x0) {
                              uVar21 = (ulong)puVar27 / (ulong)puVar28;
                            }
                            puVar27 = puVar27 + -(uVar21 * (long)puVar28);
                          }
                          if (puVar27 != puVar29) break;
                        }
                        plVar32 = (long *)*plVar32;
                      } while (plVar32 != (long *)0x0);
                    }
                  }
                  FUN_02143970();
                  puVar22 = extraout_x8;
                  puVar28 = extraout_x9;
                  uVar26 = extraout_x10;
                  puVar27 = extraout_x11;
                  lVar15 = extraout_x13;
LAB_0152ce60:
                  puVar29 = (undefined1 *)((ulong)puVar27 & (ulong)puVar22);
                } while( true );
              }
            }
            else {
              if (local_c8 <= puVar29) {
                uVar10 = 0;
                if (local_c8 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar29 / (ulong)local_c8;
                }
                puVar29 = puVar29 + -(uVar10 * (long)local_c8);
              }
              if (puVar29 != puVar28) break;
            }
            plVar32 = (long *)*plVar32;
          } while (plVar32 != (long *)0x0);
        }
      }
    }
LAB_0152d764:
    FUN_0104b710(&local_d0,local_a0);
    lVar15 = local_d0;
    local_d0 = 0;
    if (lVar15 != 0) {
      uVar21 = (**(code **)(*plStack_c0 + 0xf8))(plStack_c0);
      if (((uVar21 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
        (**(code **)(*plStack_c0 + 0x18))(plStack_c0,lVar15,(long)local_c8 << 3,8);
      }
      else {
        FUN_00c48fe8(plStack_c0,lVar15,(long)local_c8 << 3,8);
      }
    }
  }
  return plVar30;
code_r0x0152d5d4:
  cVar8 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
  if (bVar9) {
    *plVar32 = lVar18;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_0152d5dc;
  goto LAB_0152d5cc;
LAB_0152ce94:
  FUN_0104c68c(&local_108,plVar32 + 6);
  lVar15 = local_108;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 9) {
    iVar14 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4];
    iVar14 = 0;
    if (uVar21 != 0) {
      iVar14 = *(int *)((long)piVar2 + uVar21);
    }
  }
  if ((ulong)((local_100 - local_108 >> 3) * 0x4ec4ec4ec4ec4ec5) <= (ulong)(long)iVar14) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar23 = (undefined8 *)(local_108 + (long)iVar14 * 0x68);
  local_170 = *puVar23;
  local_168 = puVar23[1];
  local_160 = puVar23[2];
  local_158 = (long *)puVar23[3];
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x18))();
  }
  memcpy(local_150,(void *)(lVar15 + (long)iVar14 * 0x68 + 0x20),0x48);
  local_1f0 = &local_2f0;
  local_2f0 = (long *)0x0;
  uVar21 = FUN_0152e01c(plVar30 + 5);
  if (((uVar21 & 1) != 0) && (local_2f0 == (long *)0x0)) {
    local_2f0 = plVar30;
  }
  plVar32 = (long *)plVar30[0xf];
  if (plVar32 != (long *)0x0) {
    lVar15 = plVar32[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_0152dc24;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar19;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0152dc44;
    lVar15 = plVar32[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar32 + 0x50))(plVar32);
    }
    else if (sVar5 == 0) goto LAB_0152dc6c;
    plVar30 = (long *)plVar30[0xf];
    if (plVar30 == (long *)0x0) {
      FUN_0152dcd0(0,&local_1f0);
    }
    else {
      lVar15 = plVar30[6];
      if (*(long *)(lVar15 + 0x10) == 0) goto LAB_0152dc24;
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar5 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 0) {
        uVar19 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        *(undefined8 *)(lVar15 + 8) = uVar19;
        *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) goto LAB_0152dc44;
      FUN_0152dcd0(plVar30,&local_1f0);
      lVar15 = plVar30[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar30 + 0x50))(plVar30);
      }
      else if (sVar5 == 0) goto LAB_0152dc6c;
    }
  }
  plVar32 = local_2f0;
  param_1 = (long *)*param_1;
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
    local_248 = 0;
  }
  else {
    uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
    local_248 = 0;
    if (uVar21 != 0) {
      puVar31 = (uint *)((long)piVar2 + uVar21);
      local_248 = (long)puVar31 + (ulong)*puVar31;
    }
  }
  FUN_00ea0a7c(&local_220,&local_248);
  plVar35 = local_220;
  plVar17 = (long *)PTR_DAT_047d8b70;
  plVar4 = (long *)PTR_PTR_047d4508;
  plVar30 = (long *)PTR_DAT_047d8b70;
  if (local_220 != (long *)0x0) {
    plVar30 = local_220 + 6;
  }
  local_1f0 = (long **)*plVar30;
  plVar30 = (long *)PTR_PTR_047d4508;
  if (local_220 != (long *)0x0) {
    plVar30 = local_220 + 7;
  }
  local_1e8 = *plVar30;
  if (local_220 == (long *)0x0) {
    local_1e0 = 0;
  }
  else {
    local_1e0 = local_220[8];
  }
  local_1d8 = (long *)0x0;
  if (local_220 != (long *)0x0) {
    (**(code **)(*local_220 + 0x18))(local_220);
  }
  local_1d8 = plVar35;
  if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar15 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = param_1;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar30 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x5d0,0x10);
  if (plVar30 == (long *)0x0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_0104bbb4();
  puVar11 = PTR_DAT_047dd080;
  *plVar30 = (long)(PTR_DAT_047dd080 + 0x10);
  plVar30[4] = (long)(puVar11 + 0x188);
  plVar30[5] = (long)(puVar11 + 0x1d8);
  memset(plVar30 + 0x84,0,0x80);
  plVar30[0x99] = (long)&DAT_03c886bc;
  plVar30[0x95] = (long)&DAT_03c886bc;
  plVar30[0x9d] = (long)&DAT_03c886bc;
  plVar30[0xa1] = (long)&DAT_03c886bc;
  plVar30[0xb5] = (long)&DAT_03c886bc;
  plVar30[0x94] = (long)&DAT_cbf29ce484222645;
  plVar30[0x96] = 0;
  plVar30[0x97] = 0;
  plVar30[0x98] = (long)&DAT_cbf29ce484222645;
  plVar30[0x9a] = 0;
  plVar30[0x9b] = 0;
  plVar30[0x9c] = (long)&DAT_cbf29ce484222645;
  plVar30[0x9e] = 0;
  plVar30[0x9f] = 0;
  plVar30[0xa0] = (long)&DAT_cbf29ce484222645;
  plVar30[0xa2] = 0;
  plVar30[0xa3] = 0;
  plVar30[0xa4] = 0;
  plVar30[0xa5] = 0;
  plVar30[0xa6] = 0;
  plVar30[0xa7] = 0;
  plVar30[0xb4] = (long)&DAT_cbf29ce484222645;
  plVar30[0xb6] = 0;
  plVar30[0xb7] = 0;
  *(undefined1 *)(plVar30 + 0xb8) = 0;
  *(undefined4 *)(plVar30 + 3) = 0x1005d0;
  plVar30[1] = (long)param_1;
  plVar30[2] = (long)plVar30;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  lVar15 = plVar30[6];
  if (*(long *)(lVar15 + 0x10) != 0) {
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar5 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar19;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
LAB_0152dc44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar35 = local_1d8;
    plVar30[8] = (long)local_1f0;
    plVar30[9] = local_1e8;
    plVar30[10] = local_1e0;
    if (local_1d8 != (long *)0x0) {
      (**(code **)(*local_1d8 + 0x18))(local_1d8);
    }
    plVar16 = (long *)plVar30[0xb];
    plVar30[0xb] = (long)plVar35;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x20))();
    }
    local_2f0 = plVar30;
    (**(code **)(*plVar32 + 0x120))(plVar32,&local_2f0);
    if (local_2f0 != (long *)0x0) {
      lVar15 = local_2f0[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar5 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*local_2f0 + 0x50))();
      }
      else if (sVar5 == 0) {
LAB_0152dc6c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    (**(code **)(*plVar32 + 0x80))(plVar32,&local_1f0);
    if (local_1d8 != (long *)0x0) {
      (**(code **)(*local_1d8 + 0x20))();
    }
    if (local_220 != (long *)0x0) {
      (**(code **)(*local_220 + 0x20))();
    }
    FUN_00faae34(&local_1f0,*(undefined8 *)(local_150[0] + 0x18));
    pplVar13 = local_1f0;
    pplVar3 = (long **)plVar17;
    if (local_1f0 != (long **)0x0) {
      pplVar3 = local_1f0 + 6;
    }
    plVar32 = *pplVar3;
    pplVar3 = (long **)plVar4;
    if (local_1f0 != (long **)0x0) {
      pplVar3 = local_1f0 + 7;
    }
    plVar35 = *pplVar3;
    if (local_1f0 == (long **)0x0) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = local_1f0[8];
      (*(code *)(*local_1f0)[3])(local_1f0);
    }
    FUN_00faae34(&local_2f0,*(undefined8 *)(local_150[0] + 0x18));
    plVar12 = local_2f0;
    if (local_2f0 != (long *)0x0) {
      plVar17 = local_2f0 + 6;
    }
    lVar15 = *plVar17;
    plVar17 = plVar4;
    if (local_2f0 != (long *)0x0) {
      plVar17 = local_2f0 + 7;
    }
    lVar33 = *plVar17;
    if (local_2f0 == (long *)0x0) {
      lVar34 = 0;
    }
    else {
      lVar34 = local_2f0[8];
      (**(code **)(*local_2f0 + 0x18))(local_2f0);
    }
    plVar30[0x11] = (long)plVar32;
    plVar30[0x12] = (long)plVar35;
    plVar30[0x13] = (long)plVar16;
    if (pplVar13 != (long **)0x0) {
      (*(code *)(*pplVar13)[3])(pplVar13);
    }
    plVar32 = (long *)plVar30[0x14];
    plVar30[0x14] = (long)pplVar13;
    if (plVar32 != (long *)0x0) {
      (**(code **)(*plVar32 + 0x20))();
    }
    plVar30[0x15] = lVar15;
    plVar30[0x16] = lVar33;
    plVar30[0x17] = lVar34;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar17 = (long *)plVar30[0x18];
    plVar30[0x18] = (long)plVar12;
    plVar32 = (long *)PTR_DAT_047d8b70;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))();
    }
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    if (pplVar13 != (long **)0x0) {
      (*(code *)(*pplVar13)[4])(pplVar13);
    }
    if (local_2f0 != (long *)0x0) {
      (**(code **)(*local_2f0 + 0x20))();
    }
    if (local_1f0 != (long **)0x0) {
      (*(code *)(*local_1f0)[4])();
    }
    local_2f0 = (long *)&DAT_ed253ec5e968258f;
    local_2e8 = (code *)0x3bf0673;
    local_2e0 = (code *)0x6;
    local_2d8 = (undefined1 *)0x0;
    FUN_0104b1dc(&local_1f8,&local_170,&local_2f0);
    plVar16 = local_1f8;
    plVar17 = plVar4;
    plVar35 = plVar32;
    if (local_1f8 != (long *)0x0) {
      plVar17 = local_1f8 + 7;
      plVar35 = local_1f8 + 6;
    }
    local_1f0 = (long **)*plVar35;
    local_1e8 = *plVar17;
    if (local_1f8 == (long *)0x0) {
      local_1e0 = 0;
    }
    else {
      local_1e0 = local_1f8[8];
    }
    local_1d8 = (long *)0x0;
    if (local_1f8 != (long *)0x0) {
      (**(code **)(*local_1f8 + 0x18))(local_1f8);
    }
    local_1d8 = plVar16;
    local_220 = (long *)0xc3728266f1a1ccde;
    pcStack_218 = "passive";
    local_210 = 7;
    uStack_208 = 0;
    FUN_0104b1dc(&local_200,&local_170,&local_220);
    plVar16 = local_200;
    plVar17 = plVar4;
    plVar35 = plVar32;
    if (local_200 != (long *)0x0) {
      plVar17 = local_200 + 7;
      plVar35 = local_200 + 6;
    }
    local_1d0 = *plVar35;
    lStack_1c8 = *plVar17;
    if (local_200 == (long *)0x0) {
      local_1c0 = 0;
    }
    else {
      local_1c0 = local_200[8];
    }
    local_1b8 = (long *)0x0;
    if (local_200 != (long *)0x0) {
      (**(code **)(*local_200 + 0x18))(local_200);
    }
    local_1b8 = plVar16;
    local_248 = -0x3d1df31a43c0a462;
    puStack_240 = &DAT_03c6df4b;
    local_238 = 4;
    uStack_230 = 0;
    FUN_012804b0(&local_228,&local_170,&local_248);
    plVar16 = local_228;
    plVar17 = plVar4;
    plVar35 = plVar32;
    if (local_228 != (long *)0x0) {
      plVar17 = local_228 + 7;
      plVar35 = local_228 + 6;
    }
    local_1b0 = *plVar35;
    lStack_1a8 = *plVar17;
    if (local_228 == (long *)0x0) {
      local_1a0 = 0;
    }
    else {
      local_1a0 = local_228[8];
    }
    local_198 = (long *)0x0;
    if (local_228 != (long *)0x0) {
      (**(code **)(*local_228 + 0x18))(local_228);
    }
    local_198 = plVar16;
    local_270 = 0xa17564bc0be5d210;
    puStack_268 = &DAT_03c51582;
    local_260 = 4;
    uStack_258 = 0;
    FUN_012804b0(&local_250,&local_170,&local_270);
    plVar16 = local_250;
    plVar17 = plVar4;
    plVar35 = plVar32;
    if (local_250 != (long *)0x0) {
      plVar17 = local_250 + 7;
      plVar35 = local_250 + 6;
    }
    local_190 = *plVar35;
    lStack_188 = *plVar17;
    if (local_250 == (long *)0x0) {
      local_180 = 0;
    }
    else {
      local_180 = local_250[8];
    }
    local_178 = (long *)0x0;
    if (local_250 == (long *)0x0) {
      local_178 = local_250;
    }
    else {
      (**(code **)(*local_250 + 0x18))(local_250);
      local_178 = plVar16;
      if (local_250 != (long *)0x0) {
        (**(code **)(*local_250 + 0x20))();
      }
    }
    if (local_228 != (long *)0x0) {
      (**(code **)(*local_228 + 0x20))();
    }
    if (local_200 != (long *)0x0) {
      (**(code **)(*local_200 + 0x20))();
    }
    if (local_1f8 != (long *)0x0) {
      (**(code **)(*local_1f8 + 0x20))();
    }
    FUN_0152e0f4(plVar30,&local_1f0);
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) {
      local_220 = (long *)0x0;
    }
    else {
      uVar21 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
      local_220 = (long *)0x0;
      if (uVar21 != 0) {
        puVar31 = (uint *)((long)piVar2 + uVar21);
        local_220 = (long *)((long)puVar31 + (ulong)*puVar31);
      }
    }
    FUN_00ea0a7c(&local_2f0,&local_220);
    plVar17 = local_2f0;
    if (local_2f0 != (long *)0x0) {
      plVar32 = local_2f0 + 6;
    }
    lVar15 = *plVar32;
    if (local_2f0 != (long *)0x0) {
      plVar4 = local_2f0 + 7;
    }
    lVar33 = *plVar4;
    if (local_2f0 == (long *)0x0) {
      lVar34 = 0;
    }
    else {
      lVar34 = local_2f0[8];
      (**(code **)(*local_2f0 + 0x18))(local_2f0);
    }
    plVar32 = plVar30 + 0x1e;
    lVar18 = nn::os::GetCurrentThread();
LAB_0152d5cc:
    if (*plVar32 == 0) goto code_r0x0152d5d4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar30 + 0x1f));
    do {
      if (*plVar32 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar30 + 0x1f));
          while (*plVar32 == 0) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
            if (bVar9) {
              *plVar32 = lVar18;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_0152d5dc;
          }
        } while( true );
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar9) {
        *plVar32 = lVar18;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_0152d5dc:
    plVar30[0xb4] = lVar15;
    plVar30[0xb5] = lVar33;
    plVar30[0xb6] = lVar34;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    plVar32 = (long *)plVar30[0xb7];
    plVar30[0xb7] = (long)plVar17;
    if (plVar32 != (long *)0x0) {
      (**(code **)(*plVar32 + 0x20))();
    }
    plVar30[0x1e] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar30 + 0x1f));
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
    if (local_2f0 != (long *)0x0) {
      (**(code **)(*local_2f0 + 0x20))();
    }
    local_2d0 = FUN_0104cf4c(lVar20 + 0x108,&local_2f0);
    local_2f0 = (long *)&LAB_0214acb0;
    local_2e8 = FUN_02b2d8bc;
    local_2e0 = FUN_02b2d8c0;
    local_2d8 = &LAB_02b2d8cc;
    pcVar24 = (code *)plVar30[0xa5];
    plStack_2c8 = plVar30;
    if (pcVar24 == (code *)0x0) {
LAB_0152d678:
      (*local_2e0)(&local_2d0,plVar30 + 0xa8);
      plVar30[0xa7] = (long)local_2d8;
      plVar30[0xa4] = (long)local_2f0;
      plVar30[0xa5] = (long)local_2e8;
      plVar30[0xa6] = (long)local_2e0;
    }
    else {
      plVar30[0xa6] = 0;
      plVar30[0xa7] = 0;
      plVar30[0xa4] = 0;
      plVar30[0xa5] = 0;
      (*pcVar24)(plVar30 + 0xa8);
      if (local_2e0 != (code *)0x0) goto LAB_0152d678;
    }
    pcVar24 = local_2e8;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (code *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (long *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar24)(&local_2d0);
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    if (local_198 != (long *)0x0) {
      (**(code **)(*local_198 + 0x20))();
    }
    if (local_1b8 != (long *)0x0) {
      (**(code **)(*local_1b8 + 0x20))();
    }
    if (local_1d8 != (long *)0x0) {
      (**(code **)(*local_1d8 + 0x20))();
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    lVar15 = local_108;
    if (local_108 != 0) {
      lVar20 = local_100;
      if (local_100 == local_108) {
        lVar20 = local_108;
      }
      else {
        do {
          plVar32 = (long *)(lVar20 + -0x50);
          lVar20 = lVar20 + -0x68;
          if ((long *)*plVar32 != (long *)0x0) {
            (**(code **)(*(long *)*plVar32 + 0x20))();
          }
        } while (lVar15 != lVar20);
        lVar20 = local_108;
      }
      local_100 = lVar15;
      uVar21 = (**(code **)(*plStack_f0 + 0xf8))(plStack_f0);
      if (((uVar21 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plStack_f0 + 0x18))(plStack_f0,lVar20,local_f8 - lVar20,8);
      }
      else {
        FUN_00c48fe8(plStack_f0,lVar20,local_f8 - lVar20,8);
      }
    }
    goto LAB_0152d764;
  }
LAB_0152dc24:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
}


