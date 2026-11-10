/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f8ab4; name: FUN_018f8ab4
 */


undefined8 FUN_018f8ab4(long param_1,uint *param_2,long *param_3,ulong *param_4)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint *puVar16;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar11 = (long)puVar4 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar11) {
    puVar9 = *(uint **)(param_1 + 8);
    puVar10 = puVar4;
    do {
      puVar16 = puVar9 + (uVar11 / 0x60) * 0xc;
      if (*puVar16 == *param_2) goto LAB_018f8b64;
      puVar3 = puVar16 + 0xc;
      if (*param_2 <= *puVar16) {
        puVar3 = puVar9;
        puVar10 = puVar16;
      }
      uVar11 = (long)puVar10 - (long)puVar3;
      puVar9 = puVar3;
    } while (0 < (long)uVar11);
  }
  puVar16 = puVar4;
LAB_018f8b64:
  nn::os::UnlockMutex(pMVar1);
  uVar13 = 0;
  if ((puVar16 != (uint *)0x0) && (puVar4 != puVar16)) {
    uVar13 = *(undefined8 *)(puVar16 + 2);
    uVar14 = *(undefined8 *)(puVar16 + 6);
    local_c0 = PTR_DAT_047dcc88 + 0x10;
    uStack_54 = *puVar16;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_60 = 0;
    local_58 = 0;
    local_68 = puVar2;
    if (uStack_54 != 0) {
      uVar11 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
      uStack_54 = uStack_54 ^ uStack_54 << 2;
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
      uStack_54 = uStack_54 ^ uStack_54 << 0xd;
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar11 != 1) &&
          (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
          uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar11 != 2)) &&
         (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
         uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar11 != 3)) {
        (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_68);
        for (lVar12 = uVar11 - 4; lVar12 != 0; lVar12 = lVar12 + -1) {
          (**(code **)(local_68 + 0x10))(&local_68);
        }
      }
    }
    local_a8 = PTR_DAT_047dcc78 + 0x10;
    local_90 = 0;
    local_78 = CONCAT44(uStack_54,uStack_54);
    uStack_70 = 0;
    local_b8 = PTR_DAT_047dcc80 + 0x10;
    uStack_b0 = 0;
    lVar12 = *param_3;
    uStack_a0 = uVar13;
    local_98 = uVar14;
    local_88 = puVar2;
    uStack_80 = local_60;
    local_58 = uStack_54;
    if (lVar12 != 0) {
      uVar15 = *param_4;
      plVar6 = (long *)(**(code **)(local_c0 + 0x18))(&local_c0);
      plVar7 = (long *)(**(code **)(*plVar6 + 0x28))();
      uVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,1,plVar6[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_68,1,0);
        uVar11 = uVar11 & 0xffffffff;
      }
      lVar8 = (**(code **)(local_c0 + 0x10))(&local_c0);
      uVar13 = 0;
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
      if (((uVar11 & 1) == 0) || ((char)local_68 != '\x05')) goto LAB_018f8eb8;
      plVar6 = (long *)(**(code **)(local_c0 + 0x18))(&local_c0);
      plVar7 = (long *)(**(code **)(*plVar6 + 0x28))();
      uVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,4,plVar6[1]);
      if ((uVar11 & 1) == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_68,4,0);
        uVar5 = uVar5 ^ 1;
      }
      lVar8 = (**(code **)(local_c0 + 0x10))(&local_c0);
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 4;
      if (((uVar5 & 1) == 0) && (uVar11 = (ulong)local_68 & 0xffffffff, uVar11 <= uVar15)) {
        plVar6 = (long *)(**(code **)(local_c0 + 0x18))(&local_c0);
        plVar7 = (long *)(**(code **)(*plVar6 + 0x28))();
        uVar15 = (**(code **)(*plVar7 + 0x10))(plVar7,1,plVar6[1]);
        if ((uVar15 & 1) == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_68,1,0);
          uVar15 = uVar15 & 0xffffffff;
        }
        lVar8 = (**(code **)(local_c0 + 0x10))(&local_c0);
        *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
        if (((uVar15 & 1) != 0) && ((char)local_68 == '\t')) {
          lVar8 = uVar11 * 2;
          plVar6 = (long *)(**(code **)(local_c0 + 0x18))(&local_c0);
          plVar7 = (long *)(**(code **)(*plVar6 + 0x28))();
          uVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,lVar8,plVar6[1]);
          if ((uVar11 & 1) == 0) {
            lVar12 = (**(code **)(local_c0 + 0x10))(&local_c0);
            *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + lVar8;
          }
          else {
            uVar11 = (**(code **)(*plVar6 + 0x10))(plVar6,lVar12,lVar8,0);
            lVar12 = (**(code **)(local_c0 + 0x10))(&local_c0);
            *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + lVar8;
            if ((uVar11 & 1) != 0) {
              uVar13 = 1;
              goto LAB_018f8eb8;
            }
          }
        }
      }
    }
    uVar13 = 0;
  }
LAB_018f8eb8:
  nn::os::UnlockMutex(pMVar1);
  return uVar13;
}


