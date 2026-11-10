/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b2274; name: FUN_007b2274
 */


void FUN_007b2274(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  short sVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined2 uVar13;
  undefined4 local_628 [4];
  int local_618 [2];
  int local_610 [2];
  undefined *local_608 [3];
  undefined2 local_5f0;
  undefined4 local_5e8 [2];
  undefined4 local_5e0 [2];
  int local_5d8 [4];
  undefined1 auStack_5c8 [88];
  undefined4 local_570;
  byte local_56c [60];
  undefined4 local_530;
  undefined4 local_4f0;
  undefined4 local_4b0;
  undefined4 local_470;
  undefined4 local_430;
  undefined4 local_3f0;
  undefined4 local_3b0;
  undefined1 auStack_158 [48];
  long local_128;
  long local_120;
  char local_118;
  undefined7 uStack_117;
  long local_110;
  uint local_108 [18];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  short local_ac;
  int local_a0 [4];
  undefined4 local_90 [2];
  undefined *local_88 [2];
  undefined *local_78 [2];
  undefined4 local_68 [2];
  
  local_5d8[0] = 0;
  local_108[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_5d8 | 4),(Result *)local_108);
  FUN_00cbd7c0(local_a0,local_5d8);
  uVar8 = nn::ldn::OpenStation();
  local_90[0] = (undefined4)uVar8;
  FUN_007afb6c(local_5d8,uVar8,local_90);
  FUN_018ff39c(local_a0,local_5d8);
  if (local_a0[0] == 0) {
    FUN_0079b704(param_2,2);
    sVar4 = *(short *)((long)param_2 + 0x5a);
    puVar9 = (undefined8 *)FUN_007aedc0(param_3 + 0x20);
    local_b0 = *(undefined2 *)(puVar9 + 9);
    local_c0 = *puVar9;
    local_b8 = puVar9[1];
    local_ae = *(undefined1 *)((long)puVar9 + 0x66);
    local_ac = sVar4;
    pvVar10 = memcpy((void *)((ulong)local_108 | 4),(void *)(param_3 + 0x558),
                     (ulong)*(byte *)(param_3 + 0x598));
    bVar5 = 1;
    uVar13 = 1;
    if (*(char *)((long)param_2 + 0x5c) != '\0') {
      uVar13 = 2;
    }
    local_108[0] = (uint)CONCAT12(*(undefined1 *)(param_3 + 0x598),uVar13);
    local_110 = param_2[0x25b];
    local_128 = param_2[600];
    local_120 = param_2[0x259];
    _local_118 = CONCAT71((int7)((ulong)param_2[0x25a] >> 8),(char)param_2[0x25a] + '\x01');
    FUN_007b0bbc(pvVar10,auStack_158);
    do {
      uVar8 = nn::ldn::ConnectPrivate(&local_c0,local_108,&local_128,auStack_158,(int)sVar4,0);
      local_90[0] = (undefined4)uVar8;
      FUN_007afb6c(local_5d8,uVar8,local_90);
      FUN_018ff39c(local_a0,local_5d8);
      if (local_a0[0] == 0) {
        uVar8 = nn::ldn::GetNetworkInfo((NetworkInfo *)local_5d8);
        local_90[0] = (undefined4)uVar8;
        FUN_007afb6c(local_608,uVar8,local_90);
        FUN_018ff39c(local_a0,local_608);
        if (local_a0[0] == 0) {
          FUN_007afa5c(param_2);
          uVar8 = nn::ldn::GetIpv4Address((Ipv4Address *)local_5e0,(SubnetMask *)local_5e8);
          local_90[0] = (undefined4)uVar8;
          FUN_007afb6c(local_608,uVar8,local_90);
          FUN_018ff39c(local_a0,local_608);
          if (local_a0[0] == 0) {
            uVar6 = nn::ldn::operator==(local_5e0[0],local_570);
            uVar6 = -(~uVar6 & 1);
            uVar11 = nn::ldn::operator==(local_5e0[0],local_530);
            if ((uVar11 & 1) != 0) {
              uVar6 = 1;
            }
            uVar11 = nn::ldn::operator==(local_5e0[0],local_4f0);
            uVar3 = 2;
            if ((uVar11 & 1) == 0) {
              uVar3 = uVar6;
            }
            uVar11 = nn::ldn::operator==(local_5e0[0],local_4b0);
            uVar6 = 3;
            if ((uVar11 & 1) == 0) {
              uVar6 = uVar3;
            }
            uVar11 = nn::ldn::operator==(local_5e0[0],local_470);
            uVar3 = 4;
            if ((uVar11 & 1) == 0) {
              uVar3 = uVar6;
            }
            uVar11 = nn::ldn::operator==(local_5e0[0],local_430);
            uVar6 = 5;
            if ((uVar11 & 1) == 0) {
              uVar6 = uVar3;
            }
            uVar11 = nn::ldn::operator==(local_5e0[0],local_3f0);
            uVar3 = 6;
            if ((uVar11 & 1) == 0) {
              uVar3 = uVar6;
            }
            uVar11 = nn::ldn::operator==(local_5e0[0],local_3b0);
            uVar6 = 7;
            if ((uVar11 & 1) == 0) {
              uVar6 = uVar3;
            }
            if (-1 < (int)uVar6) {
              lVar1 = (ulong)uVar6 * 0x40;
              FUN_007ec4c8(param_2,(ulong)local_56c[lVar1 + 2] << 0x38 |
                                   (ulong)local_56c[lVar1 + 4] << 0x30 |
                                   (ulong)local_56c[lVar1 + 5] << 0x28 |
                                   (ulong)local_56c[lVar1 + 3] << 0x20 |
                                   (ulong)local_56c[lVar1 + 1] << 0x18 |
                                   (ulong)local_56c[lVar1] << 0x10);
              FUN_007ec51c(param_2,(ulong)local_56c[2] << 0x38 | (ulong)local_56c[4] << 0x30 |
                                   (ulong)local_56c[5] << 0x28 | (ulong)local_56c[3] << 0x20 |
                                   (ulong)local_56c[1] << 0x18 | (ulong)local_56c[0] << 0x10);
              uVar7 = nn::ldn::MakeBroadcastAddress(local_5e0[0],local_5e8[0]);
              local_608[0] = PTR_DAT_047d08c0 + 0x10;
              FUN_0284e360(local_608,uVar7);
              local_5f0 = 0x3039;
              FUN_007968fc(param_2 + 0xd,local_608);
              uVar8 = nn::ldn::GetIpv4Address((Ipv4Address *)local_610,(SubnetMask *)local_618);
              local_90[0] = (undefined4)uVar8;
              FUN_007afb6c(local_78,uVar8,local_90);
              FUN_018ff39c(local_a0,local_78);
              if (local_a0[0] == 0) {
                if ((*(int *)((long)param_2 + 0x7f64) != local_610[0]) ||
                   ((int)param_2[0xfed] != local_618[0])) {
                  local_78[0]._0_4_ = 0x6c1b;
LAB_007b2714:
                  local_88[0]._0_4_ = 0;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
                  ppuVar12 = local_78;
                  goto LAB_007b272c;
                }
                FUN_007b03a4(local_78,param_2);
                FUN_018ff39c(local_a0,local_78);
                if (local_a0[0] == 0) {
                  FUN_007b0c8c(local_78,param_2,(void *)(param_3 + 0x558),
                               *(undefined1 *)(param_3 + 0x598));
                  FUN_018ff39c(local_a0,local_78);
                  if (local_a0[0] == 0) {
                    uVar8 = nn::ldn::GetSecurityParameter((SecurityParameter *)(param_2 + 600));
                    local_68[0] = (undefined4)uVar8;
                    FUN_007afb6c(local_78,uVar8,local_68);
                    if ((int)local_78[0] == 0) {
                      local_88[0]._0_4_ = 0;
                      local_628[0] = 0;
                      nn::err::ErrorResultVariant::ErrorResultVariant
                                ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_628);
                      ppuVar12 = local_88;
                    }
                    else {
                      ppuVar12 = local_78;
                    }
                    FUN_00cbd7c0(local_628,ppuVar12);
                    FUN_018ff39c(local_a0,local_628);
                    if (local_a0[0] == 0) {
                      nn::os::LockMutex((MutexType *)(param_2 + 0x3f));
                      FUN_007aedc8(param_2[0x43],local_5d8);
                      nn::os::UnlockMutex((MutexType *)(param_2 + 0x3f));
                      (**(code **)(*param_2 + 0x170))(param_2,auStack_5c8,0x10);
                      local_78[0]._0_4_ = 0;
                      goto LAB_007b2714;
                    }
                  }
                }
              }
              ppuVar12 = (undefined **)local_a0;
LAB_007b272c:
              FUN_00cbd7c0(param_1,ppuVar12);
              FUN_0284e3d4(local_608);
              return;
            }
            local_608[0] = (undefined *)CONCAT44(local_608[0]._4_4_,0x10408);
            local_78[0]._0_4_ = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_608 | 4),(Result *)local_78);
            ppuVar12 = local_608;
            goto LAB_007b247c;
          }
        }
        break;
      }
      local_5d8[0] = 0x6c86;
      local_608[0] = (undefined *)((ulong)local_608[0] & 0xffffffff00000000);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_5d8 | 4),(Result *)local_608);
      bVar2 = (bool)(bVar5 & local_a0[0] == local_5d8[0]);
      bVar5 = 0;
    } while (bVar2);
  }
  ppuVar12 = (undefined **)local_a0;
LAB_007b247c:
  FUN_00cbd7c0(param_1,ppuVar12);
  return;
}


