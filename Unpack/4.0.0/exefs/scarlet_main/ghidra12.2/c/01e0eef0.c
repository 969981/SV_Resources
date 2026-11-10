/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0eef0; name: FUN_01e0eef0
 */


uint FUN_01e0eef0(long param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 local_198;
  char *pcStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  long *local_178;
  undefined8 *local_170;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  char *pcStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  
  uVar17 = *(undefined8 *)(param_1 + 8);
  lVar6 = tpidr_el0;
  if (*(long *)(lVar6 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar6 + 0x30) = DAT_04859430;
  }
  local_160 = *(undefined8 *)(lVar6 + 0x30);
  local_158 = *(undefined8 *)(lVar6 + 0x38);
  *(undefined8 *)(lVar6 + 0x30) = uVar17;
  *(undefined2 *)(lVar6 + 0x38) = 1;
  if (*(int *)(param_1 + 0x294) == -1) {
LAB_01e0f02c:
    uVar7 = 0;
  }
  else {
    if (param_2 == 3) {
      local_150 = 0x1e0ac9c58ee35984;
      pcStack_148 = "uniquewait_bool";
      local_140 = 0xf;
    }
    else {
      if (param_2 != 2) {
        if (param_2 == 1) {
          plVar9 = (long *)FUN_00d63ba4(param_1);
          lVar14 = *plVar9;
          if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
            psVar1 = (short *)(lVar14 + 0x1a);
            sVar15 = *(short *)(lVar14 + 0x1a);
LAB_01e0f074:
            sVar4 = *psVar1;
            if (sVar4 == sVar15) {
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar11) {
                *psVar1 = sVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_01e0f098;
              bVar11 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01e0f098:
              bVar11 = false;
            }
            if (!bVar11) goto code_r0x01e0f0a0;
            lVar14 = *(long *)(lVar14 + 0x10);
            if (lVar14 != 0) {
              plVar9 = (long *)(lVar14 + -0x28);
              puVar18 = &DAT_cbf29ce484222645;
              FUN_01e0f388(&local_178,plVar9);
              local_198 = 0xdb3511ae502a979c;
              pcStack_190 = "0000_defaultwait01_loop";
              local_188 = 0x17;
              uStack_180 = 0;
              memset(&local_150,0,0x100);
              FUN_01e0f454(param_1,&local_150,&local_198);
              if ((byte)local_150 != 0) {
                pbVar12 = (byte *)((ulong)&local_150 | 1);
                bVar3 = (byte)local_150;
                do {
                  puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar3) * 0x100000001b3);
                  bVar3 = *pbVar12;
                  pbVar12 = pbVar12 + 1;
                } while (bVar3 != 0);
              }
              if (((local_178 == (long *)0x0) || (local_170 == (undefined8 *)0x0)) ||
                 (*(short *)((long)local_170 + 0x1a) == 0)) {
                if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28),
                   puVar10 = (undefined8 *)PTR_DAT_047d3e30, iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3e28);
                }
                else {
                  puVar10 = (undefined8 *)PTR_DAT_047d3e30;
                }
              }
              else {
                puVar10 = (undefined8 *)(**(code **)(*local_178 + 0x18))();
              }
              puVar16 = (undefined1 *)*puVar10;
              if (local_170 != (undefined8 *)0x0) {
                psVar1 = (short *)(local_170 + 3);
                do {
                  sVar15 = *psVar1;
                  cVar5 = '\x01';
                  bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar11) {
                    *psVar1 = sVar15 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (sVar15 == 1) {
                  piVar2 = (int *)((long)local_170 + 0x1c);
                  do {
                    iVar8 = *piVar2;
                    cVar5 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                    if (bVar11) {
                      *piVar2 = -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar8 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar13 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar13;
                    local_150 = *local_170;
                    FUN_00c44438(lVar13 + 0x8040,&local_150);
                  }
                }
                else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x33,"Reference counter underflows.");
                }
              }
              lVar14 = *(long *)(lVar14 + 8);
              psVar1 = (short *)(lVar14 + 0x1a);
              do {
                sVar15 = *psVar1;
                cVar5 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar11) {
                  *psVar1 = sVar15 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar16 == puVar18) {
                if (sVar15 == 1) {
                  *(undefined8 *)(lVar14 + 0x10) = 0;
                  (**(code **)(*plVar9 + 0x50))(plVar9);
                }
                else if (sVar15 == 0) {
LAB_01e0f1c8:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
                uVar7 = 1;
                goto LAB_01e0efa4;
              }
              if (sVar15 == 1) {
                *(undefined8 *)(lVar14 + 0x10) = 0;
                (**(code **)(*plVar9 + 0x50))(plVar9);
              }
              else if (sVar15 == 0) goto LAB_01e0f1c8;
            }
          }
        }
        goto LAB_01e0f02c;
      }
      local_150 = 0x4955b49339758aca;
      pcStack_148 = "battle_wait_switch";
      local_140 = 0x12;
    }
    uStack_138 = 0;
    uVar7 = FUN_00d93028(param_1,&local_150);
  }
LAB_01e0efa4:
  *(undefined8 *)(lVar6 + 0x30) = local_160;
  *(undefined2 *)(lVar6 + 0x38) = (undefined2)local_158;
  return uVar7 & 1;
code_r0x01e0f0a0:
  sVar15 = sVar4;
  if (sVar4 == 0) goto code_r0x01e0f0a8;
  goto LAB_01e0f074;
code_r0x01e0f0a8:
  uVar7 = 0;
  goto LAB_01e0efa4;
}


