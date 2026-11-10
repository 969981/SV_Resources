/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b10a68; name: FUN_02b10a68
 */


void FUN_02b10a68(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long local_28;
  
  (**(code **)(*(long *)*param_2 + 0x198))(&local_28);
  plVar7 = (long *)*param_1;
  *param_1 = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *param_1 = local_28;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x12) = *(undefined2 *)((long)param_2 + 0x12);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined2 *)((long)param_1 + 0x16) = *(undefined2 *)((long)param_2 + 0x16);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)param_2 + 0x1b);
  *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x1d) = *(undefined1 *)((long)param_2 + 0x1d);
  *(undefined1 *)((long)param_1 + 0x1e) = *(undefined1 *)((long)param_2 + 0x1e);
  *(undefined1 *)((long)param_1 + 0x1f) = *(undefined1 *)((long)param_2 + 0x1f);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  *(undefined1 *)((long)param_1 + 0x26) = *(undefined1 *)((long)param_2 + 0x26);
  *(undefined1 *)((long)param_1 + 0x27) = *(undefined1 *)((long)param_2 + 0x27);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_2 + 0x34);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x35) = *(undefined1 *)((long)param_2 + 0x35);
  *(undefined1 *)((long)param_1 + 0x379) = *(undefined1 *)((long)param_2 + 0x379);
  *(undefined2 *)((long)param_1 + 0x2a) = *(undefined2 *)((long)param_2 + 0x2a);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  memcpy(param_1 + 7,param_2 + 7,0x310);
  memcpy(param_1 + 0x69,param_2 + 0x69,0x31);
  uVar3 = *(undefined8 *)((long)param_2 + 0x382);
  uVar4 = *(undefined8 *)((long)param_2 + 0x38a);
  uVar9 = *(undefined8 *)((long)param_2 + 0x37a);
  param_1[0x72] = param_2[0x72];
  *(undefined8 *)((long)param_1 + 0x382) = uVar3;
  *(undefined8 *)((long)param_1 + 0x38a) = uVar4;
  *(undefined8 *)((long)param_1 + 0x37a) = uVar9;
  *(undefined4 *)(param_1 + 0x73) = *(undefined4 *)(param_2 + 0x73);
  *(undefined1 *)((long)param_1 + 0x39c) = *(undefined1 *)((long)param_2 + 0x39c);
  *(undefined1 *)((long)param_1 + 0x39d) = *(undefined1 *)((long)param_2 + 0x39d);
  *(undefined1 *)((long)param_1 + 0x39e) = *(undefined1 *)((long)param_2 + 0x39e);
  *(undefined1 *)((long)param_1 + 0x39f) = *(undefined1 *)((long)param_2 + 0x39f);
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
  *(undefined2 *)((long)param_1 + 0x3a2) = *(undefined2 *)((long)param_2 + 0x3a2);
  *(undefined1 *)((long)param_1 + 0x3a4) = *(undefined1 *)((long)param_2 + 0x3a4);
  *(undefined1 *)((long)param_1 + 0x3a5) = *(undefined1 *)((long)param_2 + 0x3a5);
  *(undefined1 *)((long)param_1 + 0x3a6) = *(undefined1 *)((long)param_2 + 0x3a6);
  *(undefined1 *)((long)param_1 + 0x3a7) = *(undefined1 *)((long)param_2 + 0x3a7);
  *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)(param_2 + 0x75);
  *(undefined2 *)((long)param_1 + 0x3ac) = *(undefined2 *)((long)param_2 + 0x3ac);
  *(undefined1 *)((long)param_1 + 0x3ae) = *(undefined1 *)((long)param_2 + 0x3ae);
  *(undefined1 *)((long)param_1 + 0x3af) = *(undefined1 *)((long)param_2 + 0x3af);
  *(undefined1 *)(param_1 + 0x76) = *(undefined1 *)(param_2 + 0x76);
  *(undefined1 *)((long)param_1 + 0x3b1) = *(undefined1 *)((long)param_2 + 0x3b1);
  *(undefined1 *)((long)param_1 + 0x3b2) = *(undefined1 *)((long)param_2 + 0x3b2);
  *(undefined2 *)((long)param_1 + 0x3b4) = *(undefined2 *)((long)param_2 + 0x3b4);
  return;
}


