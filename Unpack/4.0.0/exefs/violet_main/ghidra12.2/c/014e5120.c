/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e5120; name: FUN_014e5120
 */


void FUN_014e5120(long param_1,uint param_2)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined *puVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  int iVar20;
  undefined8 uVar21;
  byte bVar22;
  long *local_98;
  ushort local_90 [6];
  ushort local_84;
  undefined2 uStack_82;
  undefined8 uStack_80;
  ushort local_78;
  undefined2 local_76;
  
  FUN_014e8010(*(undefined8 *)(param_1 + 0x1a8));
  local_90[4] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  bVar22 = 0;
  iVar20 = 0;
  puVar1 = PTR_DAT_047d8ee0 + 0x10;
  puVar7 = (undefined *)CONCAT44(uStack_80._4_4_,(int)uStack_80);
  do {
    uStack_80._4_4_ = (undefined4)((ulong)puVar7 >> 0x20);
    lVar19 = *(long *)(param_1 + 0x1a8);
    if ((*(int *)(lVar19 + 0x6c38) == 0) && (*(byte *)(lVar19 + 0x6c3c) == param_2)) {
      local_84 = 0;
      uStack_82 = 0;
      uStack_80._0_4_ = 0;
      FUN_014e2aa0(0,iVar20,&uStack_80,&local_84);
      uVar3 = *(uint *)(lVar19 + 0x6c3c);
      uVar13 = uVar3 >> 8 & 0x3f;
      puVar7 = (undefined *)CONCAT44(uStack_80._4_4_,(int)uStack_80);
      if (((int)uStack_80 < (int)uVar13 || (int)(uVar13 + (uVar3 >> 0x14 & 0x3f)) <= (int)uStack_80)
         || (uVar13 = uVar3 >> 0xe & 0x3f,
            puVar7 = (undefined *)CONCAT44(uStack_80._4_4_,(int)uStack_80),
            CONCAT22(uStack_82,local_84) < (int)uVar13 ||
            (int)(uVar13 + (uVar3 >> 0x1a)) <= CONCAT22(uStack_82,local_84))) goto LAB_014e5194;
      lVar19 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),0,param_2,iVar20);
      if (lVar19 != 0) {
        FUN_014e5cb0(*(undefined8 *)(param_1 + 0x1a8),0,iVar20,1);
      }
