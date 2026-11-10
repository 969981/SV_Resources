/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03347d08; name: FUN_03347d08
 */


void FUN_03347d08(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x188));
  uVar9 = *(uint *)(param_2 + 0x1b0);
  if (0 < (int)uVar9) {
    uVar7 = 0;
    lVar8 = 8;
    do {
      lVar3 = *(long *)(param_2 + 0x1a8) + lVar8;
      if (*(long *)(lVar3 + -8) == 0) {
        *(undefined8 *)(lVar3 + -8) = param_3;
        uVar9 = (uint)uVar7;
        *(undefined8 *)(*(long *)(param_2 + 0x1a8) + lVar8) = param_4;
        if (*(uint *)(param_2 + 0x1b0) != uVar9) goto LAB_03347dd0;
        break;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar9 != uVar7);
  }
  uVar6 = uVar9;
  if ((int)(*(uint *)(param_2 + 0x1b4) & 0x7fffffff) <= (int)uVar9) {
    FUN_0334aad8((long *)(param_2 + 0x1a8),PTR_PTR_047d1a50,(long)(int)(uVar9 + 1));
    uVar6 = *(uint *)(param_2 + 0x1b0);
  }
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0x1a8) + (long)(int)uVar6 * 0x10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(uint *)(param_2 + 0x1b0) = uVar9 + 1;
LAB_03347dd0:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x188));
  *param_1 = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar2 = (long *)(param_2 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(uint *)(param_1 + 1) = uVar9;
  return;
}


