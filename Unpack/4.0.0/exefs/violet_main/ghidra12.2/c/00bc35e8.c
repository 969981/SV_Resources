/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc35e8; name: FUN_00bc35e8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bc35e8(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  string *psVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *local_48;
  undefined1 *puStack_40;
  undefined1 local_38;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x130f);
  }
  uVar7 = *(uint *)(param_2 + 0x10);
  if ((uVar7 & 0xff) != 0) {
    if ((uVar7 & 1) != 0) {
      psVar8 = *(string **)(param_1 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (psVar8 != *(string **)(param_2 + 0x18)) {
        if (psVar8 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar8,*(string **)(param_2 + 0x18));
        }
      }
      uVar7 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar7 >> 1 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      uVar7 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar7 >> 2 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      uVar7 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar7 >> 3 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      uVar7 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar7 >> 4 & 1) != 0) {
      psVar8 = *(string **)(param_1 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      if (psVar8 != *(string **)(param_2 + 0x28)) {
        if (psVar8 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar8,*(string **)(param_2 + 0x28));
        }
      }
      uVar7 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar7 >> 5 & 1) != 0) {
      psVar8 = *(string **)(param_1 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      if (psVar8 != *(string **)(param_2 + 0x30)) {
        if (psVar8 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar8,*(string **)(param_2 + 0x30));
        }
      }
      uVar7 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar7 >> 6 & 1) != 0) {
      psVar8 = *(string **)(param_1 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
      if (psVar8 != *(string **)(param_2 + 0x40)) {
        if (psVar8 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar8,*(string **)(param_2 + 0x40));
        }
      }
      uVar7 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar7 >> 7 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x3c);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
      uVar7 = *(uint *)(param_2 + 0x10);
    }
  }
  if ((uVar7 & 0xff00) != 0) {
    if ((uVar7 >> 8 & 1) != 0) {
      psVar8 = *(string **)(param_1 + 0x48);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
      if (psVar8 != *(string **)(param_2 + 0x48)) {
        if (psVar8 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar8,*(string **)(param_2 + 0x48));
        }
      }
      uVar7 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar7 >> 9 & 1) != 0) {
      puVar5 = *(undefined8 **)(param_1 + 0x50);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
      if (puVar5 == (undefined8 *)0x0) {
        lVar6 = tpidr_el0;
        plVar9 = *(long **)(lVar6 + 0x30);
        if (plVar9 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar9 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x60,8);
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 0xb) = 0;
        *puVar5 = &PTR_FUN_0455b050;
        puVar5[1] = puVar5 + 2;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        *(undefined8 **)(param_1 + 0x50) = puVar5;
      }
      lVar6 = *(long *)(param_2 + 0x50);
      if (lVar6 == 0) {
        lVar6 = *(long *)(DAT_0483a7b8 + 0x50);
      }
      FUN_00bc60dc(puVar5,lVar6);
    }
  }
  uVar10 = *(ulong *)(param_2 + 8);
  if ((uVar10 & 1) == 0) {
    return;
  }
  uVar11 = *(ulong *)(param_1 + 8);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_00b7714c((ulong *)(param_1 + 8));
    uVar10 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar11 = uVar11 & 0xfffffffffffffffe;
  }
  if ((uVar10 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_38 = 0;
      local_48 = PTR_DAT_047daba0 + 0x10;
      puStack_40 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar6 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar3) {
            DAT_0483aa88 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar6 == 0) {
          FUN_00bb162c(&local_48);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar6 == 1) {
            sched_yield();
            lVar6 = DAT_0483aa88;
          }
        }
      }
    }
    uVar10 = DAT_0483aa90;
  }
  else {
    uVar10 = uVar10 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar11,uVar10);
  return;
}


