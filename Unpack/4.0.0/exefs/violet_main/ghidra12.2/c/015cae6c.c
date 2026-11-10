/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015cae6c; name: FUN_015cae6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cae6c(long param_1)

{
  short *psVar1;
  int *piVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  uint *puVar11;
  void *pvVar12;
  float *pfVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  ushort *puVar17;
  ulong uVar18;
  ulong uVar19;
  short sVar20;
  uint uVar21;
  int *piVar22;
  long *plVar23;
  long *plVar24;
  uint uVar25;
  ulong uVar26;
  float fVar27;
  undefined1 *local_220;
  long *local_1e8;
  undefined1 *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  char *local_1a8;
  char *local_1a0;
  undefined8 uStack_198;
  long *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined *local_170;
  char *local_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 auStack_140 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 *local_c8 [3];
  long *local_b0;
  int *local_a8;
  int *local_a0;
  undefined1 auStack_90 [32];
  
  lVar15 = *(long *)(param_1 + 0x138);
  if ((lVar15 == 0) || (*(short *)(lVar15 + 0x1a) == 0)) {
    plVar23 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar15 + 0x1a);
    sVar20 = *(short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar20) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_015cb7f8;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015cb7f8:
        bVar6 = false;
      }
      if (bVar6) {
        plVar23 = (long *)0x0;
        if (*(long *)(lVar15 + 0x10) != 0) {
          plVar23 = (long *)(*(long *)(lVar15 + 0x10) + -0x28);
        }
        break;
      }
      plVar23 = (long *)0x0;
      sVar20 = sVar4;
    } while (sVar4 != 0);
  }
  lVar15 = *(long *)(param_1 + 0x148);
  if ((lVar15 == 0) || (*(short *)(lVar15 + 0x1a) == 0)) {
    plVar24 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar15 + 0x1a);
    sVar20 = *(short *)(lVar15 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar20) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_015cb73c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015cb73c:
        bVar6 = false;
      }
      if (bVar6) {
        plVar24 = (long *)0x0;
        if (*(long *)(lVar15 + 0x10) != 0) {
          plVar24 = (long *)(*(long *)(lVar15 + 0x10) + -0x28);
        }
        break;
      }
      plVar24 = (long *)0x0;
      sVar20 = sVar4;
    } while (sVar4 != 0);
  }
  if (plVar23 != (long *)0x0) {
    if (plVar24 == (long *)0x0) goto LAB_015cb668;
    local_170 = &DAT_fbec41851566601b;
    local_168 = "values";
    local_160 = 6;
    local_158 = (long *)0x0;
    puVar11 = (uint *)FUN_00efa07c(param_1 + 0x170,&local_170);
    if (puVar11 == (uint *)0x0) {
      uVar25 = 0;
    }
    else {
      uVar25 = *puVar11;
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    uVar8 = _UNK_03caa728;
    uVar7 = _DAT_03caa720;
    local_220 = &DAT_cbf29ce484222645;
    if (uVar25 == 0) {
      local_1e8 = (long *)0x0;
      uVar16 = 0;
    }
    else {
      uVar16 = (ulong)uVar25;
      lVar15 = 0;
      local_220 = &DAT_cbf29ce484222645;
      uVar26 = 0;
      local_1e8 = (long *)0x0;
      do {
        local_170 = &DAT_fbec41851566601b;
        local_168 = "values";
        local_160 = 6;
        local_158 = (long *)0x0;
        FUN_00e90ee0(auStack_90,param_1 + 0x170,&local_170,uVar26 & 0xffffffff);
        if (local_158 != (long *)0x0) {
          (**(code **)(*local_158 + 0x20))();
        }
        local_158 = (long *)0x0;
        local_170 = &DAT_f44c6d62b8673425;
        local_168 = "data";
        local_160 = 4;
        FUN_00d996a8(&local_a8,auStack_90,&local_170);
        if (local_158 != (long *)0x0) {
          (**(code **)(*local_158 + 0x20))();
        }
        local_158 = (long *)0x0;
        local_170 = &DAT_33adc5b6162705a6;
        local_168 = "name";
        local_160 = 4;
        FUN_00cee868(local_c8,&local_a8,&local_170);
        if (local_158 != (long *)0x0) {
          (**(code **)(*local_158 + 0x20))();
        }
        local_158 = (long *)0x0;
        local_170 = (undefined *)0x3f869b7e15505d74;
        local_168 = "orbits";
        local_160 = 6;
        FUN_00d996a8(&local_e0,&local_a8,&local_170);
        if (local_158 != (long *)0x0) {
          (**(code **)(*local_158 + 0x20))();
        }
        if (((local_a0 == (int *)0x0) || (*(ushort *)((long)local_a0 - (long)*local_a0) < 7)) ||
           (uVar18 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3], uVar18 == 0)) {
LAB_015cb15c:
          uVar18 = 0;
        }
        else {
          puVar11 = (uint *)((long)local_a0 + uVar18);
          puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
          local_170 = &DAT_03c64045;
          puVar11 = bsearch(&local_170,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600
                           );
          if ((puVar11 == (uint *)0x0) || (local_a8 == (int *)0x0)) goto LAB_015cb15c;
          piVar2 = (int *)((long)puVar11 + (ulong)*puVar11);
          puVar17 = (ushort *)((long)piVar2 - (long)*piVar2);
          if (*puVar17 < 7) {
            piVar22 = (int *)0x0;
          }
          else {
            piVar22 = (int *)0x0;
            if ((ulong)puVar17[3] != 0) {
              puVar11 = (uint *)((long)piVar2 + (ulong)puVar17[3]);
              piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
            }
          }
          if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
             (uVar18 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar18 == 0)) {
            uVar18 = 0;
          }
          else {
            uVar18 = (long)*(char *)((long)piVar22 + uVar18) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar18 * 8) == 8) {
            uVar18 = FUN_015efc20();
          }
          else {
            if ((*puVar17 < 0xd) || ((ulong)puVar17[6] == 0)) goto LAB_015cb15c;
            uVar18 = *(ulong *)((long)piVar2 + (ulong)puVar17[6]);
          }
        }
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        uStack_e8 = uVar8;
        local_f0 = uVar7;
        memcpy(auStack_140,&local_110,0x30);
        memcpy(&local_170,&local_110,0x30);
        local_188 = local_e0;
        uStack_180 = uStack_d8;
        local_178 = local_d0;
        local_1a8 = (char *)0x3d619c275ea89cdc;
        local_190 = (long *)0x0;
        local_1a0 = "top";
        uStack_198 = 3;
        FUN_02a25220(&local_188,&local_1a8,&local_170);
        if (local_190 != (long *)0x0) {
          (**(code **)(*local_190 + 0x20))();
        }
        local_1c0 = local_e0;
        uStack_1b8 = uStack_d8;
        local_1b0 = local_d0;
        local_1a8 = (char *)0x36c2a0437860c198;
        local_1a0 = "middle";
        uStack_198 = 6;
        local_190 = (long *)0x0;
        FUN_02a25220(&local_1c0,&local_1a8,auStack_140);
        if (local_190 != (long *)0x0) {
          (**(code **)(*local_190 + 0x20))();
        }
        local_1d8 = local_e0;
        uStack_1d0 = uStack_d8;
        local_1c8 = local_d0;
        local_1a8 = (char *)0xbbdb77fc20e7562a;
        local_190 = (long *)0x0;
        local_1a0 = "bottom";
        uStack_198 = 6;
        FUN_02a25220(&local_1d8,&local_1a8,&local_110);
        if (local_190 != (long *)0x0) {
          (**(code **)(*local_190 + 0x20))();
        }
        if (uVar26 < (ulong)((*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 4) *
                            -0x71c71c71c71c71c7)) {
          memcpy((void *)(*(long *)(param_1 + 0x188) + lVar15),&local_170,0x90);
        }
        else {
          FUN_01f960a0(param_1 + 0x188,&local_170);
        }
        local_1e0 = local_c8[0];
        pvVar12 = (void *)FUN_014ec6c4(param_1 + 0x1c0,&local_1e0);
        memcpy(pvVar12,&local_170,0x90);
        fVar27 = 0.0;
        if (local_a0 != (int *)0x0) {
          fVar27 = 0.0;
          if (6 < *(ushort *)((long)local_a0 - (long)*local_a0)) {
            uVar19 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3];
            fVar27 = 0.0;
            if (uVar19 != 0) {
              puVar11 = (uint *)((long)local_a0 + uVar19);
              puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
              local_1a8 = "maxLookAtOffsetYForCollisionResolve";
              puVar11 = bsearch(&local_1a8,puVar11 + 1,(ulong)*puVar11,4,
                                (__compar_fn_t)PTR_LAB_047d5600);
              if (puVar11 == (uint *)0x0) {
                fVar27 = 0.0;
              }
              else {
                fVar27 = 0.0;
                if (local_a8 != (int *)0x0) {
                  piVar2 = (int *)((long)puVar11 + (ulong)*puVar11);
                  puVar17 = (ushort *)((long)piVar2 - (long)*piVar2);
                  uVar3 = *puVar17;
                  if (uVar3 < 7) {
                    piVar22 = (int *)0x0;
                  }
                  else {
                    piVar22 = (int *)0x0;
                    if ((ulong)puVar17[3] != 0) {
                      puVar11 = (uint *)((long)piVar2 + (ulong)puVar17[3]);
                      piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
                    }
                  }
                  if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
                     (uVar19 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar19 == 0))
                  {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = (long)*(char *)((long)piVar22 + uVar19) & 0xffffffff;
                  }
                  if (*(long *)(PTR_DAT_047d5608 + uVar19 * 8) == 4) {
                    if (uVar3 < 0xb) {
                      uVar21 = 0;
LAB_015cb3e0:
                      fVar27 = 0.0;
                    }
                    else {
                      uVar21 = 0;
                      if ((ulong)puVar17[5] != 0) {
                        uVar21 = (uint)*(ushort *)((long)piVar2 + (ulong)puVar17[5]);
                      }
                      if ((uVar3 < 0xf) || ((ulong)puVar17[7] == 0)) goto LAB_015cb3e0;
                      fVar27 = (float)*(double *)((long)piVar2 + (ulong)puVar17[7]);
                    }
                    if ((uVar21 < *(ushort *)((long)local_a8 - (long)*local_a8)) &&
                       (uVar19 = (ulong)*(ushort *)
                                         (((long)local_a8 - (long)*local_a8) + (ulong)uVar21),
                       uVar19 != 0)) {
                      fVar27 = *(float *)((long)local_a8 + uVar19);
                    }
                  }
                  else {
                    fVar27 = 0.0;
                    if (0xe < uVar3) {
                      fVar27 = 0.0;
                      if ((ulong)puVar17[7] != 0) {
                        fVar27 = (float)*(double *)((long)piVar2 + (ulong)puVar17[7]);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        pfVar13 = (float *)FUN_02a25e58(param_1 + 0x240,&local_1e0);
        plVar9 = local_b0;
        *pfVar13 = fVar27;
        if ((uVar18 & 1) != 0) {
          local_220 = local_c8[0];
          if (local_b0 != (long *)0x0) {
            (**(code **)(*local_b0 + 0x18))(local_b0);
          }
          if (local_1e8 != (long *)0x0) {
            (**(code **)(*local_1e8 + 0x20))();
          }
          local_1e8 = plVar9;
        }
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
        lVar15 = lVar15 + 0x90;
        uVar26 = uVar26 + 1;
      } while ((uVar16 * 8 + (ulong)uVar25) * 0x10 != lVar15);
    }
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    if (local_220 != *(undefined1 **)PTR_DAT_047d3e30) {
      *(undefined1 **)(param_1 + 0x228) = local_220;
    }
    local_170 = (undefined *)0x0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_160 = 0;
    local_158 = (long *)0x0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_150 = 0;
    local_148 = 0;
    auStack_140[0] = 0;
    if (uVar16 < (ulong)((*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 4) *
                        -0x71c71c71c71c71c7)) {
      memcpy((void *)(*(long *)(param_1 + 0x188) + uVar16 * 0x90),&local_170,0x90);
    }
    else {
      FUN_01f960a0(param_1 + 0x188,&local_170);
    }
    local_c8[0] = (undefined1 *)0xb6e99426814d708d;
    pvVar12 = (void *)FUN_014ec6c4(param_1 + 0x1c0,local_c8);
    memcpy(pvVar12,&local_170,0x90);
    puVar14 = (undefined4 *)FUN_02a25e58(param_1 + 0x240,local_c8);
    *puVar14 = 0;
    if (local_1e8 != (long *)0x0) {
      (**(code **)(*local_1e8 + 0x20))();
    }
  }
  if (plVar24 != (long *)0x0) {
    lVar15 = plVar24[0x13];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar20 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar20 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar24 + 0x50))(plVar24);
    }
    else if (sVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (plVar23 == (long *)0x0) {
    return;
  }
LAB_015cb668:
  (**(code **)(*plVar23 + 0x60))(plVar23);
  return;
}


