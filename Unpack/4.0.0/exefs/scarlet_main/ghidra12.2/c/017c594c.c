/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017c594c; name: FUN_017c594c
 */


void FUN_017c594c(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,long *param_4,
                 undefined4 param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_38;
  
  param_4[9] = param_1._8_8_;
  param_4[8] = param_1._0_8_;
  param_4[0xb] = param_1._8_8_;
  param_4[10] = param_1._0_8_;
  pcVar9 = (code *)param_4[0x11];
  param_4[0xd] = param_2._8_8_;
  param_4[0xc] = param_2._0_8_;
  param_4[0xf] = CONCAT44(param_1._12_4_ - param_1._12_4_,param_1._8_4_ - param_1._8_4_);
  param_4[0xe] = CONCAT44(param_1._4_4_ - param_1._4_4_,param_1._0_4_ - param_1._0_4_);
  if (pcVar9 != (code *)0x0) {
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    param_4[0x10] = 0;
    param_4[0x11] = 0;
    (*pcVar9)(param_4 + 0x14);
  }
  param_4[0x12] = (long)&LAB_02b849a0;
  pcVar9 = (code *)param_4[0x21];
  param_4[0x10] = (long)&LAB_02b84980;
  param_4[0x11] = (long)&LAB_02b8499c;
  param_4[0x13] = (long)&LAB_02b849ac;
  param_4[0x14] = (long)&LAB_02b8493c;
  if (pcVar9 != (code *)0x0) {
    param_4[0x22] = 0;
    param_4[0x23] = 0;
    param_4[0x20] = 0;
    param_4[0x21] = 0;
    (*pcVar9)(param_4 + 0x24);
  }
  param_4[0x30] = param_3;
  param_4[0x31] = 0;
  *(undefined4 *)(param_4 + 0x32) = param_5;
  param_4[0x20] = (long)&LAB_02b849b8;
  param_4[0x21] = (long)&LAB_02b849d4;
  param_4[0x22] = (long)&LAB_02b849d8;
  param_4[0x23] = (long)&LAB_02b849e4;
  param_4[0x24] = (long)&LAB_02b84944;
  if ((*(byte *)(param_4 + 0x34) & 1) != 0) {
    if (((*PTR_DAT_047de6e0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047de6e0), iVar7 != 0)) {
      FUN_00100190(&LAB_02b846dc,PTR_DAT_047de6e8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047de6e0);
    }
    uVar10 = *(undefined8 *)PTR_DAT_047de6e8;
    *(undefined8 *)PTR_DAT_047de6f0 = uVar10;
    (**(code **)(*param_4 + 0x18))(local_50,param_4);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    if ((long *)local_50[0][2] == param_4 + 5) {
      FUN_017c5d9c(&local_70,local_50);
    }
    puVar6 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
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
        piVar2 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_38 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) goto LAB_017c5b58;
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_017c60c0(&local_60,&local_70);
    lVar8 = FUN_017c6490(uVar10,&local_60,&LAB_0233b3ec);
    puVar6 = local_60;
    param_4[0x33] = lVar8;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
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
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_50[0] = (undefined8 *)*puVar6;
          FUN_00c44438(lVar8 + 0x8040,local_50);
        }
      }
      else if (sVar3 == 0) goto LAB_017c5b58;
    }
    puVar6 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
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
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_50[0] = (undefined8 *)*puVar6;
          FUN_00c44438(lVar8 + 0x8040,local_50);
        }
      }
      else if (sVar3 == 0) {
LAB_017c5b58:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  *(byte *)(param_4 + 0x34) = 0;
  return;
}


