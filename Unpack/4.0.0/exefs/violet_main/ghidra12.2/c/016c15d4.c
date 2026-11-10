/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016c15d4; name: FUN_016c15d4
 */


uint FUN_016c15d4(long param_1,uint *param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  char local_48 [4];
  uint local_44;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    nn::os::LockMutex(pMVar1);
    puVar3 = *(uint **)(param_1 + 0x10);
    uVar8 = (long)puVar3 - (long)*(uint **)(param_1 + 8);
    if (0 < (long)uVar8) {
      puVar6 = *(uint **)(param_1 + 8);
      puVar7 = puVar3;
      do {
        puVar9 = puVar6 + (uVar8 / 0x60) * 0xc;
        if (*puVar9 == *param_2) goto LAB_016c1670;
        puVar2 = puVar9 + 0xc;
        if (*param_2 <= *puVar9) {
          puVar2 = puVar6;
          puVar7 = puVar9;
        }
        uVar8 = (long)puVar7 - (long)puVar2;
        puVar6 = puVar2;
      } while (0 < (long)uVar8);
    }
    puVar9 = puVar3;
LAB_016c1670:
    nn::os::UnlockMutex(pMVar1);
    if ((puVar9 == (uint *)0x0) || (puVar3 == puVar9)) {
      uVar4 = FUN_02afc664(param_1,param_2,param_3);
    }
    else {
      uVar8 = FUN_02ad6970(param_1,puVar9);
      if (((uVar8 & 1) == 0) && (plVar5 = *(long **)(param_1 + 0x60), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x58))(plVar5,param_2);
      }
      uVar4 = FUN_02afc35c(param_1,puVar9,param_3);
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      local_44 = *param_2;
      local_48[0] = '\x01';
      (**(code **)(*plVar5 + 0x60))(plVar5,local_48);
      if (local_48[0] != '\0') {
        uVar4 = 0;
        local_48[0] = '\0';
        goto LAB_016c1718;
      }
    }
    uVar4 = 0;
  }
LAB_016c1718:
  nn::os::UnlockMutex(pMVar1);
  return uVar4 & 1;
}


