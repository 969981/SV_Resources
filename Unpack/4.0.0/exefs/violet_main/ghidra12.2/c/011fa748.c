/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011fa748; name: FUN_011fa748
 */


void FUN_011fa748(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  plVar7 = (long *)FUN_0145966c();
  local_70 = &DAT_467e2758d1d5ce6e;
  pcStack_68 = "HideModelStencil";
  local_60 = 0x10;
  local_58 = (long *)0x0;
  pbStack_48 = (byte *)(**(code **)(*plVar7 + 0x50))(plVar7,&local_70,0);
  if (pbStack_48 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_50 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_38 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  else {
    local_40 = strlen((char *)pbStack_48);
    bVar2 = *pbStack_48;
    local_50 = &DAT_cbf29ce484222645;
    pbVar8 = pbStack_48;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar8;
    }
    local_38 = (long *)0x0;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_00eac828(*(undefined8 *)(param_1 + 0x120),&local_50);
  plVar7 = *(long **)(*(long *)(param_1 + 0x120) + 200);
  if (plVar7 == (long *)0x0) {
    FUN_00eb7830(0,1);
    FUN_00eaeadc(0,0x40,0x40);
    FUN_00eb93e8(0,8,1,1,3,8,1,1,3);
    FUN_00eaf320(0,0xff,0xff);
    FUN_00eafb68(0,0xff,0xff);
    FUN_015b3280(0,0,1,1,1,1);
  }
  else {
    plVar1 = plVar7 + 5;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00eb7830(plVar7,1);
    FUN_00eaeadc(plVar7,0x40,0x40);
    FUN_00eb93e8(plVar7,8,1,1,3,8,1,1,3);
    FUN_00eaf320(plVar7,0xff,0xff);
    FUN_00eafb68(plVar7,0xff,0xff);
    FUN_015b3280(plVar7,0,1,1,1,1);
    do {
      lVar5 = *plVar1;
      iVar6 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


