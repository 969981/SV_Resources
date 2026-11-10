/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0169fbb0; name: FUN_0169fbb0
 */


void FUN_0169fbb0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0xffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 4) = 10;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xa0a0a0a;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x1a) = 10;
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 7) = 0xa0a0a0a;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined2 *)((long)param_1 + 0x36) = 10;
  *(undefined2 *)((long)param_1 + 0x3c) = 10;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x42) = 0;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0xa0a0a0a;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined2 *)((long)param_1 + 0x52) = 10;
  *(undefined1 *)(param_1 + 0xb) = 10;
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xa0a0a0a;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined2 *)((long)param_1 + 0x6e) = 10;
  *(undefined2 *)((long)param_1 + 0x74) = 10;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7a) = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)((long)param_1 + 0x91) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 10;
  *(undefined4 *)((long)param_1 + 0x8c) = 0xa0a0a0a;
  *(undefined2 *)((long)param_1 + 0x8a) = 10;
  *(undefined2 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x96) = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xa0a0a0a;
  *(undefined4 *)(param_1 + 0x17) = 0x64640000;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined2 *)((long)param_1 + 0xa6) = 10;
  *(undefined2 *)((long)param_1 + 0xac) = 10;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0xb2) = 0;
  *(undefined2 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)((long)param_1 + 0xbc) = 100;
  plVar6 = (long *)*param_1;
  *param_1 = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined2 *)((long)param_1 + 0xc) = 0xffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  *(undefined2 *)((long)param_1 + 0x1a) = 10;
  *(undefined1 *)(param_1 + 4) = 10;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xa0a0a0a;
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined2 *)((long)param_1 + 0x36) = 10;
  *(undefined1 *)((long)param_1 + 0x3c) = 10;
  *(undefined4 *)(param_1 + 7) = 0xa0a0a0a;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x42) = 0;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[9] = 0;
  *(undefined2 *)((long)param_1 + 0x52) = 10;
  *(undefined1 *)(param_1 + 0xb) = 10;
  *(undefined4 *)((long)param_1 + 0x54) = 0xa0a0a0a;
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined2 *)((long)param_1 + 0x6e) = 10;
  *(undefined1 *)((long)param_1 + 0x74) = 10;
  *(undefined4 *)(param_1 + 0xe) = 0xa0a0a0a;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7a) = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)((long)param_1 + 0x8a) = 10;
  *(undefined1 *)(param_1 + 0x12) = 10;
  *(undefined4 *)((long)param_1 + 0x8c) = 0xa0a0a0a;
  *(undefined2 *)((long)param_1 + 0x94) = 0;
  *(undefined1 *)((long)param_1 + 0x96) = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined2 *)((long)param_1 + 0xa6) = 10;
  *(undefined1 *)((long)param_1 + 0xac) = 10;
  *(undefined4 *)(param_1 + 0x15) = 0xa0a0a0a;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0xb2) = 0;
  *(undefined2 *)((long)param_1 + 0xb4) = 0;
  return;
}


