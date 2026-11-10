/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe25cc; name: FUN_00fe25cc
 */


void FUN_00fe25cc(undefined1 *param_1,long *param_2,char *param_3,byte *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  byte *pbVar12;
  code *pcVar13;
  undefined1 *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  pcVar13 = (code *)*param_2;
  uVar4 = param_2[1];
  if (param_4 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_88 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_80 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_78 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_70 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x18))();
    }
  }
  else {
    local_78 = strlen((char *)param_4);
    bVar6 = *param_4;
    local_88 = &DAT_cbf29ce484222645;
    pbVar12 = param_4;
    while (bVar6 != 0) {
      pbVar12 = pbVar12 + 1;
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar6) * 0x100000001b3);
      bVar6 = *pbVar12;
    }
    local_70 = (long *)0x0;
    pbStack_80 = param_4;
  }
  cVar5 = *param_3;
  if (cVar5 == '\x02') {
    if ((*(long *)(param_3 + 8) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_3 + 8) + 0x10), lVar11 == 0)) {
LAB_00fe2828:
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
    }
    else {
      plVar10 = (long *)(lVar11 + ((long)uVar4 >> 1) + -0x28);
joined_r0x00fe2820:
      if ((uVar4 & 1) != 0) {
        pcVar13 = *(code **)(pcVar13 + *plVar10);
      }
      (*pcVar13)(&local_68,plVar10,&local_88);
    }
  }
  else {
    if (cVar5 != '\x03') {
      if (((cVar5 != '\x01') && (cVar5 != '\0')) || (*(long *)(param_3 + 8) == 0))
      goto LAB_00fe2828;
      plVar10 = (long *)(*(long *)(param_3 + 8) + ((long)uVar4 >> 1));
      goto joined_r0x00fe2820;
    }
    FUN_00fe2954(&local_68,param_3 + 8,pcVar13,uVar4,&local_88);
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00ca1a48(&local_58,&local_68);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00ca1ea4(param_1 + 8,&local_58);
  puVar8 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_00fe2708;
  }
  puVar8 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_58 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_58);
      }
    }
    else if (sVar3 == 0) {
LAB_00fe2708:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


