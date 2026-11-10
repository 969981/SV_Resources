/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f8f1c; name: FUN_018f8f1c
 */


ulong FUN_018f8f1c(long param_1,uint *param_2)

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
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
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
      puVar15 = puVar9 + (uVar11 / 0x60) * 0xc;
      if (*puVar15 == *param_2) goto LAB_018f8fc0;
      puVar3 = puVar15 + 0xc;
      if (*param_2 <= *puVar15) {
        puVar3 = puVar9;
        puVar10 = puVar15;
      }
      uVar11 = (long)puVar10 - (long)puVar3;
      puVar9 = puVar3;
    } while (0 < (long)uVar11);
  }
  puVar15 = puVar4;
LAB_018f8fc0:
  nn::os::UnlockMutex(pMVar1);
  uVar11 = 0;
  if (puVar15 == (uint *)0x0) {
    uVar13 = 0;
    goto LAB_018f91a8;
  }
  uVar13 = 0;
  if (puVar4 == puVar15) goto LAB_018f91a8;
  uVar12 = *(undefined8 *)(puVar15 + 2);
  uVar14 = *(undefined8 *)(puVar15 + 6);
  local_b0 = PTR_DAT_047dcc88 + 0x10;
  uStack_44 = *puVar15;
  puVar2 = PTR_DAT_047dcc70 + 0x10;
  local_50 = 0;
  local_48 = 0;
  local_58 = puVar2;
  if (uStack_44 != 0) {
    uVar11 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
    uStack_44 = uStack_44 ^ uStack_44 << 2;
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
    uStack_44 = uStack_44 ^ uStack_44 << 0xd;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (((uVar11 != 1) &&
        (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
        uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar11 != 2)) &&
       (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
       uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar11 != 3)) {
      (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_58);
      for (lVar8 = uVar11 - 4; lVar8 != 0; lVar8 = lVar8 + -1) {
        (**(code **)(local_58 + 0x10))(&local_58);
      }
    }
  }
  local_98 = PTR_DAT_047dcc78 + 0x10;
  local_80 = 0;
  local_68 = CONCAT44(uStack_44,uStack_44);
  uStack_60 = 0;
  local_a8 = PTR_DAT_047dcc80 + 0x10;
  uStack_a0 = 0;
  uStack_90 = uVar12;
  local_88 = uVar14;
  local_78 = puVar2;
  uStack_70 = local_50;
  local_48 = uStack_44;
  plVar6 = (long *)(**(code **)(local_b0 + 0x18))(&local_b0);
  plVar7 = (long *)(**(code **)(*plVar6 + 0x28))();
  uVar5 = 1;
  uVar11 = (**(code **)(*plVar7 + 0x10))(plVar7,1,plVar6[1]);
  if ((uVar11 & 1) != 0) {
    uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_58,1,0);
    uVar5 = uVar5 ^ 1;
  }
  lVar8 = (**(code **)(local_b0 + 0x10))(&local_b0);
  *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
  if ((uVar5 & 1) == 0) {
    if ((char)local_58 == '\x01') {
      uVar13 = 0;
    }
    else {
      if ((char)local_58 != '\x02') goto LAB_018f91cc;
      uVar13 = 0x100;
    }
    uVar11 = 1;
  }
  else {
LAB_018f91cc:
    uVar11 = 0;
    uVar13 = 0;
  }
LAB_018f91a8:
  nn::os::UnlockMutex(pMVar1);
  return uVar13 | uVar11;
}


