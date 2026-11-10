/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bdf134; name: FUN_00bdf134
 */


void FUN_00bdf134(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  string *this;
  ulong uVar7;
  undefined *local_38;
  undefined1 *puStack_30;
  undefined1 local_28;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x3b60);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    FUN_00ba867c(param_1 + 0x18,*(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x18));
    memcpy((void *)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x18) * 4 + 8),
           (void *)(*(long *)(param_2 + 0x20) + 8),(long)*(int *)(param_2 + 0x18) << 2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x18);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1fe) != 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      this = *(string **)(param_1 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (this != *(string **)(param_2 + 0x30)) {
        if (this == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(this,*(string **)(param_2 + 0x30));
        }
      }
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      *(undefined4 *)(param_1 + 0x38) = uVar2;
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x3c);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
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
    uVar6 = DAT_0483aa90;
  }
  else {
    uVar6 = uVar6 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar7,uVar6);
  return;
}


