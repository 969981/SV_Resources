/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193993c; name: FUN_0193993c
 */


ulong FUN_0193993c(long param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

{
  MutexType *pMVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined **local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  nn::os::LockMutex(pMVar1);
  puVar3 = *(uint **)(param_1 + 0x10);
  uVar8 = (long)puVar3 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar8) {
    puVar6 = *(uint **)(param_1 + 8);
    puVar7 = puVar3;
    do {
      puVar12 = puVar6 + (uVar8 / 0x60) * 0xc;
      if (*puVar12 == *param_2) goto LAB_019399ec;
      puVar2 = puVar12 + 0xc;
      if (*param_2 <= *puVar12) {
        puVar2 = puVar6;
        puVar7 = puVar12;
      }
      uVar8 = (long)puVar7 - (long)puVar2;
      puVar6 = puVar2;
    } while (0 < (long)uVar8);
  }
  puVar12 = puVar3;
LAB_019399ec:
  nn::os::UnlockMutex(pMVar1);
  uVar8 = 0;
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if (puVar3 != puVar12) {
      uVar9 = *(undefined8 *)(puVar12 + 2);
      uVar11 = *(undefined8 *)(puVar12 + 6);
      local_c0 = &PTR_LAB_04580b98;
      uStack_54 = *puVar12;
      local_58 = 0;
      local_68 = &PTR_LAB_04580c08;
      local_60 = 0;
      if (uStack_54 != 0) {
        uVar8 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
        uStack_54 = uStack_54 ^ uStack_54 << 2;
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
        uStack_54 = uStack_54 ^ uStack_54 << 0xd;
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar8 != 1) &&
            (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
            uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar8 != 2)) &&
           (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
           uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar8 != 3)) {
          FUN_00f83090(&local_68);
          for (lVar4 = uVar8 - 4; lVar4 != 0; lVar4 = lVar4 + -1) {
            (*(code *)local_68[2])(&local_68);
          }
        }
      }
      local_a8 = &PTR_LAB_04580c30;
      local_78 = CONCAT44(uStack_54,uStack_54);
      local_90 = 0;
      local_88 = &PTR_LAB_04580c08;
      local_b8 = &PTR_LAB_04580bc8;
      uStack_b0 = 0;
      uStack_70 = 0;
      uStack_a0 = uVar9;
      local_98 = uVar11;
      uStack_80 = local_60;
      local_58 = uStack_54;
      uVar8 = FUN_00f88478(&local_c0,*param_3,*param_4);
      uVar10 = uVar8 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xff;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return uVar10 | uVar8;
}


