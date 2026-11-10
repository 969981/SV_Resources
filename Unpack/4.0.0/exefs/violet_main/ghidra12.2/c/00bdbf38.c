/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bdbf38; name: FUN_00bdbf38
 */


void FUN_00bdbf38(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  string *psVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_38;
  undefined1 *puStack_30;
  undefined1 local_28;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x37bd);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_00ba867c(param_1 + 0x18,*(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x18));
    memcpy((void *)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x18) * 4 + 8),
           (void *)(*(long *)(param_2 + 0x20) + 8),(long)*(int *)(param_2 + 0x18) << 2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    FUN_00ba867c(param_1 + 0x30,*(int *)(param_1 + 0x30) + *(int *)(param_2 + 0x30));
    memcpy((void *)(*(long *)(param_1 + 0x38) + (long)*(int *)(param_1 + 0x30) * 4 + 8),
           (void *)(*(long *)(param_2 + 0x38) + 8),(long)*(int *)(param_2 + 0x30) << 2);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_2 + 0x30);
  }
  FUN_00be295c(param_1 + 0x58,param_2 + 0x58);
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 0x3fc) != 0) {
    if ((uVar4 >> 2 & 1) != 0) {
      psVar5 = *(string **)(param_1 + 0x48);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if (psVar5 != *(string **)(param_2 + 0x48)) {
        if (psVar5 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar5,*(string **)(param_2 + 0x48));
        }
      }
      uVar4 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar4 >> 3 & 1) != 0) {
      psVar5 = *(string **)(param_1 + 0x50);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if (psVar5 != *(string **)(param_2 + 0x50)) {
        if (psVar5 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar5,*(string **)(param_2 + 0x50));
        }
      }
    }
  }
  uVar6 = *(ulong *)(param_2 + 8);
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar7 = *(ulong *)(param_1 + 8);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_00b7714c((ulong *)(param_1 + 8));
    uVar6 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar7 = uVar7 & 0xfffffffffffffffe;
  }
  if ((uVar6 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_28 = 0;
      local_38 = PTR_DAT_047daba0 + 0x10;
      puStack_30 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar3 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar2) {
            DAT_0483aa88 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar3 == 0) {
          FUN_00bb162c(&local_38);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar3 == 1) {
            sched_yield();
            lVar3 = DAT_0483aa88;
          }
        }
      }
    }
    uVar6 = DAT_0483aa90;
  }
  else {
    uVar6 = uVar6 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar7,uVar6);
  return;
}


