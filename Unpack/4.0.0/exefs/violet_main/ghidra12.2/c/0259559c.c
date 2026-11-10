/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0259559c; name: FUN_0259559c
 */


void FUN_0259559c(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  short *psVar1;
  int *piVar2;
  undefined *puVar3;
  short sVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  char local_60 [8];
  undefined8 *local_58;
  undefined8 local_28;
  
  puVar3 = PTR_LAB_047df818;
  if (DAT_04852028 == '\0') {
    puVar3 = (undefined *)0x0;
  }
  if (param_3 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_78 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)param_3);
    bVar5 = *param_3;
    local_80 = &DAT_cbf29ce484222645;
    pbVar10 = param_3;
    while (bVar5 != 0) {
      pbVar10 = pbVar10 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar10;
    }
    local_68 = (long *)0x0;
    pbStack_78 = param_3;
  }
  FUN_0259623c(local_60,param_2,puVar3,0,&local_80);
  FUN_01519dc0(param_1,local_60);
  if (local_60[0] != '\0') {
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar4 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_28 = *local_58;
          FUN_00c44438(lVar9 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    local_60[0] = '\0';
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
}


