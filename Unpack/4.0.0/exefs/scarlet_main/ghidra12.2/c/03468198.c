/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03468198; name: FUN_03468198
 */


int FUN_03468198(long param_1,void *param_2,int param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined1 auStack_a0 [72];
  long local_58;
  
  puVar8 = PTR_DAT_047e70e0;
  uVar3 = *(uint *)((long)param_2 + 4);
  plVar2 = (long *)(param_1 + 0xa8);
  nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
  nn::os::LockMutex((MutexType *)puVar8);
  uVar4 = *(uint *)(param_1 + 0xb0);
  if (uVar4 != 0) {
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = uVar3 / uVar4;
    }
    puVar13 = *(uint **)(*plVar2 + (ulong)(uVar3 - uVar7 * uVar4) * 8);
    if (puVar13 != (uint *)0x0) {
LAB_03468204:
      if ((*puVar13 != uVar3) || (*(long *)(puVar13 + 2) != 0)) goto LAB_03468218;
      nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
      puVar12 = puVar13 + 0x19;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar6) {
          *puVar12 = *puVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar13[0x1c] = puVar13[0x1c] + 1;
      if ((param_3 == 2) || (((byte)puVar13[0x1a] >> 2 & 1) != 0)) {
        nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
        return 1;
      }
      param_3 = 3;
      goto LAB_0346822c;
    }
  }
LAB_03468220:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
LAB_0346822c:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
  local_58 = 0;
  memcpy(auStack_a0,param_2,0x48);
  iVar10 = FUN_034627ac(param_1,auStack_a0,&local_58,param_3,param_4 & 1,param_5 & 1);
  lVar9 = local_58;
  if (iVar10 == 1) {
    FUN_03469b20(plVar2,uVar3,0,local_58);
  }
  else if ((iVar10 != 0x45) && (local_58 != 0)) {
    nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
    uVar4 = *(uint *)(param_1 + 0xb0);
    if (uVar4 != 0) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar3 / uVar4;
      }
      puVar13 = (uint *)(*plVar2 + (ulong)(uVar3 - uVar7 * uVar4) * 8);
      puVar12 = *(uint **)puVar13;
      if (puVar12 != (uint *)0x0) {
        puVar11 = (uint *)0x0;
        do {
          if ((*puVar12 == uVar3) && (*(long *)(puVar12 + 2) == 0)) {
            if (puVar11 != (uint *)0x0) {
              puVar13 = puVar11 + 4;
            }
            *(undefined8 *)puVar13 = *(undefined8 *)(puVar12 + 4);
            *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
            break;
          }
          puVar1 = puVar12 + 4;
          puVar11 = puVar12;
          puVar12 = *(uint **)puVar1;
        } while (*(uint **)puVar1 != (uint *)0x0);
      }
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
    FUN_034607d0(lVar9,0);
  }
  return iVar10;
LAB_03468218:
  puVar13 = *(uint **)(puVar13 + 4);
  if (puVar13 == (uint *)0x0) goto LAB_03468220;
  goto LAB_03468204;
}


