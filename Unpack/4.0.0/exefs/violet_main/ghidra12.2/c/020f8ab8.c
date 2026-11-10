/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020f8ab8; name: FUN_020f8ab8
 */


void FUN_020f8ab8(long param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  char cVar6;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar10 = (long)puVar4 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar10) {
    puVar8 = *(uint **)(param_1 + 8);
    puVar9 = puVar4;
    do {
      puVar13 = puVar8 + (uVar10 / 0x60) * 0xc;
      if (*puVar13 == *param_2) goto LAB_020f8b6c;
      puVar3 = puVar13 + 0xc;
      if (*param_2 <= *puVar13) {
        puVar3 = puVar8;
        puVar9 = puVar13;
      }
      uVar10 = (long)puVar9 - (long)puVar3;
      puVar8 = puVar3;
    } while (0 < (long)uVar10);
  }
  puVar13 = puVar4;
LAB_020f8b6c:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar13 == (uint *)0x0) || (puVar4 == puVar13)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar11 = *(undefined8 *)(puVar13 + 2);
    uVar12 = *(undefined8 *)(puVar13 + 6);
    local_d0 = PTR_DAT_047dcc88 + 0x10;
    uStack_64 = *puVar13;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_78 = puVar2;
    if (uStack_64 != 0) {
      uVar10 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar10 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar10 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar10 != 3)) {
        FUN_00f83090(&local_78);
        for (lVar5 = uVar10 - 4; lVar5 != 0; lVar5 = lVar5 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
    }
    local_b8 = PTR_DAT_047dcc78 + 0x10;
    local_a0 = 0;
    local_88 = CONCAT44(uStack_64,uStack_64);
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    uStack_c0 = 0;
    uStack_b0 = uVar11;
    local_a8 = uVar12;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar6 = FUN_00f88478(&local_d0,*param_3,*param_4);
    nn::os::UnlockMutex(pMVar1);
    if (cVar6 != '\0') {
      return;
    }
  }
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x50))(plVar7,param_2);
  }
  return;
}


