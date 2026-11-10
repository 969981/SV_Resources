/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a67f9c; name: FUN_00a67f9c
 */


undefined4
FUN_00a67f9c(long param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long *local_78;
  char local_70 [4];
  int local_6c;
  uint local_68;
  
  if (param_7 == 1) {
    if (param_2 == 1) {
LAB_00a682e0:
      uVar12 = 5;
    }
    else {
      if ((uint)*(byte *)(*(long *)(param_1 + 0x30) + 0x90) + param_9 < 7) {
        if (param_2 == 0) {
          uVar16 = param_4 % 6;
          uVar10 = param_4 / 6;
        }
        else {
          uVar16 = 0;
          uVar10 = param_4;
          if (1 < param_2 - 1U) {
            uVar10 = 0;
          }
        }
        if (param_6 != 0) {
          if (param_5 != 0) {
            iVar19 = uVar16 + uVar10 * 6;
            iVar9 = 0;
            do {
              iVar11 = iVar9 + uVar10;
              iVar20 = iVar19;
              iVar18 = param_5;
              if (1 < param_2 - 1U) {
                iVar11 = 0;
              }
              do {
                iVar2 = iVar20;
                if (param_2 != 0) {
                  iVar2 = iVar11;
                }
                lVar13 = FUN_010f26f8(param_1,param_2,param_3,iVar2);
                if ((lVar13 != 0) &&
                   (uVar14 = FUN_01dc7ce0(*(undefined8 *)(param_1 + 0x40),param_3,iVar2),
                   (uVar14 & 1) != 0)) {
                  uVar12 = 7;
                  goto LAB_00a68554;
                }
                iVar18 = iVar18 + -1;
                iVar20 = iVar20 + 1;
              } while (iVar18 != 0);
              iVar9 = iVar9 + 1;
              iVar19 = iVar19 + 6;
            } while (iVar9 != param_6);
          }
          goto LAB_00a683ac;
        }
        goto LAB_00a68478;
      }
LAB_00a682fc:
      uVar12 = 4;
    }
LAB_00a68554:
    *(undefined4 *)(param_1 + 0x1c0) = uVar12;
  }
  else {
    if (param_7 == 0) {
      if ((param_2 == 0) && (param_3 == param_8)) goto LAB_00a682e0;
      if (param_2 == 1) {
        uVar10 = param_9 + param_4;
        if (((param_4 != 0) || (uVar10 == 0)) &&
           (lVar13 = FUN_010f26f8(param_1,1,param_3,0), lVar13 != 0)) {
          if (*(long *)(*(long *)(lVar13 + 0x70) + 8) == 0) {
            sVar8 = FUN_00f13ef0(lVar13);
            if (sVar8 != 0) goto LAB_00a68038;
          }
          else {
            iVar9 = FUN_00ddf348();
            if (iVar9 != 0) {
LAB_00a68038:
              uVar14 = FUN_00cf4cfc(*(undefined8 *)(lVar13 + 0x70));
              if (((uVar14 & 1) == 0) &&
                 ((*(ushort *)(*(long *)(*(long *)(lVar13 + 0x70) + 0x10) + 4) >> 2 & 1) == 0))
              goto LAB_00a68220;
            }
          }
        }
        if (((1 < param_4) || (uVar10 < 2)) &&
           (lVar13 = FUN_010f26f8(param_1,1,param_3,1), lVar13 != 0)) {
          if (*(long *)(*(long *)(lVar13 + 0x70) + 8) == 0) {
            sVar8 = FUN_00f13ef0(lVar13);
            if (sVar8 != 0) goto LAB_00a68094;
          }
          else {
            iVar9 = FUN_00ddf348();
            if (iVar9 != 0) {
LAB_00a68094:
              uVar14 = FUN_00cf4cfc(*(undefined8 *)(lVar13 + 0x70));
              if (((uVar14 & 1) == 0) &&
                 ((*(ushort *)(*(long *)(*(long *)(lVar13 + 0x70) + 0x10) + 4) >> 2 & 1) == 0))
              goto LAB_00a68220;
            }
          }
        }
        if (((2 < param_4) || (uVar10 < 3)) &&
           (lVar13 = FUN_010f26f8(param_1,1,param_3,2), lVar13 != 0)) {
          if (*(long *)(*(long *)(lVar13 + 0x70) + 8) == 0) {
            sVar8 = FUN_00f13ef0(lVar13);
            if (sVar8 != 0) goto LAB_00a680f0;
          }
          else {
            iVar9 = FUN_00ddf348();
            if (iVar9 != 0) {
LAB_00a680f0:
              uVar14 = FUN_00cf4cfc(*(undefined8 *)(lVar13 + 0x70));
              if (((uVar14 & 1) == 0) &&
                 ((*(ushort *)(*(long *)(*(long *)(lVar13 + 0x70) + 0x10) + 4) >> 2 & 1) == 0))
              goto LAB_00a68220;
            }
          }
        }
        if (((3 < param_4) || (uVar10 < 4)) &&
           (lVar13 = FUN_010f26f8(param_1,1,param_3,3), lVar13 != 0)) {
          if (*(long *)(*(long *)(lVar13 + 0x70) + 8) == 0) {
            sVar8 = FUN_00f13ef0(lVar13);
            if (sVar8 != 0) goto LAB_00a6814c;
          }
          else {
            iVar9 = FUN_00ddf348();
            if (iVar9 != 0) {
LAB_00a6814c:
              uVar14 = FUN_00cf4cfc(*(undefined8 *)(lVar13 + 0x70));
              if (((uVar14 & 1) == 0) &&
                 ((*(ushort *)(*(long *)(*(long *)(lVar13 + 0x70) + 0x10) + 4) >> 2 & 1) == 0))
              goto LAB_00a68220;
            }
          }
        }
        if (((4 < param_4) || (uVar10 < 5)) &&
           (lVar13 = FUN_010f26f8(param_1,1,param_3,4), lVar13 != 0)) {
          if (*(long *)(*(long *)(lVar13 + 0x70) + 8) == 0) {
            sVar8 = FUN_00f13ef0(lVar13);
            if (sVar8 != 0) goto LAB_00a681a8;
          }
          else {
            iVar9 = FUN_00ddf348();
            if (iVar9 != 0) {
LAB_00a681a8:
              uVar14 = FUN_00cf4cfc(*(undefined8 *)(lVar13 + 0x70));
              if (((uVar14 & 1) == 0) &&
                 ((*(ushort *)(*(long *)(*(long *)(lVar13 + 0x70) + 0x10) + 4) >> 2 & 1) == 0))
              goto LAB_00a68220;
            }
          }
        }
        if (((5 < param_4) || (uVar10 < 6)) &&
           (lVar13 = FUN_010f26f8(param_1,1,param_3,5), lVar13 != 0)) {
          if (*(long *)(*(long *)(lVar13 + 0x70) + 8) == 0) {
            uVar10 = FUN_00f13ef0(lVar13);
            uVar10 = uVar10 & 0xffff;
          }
          else {
            uVar10 = FUN_00ddf348();
          }
          if (((uVar10 != 0) &&
              (uVar14 = FUN_00cf4cfc(*(undefined8 *)(lVar13 + 0x70)), (uVar14 & 1) == 0)) &&
             ((*(ushort *)(*(long *)(*(long *)(lVar13 + 0x70) + 0x10) + 4) >> 2 & 1) == 0))
          goto LAB_00a68220;
        }
        uVar12 = 1;
        goto LAB_00a68554;
      }
LAB_00a68220:
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      plVar17 = *(long **)(param_1 + 0x48);
      local_78 = plVar17;
      if (plVar17 == (long *)0x0) {
        iVar9 = FUN_019aebac(uVar15,param_8,&local_78,1);
        uVar10 = iVar9 + param_9;
      }
      else {
        plVar1 = plVar17 + 5;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)lVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        iVar9 = FUN_019aebac(uVar15,param_8,&local_78,1);
        uVar10 = iVar9 + param_9;
        if (plVar17 != (long *)0x0) {
          plVar1 = plVar17 + 5;
          do {
            lVar13 = *plVar1;
            iVar9 = (int)lVar13 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
          else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      if (0x1e < uVar10) goto LAB_00a682fc;
      if (param_4 < param_6 + param_4) {
        iVar9 = param_6;
        uVar10 = param_4;
        do {
          lVar13 = FUN_010f26f8(param_1,param_2,param_3,uVar10);
          if ((lVar13 != 0) && (uVar14 = FUN_01dc7280(lVar13,lVar13), (uVar14 & 1) != 0)) {
            uVar12 = 0xd;
            goto LAB_00a68554;
          }
          uVar10 = uVar10 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
LAB_00a683ac:
    puVar7 = PTR_DAT_047d6008;
    puVar6 = PTR_DAT_047d6000;
    puVar5 = PTR_DAT_047d5ff8;
    if (param_2 != 0) {
      return 0;
    }
    if (param_6 == 0) {
      return 0;
    }
    if (param_5 != 0) {
      iVar9 = 0;
      do {
        uVar10 = param_4;
        iVar19 = param_5;
        do {
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
            FUN_00100190(&LAB_00b1a5bc,puVar6,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar5);
          }
          lVar13 = *(long *)puVar6;
          *(long *)puVar7 = lVar13;
          if (lVar13 == 0) {
            local_70[0] = '\0';
          }
          else {
            FUN_01a2fe88(local_70);
            if (((local_70[0] != '\0') && (local_6c == param_3)) && (uVar10 == local_68)) {
              uVar12 = 6;
              goto LAB_00a68554;
            }
          }
          iVar19 = iVar19 + -1;
          uVar10 = uVar10 + 1;
        } while (iVar19 != 0);
        iVar9 = iVar9 + 1;
        param_4 = param_4 + 6;
      } while (iVar9 != param_6);
    }
LAB_00a68478:
    uVar12 = 0;
  }
  return uVar12;
}


