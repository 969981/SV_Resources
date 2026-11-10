/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01010f10; name: FUN_01010f10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01010f10(long *param_1,long *param_2,undefined8 param_3)

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
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_00d0a71c(&local_40,param_3);
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
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar11);
  *param_1 = (long)&DAT_045a9b70;
  param_1[4] = (long)&PTR_LAB_045a9c20;
  *plVar11 = (long)&DAT_045a9c70;
  param_1[0xd] = 0;
  param_1[8] = (long)&DAT_cbf29ce484222645;
  param_1[9] = (long)&DAT_03c886bc;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  FUN_00d0a71c(param_1 + 0xc,&local_40);
  puVar7 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_40 + 3);
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
      piVar2 = (int *)((long)local_40 + 0x1c);
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
        local_18 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_18);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *param_1 = (long)&DAT_045a9a18;
  param_1[4] = (long)&PTR_LAB_045a9ac8;
  param_1[5] = (long)&DAT_045a9b18;
  *(undefined4 *)((long)param_1 + 0xcc) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x18,0,1);
  lVar9 = *param_2;
  param_1[0x1a] = lVar9;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
    plVar11 = (long *)(lVar9 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[0x1b] = -1;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0xffff;
  *(undefined8 *)((long)param_1 + 0xe4) = 0xbf80000000000002;
  lVar10 = _UNK_03cabe58;
  lVar9 = _DAT_03cabe50;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0x3f0000003f000000;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(undefined1 *)((long)param_1 + 0x222) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x81] = lVar10;
  param_1[0x80] = lVar9;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = lVar10;
  param_1[0x28] = lVar9;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = lVar10;
  param_1[0x2e] = lVar9;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = lVar10;
  param_1[0x34] = lVar9;
  lVar10 = _UNK_03caa988;
  lVar9 = _DAT_03caa980;
  param_1[0x37] = _UNK_03caa988;
  param_1[0x36] = lVar9;
  param_1[0x41] = lVar10;
  param_1[0x40] = lVar9;
  param_1[0x43] = lVar10;
  param_1[0x42] = lVar9;
  return;
}


