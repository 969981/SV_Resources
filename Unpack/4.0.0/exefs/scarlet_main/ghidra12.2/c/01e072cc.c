/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e072cc; name: FUN_01e072cc
 */


void FUN_01e072cc(long *param_1,undefined1 *param_2,float *param_3,byte param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  short sVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  undefined8 uVar18;
  byte *local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_6c [4];
  undefined8 local_68;
  
  lVar12 = *param_1;
  local_b0 = local_6c;
  puVar13 = (undefined8 *)(lVar12 + 0x58);
  if ((undefined8 *)*puVar13 == (undefined8 *)0x0) {
    puVar7 = puVar13;
LAB_01e07344:
    puVar11 = (undefined8 *)*puVar13;
    local_6c[0] = param_4;
    if (puVar11 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)(lVar12 + 0x60);
      puVar11 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,0x60,8);
      if (puVar11 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar8 + 0xe8))();
      }
      FUN_00d75208(puVar8,puVar11 + 4,&local_b0);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = puVar7;
      *puVar13 = puVar11;
      puVar7 = puVar11;
      if (**(long **)(lVar12 + 0x50) != 0) {
        *(long *)(lVar12 + 0x50) = **(long **)(lVar12 + 0x50);
        puVar7 = (undefined8 *)*puVar13;
      }
      FUN_010108e0(*(undefined8 *)(lVar12 + 0x58),puVar7);
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    }
    puVar13 = (undefined8 *)puVar11[6];
    do {
      if (puVar13 == puVar11 + 5) {
        return;
      }
      lVar12 = puVar13[2];
      if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar12 + 0x1a);
        sVar10 = *(short *)(lVar12 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01e074a4;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01e074a4:
            bVar5 = false;
          }
          if (bVar5) {
            if (*(long *)(lVar12 + 0x10) != 0) {
              plVar9 = (long *)(*(long *)(lVar12 + 0x10) + -0x28);
              lVar12 = (**(code **)(*plVar9 + 0x68))(plVar9);
              uVar18 = *(undefined8 *)param_1[1];
              fVar14 = *(float *)(lVar12 + 0x30) - (float)uVar18;
              fVar16 = *(float *)(lVar12 + 0x34) - (float)((ulong)uVar18 >> 0x20);
              fVar17 = *(float *)(lVar12 + 0x38) - (float)((undefined8 *)param_1[1])[1];
              fVar14 = fVar14 * fVar14;
              fVar16 = fVar16 * fVar16;
              fVar17 = fVar17 * fVar17;
              auVar15._0_4_ = fVar14 + fVar16;
              auVar15._4_4_ = fVar17 + 0.0;
              auVar15._8_4_ = fVar14 + fVar16;
              auVar15._12_4_ = fVar17 + 0.0;
              auVar15 = NEON_ext(auVar15,auVar15,4,1);
              fVar14 = auVar15._0_4_ + auVar15._4_4_;
              if ((fVar14 < *(float *)param_1[2] * *(float *)param_1[2]) && (fVar14 < *param_3)) {
                *param_3 = fVar14;
                local_b0 = (byte *)CONCAT71(local_b0._1_7_,local_6c[0]);
                local_a8 = (undefined8 *)0x0;
                uStack_a0 = 0;
                FUN_00d0a71c((ulong)&local_b0 | 8,puVar13 + 2);
                local_98 = 0xffffffffffffffff;
                local_90 = 0x7f7fffff;
                local_80 = 0;
                uStack_78 = 0;
                *param_2 = local_b0._0_1_;
                FUN_00d0a34c(param_2 + 8,(ulong)&local_b0 | 8);
                memcpy(param_2 + 0x18,&local_98,0x28);
                puVar7 = local_a8;
                if (local_a8 != (undefined8 *)0x0) {
                  psVar1 = (short *)(local_a8 + 3);
                  do {
                    sVar10 = *psVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar5) {
                      *psVar1 = sVar10 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar10 == 1) {
                    piVar2 = (int *)((long)local_a8 + 0x1c);
                    do {
                      iVar6 = *piVar2;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar5) {
                        *piVar2 = -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar6 != -1) {
                      if (((*PTR_DAT_047d3908 & 1) == 0) &&
                         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                        __cxa_guard_release(PTR_DAT_047d3908);
                      }
                      lVar12 = *(long *)PTR_DAT_047d3910;
                      *(long *)PTR_DAT_047d3918 = lVar12;
                      local_68 = *puVar7;
                      FUN_00c44438(lVar12 + 0x8040,&local_68);
                    }
                  }
                  else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    nn::diag::detail::AbortImpl
                              ("count != std::numeric_limits<uint16_t>::max()",
                               "ReleaseWeakReference",
                               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                               ,0x33,"Reference counter underflows.");
                  }
                }
              }
              (**(code **)(*plVar9 + 0x60))();
            }
            break;
          }
          sVar10 = sVar3;
        } while (sVar3 != 0);
      }
      puVar13 = (undefined8 *)puVar13[1];
    } while( true );
  }
  puVar11 = (undefined8 *)(lVar12 + 0x58);
  puVar7 = (undefined8 *)*puVar13;
  do {
    if (param_4 < *(byte *)(puVar7 + 4)) {
      puVar8 = (undefined8 *)*puVar7;
      if (puVar8 == (undefined8 *)0x0) {
        puVar13 = puVar7;
        goto LAB_01e07344;
      }
      puVar11 = puVar7;
    }
    else {
      puVar13 = puVar11;
      if (param_4 <= *(byte *)(puVar7 + 4)) goto LAB_01e07344;
      puVar13 = puVar7 + 1;
      puVar8 = (undefined8 *)*puVar13;
      puVar11 = puVar13;
      if (puVar8 == (undefined8 *)0x0) goto LAB_01e07344;
    }
    puVar7 = puVar8;
  } while( true );
}


