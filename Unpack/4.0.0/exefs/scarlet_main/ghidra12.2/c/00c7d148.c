/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c7d148; name: FUN_00c7d148
 */


void FUN_00c7d148(long param_1,undefined8 *param_2)

{
  short *psVar1;
  ulong uVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined1 *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  undefined4 uVar20;
  float fVar21;
  long local_a0;
  undefined1 *local_98;
  byte *local_90;
  size_t local_88;
  long *local_80;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    plVar9 = (long *)FUN_0145966c();
    local_90 = (byte *)(**(code **)(*plVar9 + 0x28))(plVar9,0);
    if (local_90 == (byte *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_98 = *(undefined1 **)PTR_DAT_047d3e30;
      local_90 = *(byte **)(PTR_DAT_047d3e30 + 8);
      local_88 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      local_80 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x18))();
      }
    }
    else {
      local_88 = strlen((char *)local_90);
      bVar19 = *local_90;
      local_98 = &DAT_cbf29ce484222645;
      pbVar14 = local_90;
      while (bVar19 != 0) {
        pbVar14 = pbVar14 + 1;
        local_98 = (undefined1 *)(((ulong)local_98 ^ (ulong)bVar19) * 0x100000001b3);
        bVar19 = *pbVar14;
      }
      local_80 = (long *)0x0;
    }
    lVar10 = FUN_00c7f390(&local_98);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (lVar10 != 0) {
      lVar11 = *(long *)(param_1 + 0x40);
      lVar3 = *(long *)(param_1 + 0x48);
      if (lVar11 == lVar3) {
        lVar10 = lVar11;
      }
      else {
        do {
          lVar13 = *(long *)(lVar11 + 0x10);
          if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
            psVar1 = (short *)(lVar13 + 0x1a);
            sVar16 = *(short *)(lVar13 + 0x1a);
            do {
              sVar4 = *psVar1;
              if (sVar4 == sVar16) {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar16 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 != '\0') goto LAB_00c7d38c;
                bVar6 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_00c7d38c:
                bVar6 = false;
              }
              if (bVar6) {
                if (*(long *)(lVar13 + 0x10) != 0) {
                  local_98 = (undefined1 *)(*(long *)(lVar13 + 0x10) + -0x28);
                  plVar9 = (long *)FUN_00d62350();
                  lVar13 = *plVar9;
                  if ((lVar13 == 0) || (*(short *)(lVar13 + 0x1a) == 0)) goto LAB_00c7d230;
                  psVar1 = (short *)(lVar13 + 0x1a);
                  sVar16 = *(short *)(lVar13 + 0x1a);
                  goto LAB_00c7d3cc;
                }
                break;
              }
              sVar16 = sVar4;
            } while (sVar4 != 0);
          }
          local_98 = (undefined1 *)0x0;
LAB_00c7d230:
          FUN_00c7f318(&local_98);
          lVar11 = lVar11 + 0x38;
        } while (lVar11 != lVar3);
        lVar11 = *(long *)(param_1 + 0x40);
        lVar10 = *(long *)(param_1 + 0x48);
      }
      FUN_00c7fab0(lVar11,lVar10);
      FUN_00c7f950(&local_98,param_1);
      lVar10 = *(long *)(param_1 + 0x40);
      if (*(long *)(param_1 + 0x48) != lVar10) {
        uVar18 = 0;
        bVar19 = 0;
        iVar8 = 0;
LAB_00c7d298:
        lVar10 = *(long *)(lVar10 + uVar18 * 0x38 + 0x10);
        if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar10 + 0x1a);
          sVar16 = *(short *)(lVar10 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar16) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar6) {
                *psVar1 = sVar16 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_00c7d438;
              bVar6 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_00c7d438:
              bVar6 = false;
            }
            if (bVar6) {
              if (*(long *)(lVar10 + 0x10) != 0) {
                local_a0 = *(long *)(lVar10 + 0x10) + -0x28;
                plVar9 = (long *)FUN_00d62350();
                lVar10 = *plVar9;
                if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) goto LAB_00c7d2a8;
                psVar1 = (short *)(lVar10 + 0x1a);
                sVar16 = *(short *)(lVar10 + 0x1a);
                goto LAB_00c7d478;
              }
              break;
            }
            sVar16 = sVar4;
          } while (sVar4 != 0);
        }
        local_a0 = 0;
        goto LAB_00c7d2a8;
      }
LAB_00c7d2d0:
      plVar9 = local_80;
      puVar7 = local_98;
      if (local_98 != (undefined1 *)0x0) {
        local_90 = local_98;
        lVar10 = local_88 - (long)local_98;
        uVar18 = (**(code **)(*local_80 + 0xf8))(local_80);
        if (((uVar18 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,puVar7,lVar10,1);
        }
        else {
          FUN_00c48fe8(plVar9,puVar7,lVar10,1);
        }
      }
    }
  }
  return;
LAB_00c7d3cc:
  sVar4 = *psVar1;
  if (sVar4 == sVar16) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar16 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_00c7d3f0;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00c7d3f0:
    bVar6 = false;
  }
  if (!bVar6) goto code_r0x00c7d3f8;
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 != 0) {
    plVar9 = (long *)(lVar13 + -0x28);
    fVar21 = *(float *)(local_98 + 0x254);
    if (fVar21 <= 0.0) {
      uVar20 = FUN_01e5b194(param_1,lVar11,lVar10);
      *(undefined4 *)(lVar11 + 0x34) = uVar20;
    }
    else {
      FUN_00ff4890(plVar9,1);
      lVar12 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      fVar21 = fVar21 + (float)((double)*(long *)(lVar12 + 8) / -1000000000.0);
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      *(float *)(local_98 + 0x254) = fVar21;
    }
    lVar13 = *(long *)(lVar13 + 0x70);
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar16 == 0) goto LAB_00c7d678;
  }
  goto LAB_00c7d230;
code_r0x00c7d3f8:
  sVar16 = sVar4;
  if (sVar4 == 0) goto LAB_00c7d230;
  goto LAB_00c7d3cc;
  while (sVar16 = sVar4, sVar4 != 0) {
LAB_00c7d478:
    sVar4 = *psVar1;
    if (sVar4 == sVar16) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar16 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00c7d49c;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00c7d49c:
      bVar6 = false;
    }
    if (bVar6) {
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 != 0) {
        uVar15 = (ulong)iVar8;
        uVar2 = uVar15 + 1;
        uVar17 = (long)local_90 - (long)local_98 >> 1;
        if (uVar2 < uVar17) {
          if (uVar17 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((byte)local_98[uVar15 * 2 + 1] <= uVar18) {
            bVar19 = local_98[uVar2 * 2];
            iVar8 = (int)uVar2;
          }
        }
        plVar9 = (long *)(lVar10 + -0x28);
        if (bVar19 < 0xb) {
          uVar20 = *(undefined4 *)(&DAT_03d31508 + (long)(char)bVar19 * 4);
        }
        else {
          uVar20 = 0;
        }
        FUN_00ff4890(plVar9,uVar20);
        lVar10 = *(long *)(lVar10 + 0x70);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar16 == 0) {
LAB_00c7d678:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      break;
    }
  }
LAB_00c7d2a8:
  FUN_00c7f318(&local_a0);
  uVar18 = uVar18 + 1;
  lVar10 = *(long *)(param_1 + 0x40);
  if ((ulong)((*(long *)(param_1 + 0x48) - lVar10 >> 3) * 0x6db6db6db6db6db7) <= uVar18)
  goto LAB_00c7d2d0;
  goto LAB_00c7d298;
}


