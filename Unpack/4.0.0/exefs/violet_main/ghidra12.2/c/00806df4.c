/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00806df4; name: FUN_00806df4
 */


void FUN_00806df4(undefined8 param_1,long param_2,long param_3)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  MutexType *pMVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  short sVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong local_a0;
  undefined4 local_98;
  uint local_80 [4];
  int local_70 [4];
  
  local_70[0] = 0;
  local_a0 = local_a0 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)&local_a0);
  pMVar3 = (MutexType *)(*(long *)(param_2 + 0x58) + 0x1378);
  nn::os::LockMutex(pMVar3);
  pMVar1 = (MutexType *)(param_2 + 0xb8);
  nn::os::LockMutex(pMVar1);
  pMVar2 = (MutexType *)(param_2 + 0x60);
  nn::os::LockMutex(pMVar2);
  uVar10 = (ulong)*(uint *)(param_2 + 0xf0);
  iVar12 = 0;
  if (0 < (int)*(uint *)(param_2 + 0xf0)) {
    lVar13 = *(long *)(param_2 + 0xe0);
    lVar11 = *(long *)(*(long *)(param_2 + 0xa0) + 0x18);
    do {
      uVar5 = FUN_00796988(lVar13);
      plVar6 = (long *)FUN_00801444(*(undefined8 *)(param_2 + 0xa0),uVar5);
      if (plVar6 == (long *)0x0) {
LAB_00806e88:
        *(undefined8 *)(*(long *)(param_2 + 0xe8) + (long)iVar12 * 8) = uVar5;
        iVar12 = iVar12 + 1;
      }
      else if (*plVar6 != lVar11) {
        if ((int)plVar6[2] != 0xd) goto LAB_00806e88;
        local_80[0] = CONCAT31(local_80[0]._1_3_,0xfd);
        plVar7 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
        (**(code **)(*plVar7 + 0x90))(&local_a0,plVar7,local_80,plVar6[1]);
        FUN_018ff39c(local_70,&local_a0);
        if ((local_80[0] & 0xff) < (uint)*(ushort *)(param_2 + 0x92)) {
          uVar4 = FUN_00796ce4(param_2 + 8);
          *(undefined2 *)(param_3 + 0x12) = uVar4;
        }
        if (*(char *)(param_3 + 0x623) == '\0') {
          if (((uint)*(ushort *)(param_2 + 0x92) <= (local_80[0] & 0xff)) ||
             (sVar9 = *(short *)(*(long *)(param_2 + 0x88) + (ulong)(byte)local_80[0]._0_1_ * 2),
             sVar9 == 0)) {
            local_98 = 0;
            local_a0 = 0x4000000;
            FUN_007976c8(param_3,&local_a0,0);
            goto LAB_00806e94;
          }
        }
        else {
          sVar9 = 0;
        }
        *(short *)(param_3 + 0xe) = sVar9;
        FUN_00796d24(param_3);
        if (*(char *)(param_3 + 0x648) != '\0') {
          plVar7 = plVar6 + 7;
          if ((char)plVar6[0xb] != '\0') {
            plVar7 = plVar6 + 3;
          }
          FUN_0078a1c0(&local_a0,plVar7);
          FUN_00807114(local_80,param_2,param_3,&local_a0);
          FUN_018ff39c(local_70,local_80);
          FUN_0284e3d4(&local_a0);
          if (local_70[0] != 0) {
            local_a0 = CONCAT44(local_a0._4_4_,0x10407);
            local_80[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)&local_a0 | 4),(Result *)local_80);
            if (local_70[0] == (int)local_a0) {
              local_98 = 0;
              local_a0 = 1;
              FUN_007976c8(param_3,&local_a0,0);
            }
            FUN_00cbd7c0(param_1,local_70);
            nn::os::UnlockMutex(pMVar2);
            nn::os::UnlockMutex(pMVar1);
            nn::os::UnlockMutex(pMVar3);
            return;
          }
        }
      }
LAB_00806e94:
      lVar13 = lVar13 + 0x20;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  nn::os::UnlockMutex(pMVar2);
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex(pMVar3);
  if (0 < iVar12) {
    uVar4 = FUN_00796d04(param_2 + 8);
    *(undefined2 *)(param_3 + 0x12) = uVar4;
    *(undefined2 *)(param_3 + 0xe) = 1;
    FUN_00796d24(param_3);
    if (*(char *)(param_3 + 0x648) != '\0') {
      (**(code **)(**(long **)(param_2 + 0x58) + 0x390))
                (&local_a0,*(long **)(param_2 + 0x58),param_3,*(undefined8 *)(param_2 + 0xe8),iVar12
                );
      FUN_018ff39c(local_70,&local_a0);
      if (local_70[0] != 0) {
        puVar8 = (ulong *)local_70;
        goto LAB_00807078;
      }
    }
  }
  local_a0 = local_a0 & 0xffffffff00000000;
  local_80[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_a0 | 4),(Result *)local_80);
  puVar8 = &local_a0;
LAB_00807078:
  FUN_00cbd7c0(param_1,puVar8);
  return;
}