LAB_014e5454:
      uVar21 = *(undefined8 *)(param_1 + 0x1a8);
      local_98 = (long *)0x0;
    }
    else {
LAB_014e5194:
      uStack_80 = puVar7;
      plVar16 = (long *)FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),0,param_2,iVar20);
      FUN_014e5cb0(*(undefined8 *)(param_1 + 0x1a8),0,iVar20,0);
      if (plVar16 == (long *)0x0) goto LAB_014e5454;
      if ((*(byte *)(*(long *)(plVar16[0xe] + 0x10) + 4) >> 2 & 1) == 0) {
        sVar8 = FUN_00cf44f4();
        if (sVar8 != 0) goto LAB_014e51e0;
      }
      else {
LAB_014e51e0:
        if ((*(int *)(param_1 + 0x284) == 3) && (*(char *)(param_1 + 0x2d3) != '\0')) {
          if (bVar22 < 5) {
            uVar9 = FUN_00cf44f4(plVar16[0xe]);
            local_84 = uVar9;
            uVar13 = FUN_00cf41a8(plVar16[0xe]);
            uVar3 = 0;
            if ((uVar9 & 0xfffe) != 0x298 && uVar9 != 0x2e8) {
              uVar3 = uVar13 & 0xffff;
            }
            uVar17 = FUN_01dd4ff4(&local_84);
            if ((uVar17 & 1) == 0) {
              uVar17 = FUN_01dd50f4(&local_84);
              if ((uVar17 & 1) == 0) {
                uVar17 = FUN_01539c9c(plVar16[0xe]);
                if ((uVar17 & 1) == 0) {
                  uVar13 = FUN_00dbf838(plVar16[0xe]);
                  uVar15 = FUN_00dbfb7c(plVar16[0xe]);
                  if (((((0xf < (uVar13 & 0xfff0 ^ uVar13 >> 0x10 ^ uVar15 >> 0x10 ^ uVar15 & 0xfff0
                                )) && (local_90[0] != uVar9)) && (local_90[1] != uVar9)) &&
                      ((local_90[2] != uVar9 && (local_90[3] != uVar9)))) && (local_90[4] != uVar9))
                  {
                    uVar6 = (undefined2)uVar3;
                    local_78 = uVar9;
                    local_76 = uVar6;
                    uStack_80 = puVar1;
                    sVar8 = FUN_01dd51e0(&uStack_80);
                    local_78 = uVar9;
                    local_76 = uVar6;
                    uStack_80 = puVar1;
                    sVar10 = FUN_01dd53ac(&uStack_80);
                    local_78 = uVar9;
                    local_76 = uVar6;
                    uStack_80 = puVar1;
                    sVar11 = FUN_01dd5578(&uStack_80);
                    uVar13 = *(uint *)(param_1 + 0x16c8);
                    if ((uVar13 & 1) == 0) {
                      if ((uVar13 >> 1 & 1) == 0) {
                        if (((sVar10 != 0 || sVar8 != 0) || sVar11 != 0) || ((uVar13 >> 2 & 1) == 0)
                           ) {
LAB_014e55d4:
                          if (sVar8 != 0) goto LAB_014e5580;
                          goto LAB_014e55dc;
                        }
                      }
                      else if (sVar10 != 0 || sVar8 != 0) goto LAB_014e55d4;
                    }
                    else if (sVar8 != 0) {
LAB_014e5580:
                      if (((0x17 < (uVar3 & 0xff)) || (uVar9 = sVar8 - 1, 0x351 < uVar9)) ||
                         ((*(byte *)(param_1 + (ulong)uVar9 * 2 + (ulong)uVar9 +
                                               (ulong)(uVar3 >> 3 & 0x1f) + 0xcd0) >>
                           (ulong)(uVar3 & 7) & 1) == 0)) {
LAB_014e55dc:
                        if ((((sVar10 == 0) || (0x17 < (uVar3 & 0xff))) ||
                            ((uVar9 = sVar10 + 399, 0x351 < uVar9 ||
                             ((*(byte *)(param_1 + (ulong)uVar9 * 2 + (ulong)uVar9 +
                                                   (ulong)(uVar3 >> 3 & 0x1f) + 0xcd0) >>
                               (ulong)(uVar3 & 7) & 1) == 0)))) &&
                           (((sVar11 == 0 || (0x17 < (uVar3 & 0xff))) ||
                            ((uVar9 = sVar11 + 599, 0x351 < uVar9 ||
                             ((*(byte *)(param_1 + (ulong)uVar9 * 2 + (ulong)uVar9 +
                                                   (ulong)(uVar3 >> 3 & 0x1f) + 0xcd0) >>
                               (ulong)(uVar3 & 7) & 1) == 0)))))) {
                          FUN_014e9310(*(undefined8 *)(param_1 + 0x1a8),0,iVar20,1);
                          uVar9 = FUN_00cf44f4(plVar16[0xe]);
                          uVar17 = (ulong)bVar22;
                          bVar22 = bVar22 + 1;
                          local_90[uVar17] = uVar9;
                          goto LAB_014e51ec;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_014e9310(*(undefined8 *)(param_1 + 0x1a8),0,iVar20,0);
        }
LAB_014e51ec:
        if (*(int *)(param_1 + 0x298) != 1) {
          uVar21 = *(undefined8 *)(param_1 + 0x1a8);
          if (*(char *)(param_1 + 0x1714) == '\0') {
LAB_014e5204:
            uVar18 = 0;
          }
          else {
            iVar14 = FUN_014e94fc(param_1,0,param_2,iVar20);
            if (iVar14 != 2) goto LAB_014e5204;
            uVar18 = 2;
          }
          FUN_014e56f4(uVar21,0,iVar20,uVar18,0);
        }
        uVar21 = *(undefined8 *)(param_1 + 0x1a8);
        uVar12 = FUN_014e5f50(param_1,0,param_2,iVar20);
        FUN_014e6ddc(uVar21,0,iVar20,uVar12);
        if (*(int *)(param_1 + 0x298) == 2) {
          uVar21 = FUN_01195854();
          uVar17 = FUN_014e61a4(uVar21,param_2,iVar20,*(int *)(param_1 + 0x2a4) + -1);
          uVar12 = 0x3f800000;
          if ((uVar17 & 1) == 0) {
            uVar12 = 0;
          }
          FUN_014e6294(uVar12,*(undefined8 *)(param_1 + 0x1a8),iVar20);
        }
      }
      uVar21 = *(undefined8 *)(param_1 + 0x1a8);
      plVar2 = plVar16 + 5;
      do {
        lVar19 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)lVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_98 = plVar16;
      if ((int)lVar19 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    FUN_014e63f0(uVar21,&local_98,0,iVar20,0);
    if (local_98 != (long *)0x0) {
      plVar16 = local_98 + 5;
      do {
        lVar19 = *plVar16;
        iVar14 = (int)lVar19 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar5) {
          *(int *)plVar16 = iVar14;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar14 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
      else if ((int)lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    iVar20 = iVar20 + 1;
    puVar7 = uStack_80;
    if (iVar20 == 0x1e) {
      FUN_014e7bf0(param_1,param_2);
      uVar21 = FUN_01195854();
      uVar12 = FUN_014e5f3c(uVar21,param_2);
      FUN_014e799c(param_1,uVar12);
      return;
    }
  } while( true );
}


