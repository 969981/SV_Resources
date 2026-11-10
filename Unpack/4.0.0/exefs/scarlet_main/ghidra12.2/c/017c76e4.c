/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017c76e4; name: FUN_017c76e4
 */


void FUN_017c76e4(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,long *param_4,
                 undefined4 param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  param_4[2] = 0;
  *param_4 = (long)(PTR_DAT_047d66f8 + 0x10);
  *(undefined4 *)(param_4 + 3) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar9 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar10 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *param_4 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_4[1] = lVar10;
  param_4[4] = (long)(puVar6 + 0x88);
  plVar12 = param_4 + 5;
  *plVar12 = (long)(puVar6 + 0xd8);
  param_4[7] = 0;
  param_4[6] = 0;
  FUN_00d1a3f4(param_4 + 6,plVar12);
  *param_4 = (long)&PTR_FUN_045b65d0;
  param_4[4] = (long)&PTR_LAB_045b6650;
  *plVar12 = (long)&DAT_045b66a0;
  param_4[9] = param_1._8_8_;
  param_4[8] = param_1._0_8_;
  param_4[0xb] = param_1._8_8_;
  param_4[10] = param_1._0_8_;
  param_4[0x10] = (long)&LAB_02b84980;
  param_4[0x11] = (long)&LAB_02b8499c;
  param_4[0x13] = (long)&LAB_02b849ac;
  param_4[0x14] = (long)&LAB_02b8493c;
  param_4[0x12] = (long)&LAB_02b849a0;
  param_4[0x20] = (long)&LAB_02b849b8;
  param_4[0x21] = (long)&LAB_02b849d4;
  param_4[0x22] = (long)&LAB_02b849d8;
  param_4[0xd] = param_2._8_8_;
  param_4[0xc] = param_2._0_8_;
  param_4[0xf] = CONCAT44(param_1._12_4_ - param_1._12_4_,param_1._8_4_ - param_1._8_4_);
  param_4[0xe] = CONCAT44(param_1._4_4_ - param_1._4_4_,param_1._0_4_ - param_1._0_4_);
  param_4[0x30] = param_3;
  param_4[0x31] = 0;
  param_4[0x23] = (long)&LAB_02b849e4;
  param_4[0x24] = (long)&LAB_02b84944;
  puVar6 = PTR_DAT_047de6e0;
  *(undefined4 *)(param_4 + 0x32) = param_5;
  *(undefined1 *)(param_4 + 0x34) = 0;
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047de6e0), iVar8 != 0)) {
    FUN_00100190(&LAB_02b846dc,PTR_DAT_047de6e8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047de6e0);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047de6e8;
  *(undefined8 *)PTR_DAT_047de6f0 = uVar11;
  (**(code **)(*param_4 + 0x18))(local_48,param_4);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if ((long *)local_48[0][2] == plVar12) {
    FUN_017c5d9c(&local_68,local_48);
  }
  puVar7 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48[0] + 3);
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
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_017c7940;
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_017c60c0(&local_58,&local_68);
  lVar9 = FUN_017c6490(uVar11,&local_58,&LAB_0233b3ec);
  puVar7 = local_58;
  param_4[0x33] = lVar9;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
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
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_48[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_017c7940;
  }
  puVar7 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
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
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_48[0] = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,local_48);
      }
    }
    else if (sVar3 == 0) {
LAB_017c7940:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


