/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e9e14; name: FUN_007e9e14
 */


void FUN_007e9e14(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  byte local_a8;
  ushort local_a6;
  uint local_a4;
  char local_98;
  char local_97;
  undefined4 local_68 [2];
  
  if (*(char *)(param_2 + 0x1938) == '\0') {
    uVar9 = 0x10408;
  }
  else {
    if (*(char *)(param_3 + 0x648) != '\0') {
      uVar5 = FUN_007971c0(param_3);
      if ((uVar5 & 1) == 0) {
        local_c8 = 0;
        local_d0 = 0x20000000;
        FUN_007976c8(param_3,&local_d0,0);
        local_d0 = CONCAT44(local_d0._4_4_,0x10407);
        goto LAB_007ea278;
      }
      pMVar1 = (MutexType *)(param_2 + 0x1910);
      nn::os::LockMutex(pMVar1);
      FUN_007ed278(&local_d0);
      if ((*(byte *)(param_3 + 0x14) + 0x1c <= *(uint *)(param_3 + 0x5f8)) &&
         (*(uint *)(param_3 + 0x5f8) - 0x1c != (uint)*(byte *)(param_3 + 0x14))) {
        uVar12 = 0;
        uVar2 = param_4 & 0xffff;
        do {
          FUN_007ed2d0(&local_d0,param_3,uVar12);
          uVar8 = local_a4;
          if (local_d0 == 0) {
            if (((param_7 & 1) == 0) && (local_98 != '\0')) {
              iVar10 = 0;
              if (*(byte *)(param_3 + 0x14) + 0x1c <= *(uint *)(param_3 + 0x5f8)) {
                iVar10 = (*(uint *)(param_3 + 0x5f8) - (uint)*(byte *)(param_3 + 0x14)) + 0xffe4;
              }
              param_6 = iVar10 - uVar12;
            }
            break;
          }
          if ((param_7 & 1) == 0) {
            if ((local_a4 >> 0x10 & 0xff) == 0) {
              uVar3 = 0;
            }
            else {
              uVar5 = FUN_007ed64c(&local_d0);
              if (0xff < uVar5) {
                local_d8 = 0;
                local_e0 = 1;
                FUN_007976c8(param_3,&local_e0,0);
                local_d8 = 0;
                local_e0 = 1;
                FUN_007ed6ec(&local_d0,&local_e0);
                local_e0 = CONCAT44(local_e0._4_4_,0x10407);
                local_68[0] = 0;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)&local_e0 | 4),(Result *)local_68);
                FUN_00cbd7c0(param_1,&local_e0);
                FUN_007ed2cc(&local_d0);
                nn::os::UnlockMutex(pMVar1);
                return;
              }
              uVar3 = FUN_007ed64c(&local_d0);
            }
          }
          else {
            uVar3 = local_a4 >> 0x10;
          }
          iVar10 = 1;
          if ((local_a8 & 1) != 0) {
            iVar10 = 2;
          }
          if ((local_a8 & 2) != 0) {
            iVar10 = iVar10 + 2;
          }
          if ((local_a8 & 4) != 0) {
            iVar10 = iVar10 + 4;
          }
          if ((local_a8 & 8) != 0) {
            iVar10 = iVar10 + 8;
          }
          iVar10 = iVar10 + (uint)local_a6;
          uVar8 = uVar8 & 0xff00ffff | (uVar3 & 0xff) << 0x10;
          iVar4 = FUN_007ea93c(param_2,uVar8);
          if ((iVar4 != -1) || (iVar4 = FUN_007ea984(param_2,uVar8), iVar4 != -1)) {
            lVar11 = param_2 + (long)iVar4 * 0x30;
            *(uint *)(lVar11 + 4) = *(int *)(lVar11 + 4) + uVar2;
            *(uint *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + uVar2;
            uVar8 = (uint)local_a6;
            *(uint *)(lVar11 + 8) = *(int *)(lVar11 + 8) + iVar10 * uVar2;
            *(uint *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + (iVar10 - uVar8) * uVar2;
            *(ulong *)(lVar11 + 0x28) = *(long *)(lVar11 + 0x28) + (ulong)(iVar10 * uVar2);
            if (local_97 == '\x02') {
              lVar11 = param_2 + (long)iVar4 * 0x30;
              *(uint *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + uVar2;
              *(uint *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + uVar8 * uVar2;
            }
            else if (local_97 == '\x01') {
              lVar11 = param_2 + (long)iVar4 * 0x30;
              *(uint *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + uVar2;
              *(uint *)(lVar11 + 0x14) = *(int *)(lVar11 + 0x14) + uVar8 * uVar2;
            }
          }
          uVar12 = iVar10 + uVar12;
          uVar8 = 0;
          if (*(byte *)(param_3 + 0x14) + 0x1c <= *(uint *)(param_3 + 0x5f8)) {
            uVar8 = (*(uint *)(param_3 + 0x5f8) - (uint)*(byte *)(param_3 + 0x14)) - 0x1c;
          }
        } while (uVar12 < uVar8);
      }
      param_4 = param_4 & 0xffff;
      *(uint *)(param_2 + 0x1900) = *(int *)(param_2 + 0x1900) + param_4;
      *(uint *)(param_2 + 0x1828) = *(int *)(param_2 + 0x1828) + param_4;
      iVar10 = (param_6 & 0xffff) + (param_5 & 0xffff);
      if ((param_7 & 1) == 0) {
        iVar10 = 0;
      }
      iVar10 = *(int *)(param_2 + 0x193c) + *(int *)(param_3 + 0x5f8) + iVar10;
      if ((param_7 & 1) == 0) {
        uVar2 = *(uint *)(param_3 + 0x5fc);
        uVar12 = (uVar2 >> 1 & 0x55555555) + (uVar2 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = (uVar12 >> 4 & 0x7070707) + (uVar12 & 0x7070707);
        uVar12 = (uVar12 >> 8 & 0xf000f) + (uVar12 & 0xf000f);
        if (((uVar12 & 0x1f) + (uVar12 >> 0x10) == 1 && uVar2 != 0) &&
           (uVar12 = (uVar2 & -uVar2) - 1,
           uVar12 = (uVar12 >> 1 & 0x55555555) + (uVar12 & 0x55555555),
           uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333),
           uVar12 = (uVar12 >> 4 & 0x7070707) + (uVar12 & 0x7070707),
           uVar12 = (uVar12 >> 8 & 0xf000f) + (uVar12 & 0xf000f), uVar12 = uVar12 + (uVar12 >> 0x10)
           , bVar7 = (byte)uVar12, (uVar12 & 0xff) < 0x18)) goto LAB_007ea1ec;
      }
      else {
        plVar6 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
        lVar11 = (**(code **)(*plVar6 + 0x68))(plVar6,param_3 + 0x628);
        if ((lVar11 != 0) && (bVar7 = *(byte *)(lVar11 + 0x28), bVar7 < 0x18)) {
LAB_007ea1ec:
          lVar11 = param_2 + (ulong)bVar7 * 4;
          *(uint *)(lVar11 + 0x1840) = *(int *)(lVar11 + 0x1840) + param_4;
          *(uint *)(lVar11 + 0x18a0) = *(int *)(lVar11 + 0x18a0) + iVar10 * param_4;
        }
      }
      uVar12 = iVar10 * param_4;
      *(uint *)(param_2 + 0x1830) =
           *(int *)(param_2 + 0x1830) + *(int *)(param_2 + 0x193c) * param_4;
      *(uint *)(param_2 + 0x182c) = *(int *)(param_2 + 0x182c) + uVar12;
      *(uint *)(param_2 + 0x183c) = *(int *)(param_2 + 0x183c) + param_4 * (param_6 & 0xffff);
      *(uint *)(param_2 + 0x1834) = *(int *)(param_2 + 0x1834) + param_4 * 0x1c;
      *(ulong *)(param_2 + 0x1908) = *(long *)(param_2 + 0x1908) + (ulong)uVar12;
      *(uint *)(param_2 + 0x1838) = *(int *)(param_2 + 0x1838) + param_4 * (param_5 & 0xffff);
      FUN_007ed2cc(&local_d0);
      nn::os::UnlockMutex(pMVar1);
      local_d0 = (ulong)local_d0._4_4_ << 0x20;
      goto LAB_007ea278;
    }
    uVar9 = 0x10407;
  }
  local_d0 = CONCAT44(local_d0._4_4_,uVar9);
LAB_007ea278:
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_d0 | 4),(Result *)&local_e0);
  FUN_00cbd7c0(param_1,&local_d0);
  return;
}


