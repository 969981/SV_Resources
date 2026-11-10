/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145442c; name: FUN_0145442c
 */


void FUN_0145442c(long *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined8 uStack_198;
  long *local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined8 uStack_178;
  long *local_170;
  undefined4 local_168;
  long local_160;
  code *local_158;
  long local_150;
  long local_148;
  undefined1 auStack_140 [96];
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined4 local_80;
  undefined2 local_7c;
  long *local_68;
  
  if (((*PTR_DAT_047daeb0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047daeb0), iVar9 != 0))
  {
    FUN_00100190(&LAB_02a1c3ec,PTR_DAT_047daeb8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daeb0);
  }
  lVar12 = *(long *)PTR_DAT_047daeb8;
  *(long *)PTR_DAT_047daec0 = lVar12;
  if (*(long *)(lVar12 + 0x30) == 0) {
    return;
  }
  if (*(char *)(*(long *)(lVar12 + 0x30) + 0x104) == '\0') {
    return;
  }
  if (*(long *)(lVar12 + 0x48) == 0) {
    return;
  }
  if (*(char *)(*(long *)(lVar12 + 0x48) + 0x104) == '\0') {
    return;
  }
  if (*(long *)(lVar12 + 0x60) == 0) {
    return;
  }
  if (*(char *)(*(long *)(lVar12 + 0x60) + 0x104) == '\0') {
    return;
  }
  puVar13 = (undefined8 *)param_1[0x73];
  param_1[0x73] = 0;
  if (puVar13 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar5 = *(int *)(lVar12 + 0x12c8);
    iVar9 = iVar5 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar9;
    if (*(int *)(lVar12 + 0x12cc) <= iVar5) {
      *(int *)(lVar12 + 0x12cc) = iVar9;
    }
    (**(code **)*puVar13)(puVar13);
    plVar16 = (long *)param_1[0x74];
    lVar12 = param_1[0x75];
    lVar14 = param_1[0x76];
    uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar13,lVar12,lVar14);
    }
    else {
      FUN_00c48fe8(plVar16,puVar13,lVar12,lVar14);
    }
    lVar12 = FUN_00c4e600();
    iVar9 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar9;
    if (iVar9 == 0) {
      plVar16 = (long *)FUN_00c4e600();
      if (plVar16[600] != 0) {
        local_68 = plVar16 + plVar16[600] * 3;
        local_1c0 = plVar16;
        FUN_00c4ea30(&local_1c0,&local_68);
        plVar15 = (long *)*plVar16;
        plVar3 = plVar16;
        if (plVar16[600] != 0) {
          plVar3 = plVar16 + plVar16[600] * 3;
        }
        if (plVar3 == plVar16) {
          uVar17 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar16 + 0xd0))();
          if ((long *)*plVar16 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar16,plVar16);
            plVar15 = (long *)*plVar16;
          }
          plVar18 = plVar16 + 3;
          if (plVar3 == plVar18) {
            uVar17 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar18 + 0xd0))();
            bVar8 = (long *)*plVar18 != plVar15;
            if (bVar8) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar16,plVar16 + 3);
              plVar15 = (long *)plVar16[3];
            }
            uVar17 = (ulong)bVar8;
            plVar18 = plVar16 + 6;
            if (plVar3 == plVar18) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar18 + 0xd0))();
              if ((long *)*plVar18 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar16 + uVar17 * 3,plVar16 + 6);
                plVar15 = (long *)plVar16[6];
                uVar17 = 2;
              }
              plVar18 = plVar16 + 9;
              if (plVar3 == plVar18) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar18 + 0xd0))();
                if ((long *)*plVar18 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar16 + uVar17 * 3,plVar16 + 9);
                  plVar15 = (long *)plVar16[9];
                  uVar17 = 3;
                }
                plVar18 = plVar16 + 0xc;
                if (plVar3 == plVar18) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar18 + 0xd0))();
                  if ((long *)*plVar18 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar16 + uVar17 * 3,plVar16 + 0xc);
                    plVar15 = (long *)plVar16[0xc];
                    uVar17 = 4;
                  }
                  plVar18 = plVar16 + 0xf;
                  if (plVar3 == plVar18) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar18 + 0xd0))();
                    if ((long *)*plVar18 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar16 + uVar17 * 3,plVar16 + 0xf);
                      plVar15 = (long *)plVar16[0xf];
                      uVar17 = 5;
                    }
                    plVar18 = plVar16 + 0x12;
                    uVar10 = 6;
                    if (plVar3 != plVar18) {
                      do {
                        (**(code **)(*(long *)*plVar18 + 0xd0))();
                        if ((long *)*plVar18 != plVar15) {
                          (**(code **)(*plVar15 + 0x100))(plVar15,plVar16 + uVar17 * 3,plVar18);
                          plVar15 = (long *)*plVar18;
                          uVar17 = uVar10;
                        }
                        plVar18 = plVar18 + 3;
                        uVar10 = uVar10 + 1;
                      } while (plVar3 != plVar18);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar16 + uVar17 * 3,plVar16 + uVar10 * 3);
        plVar16[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  FUN_01454b58(param_1 + 0x6c);
  if (param_1[0x6e] == 0) {
    local_150 = 0;
    local_148 = 0;
    local_170 = (long *)0x0;
    local_1c0 = (long *)0x0;
    uStack_1b8 = 0x10000270f;
    local_1a0 = &DAT_03c886bc;
    uStack_198 = 0;
    local_168 = 0;
    local_e0 = 0;
    local_80 = 0;
    local_180 = &DAT_03c886bc;
    uStack_178 = 0;
    local_c8 = &DAT_cbf29ce484222645;
    puStack_c0 = &DAT_03c886bc;
    local_90 = 0x101;
    local_7c = 0x101;
    local_1b0 = 1;
    puStack_1a8 = &DAT_cbf29ce484222645;
    local_190 = (long *)0x0;
    puStack_188 = &DAT_cbf29ce484222645;
    local_160 = 0;
    local_158 = (code *)0x0;
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = 0;
    local_b8 = 0;
    local_b0 = (long *)0x0;
    local_a0 = 0;
    uStack_98 = 0;
    uVar10 = FUN_01454d98(param_1,*(undefined4 *)((long)param_1 + 0x2d4),&local_1c0);
    pcVar7 = local_158;
    if ((uVar10 & 1) != 0) {
      if (local_158 != (code *)0x0) {
        local_150 = 0;
        local_148 = 0;
        local_160 = 0;
        local_158 = (code *)0x0;
        (*pcVar7)(auStack_140);
      }
      if ((code *)param_1[0x5e] != (code *)0x0) {
        (*(code *)param_1[0x5e])(param_1 + 0x60,auStack_140);
        local_148 = param_1[0x5f];
        local_158 = (code *)param_1[0x5d];
        local_160 = param_1[0x5c];
        local_150 = param_1[0x5e];
      }
      FUN_014551c0(param_1 + 0x6c,&local_1c0);
      uVar10 = (**(code **)(*param_1 + 0x18))(param_1);
      if ((((uVar10 & 1) != 0) && (*(char *)((long)param_1 + 0x449) == '\0')) &&
         (param_1[0x73] == 0)) {
        lVar12 = param_1[0x6d];
        uVar10 = (**(code **)(*param_1 + 0x18))(param_1);
        if (((uVar10 & 1) != 0) && (*(char *)((long)param_1 + 0x449) == '\0')) {
          FUN_01f85200(param_1 + 0x30,lVar12 + 0x10);
          *(undefined1 *)(param_1 + 0x89) = 1;
        }
      }
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    puVar13 = local_d8;
    if (local_d8 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_d8 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_d8 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_68 = (long *)*puVar13;
          FUN_00c44438(lVar12 + 0x8040,&local_68);
        }
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    pcVar7 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = 0;
      local_148 = 0;
      local_160 = 0;
      local_158 = (code *)0x0;
      (*pcVar7)(auStack_140);
    }
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    if (local_190 != (long *)0x0) {
      (**(code **)(*local_190 + 0x20))();
    }
  }
  return;
}


