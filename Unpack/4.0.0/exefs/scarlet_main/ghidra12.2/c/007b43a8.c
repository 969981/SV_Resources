/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b43a8; name: FUN_007b43a8
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_007b43a8(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  ushort uVar13;
  long lVar14;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined2 local_190;
  int local_188 [8];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  SubnetMask aSStack_88 [8];
  undefined4 local_80 [2];
  int local_78 [4];
  uint local_68 [2];
  
  iVar4 = nn::ldn::GetState();
  if (iVar4 == 0) {
    return false;
  }
  if (*(int *)((long)param_1 + 0x524) != iVar4) {
    *(int *)((long)param_1 + 0x524) = iVar4;
  }
  lVar9 = param_1[0xa4];
  iVar4 = nn::ldn::GetDisconnectReason();
  bVar3 = (int)lVar9 != iVar4;
  if (bVar3) {
    uVar5 = nn::ldn::GetDisconnectReason();
    *(undefined4 *)(param_1 + 0xa4) = uVar5;
  }
  local_68[0] = nn::ldn::GetNetworkInfo((NetworkInfo *)(param_1 + 0x14));
  if ((local_68[0] & 0x3fe1ff) == 0x40cb) {
    return false;
  }
  FUN_007afb6c(local_78,param_1[1],local_68);
  if (local_78[0] != 0) {
    plVar11 = param_1 + 4;
    if ((int)*plVar11 == local_78[0]) {
      return bVar3;
    }
    FUN_018ff39c(plVar11,local_78);
    uVar5 = nn::ldn::GetDisconnectReason();
    *(undefined4 *)(param_1 + 0xa4) = uVar5;
    iVar4 = nn::ldn::GetState();
    if (*(int *)((long)param_1 + 0x524) != iVar4) {
      *(int *)((long)param_1 + 0x524) = iVar4;
    }
    local_188[0] = 0x6c1b;
    local_1a8 = (undefined *)((ulong)local_1a8._4_4_ << 0x20);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_188 | 4),(Result *)&local_1a8);
    if ((local_78[0] == local_188[0]) && (((int)param_1[0xa4] == 5 || ((int)param_1[0xa4] == -1))))
    {
      local_188[0] = 0xc406;
      local_1a8 = (undefined *)((ulong)local_1a8 & 0xffffffff00000000);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_188 | 4),(Result *)&local_1a8);
      FUN_018ff39c(plVar11,local_188);
    }
    return true;
  }
  if (*(char *)((long)param_1 + 0xeb) == '\x02') {
    lVar9 = (long)*(char *)((long)param_1 + 0x107);
    if ((uint)*(ushort *)(param_1 + 2) == (int)*(char *)((long)param_1 + 0x107)) goto LAB_007b4540;
    bVar3 = true;
  }
  else {
    lVar9 = 0;
  }
  FUN_007a826c(param_1,lVar9);
