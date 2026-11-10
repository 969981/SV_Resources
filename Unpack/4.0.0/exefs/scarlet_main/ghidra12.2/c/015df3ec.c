/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015df3ec; name: FUN_015df3ec
 */


ulong FUN_015df3ec(long param_1,uint *param_2,undefined8 *param_3,undefined4 *param_4)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint *puVar13;
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
  uVar9 = (long)puVar4 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar9) {
    puVar7 = *(uint **)(param_1 + 8);
    puVar8 = puVar4;
    do {
      puVar13 = puVar7 + (uVar9 / 0x60) * 0xc;
      if (*puVar13 == *param_2) goto LAB_015df49c;
      puVar3 = puVar13 + 0xc;
      if (*param_2 <= *puVar13) {
        puVar3 = puVar7;
        puVar8 = puVar13;
      }
      uVar9 = (long)puVar8 - (long)puVar3;
      puVar7 = puVar3;
    } while (0 < (long)uVar9);
  }
  puVar13 = puVar4;
LAB_015df49c:
  nn::os::UnlockMutex(pMVar1);
  uVar9 = 0;
  if (puVar13 == (uint *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if (puVar4 != puVar13) {
      uVar10 = *(undefined8 *)(puVar13 + 2);
      uVar12 = *(undefined8 *)(puVar13 + 6);
      local_c0 = PTR_DAT_047dcc88 + 0x10;
      uStack_54 = *puVar13;
      puVar2 = PTR_DAT_047dcc70 + 0x10;
      local_60 = 0;
      local_58 = 0;
      local_68 = puVar2;
      if (uStack_54 != 0) {
        uVar9 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
        uStack_54 = uStack_54 ^ uStack_54 << 2;
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
        uStack_54 = uStack_54 ^ uStack_54 << 0xd;
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (((uVar9 != 1) &&
            (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
            uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar9 != 2)) &&
           (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
           uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar9 != 3)) {
          (**(code **)(PTR_DAT_047dcc70 + 0x20))(&local_68);
          for (lVar5 = uVar9 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
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
      uStack_a0 = uVar10;
      local_98 = uVar12;
      local_88 = puVar2;
      uStack_80 = local_60;
      local_58 = uStack_54;
      uVar9 = FUN_00f88478(&local_c0,*param_3,*param_4);
      uVar11 = uVar9 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xff;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return uVar11 | uVar9;
}


