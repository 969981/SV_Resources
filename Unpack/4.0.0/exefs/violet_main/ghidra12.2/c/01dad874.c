/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dad874; name: FUN_01dad874
 */


void FUN_01dad874(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_24;
  
  *param_1 = &PTR_FUN_045e6be0;
  FUN_028afaf0();
  puVar5 = PTR_DAT_047d3f70;
  local_24 = 0;
  FUN_028afaf4(*(undefined8 *)PTR_DAT_047d3f70,&local_24);
  local_24 = 1;
  FUN_028afaf4(*(undefined8 *)puVar5,&local_24);
  local_24 = 2;
  FUN_028afaf4(*(undefined8 *)puVar5,&local_24);
  local_24 = 3;
  FUN_028afaf4(*(undefined8 *)puVar5,&local_24);
  local_24 = 4;
  FUN_028afaf4(*(undefined8 *)puVar5,&local_24);
  local_24 = 5;
  FUN_028afaf4(*(undefined8 *)puVar5,&local_24);
  local_24 = 6;
  FUN_028afaf4(*(undefined8 *)puVar5,&local_24);
  local_24 = 7;
  FUN_028afaf4(*(undefined8 *)puVar5,&local_24);
  local_24 = 8;
  FUN_028afaf4(*(undefined8 *)puVar5,&local_24);
  local_24 = 9;
  FUN_028afaf4(*(undefined8 *)puVar5,&local_24);
  local_24 = 10;
  FUN_028afaf4(*(undefined8 *)puVar5,&local_24);
  puVar5 = PTR_DAT_047d4e20;
  local_24 = 1;
  FUN_0175cd3c(*(undefined8 *)PTR_DAT_047d4e20,&local_24);
  local_24 = 2;
  FUN_0175cd3c(*(undefined8 *)puVar5,&local_24);
  plVar6 = (long *)param_1[0x4b];
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar9 = param_1[0x3f];
  param_1[0x3f] = 0;
  if (lVar9 != 0) {
    plVar6 = (long *)param_1[0x40];
    uVar10 = param_1[0x41];
    uVar11 = param_1[0x42];
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar6,lVar9,uVar10,uVar11);
        goto LAB_01dad9dc;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,uVar10,uVar11);
  }
LAB_01dad9dc:
  FUN_028afbac(param_1 + 0x39);
  FUN_028afbfc(param_1 + 0x34);
  FUN_028afc48(param_1 + 7);
  return;
}


