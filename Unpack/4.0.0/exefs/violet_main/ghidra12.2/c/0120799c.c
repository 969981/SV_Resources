/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0120799c; name: FUN_0120799c
 */


void FUN_0120799c(long *param_1,long param_2,long param_3,long param_4)

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
  long *plVar11;
  long *plVar12;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar6 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
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
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar10;
  param_1[4] = (long)(puVar6 + 0x88);
  plVar11 = param_1 + 5;
  *plVar11 = (long)(puVar6 + 0xd8);
  plVar12 = param_1 + 6;
  *plVar12 = 0;
  param_1[7] = 0;
  FUN_00d1a3f4(plVar12,plVar11);
  *param_1 = (long)&PTR_FUN_045d0398;
  param_1[4] = (long)&PTR_LAB_045d0410;
  *plVar11 = (long)&DAT_045d0460;
  param_1[0xd] = param_4;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = param_1[1];
  param_1[0x14] = 0xfffffffffffffff;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_1[1];
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  param_1[0x19] = 0xfffffffffffffff;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x1f,0,1);
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = param_1[1];
  param_1[0x25] = 0x3fffffffffffffff;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = param_1[1];
  param_1[0x2c] = 0x3fffffffffffffff;
  param_1[0x2d] = 0;
  lVar9 = FUN_0013b420(&LAB_02bae154,param_1);
  param_1[0xe] = lVar9;
  FUN_00121b60(lVar9,&LAB_02bae354);
  FUN_00cf6cd0(param_1[0xe],0,0);
  FUN_027073e0(param_1[0xe],"ThreadTableKey");
  FUN_00c5db00(param_1[0xe],0);
  DAT_04859eb0 = param_1 + 0x11;
  FUN_017e6980(param_1[0xe],param_1);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00c43ef0(&local_58,plVar12);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if ((long *)local_58[2] == plVar11) {
    FUN_00d337d8(&local_68,&local_58);
  }
  puVar7 = local_58;
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
        local_48 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_01207d8c;
  }
  FUN_00d334b4(&DAT_04859ea0,&local_68);
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
        local_58 = (undefined8 *)*puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_58);
      }
    }
    else if (sVar3 == 0) {
LAB_01207d8c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


