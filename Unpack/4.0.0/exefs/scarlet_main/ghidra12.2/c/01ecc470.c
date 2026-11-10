/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ecc470; name: FUN_01ecc470
 */


void FUN_01ecc470(undefined8 param_1,undefined8 param_2,PosixTime *param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  short sVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  int iVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  long *local_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  byte *pbStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  iVar11 = nn::time::ToCalendarTime
                     ((CalendarTime *)&local_48,(CalendarAdditionalInfo *)&local_60,param_3);
  if (iVar11 == 0) {
    uVar4 = -local_50._4_4_;
    if (-1 < (long)local_50) {
      uVar4 = local_50._4_4_;
    }
    uVar14 = (long)((ulong)uVar4 * 0x12345678a000) >> 0x38;
    uVar4 = (int)(uVar4 + (char)((ulong)uVar4 * 0x12345678a000 >> 0x38) * -0xe10) / 0x3c;
    pcVar5 = "msg_o_mystery_cap_18";
    if ((uVar4 & 0xff) != 0) {
      pcVar5 = "msg_o_mystery_cap_15";
    }
    iVar11 = (int)(char)uVar4;
    pcVar15 = "msg_o_mystery_cap_16";
    if ((local_50 & 0x8000000000000000) != 0) {
      pcVar15 = pcVar5;
    }
    pcVar5 = "msg_o_mystery_cap_17";
    if ((uVar4 & 0xff) != 0) {
      pcVar5 = "msg_o_mystery_cap_14";
    }
    if (0 < (int)local_50._4_4_) {
      pcVar15 = pcVar5;
    }
  }
  else {
    local_48 = nn::time::ToCalendarTimeInUtc(param_3);
    iVar11 = 0;
    uVar14 = 0;
    pcVar15 = "msg_o_mystery_cap_11";
  }
  FUN_00ea425c(&local_68);
  if (local_68 != (long *)0x0) {
    thunk_FUN_011b6a88(local_68,0,
                       (int)(short)local_48 +
                       (((int)(short)local_48 / 100 + ((int)(short)local_48 >> 0x1f)) -
                       (int)((long)(short)local_48 * 0x51eb851f >> 0x3f)) * -100,2,2,1);
    thunk_FUN_011b6a88(local_68,1,local_48._2_1_,2,2,1);
    thunk_FUN_011b6a88(local_68,2,local_48._3_1_,2,2,1);
    thunk_FUN_011b6a88(local_68,3,local_48._4_1_,2,2,1);
    thunk_FUN_011b6a88(local_68,4,local_48._5_1_,2,2,1);
    thunk_FUN_011b6a88(local_68,5,uVar14 & 0xffffffff,2,2,1);
    thunk_FUN_011b6a88(local_68,6,iVar11,2,2,1);
    plVar1 = local_68;
    local_98 = 0x2a587ac03253f2d6;
    pcStack_90 = "mystery";
    bVar7 = *pcVar15;
    local_88 = 7;
    local_80 = (long *)0x0;
    local_b8 = &DAT_cbf29ce484222645;
    pbVar12 = (byte *)pcVar15;
    while (bVar7 != 0) {
      pbVar12 = pbVar12 + 1;
      local_b8 = (undefined1 *)(((ulong)local_b8 ^ (ulong)bVar7) * 0x100000001b3);
      bVar7 = *pbVar12;
    }
    local_a8 = 0x14;
    local_a0 = (long *)0x0;
    pbStack_b0 = (byte *)pcVar15;
    FUN_00f11e84(&local_78,&local_98,&local_b8);
    FUN_01dbf208(&local_70,plVar1,&local_78);
    if (local_78 != (long *)0x0) {
      plVar1 = local_78 + 5;
      do {
        lVar13 = *plVar1;
        iVar11 = (int)lVar13 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = iVar11;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
      else if ((int)lVar13 == 0) goto LAB_01ecc7d0;
    }
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      local_c8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      FUN_00ca1a48(&local_c8,param_1);
      local_d0 = local_70;
      if (local_70 != (long *)0x0) {
        plVar1 = local_70 + 5;
        do {
          lVar13 = *plVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)lVar13 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((int)lVar13 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      FUN_0111d018(&local_c8,param_2,&local_d0);
      if (local_d0 != (long *)0x0) {
        plVar1 = local_d0 + 5;
        do {
          lVar13 = *plVar1;
          iVar11 = (int)lVar13 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*local_d0 + 0x10))();
        }
        else if ((int)lVar13 == 0) goto LAB_01ecc7d0;
      }
      puVar10 = local_c8;
      if (local_c8 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_c8 + 3);
        do {
          sVar6 = *psVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar9) {
            *psVar2 = sVar6 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 == 1) {
          piVar3 = (int *)((long)local_c8 + 0x1c);
          do {
            iVar11 = *piVar3;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar9) {
              *piVar3 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_98 = *puVar10;
            FUN_00c44438(lVar13 + 0x8040,&local_98);
          }
        }
        else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (local_70 != (long *)0x0) {
        plVar1 = local_70 + 5;
        do {
          lVar13 = *plVar1;
          iVar11 = (int)lVar13 + -1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
        else if ((int)lVar13 == 0) {
LAB_01ecc7d0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (local_68 != (long *)0x0) {
      lVar13 = local_68[6];
      psVar2 = (short *)(lVar13 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar9) {
          *psVar2 = sVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


