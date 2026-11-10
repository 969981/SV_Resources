/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c86354; name: FUN_00c86354
 */


void FUN_00c86354(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  byte bVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  ulong uVar16;
  ushort *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  fVar20 = param_2._8_4_;
  uVar22 = param_2._0_8_;
  if (*(code **)(param_3 + 0xa40) != (code *)0x0) {
    auVar21 = (**(code **)(param_3 + 0xa40))(param_3 + 0xa60);
    fVar23 = (float)uVar22 - auVar21._0_4_;
    fVar24 = fVar20 - auVar21._8_4_;
    if (((0.0 < fVar24) && (0.0 < fVar23)) && (0.0 < (float)((ulong)uVar22 >> 0x20) - auVar21._4_4_)
       ) {
      if (*(char *)(param_3 + 0xb40) == '\0') {
        local_80 = auVar21._0_8_;
        uStack_78 = auVar21._8_8_;
        local_70 = uVar22;
        (**(code **)(param_3 + 0xac0))(param_3 + 0xae0,&local_80);
        *(undefined1 *)(param_3 + 0xb40) = 1;
      }
      plVar9 = DAT_0485a0e0;
      if (DAT_0485a0e0 != (long *)0x0) {
        plVar15 = DAT_0485a0e0 + 5;
        do {
          lVar8 = *plVar15;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *(int *)plVar15 = (int)lVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      uVar16 = plVar9[0x2f];
      plVar15 = (long *)plVar9[0x32];
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
      uVar11 = plVar9[0xf];
      if ((uVar11 & uVar11 - 1) == 0) {
        plVar12 = *(long **)(plVar9[0xe] + (uVar11 - 1 & uVar16) * 8);
        do {
          do {
            plVar12 = (long *)*plVar12;
          } while (plVar12[1] != uVar16);
        } while (plVar12[2] != uVar16);
      }
      else {
        if (uVar16 < uVar11) {
          uVar11 = uVar16;
        }
        else {
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar7 = uVar16 / uVar11;
          }
          uVar11 = uVar16 - uVar7 * uVar11;
        }
        plVar12 = *(long **)(plVar9[0xe] + uVar11 * 8);
        do {
          do {
            plVar12 = (long *)*plVar12;
          } while (plVar12[1] != uVar16);
        } while (plVar12[2] != uVar16);
      }
      lVar13 = *(long *)(plVar9[7] + (long)*(int *)((long)plVar12 + 0x30) * 0x20);
      lVar8 = 0;
      if (*(char *)(lVar13 + 0xd0) != '\0') {
        lVar8 = lVar13;
      }
      fVar23 = ABS((float)*(undefined8 *)(lVar8 + 0x40) + ((float)uVar22 + auVar21._0_4_) * -0.5) +
               fVar23 * -0.5;
      fVar20 = ABS((float)*(undefined8 *)(lVar8 + 0x48) + (fVar20 + auVar21._8_4_) * -0.5) +
               fVar24 * -0.5;
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      uVar16 = 0;
      puVar1 = (undefined8 *)(param_3 + 0xb48);
      auVar21._0_4_ = fVar23 * fVar23 + 0.0;
      auVar21._4_4_ = fVar20 * fVar20 + 0.0;
      auVar21._8_4_ = fVar23 * fVar23 + 0.0;
      auVar21._12_4_ = fVar20 * fVar20 + 0.0;
      auVar21 = NEON_ext(auVar21,auVar21,4,1);
      fVar20 = SQRT(auVar21._0_4_ + auVar21._4_4_);
      do {
        plVar12 = *(long **)(param_3 + uVar16 * 0x20 + 0x120);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x38))(plVar12);
          lVar8 = param_3 + uVar16 * 8;
          if (*(char *)(lVar8 + 0x944) == '\0') {
            fVar23 = (float)(*(code *)plVar12[6])(plVar12 + 10);
          }
          else {
            fVar23 = *(float *)(lVar8 + 0x940);
          }
          if (fVar23 < fVar20) {
            pcVar14 = *(code **)(*plVar12 + 0x28);
          }
          else {
            pcVar14 = *(code **)(*plVar12 + 0x20);
          }
          (*pcVar14)(plVar12);
          bVar10 = (**(code **)(*plVar12 + 0x18))(plVar12);
          bVar10 = bVar10 & 1;
          if (*(byte *)(param_3 + uVar16 + 0x520) != bVar10) {
            *(byte *)(param_3 + uVar16 + 0x520) = bVar10;
            puVar2 = puVar1;
            if (*(long *)(param_3 + 0xb68) != 0) {
              puVar2 = puVar1 + *(long *)(param_3 + 0xb68);
            }
            if (((puVar2 != puVar1) &&
                ((**(code **)(**(long **)(param_3 + 0xb48) + 0x10))
                           (*(long **)(param_3 + 0xb48),param_3,uVar16 & 0xffffffff,bVar10),
                puVar2 != (undefined8 *)(param_3 + 0xb50))) &&
               ((**(code **)(**(long **)(param_3 + 0xb50) + 0x10))
                          (*(long **)(param_3 + 0xb50),param_3,uVar16 & 0xffffffff,bVar10),
               puVar2 != (undefined8 *)(param_3 + 0xb58))) {
              puVar19 = (undefined8 *)(param_3 + 0xb58);
              do {
                puVar18 = puVar19 + 1;
                (**(code **)(*(long *)*puVar19 + 0x10))
                          ((long *)*puVar19,param_3,uVar16 & 0xffffffff,bVar10);
                puVar19 = puVar18;
              } while (puVar2 != puVar18);
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0x20);
      uVar16 = 0;
      do {
        puVar17 = *(ushort **)(param_3 + uVar16 * 0x20 + 0x540);
        if (puVar17 != (ushort *)0x0) {
          lVar8 = param_3 + uVar16 * 8;
          if (*(char *)(lVar8 + 0x944) == '\0') {
            fVar23 = (float)(**(code **)(puVar17 + 8))(puVar17 + 0x18);
          }
          else {
            fVar23 = *(float *)(lVar8 + 0x940);
          }
          if (*(char *)((long)puVar17 + 1) == '\0' || (bool)(char)*puVar17 != fVar20 < fVar23) {
            local_80 = CONCAT71(local_80._1_7_,fVar20 < fVar23);
            uVar11 = (**(code **)(puVar17 + 0x48))(puVar17 + 0x58,&local_80);
            if ((uVar11 & 1) == 0) {
              if (*(char *)((long)puVar17 + 1) != '\0') {
                *(char *)((long)puVar17 + 1) = '\0';
              }
            }
            else {
              *puVar17 = fVar20 < fVar23 | 0x100;
            }
            uVar3 = *puVar17;
            if (0xff < uVar3) {
              puVar2 = puVar1;
              if (*(long *)(param_3 + 0xb68) != 0) {
                puVar2 = puVar1 + *(long *)(param_3 + 0xb68);
              }
              if (((puVar2 != puVar1) &&
                  ((**(code **)(**(long **)(param_3 + 0xb48) + 0x10))
                             (*(long **)(param_3 + 0xb48),param_3,uVar16 & 0xffffffff,
                              (uVar3 & 0xff) != 0), puVar2 != (undefined8 *)(param_3 + 0xb50))) &&
                 ((**(code **)(**(long **)(param_3 + 0xb50) + 0x10))
                            (*(long **)(param_3 + 0xb50),param_3,uVar16 & 0xffffffff,
                             (uVar3 & 0xff) != 0), puVar2 != (undefined8 *)(param_3 + 0xb58))) {
                puVar19 = (undefined8 *)(param_3 + 0xb58);
                do {
                  puVar18 = puVar19 + 1;
                  (**(code **)(*(long *)*puVar19 + 0x10))
                            ((long *)*puVar19,param_3,uVar16 & 0xffffffff,(uVar3 & 0xff) != 0);
                  puVar19 = puVar18;
                } while (puVar2 != puVar18);
              }
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0x20);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      if (plVar9 != (long *)0x0) {
        plVar15 = plVar9 + 5;
        do {
          lVar8 = *plVar15;
          iVar6 = (int)lVar8 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar5) {
            *(int *)plVar15 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


