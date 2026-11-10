/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008072e8; name: FUN_008072e8
 */


void FUN_008072e8(int *param_1,long param_2,long param_3)

{
  long lVar1;
  MutexType *pMVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined2 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  ulong local_c8;
  ulong local_c0;
  int local_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  ulong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_48 [2];
  
  lVar1 = param_3 + 0x600;
  uVar6 = FUN_00796784(lVar1);
  if ((uVar6 & 1) != 0) {
    if (*(short *)(param_2 + 0x92) != 0) {
      lVar11 = 0;
      uVar6 = 0;
      do {
        FUN_00796868(&local_c8,*(long *)(param_2 + 0x80) + lVar11);
        FUN_00796868(&local_68,lVar1);
        uVar7 = FUN_0078b278(&local_c8,&local_68);
        FUN_0284e3d4(&local_68);
        FUN_0284e3d4(&local_c8);
        if ((uVar7 & 1) != 0) {
          if (*(short *)(param_3 + 0x12) == 0) {
            uVar5 = FUN_00796ce4(param_2 + 8,uVar6 & 0xffffffff);
            *(undefined2 *)(param_3 + 0x12) = uVar5;
          }
          *(undefined2 *)(param_3 + 0xe) = *(undefined2 *)(*(long *)(param_2 + 0x88) + uVar6 * 2);
          cVar4 = *(char *)(param_3 + 0x623);
          goto joined_r0x008073b4;
        }
        uVar6 = uVar6 + 1;
        lVar11 = lVar11 + 0x20;
      } while (uVar6 < *(ushort *)(param_2 + 0x92));
    }
    cVar4 = *(char *)(param_3 + 0x623);
joined_r0x008073b4:
    if (cVar4 == '\0') {
      if (*(ushort *)(param_3 + 0xe) < 2) {
        local_c0 = local_c0 & 0xffffffff00000000;
        local_c8 = 0x20000000;
        FUN_007976c8(param_3,&local_c8,0);
        goto LAB_008076e4;
      }
    }
    else {
      *(undefined2 *)(param_3 + 0xe) = 0;
    }
    FUN_00796d24(param_3);
    if (*(char *)(param_3 + 0x648) != '\0') {
      uVar6 = (**(code **)(**(long **)(param_2 + 0x58) + 0x3d0))(*(long **)(param_2 + 0x58),lVar1);
      plVar8 = *(long **)(param_2 + 0x58);
      if ((uVar6 & 1) == 0) {
        uVar6 = (**(code **)(*plVar8 + 0x3d8))(plVar8,lVar1);
        if ((uVar6 & 1) == 0) {
          FUN_00796868(&local_c8,lVar1);
          FUN_00807114(param_1,param_2,param_3,&local_c8);
          FUN_0284e3d4(&local_c8);
          if (*param_1 != 0) {
            local_c8 = CONCAT44(local_c8._4_4_,0x10407);
            local_68 = local_68 & 0xffffffff00000000;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)&local_c8 | 4),(Result *)&local_68);
            if (*param_1 == (int)local_c8) {
              local_c0 = local_c0 & 0xffffffff00000000;
              local_c8 = 1;
              FUN_007976c8(param_3,&local_c8,0);
              return;
            }
            return;
          }
        }
        else {
          uVar9 = FUN_007feb94(*(undefined8 *)(param_2 + 0x58),lVar1);
          (**(code **)(**(long **)(param_2 + 0x58) + 0x3a0))
                    (param_1,*(long **)(param_2 + 0x58),param_3,uVar9);
          if (*param_1 != 0) {
            return;
          }
        }
      }
      else {
        uVar9 = FUN_007feb94(plVar8,lVar1);
        local_c8 = 0xffffffffffffffff;
        local_c0 = 0;
        local_b8 = 0;
        FUN_0284e338(auStack_b0);
        FUN_0284e338(auStack_90);
        local_70 = (local_70 >> 0x18 & 0xff) << 0x18;
        pMVar2 = (MutexType *)(*(long *)(param_2 + 0x58) + 0x1378);
        nn::os::LockMutex(pMVar2);
        puVar10 = (ulong *)FUN_00801444(*(undefined8 *)(param_2 + 0xa0),uVar9);
        if (puVar10 != (ulong *)0x0) {
          local_c8 = *puVar10;
          local_c0 = puVar10[1];
          local_b8 = (int)puVar10[2];
          FUN_0284e39c(auStack_b0,puVar10 + 3);
          FUN_0284e39c(auStack_90,puVar10 + 7);
          local_70 = puVar10[0xb];
        }
        uVar6 = *(ulong *)(*(long *)(param_2 + 0xa0) + 0x18);
        nn::os::UnlockMutex(pMVar2);
        if (local_c8 != 0xffffffffffffffff) {
          if (local_b8 != 0xd) {
            if (local_c8 == uVar6) {
              local_60 = 0;
              local_68 = 0x800000;
              FUN_007976c8(param_3,&local_68,1);
              local_60 = 0;
              local_68 = 0x4000000;
              FUN_008015b0(*(undefined8 *)(param_2 + 0xa0),&local_68);
              local_68 = local_68 & 0xffffffff00000000;
              local_48[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_48);
            }
            else {
              (**(code **)(**(long **)(param_2 + 0x58) + 0x388))
                        (&local_68,*(long **)(param_2 + 0x58),param_3);
              if ((int)local_68 == 0) goto LAB_008076c8;
            }
            FUN_00cbd7c0(param_1,&local_68);
LAB_008076b4:
            FUN_0284e3d4(auStack_90);
            FUN_0284e3d4(auStack_b0);
            return;
          }
          puVar3 = auStack_90;
          if ((char)local_70 != '\0') {
            puVar3 = auStack_b0;
          }
          FUN_0078a1c0(&local_68,puVar3);
          FUN_00807114(param_1,param_2,param_3,&local_68);
          FUN_0284e3d4(&local_68);
          if (*param_1 != 0) {
            local_68 = CONCAT44(local_68._4_4_,0x10407);
            local_48[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_48);
            if (*param_1 == (int)local_68) {
              local_60 = 0;
              local_68 = 1;
              FUN_007976c8(param_3,&local_68,0);
            }
            goto LAB_008076b4;
          }
        }
LAB_008076c8:
        FUN_0284e3d4(auStack_90);
        FUN_0284e3d4(auStack_b0);
      }
    }
  }
LAB_008076e4:
  local_c8 = local_c8 & 0xffffffff00000000;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_c8 | 4),(Result *)&local_68);
  FUN_00cbd7c0(param_1,&local_c8);
  return;
}


