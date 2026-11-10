/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bbdc24; name: FUN_00bbdc24
 */


void FUN_00bbdc24(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_38;
  undefined1 *puStack_30;
  undefined1 local_28;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0xa91);
  }
  bVar2 = *(byte *)(param_2 + 0x10);
  uVar6 = (uint)bVar2;
  if (bVar2 != 0) {
    if ((bVar2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      *(undefined4 *)(param_1 + 0x18) = uVar1;
      uVar6 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x1c);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      *(undefined4 *)(param_1 + 0x1c) = uVar1;
    }
  }
  uVar7 = *(ulong *)(param_2 + 8);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    uVar8 = FUN_00b7714c();
    uVar7 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  }
  if ((uVar7 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_28 = 0;
      local_38 = PTR_DAT_047daba0 + 0x10;
      puStack_30 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar5 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar4) {
            DAT_0483aa88 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar5 == 0) {
          FUN_00bb162c(&local_38);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar5 == 1) {
            sched_yield();
            lVar5 = DAT_0483aa88;
          }
        }
      }
    }
    uVar7 = DAT_0483aa90;
  }
  else {
    uVar7 = uVar7 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar8,uVar7);
  return;
}


