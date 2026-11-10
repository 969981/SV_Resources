/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec956c; name: FUN_01ec956c
 */


void FUN_01ec956c(long param_1,undefined1 *param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long local_f8 [3];
  int local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long local_b8;
  byte local_b0;
  undefined7 local_a8;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  byte local_80;
  undefined7 uStack_7f;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar10 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar10;
  if (((lVar10 != 0) && (*(long *)(lVar10 + 0x70) != 0)) && (*(long *)PTR_DAT_047d0860 != 0)) {
    local_80 = 0xfd;
    FUN_00f42ddc(local_e0,*(long *)PTR_DAT_047d0860,&local_80,*param_3);
    bVar6 = local_80;
    if (local_80 == 0xfd) {
      return;
    }
    if (local_e0[0] != 0) {
      return;
    }
    if (DAT_045dfcb0 < local_80 || DAT_045dfcb0 == local_80) {
      return;
    }
    if (*param_3 == 0) {
      return;
    }
    lVar10 = FUN_017691a4(param_3);
    if (lVar10 == 0) {
      return;
    }
    uStack_a0 = 0;
    uStack_9f = 0;
    uStack_9e = 0;
    local_a8 = 0;
    uStack_a1 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    local_c0 = (long *)0x0;
    local_e0[0] = CONCAT31(local_e0[0]._1_3_,*param_2);
    if ((param_4 & 1) == 0) {
LAB_01ec97e4:
      local_b8 = *param_3;
      local_b0 = bVar6;
      FUN_01920084(&local_80,lVar10);
      plVar5 = (long *)CONCAT17(uStack_a1,local_a8);
      local_a8 = 0;
      uStack_a1 = 0;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 5;
        do {
          lVar9 = *plVar1;
          iVar7 = (int)lVar9 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_01ec9938;
      }
      local_a8 = (undefined7)CONCAT71(uStack_7f,local_80);
      uStack_a1 = (undefined1)((uint7)uStack_7f >> 0x30);
      uStack_a0 = *(undefined1 *)(lVar10 + 5);
      uStack_9f = *(undefined1 *)(lVar10 + 6);
      uStack_9e = *(undefined1 *)(lVar10 + 4);
      if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,local_e0);
      }
    }
    else {
      iVar7 = FUN_01cefb40();
      if (iVar7 != 0) {
        iVar11 = 0;
        do {
          FUN_01e97a20(local_f8,iVar11);
          if ((local_f8[0] != 0) && (*(short *)(local_f8[0] + 0x1a) != 0)) {
            uVar2 = *(ushort *)(param_2 + 2);
            if ((local_f8[0] == 0) || (*(long *)(local_f8[0] + 0x10) == 0)) {
              uVar8 = 0;
            }
            else {
              uVar8 = FUN_013fcabc(*(long *)(local_f8[0] + 0x10) + -0x28);
            }
            if (uVar8 != uVar2) goto LAB_01ec96a4;
            if ((local_f8[0] != 0) && (*(short *)(local_f8[0] + 0x1a) != 0)) {
              FUN_00d8e6c4(&local_d8,local_f8);
              FUN_01c45238(&local_c8,local_f8[2]);
              FUN_01e99934(&local_80,local_f8);
              if (*local_78 == '\0') {
                local_48 = (long *)0x0;
              }
              else {
                local_88 = 0;
                local_98 = 0;
                uStack_90 = 0;
                lVar9 = FUN_019c9f30(&local_98,9,local_78,local_70);
                if (lVar9 != 0) {
                  *(undefined2 *)((long)&local_98 + (lVar9 - (ulong)(lVar9 == 9)) * 2) = 0;
                }
                FUN_01ec8f14(&local_48,*(undefined8 *)(param_1 + 8),&local_98);
              }
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
              plVar5 = local_c0;
              local_c0 = (long *)0x0;
              if (plVar5 != (long *)0x0) {
                plVar1 = plVar5 + 5;
                do {
                  lVar9 = *plVar1;
                  iVar7 = (int)lVar9 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *(int *)plVar1 = iVar7;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 == 0) {
                  (**(code **)(*plVar5 + 0x10))();
                }
                else if ((int)lVar9 == 0) goto LAB_01ec9938;
              }
              local_c0 = local_48;
              FUN_00d8e444(local_f8);
              goto LAB_01ec97e4;
            }
            goto LAB_01ec9704;
          }
LAB_01ec96a4:
          FUN_00d8e444(local_f8);
          iVar11 = iVar11 + 1;
        } while (iVar7 != iVar11);
      }
      local_f8[1] = 0;
      local_f8[2] = 0;
      local_f8[0] = 0;
LAB_01ec9704:
      FUN_00d8e444(local_f8);
    }
    plVar5 = (long *)CONCAT17(uStack_a1,local_a8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 5;
      do {
        lVar10 = *plVar1;
        iVar7 = (int)lVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_01ec9938;
    }
    if (local_c0 != (long *)0x0) {
      plVar5 = local_c0 + 5;
      do {
        lVar10 = *plVar5;
        iVar7 = (int)lVar10 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *(int *)plVar5 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
LAB_01ec9938:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    FUN_00d8e444(&local_d8);
  }
  return;
}