LAB_007b4540:
  FUN_007a8010(param_1,0);
  local_68[0] = nn::ldn::GetIpv4Address((Ipv4Address *)local_80,aSStack_88);
  if (local_68[0] != 0) {
    return false;
  }
  FUN_0284e360(param_1 + 0x10,local_80[0]);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x13) = 0x3039;
  FUN_0284e338(local_188);
  FUN_0284e338(auStack_168);
  FUN_0284e338(auStack_148);
  FUN_0284e338(auStack_128);
  FUN_0284e338(auStack_108);
  FUN_0284e338(auStack_e8);
  FUN_0284e338(auStack_c8);
  FUN_0284e338(auStack_a8);
  lVar9 = 0;
  uVar13 = 0;
  uVar10 = 0;
  puVar1 = PTR_DAT_047d08c0 + 0x10;
  do {
    if (*(char *)((long)param_1 + lVar9 * 0x40 + 0x113) != '\0') {
      local_1a8 = puVar1;
      FUN_0284e360(&local_1a8,(int)param_1[lVar9 * 8 + 0x21]);
      local_190 = 0x3039;
      FUN_00796584(auStack_1c8);
      FUN_007968fc(auStack_1c8,&local_1a8);
      uVar6 = (**(code **)(*param_1 + 0x68))(param_1,auStack_1c8);
      if ((uVar6 & 1) == 0) {
        if ((short)param_1[7] != 0) {
          lVar14 = 0;
          lVar12 = 0;
          uVar6 = 0;
          do {
            uVar7 = FUN_00796784(param_1[6] + lVar14);
            if ((uVar7 & 1) == 0) {
              FUN_007968fc(param_1[6] + (lVar12 >> 0x2b),&local_1a8);
              bVar3 = true;
              uVar7 = nn::ldn::operator==(local_80[0],(int)param_1[lVar9 * 8 + 0x21]);
              goto joined_r0x007b474c;
            }
            uVar6 = uVar6 + 1;
            lVar12 = lVar12 + 0x1000000000000;
            lVar14 = lVar14 + 0x20;
          } while (uVar6 < *(ushort *)(param_1 + 7));
        }
        FUN_0284e39c(local_188 + (ulong)uVar13 * 8,&local_1a8);
        uVar13 = uVar13 + 1;
        bVar3 = true;
      }
      else {
        uVar6 = FUN_00796784(auStack_1c8);
        if (((uVar6 & 1) != 0) && ((short)param_1[7] != 0)) {
          lVar14 = 0;
          uVar6 = 0;
          do {
            uVar7 = FUN_007967e8(auStack_1c8,param_1[6] + lVar14);
            if ((uVar7 & 1) != 0) goto LAB_007b4704;
            uVar6 = uVar6 + 1;
            lVar14 = lVar14 + 0x20;
          } while (uVar6 < *(ushort *)(param_1 + 7));
        }
      }
      uVar6 = 0xffff;
LAB_007b4704:
      uVar7 = nn::ldn::operator==(local_80[0],(int)param_1[lVar9 * 8 + 0x21]);
joined_r0x007b474c:
      if (((uVar7 & 1) != 0) && ((uint)*(ushort *)((long)param_1 + 0x1a) != (int)(short)uVar6)) {
        bVar3 = true;
        *(short *)((long)param_1 + 0x1a) = (short)uVar6;
      }
      uVar2 = 0;
      if ((((uint)uVar6 ^ 0xffffffff) & 0xffff) != 0) {
        uVar2 = 1 << (ulong)((uint)uVar6 & 0x1f);
      }
      uVar10 = uVar2 | uVar10;
      FUN_0284e3d4(&local_1a8);
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 8);
  uVar6 = (ulong)*(ushort *)(param_1 + 7);
  if (*(ushort *)(param_1 + 7) != 0) {
    lVar9 = 0;
    uVar7 = 0;
    do {
      if (((uVar10 >> (ulong)((uint)uVar7 & 0x1f) & 1) == 0) &&
         (uVar6 = FUN_00796784(param_1[6] + lVar9), (uVar6 & 1) != 0)) {
        FUN_007965fc(param_1[6] + lVar9);
        bVar3 = true;
      }
      uVar6 = (ulong)*(ushort *)(param_1 + 7);
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x20;
    } while (uVar7 < uVar6);
  }
  if (uVar13 != 0) {
    uVar7 = 0;
    if ((int)uVar6 != 0) goto LAB_007b47d8;
LAB_007b4820:
    uVar7 = uVar7 + 1;
    if (uVar7 != uVar13) {
      if ((short)param_1[7] != 0) {
LAB_007b47d8:
        lVar9 = 0;
        uVar6 = 0;
        do {
          uVar8 = FUN_00796784(param_1[6] + lVar9);
          if ((uVar8 & 1) == 0) {
            FUN_007968fc(param_1[6] + lVar9,local_188 + uVar7 * 8);
            uVar10 = 1 << (ulong)((uint)uVar6 & 0x1f) | uVar10;
            break;
          }
          uVar6 = uVar6 + 1;
          lVar9 = lVar9 + 0x20;
        } while (uVar6 < *(ushort *)(param_1 + 7));
      }
      goto LAB_007b4820;
    }
  }
  if (*(uint *)((long)param_1 + 0x14) != uVar10) {
    bVar3 = true;
    *(uint *)((long)param_1 + 0x14) = uVar10;
  }
  FUN_0284e3d4(auStack_a8);
  FUN_0284e3d4(auStack_c8);
  FUN_0284e3d4(auStack_e8);
  FUN_0284e3d4(auStack_108);
  FUN_0284e3d4(auStack_128);
  FUN_0284e3d4(auStack_148);
  FUN_0284e3d4(auStack_168);
  FUN_0284e3d4(local_188);
  return bVar3;
}


