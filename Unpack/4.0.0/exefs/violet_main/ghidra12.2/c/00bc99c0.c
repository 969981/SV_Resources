/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc99c0; name: FUN_00bc99c0
 */


void FUN_00bc99c0(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  string *this;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *local_48;
  undefined1 *puStack_40;
  undefined1 local_38;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x19b5);
  }
  bVar2 = *(byte *)(param_2 + 0x10);
  uVar8 = (uint)bVar2;
  if (bVar2 == 0) goto LAB_00bc9af0;
  if ((bVar2 & 1) == 0) {
    if ((bVar2 >> 1 & 1) != 0) {
LAB_00bc9a48:
      uVar1 = *(undefined4 *)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      uVar8 = *(uint *)(param_2 + 0x10);
    }
  }
  else {
    this = *(string **)(param_1 + 0x18);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    if (this != *(string **)(param_2 + 0x18)) {
      if (this == *(string **)PTR_DAT_047dabb0) {
        FUN_00b6eb88();
      }
      else {
        std::string::operator=(this,*(string **)(param_2 + 0x18));
      }
    }
    uVar8 = *(uint *)(param_2 + 0x10);
    if ((uVar8 >> 1 & 1) != 0) goto LAB_00bc9a48;
  }
  if ((uVar8 >> 2 & 1) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    if (puVar6 == (undefined8 *)0x0) {
      lVar7 = tpidr_el0;
      plVar9 = *(long **)(lVar7 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x58,8);
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_FUN_0455b2c0;
      puVar6[1] = puVar6 + 2;
      puVar6[9] = 0;
      *(undefined1 *)(puVar6 + 10) = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      *(undefined8 **)(param_1 + 0x20) = puVar6;
    }
    lVar7 = *(long *)(param_2 + 0x20);
    if (lVar7 == 0) {
      lVar7 = *(long *)(DAT_0483a810 + 0x20);
    }
    FUN_00bcaea8(puVar6,lVar7);
  }
LAB_00bc9af0:
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
          lVar7 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar4) {
            DAT_0483aa88 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar7 == 0) {
          FUN_00bb162c(&local_48);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar7 == 1) {
            sched_yield();
            lVar7 = DAT_0483aa88;
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


