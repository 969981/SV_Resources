/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011d7f50; name: FUN_011d7f50
 */


void FUN_011d7f50(long *param_1,int param_2,undefined4 *param_3,ulong param_4,long *param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  long local_198;
  long *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  long local_178;
  long *local_170;
  undefined4 local_168;
  long local_160;
  code *local_158;
  code *local_150;
  long local_148;
  undefined1 auStack_140 [96];
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  long local_b8;
  long *local_b0;
  long local_a0;
  long local_98;
  undefined2 local_90;
  undefined4 local_80;
  undefined2 local_7c;
  undefined8 local_70 [2];
  
  uVar9 = (**(code **)(*param_1 + 0x18))();
  if ((uVar9 & 1) == 0) {
    return;
  }
  plVar14 = (long *)param_1[0x6d];
  plVar10 = param_1 + 0x6c;
  plVar13 = plVar14;
  if ((plVar10 != plVar14) && ((int)plVar14[2] != param_2)) {
    do {
      plVar13 = (long *)plVar13[1];
      if (plVar10 == plVar13) goto LAB_011d7ffc;
    } while ((int)plVar13[2] != param_2);
  }
  if (plVar10 != plVar13) {
    return;
  }
LAB_011d7ffc:
  local_150 = (code *)0x0;
  local_148 = 0;
  local_170 = (long *)0x0;
  local_1c0 = 0;
  local_1b8 = 0x10000270f;
  local_1a0 = &DAT_03c886bc;
  local_198 = 0;
  local_180 = &DAT_03c886bc;
  local_178 = 0;
  local_168 = 0;
  local_e0 = 0;
  local_80 = 0;
  local_c8 = &DAT_cbf29ce484222645;
  local_c0 = &DAT_03c886bc;
  local_90 = 0x101;
  local_7c = 0x101;
  local_1b0 = 1;
  local_1a8 = &DAT_cbf29ce484222645;
  local_190 = (long *)0x0;
  local_188 = &DAT_cbf29ce484222645;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  local_b8 = 0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0;
  uVar9 = FUN_01454d98(param_1,param_2,&local_1c0);
  if ((uVar9 & 1) != 0) {
    if (param_3 == (undefined4 *)0x0) {
      if ((param_4 & 1) != 0) {
        local_80 = 2;
      }
    }
    else {
      local_e0 = *param_3;
      FUN_00d0a71c(&local_d8,param_3 + 2);
      local_c8 = *(undefined1 **)(param_3 + 6);
      local_c0 = *(undefined1 **)(param_3 + 8);
      local_b8 = *(long *)(param_3 + 10);
      plVar13 = *(long **)(param_3 + 0xc);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      if (local_b0 != (long *)0x0) {
        lVar12 = *local_b0;
        local_b0 = plVar13;
        (**(code **)(lVar12 + 0x20))();
        plVar13 = local_b0;
      }
      local_b0 = plVar13;
      local_90 = *(undefined2 *)(param_3 + 0x14);
      local_98 = *(long *)(param_3 + 0x12);
      local_a0 = *(long *)(param_3 + 0x10);
      local_80 = 1;
    }
    pcVar6 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (code *)0x0;
      local_148 = 0;
      local_160 = 0;
      local_158 = (code *)0x0;
      (*pcVar6)(auStack_140);
    }
    if ((code *)param_5[2] != (code *)0x0) {
      (*(code *)param_5[2])(param_5 + 4,auStack_140);
      local_148 = param_5[3];
      local_158 = (code *)param_5[1];
      local_160 = *param_5;
      local_150 = (code *)param_5[2];
    }
    plVar13 = (long *)param_1[0x6d];
    if (plVar10 != plVar13) {
      do {
        if ((int)local_1b8 <= (int)plVar13[3]) {
          plVar10 = (long *)(**(code **)(*(long *)param_1[0x6f] + 0x10))
                                      ((long *)param_1[0x6f],0x160,0x10);
          if (plVar10 == (long *)0x0) {
            (**(code **)(*(long *)param_1[0x6f] + 0xe8))();
          }
          *plVar10 = 0;
          lVar12 = param_1[0x6f];
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar11 == 0) {
            plVar10[3] = local_1b8;
            plVar10[4] = local_1b0;
            plVar10[2] = local_1c0;
            plVar10[5] = (long)local_1a8;
            plVar10[6] = (long)local_1a0;
            plVar10[7] = local_198;
            plVar10[8] = (long)local_190;
            if (local_190 != (long *)0x0) {
              (**(code **)(*local_190 + 0x18))();
            }
            plVar10[9] = (long)local_188;
            plVar10[10] = (long)local_180;
            plVar10[0xb] = local_178;
            plVar10[0xc] = (long)local_170;
            if (local_170 != (long *)0x0) {
              (**(code **)(*local_170 + 0x18))();
            }
            plVar10[0xe] = 0;
            *(undefined4 *)(plVar10 + 0xd) = local_168;
            plVar10[0xf] = 0;
            plVar10[0x10] = 0;
            plVar10[0x11] = 0;
            if (local_150 != (code *)0x0) {
              (*local_150)(auStack_140,plVar10 + 0x12);
              plVar10[0x11] = local_148;
              plVar10[0xe] = local_160;
              plVar10[0xf] = (long)local_158;
              plVar10[0x10] = (long)local_150;
            }
            plVar10[0x1f] = 0;
            plVar10[0x20] = 0;
            *(undefined4 *)(plVar10 + 0x1e) = local_e0;
            FUN_00d0a71c(plVar10 + 0x1f,&local_d8);
            plVar10[0x21] = (long)local_c8;
            plVar10[0x22] = (long)local_c0;
            plVar10[0x23] = local_b8;
            plVar10[0x24] = (long)local_b0;
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x18))();
            }
            *(undefined2 *)(plVar10 + 0x28) = local_90;
            plVar10[0x26] = local_a0;
            plVar10[0x27] = local_98;
            *(undefined2 *)((long)plVar10 + 0x154) = local_7c;
            *(undefined4 *)(plVar10 + 0x2a) = local_80;
          }
          else {
            if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar12;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
            plVar10[3] = local_1b8;
            plVar10[4] = local_1b0;
            plVar10[2] = local_1c0;
            plVar10[5] = (long)local_1a8;
            plVar10[6] = (long)local_1a0;
            plVar10[7] = local_198;
            plVar10[8] = (long)local_190;
            if (local_190 != (long *)0x0) {
              (**(code **)(*local_190 + 0x18))();
            }
            plVar10[9] = (long)local_188;
            plVar10[10] = (long)local_180;
            plVar10[0xb] = local_178;
            plVar10[0xc] = (long)local_170;
            if (local_170 != (long *)0x0) {
              (**(code **)(*local_170 + 0x18))();
            }
            plVar10[0xe] = 0;
            *(undefined4 *)(plVar10 + 0xd) = local_168;
            plVar10[0xf] = 0;
            plVar10[0x10] = 0;
            plVar10[0x11] = 0;
            if (local_150 != (code *)0x0) {
              (*local_150)(auStack_140,plVar10 + 0x12);
              plVar10[0x11] = local_148;
              plVar10[0xe] = local_160;
              plVar10[0xf] = (long)local_158;
              plVar10[0x10] = (long)local_150;
            }
            plVar10[0x1f] = 0;
            plVar10[0x20] = 0;
            *(undefined4 *)(plVar10 + 0x1e) = local_e0;
            FUN_00d0a71c(plVar10 + 0x1f,&local_d8);
            plVar10[0x21] = (long)local_c8;
            plVar10[0x22] = (long)local_c0;
            plVar10[0x23] = local_b8;
            plVar10[0x24] = (long)local_b0;
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x18))();
            }
            *(undefined2 *)(plVar10 + 0x28) = local_90;
            plVar10[0x26] = local_a0;
            plVar10[0x27] = local_98;
            *(undefined2 *)((long)plVar10 + 0x154) = local_7c;
            *(undefined4 *)(plVar10 + 0x2a) = local_80;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          *(long **)(*plVar13 + 8) = plVar10;
          *plVar10 = *plVar13;
          *plVar13 = (long)plVar10;
          plVar10[1] = (long)plVar13;
          param_1[0x6e] = param_1[0x6e] + 1;
          goto LAB_011d8320;
        }
        plVar13 = (long *)plVar13[1];
      } while (plVar10 != plVar13);
    }
    FUN_014551c0(plVar10,&local_1c0);
  }
LAB_011d8320:
  if (((((long *)param_1[0x6d] != plVar14) &&
       (uVar9 = (**(code **)(*param_1 + 0x18))(param_1), (uVar9 & 1) != 0)) &&
      (*(char *)((long)param_1 + 0x449) == '\0')) && (param_1[0x73] == 0)) {
    lVar12 = param_1[0x6d];
    uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
    if (((uVar9 & 1) != 0) && (*(char *)((long)param_1 + 0x449) == '\0')) {
      FUN_01f85200(param_1 + 0x30,lVar12 + 0x10);
      *(undefined1 *)(param_1 + 0x89) = 1;
    }
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  puVar7 = local_d8;
  if (local_d8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d8 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_d8 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_70[0] = *puVar7;
        FUN_00c44438(lVar12 + 0x8040,local_70);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  pcVar6 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (code *)0x0;
    local_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar6)(auStack_140);
  }
  if (local_170 != (long *)0x0) {
    (**(code **)(*local_170 + 0x20))();
  }
  if (local_190 != (long *)0x0) {
    (**(code **)(*local_190 + 0x20))();
  }
  return;
}


