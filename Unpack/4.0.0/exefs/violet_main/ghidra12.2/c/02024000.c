/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02024000; name: FUN_02024000
 */


bool FUN_02024000(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  short sVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  undefined8 *local_48 [2];
  long *local_38;
  
  lVar7 = *param_2;
  if (*(char *)(lVar7 + (ulong)*(uint *)(param_1 + 0x100)) != '\0') {
    if (*(float *)(lVar7 + (ulong)*(uint *)(param_1 + 0x10c)) != 0.0) {
      return true;
    }
    FUN_011f3030(local_48,*(undefined8 *)(lVar7 + (ulong)*(uint *)(param_1 + 8)));
    if (local_48[0] != (undefined8 *)0x0) {
      if (*(short *)((long)local_48[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_48[0] + 0x1a);
        sVar10 = *(short *)((long)local_48[0] + 0x1a);
LAB_02024088:
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_020240ac;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_020240ac:
          bVar9 = false;
        }
        if (!bVar9) goto code_r0x020240b4;
        plVar8 = (long *)(local_48[0][2] + -0x28);
        if (local_48[0][2] != 0) {
          FUN_014410c0(&local_38,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 8)));
          auVar13 = FUN_01025bc4(local_38,*param_2 + (ulong)*(uint *)(param_1 + 0xe8));
          lVar7 = (**(code **)(*plVar8 + 0x68))(plVar8);
          fVar12 = auVar13._0_4_ - *(float *)(lVar7 + 0x30);
          fVar14 = auVar13._4_4_ - *(float *)(lVar7 + 0x34);
          fVar15 = auVar13._8_4_ - *(float *)(lVar7 + 0x38);
          fVar12 = fVar12 * fVar12;
          fVar14 = fVar14 * fVar14;
          fVar15 = fVar15 * fVar15;
          auVar13._0_4_ = fVar12 + fVar14;
          auVar13._4_4_ = fVar15 + 0.0;
          auVar13._8_4_ = fVar12 + fVar14;
          auVar13._12_4_ = fVar15 + 0.0;
          auVar13 = NEON_ext(auVar13,auVar13,4,1);
          fVar12 = auVar13._0_4_ + auVar13._4_4_;
          if (fVar12 < 0.1) {
LAB_02024160:
            bVar9 = true;
          }
          else {
            if (*(float *)(*param_2 + (ulong)*(uint *)(param_1 + 0x108)) < fVar12)
            goto LAB_02024160;
            *(float *)((ulong)*(uint *)(param_1 + 0x108) + *param_2) = fVar12;
            bVar9 = *(float *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf8)) <=
                    *(float *)(*param_2 + (ulong)*(uint *)(param_1 + 0xfc));
          }
          if (local_38 != (long *)0x0) {
            lVar7 = local_38[6];
            psVar1 = (short *)(lVar7 + 0x1a);
            do {
              sVar10 = *psVar1;
              cVar5 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar10 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar10 == 1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              (**(code **)(*local_38 + 0x50))();
            }
            else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          (**(code **)(*plVar8 + 0x60))(plVar8);
          goto LAB_020241a4;
        }
      }
      bVar9 = false;
      puVar11 = local_48[0];
      goto LAB_020241ac;
    }
  }
  return false;
code_r0x020240b4:
  sVar10 = sVar3;
  if (sVar3 == 0) goto code_r0x020240bc;
  goto LAB_02024088;
code_r0x020240bc:
  bVar9 = false;
LAB_020241a4:
  puVar11 = local_48[0];
  if (local_48[0] == (undefined8 *)0x0) {
    return bVar9;
  }
LAB_020241ac:
  psVar1 = (short *)(puVar11 + 3);
  do {
    sVar10 = *psVar1;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar10 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar10 == 1) {
    piVar2 = (int *)((long)puVar11 + 0x1c);
    do {
      iVar6 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar6 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_38 = (long *)*puVar11;
      FUN_00c44438(lVar7 + 0x8040,&local_38);
    }
  }
  else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return bVar9;
}


