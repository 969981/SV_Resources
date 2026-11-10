/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0153e704; name: FUN_0153e704
 */


void FUN_0153e704(long *param_1,long param_2,int *param_3)

{
  short *psVar1;
  uint *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  char *pcVar16;
  long *plVar17;
  long *local_48;
  
  puVar6 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar8 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar12 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar12;
  param_1[4] = (long)(puVar6 + 0x88);
  plVar14 = param_1 + 5;
  *plVar14 = (long)(puVar6 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar14);
  *param_1 = (long)&PTR_FUN_045ad710;
  param_1[4] = (long)&PTR_LAB_045ad788;
  *plVar14 = (long)&DAT_045ad7d8;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  plVar17 = param_1 + 0x15;
  *plVar17 = 0;
  plVar14 = param_1 + 0x16;
  *plVar14 = 0;
  plVar15 = param_1 + 0x17;
  *plVar15 = param_2;
  FUN_0153ea20(param_1 + 0x18);
  FUN_0153ea60(param_1 + 0x25);
  FUN_0153eaa0(param_1 + 0x32);
  FUN_0153eae0(param_1 + 0x3f);
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  if (((param_3 != (int *)0x0) && (4 < *(ushort *)((long)param_3 - (long)*param_3))) &&
     (uVar13 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar13 != 0)) {
    puVar2 = (uint *)((long)param_3 + uVar13);
    pcVar16 = (char *)((long)puVar2 + (ulong)*puVar2 + 4);
    if (*pcVar16 == '\0') {
      plVar11 = (long *)FUN_00d44228();
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar9 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar9;
      FUN_00cf9884(&local_48,uVar9,pcVar16);
      plVar11 = local_48;
    }
    plVar10 = (long *)*plVar17;
    *plVar17 = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    param_1[0x15] = (long)plVar11;
    FUN_0153f85c(param_1,param_3);
    FUN_015438e4(param_1,param_3);
    FUN_01542018(param_1,param_3);
  }
  FUN_0153ebbc(&local_48,*plVar15,plVar15);
  FUN_0153eb20(plVar14,&local_48);
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(undefined4 *)(*plVar14 + 0x4b8) = 0x20;
  return;
}


