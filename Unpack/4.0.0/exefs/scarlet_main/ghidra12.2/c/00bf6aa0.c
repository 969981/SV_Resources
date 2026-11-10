/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bf6aa0; name: FUN_00bf6aa0
 */


undefined8 FUN_00bf6aa0(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_50;
  code *local_48;
  uint local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*(int *)(param_2 + 0x40) != 3) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,3);
    local_28 = 0;
    local_40 = 0x1ad;
    local_48 = (code *)0x3c0b149;
    local_38 = 0;
    uStack_30 = 0;
    std::string::append((char *)&local_38);
    FUN_00bb0e90(&local_50);
    FUN_00bb0d74(&local_50);
  }
  switch(*(undefined4 *)(PTR_DAT_047dad58 + (ulong)*(uint *)(param_2 + 0x3c) * 4)) {
  case 1:
    if (DAT_0483aa38 != 2) {
      local_40 = local_40 & 0xffffff00;
      local_50 = PTR_DAT_047daba0 + 0x10;
      local_48 = (code *)&LAB_00bf9520;
      if (DAT_0483aa38 != 2) {
        do {
          lVar3 = DAT_0483aa38;
          if (DAT_0483aa38 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483aa38,0x10);
          if (bVar2) {
            DAT_0483aa38 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar3 == 0) {
          FUN_00bb162c(&local_50);
          DAT_0483aa38 = 2;
        }
        else {
          while (lVar3 == 1) {
            sched_yield();
            lVar3 = DAT_0483aa38;
          }
        }
      }
    }
    goto LAB_00bf72e0;
  case 2:
    if (DAT_0483aa48 != 2) {
      local_40 = (uint)local_40._1_3_ << 8;
      local_50 = PTR_DAT_047daba0 + 0x10;
      local_48 = (code *)&LAB_00bf9c54;
      if (DAT_0483aa48 != 2) {
        do {
          lVar3 = DAT_0483aa48;
          if (DAT_0483aa48 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483aa48,0x10);
          if (bVar2) {
            DAT_0483aa48 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar3 == 0) {
          FUN_00bb162c(&local_50);
          DAT_0483aa48 = 2;
        }
        else {
          while (lVar3 == 1) {
            sched_yield();
            lVar3 = DAT_0483aa48;
          }
        }
      }
    }
    uVar4 = DAT_0483a9f8;
    break;
  case 3:
    if (DAT_0483aa40 != 2) {
      local_40 = (uint)local_40._1_3_ << 8;
      local_50 = PTR_DAT_047daba0 + 0x10;
      local_48 = (code *)&LAB_00bf98e4;
      if (DAT_0483aa40 != 2) {
        do {
          lVar3 = DAT_0483aa40;
          if (DAT_0483aa40 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483aa40,0x10);
          if (bVar2) {
            DAT_0483aa40 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar3 == 0) {
          FUN_00bb162c(&local_50);
          DAT_0483aa40 = 2;
        }
        else {
          while (lVar3 == 1) {
            sched_yield();
            lVar3 = DAT_0483aa40;
          }
        }
      }
    }
    uVar4 = DAT_0483a9f0;
    break;
  case 4:
    if (DAT_0483aa50 != 2) {
      local_40 = (uint)local_40._1_3_ << 8;
      local_50 = PTR_DAT_047daba0 + 0x10;
      local_48 = (code *)&LAB_00bf9fc8;
      if (DAT_0483aa50 != 2) {
        do {
          lVar3 = DAT_0483aa50;
          if (DAT_0483aa50 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483aa50,0x10);
          if (bVar2) {
            DAT_0483aa50 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar3 == 0) {
          FUN_00bb162c(&local_50);
          DAT_0483aa50 = 2;
        }
        else {
          while (lVar3 == 1) {
            sched_yield();
            lVar3 = DAT_0483aa50;
          }
        }
      }
    }
    uVar4 = DAT_0483aa00;
    break;
  case 5:
    if (DAT_0483aa60 != 2) {
      local_40 = (uint)local_40._1_3_ << 8;
      local_50 = PTR_DAT_047daba0 + 0x10;
      local_48 = (code *)&LAB_00bfa6b0;
      if (DAT_0483aa60 != 2) {
        do {
          lVar3 = DAT_0483aa60;
          if (DAT_0483aa60 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483aa60,0x10);
          if (bVar2) {
            DAT_0483aa60 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar3 == 0) {
          FUN_00bb162c(&local_50);
          DAT_0483aa60 = 2;
        }
        else {
          while (lVar3 == 1) {
            sched_yield();
            lVar3 = DAT_0483aa60;
          }
        }
      }
    }
    uVar4 = DAT_0483aa10;
    break;
  case 6:
    if (DAT_0483aa58 != 2) {
      local_40 = (uint)local_40._1_3_ << 8;
      local_50 = PTR_DAT_047daba0 + 0x10;
      local_48 = (code *)&LAB_00bfa338;
      if (DAT_0483aa58 != 2) {
        do {
          lVar3 = DAT_0483aa58;
          if (DAT_0483aa58 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483aa58,0x10);
          if (bVar2) {
            DAT_0483aa58 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar3 == 0) {
          FUN_00bb162c(&local_50);
          DAT_0483aa58 = 2;
        }
        else {
          while (lVar3 == 1) {
            sched_yield();
            lVar3 = DAT_0483aa58;
          }
        }
      }
    }
    uVar4 = DAT_0483aa08;
    break;
  case 7:
    if (DAT_0483aa68 != 2) {
      local_40 = (uint)local_40._1_3_ << 8;
      local_50 = PTR_DAT_047daba0 + 0x10;
      local_48 = (code *)&LAB_00bfaa28;
      if (DAT_0483aa68 != 2) {
        do {
          lVar3 = DAT_0483aa68;
          if (DAT_0483aa68 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483aa68,0x10);
          if (bVar2) {
            DAT_0483aa68 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar3 == 0) {
          FUN_00bb162c(&local_50);
          DAT_0483aa68 = 2;
        }
        else {
          while (lVar3 == 1) {
            sched_yield();
            lVar3 = DAT_0483aa68;
          }
        }
      }
    }
    uVar4 = DAT_0483aa18;
    break;
  case 8:
    if (DAT_0483aa38 != 2) {
      local_40 = (uint)local_40._1_3_ << 8;
      local_50 = PTR_DAT_047daba0 + 0x10;
      local_48 = (code *)&LAB_00bf9520;
      if (DAT_0483aa38 != 2) {
        do {
          lVar3 = DAT_0483aa38;
          if (DAT_0483aa38 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483aa38,0x10);
          if (bVar2) {
            DAT_0483aa38 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar3 == 0) {
          FUN_00bb162c(&local_50);
          DAT_0483aa38 = 2;
        }
        else {
          while (lVar3 == 1) {
            sched_yield();
            lVar3 = DAT_0483aa38;
          }
        }
      }
    }
LAB_00bf72e0:
    uVar4 = DAT_0483a9e8;
    break;
  case 9:
    if (DAT_0483aa70 != 2) {
      local_40 = (uint)local_40._1_3_ << 8;
      local_50 = PTR_DAT_047daba0 + 0x10;
      local_48 = (code *)&LAB_00bfae5c;
      if (DAT_0483aa70 != 2) {
        do {
          lVar3 = DAT_0483aa70;
          if (DAT_0483aa70 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483aa70,0x10);
          if (bVar2) {
            DAT_0483aa70 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar3 == 0) {
          FUN_00bb162c(&local_50);
          DAT_0483aa70 = 2;
        }
        else {
          while (lVar3 == 1) {
            sched_yield();
            lVar3 = DAT_0483aa70;
          }
        }
      }
    }
    uVar4 = DAT_0483aa20;
    break;
  case 10:
    if ((*(uint *)(param_2 + 0x3c) == 0xb) &&
       (*(char *)(*(long *)(*(long *)(param_2 + 0x68) + 0x20) + 0x53) != '\0')) {
      if (DAT_0483aa78 != 2) {
        local_40 = (uint)local_40._1_3_ << 8;
        local_50 = PTR_DAT_047daba0 + 0x10;
        local_48 = FUN_00bfbf84;
        if (DAT_0483aa78 != 2) {
          do {
            lVar3 = DAT_0483aa78;
            if (DAT_0483aa78 != 0) break;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0x483aa78,0x10);
            if (bVar2) {
              DAT_0483aa78 = 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          DataMemoryBarrier(2,3);
          if (lVar3 == 0) {
            FUN_00bb162c(&local_50);
            DAT_0483aa78 = 2;
          }
          else {
            while (lVar3 == 1) {
              sched_yield();
              lVar3 = DAT_0483aa78;
            }
          }
        }
      }
      uVar4 = DAT_0483aa30;
    }
    else {
      if (DAT_0483aa80 != 2) {
        local_40 = (uint)local_40._1_3_ << 8;
        local_50 = PTR_DAT_047daba0 + 0x10;
        local_48 = (code *)&LAB_00bfcc30;
        if (DAT_0483aa80 != 2) {
          do {
            lVar3 = DAT_0483aa80;
            if (DAT_0483aa80 != 0) break;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0x483aa80,0x10);
            if (bVar2) {
              DAT_0483aa80 = 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          DataMemoryBarrier(2,3);
          if (lVar3 == 0) {
            FUN_00bb162c(&local_50);
            DAT_0483aa80 = 2;
          }
          else {
            while (lVar3 == 1) {
              sched_yield();
              lVar3 = DAT_0483aa80;
            }
          }
        }
      }
      uVar4 = DAT_0483aa28;
    }
    break;
  default:
    local_50 = (undefined *)CONCAT44(local_50._4_4_,3);
    local_28 = 0;
    local_40 = 0x1c9;
    local_48 = (code *)0x3c0b149;
    local_38 = 0;
    uStack_30 = 0;
    std::string::append((char *)&local_38);
    FUN_00bb0e90(&local_50);
    FUN_00bb0d74(&local_50);
    uVar4 = 0;
  }
  return uVar4;
}


