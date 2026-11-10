/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034486c0; name: FUN_034486c0
 */


undefined4
FUN_034486c0(uint param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6,undefined4 param_7)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  long *plVar13;
  
  lVar12 = DAT_048af9e0;
  pMVar1 = (MutexType *)(DAT_048af9e0 + 0xa8);
  nn::os::LockMutex(pMVar1);
  uVar6 = *(uint *)(lVar12 + 0xd0);
  if (uVar6 != 0) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = param_1 / uVar6;
    }
    for (plVar13 = *(long **)(*(long *)(lVar12 + 200) + (ulong)(param_1 - uVar9 * uVar6) * 8);
        plVar13 != (long *)0x0; plVar13 = (long *)plVar13[1]) {
      if (*(uint *)(plVar13 + 2) == param_1) {
        *(int *)((long)plVar13 + 0x14) = *(int *)((long)plVar13 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        lVar12 = FUN_01065210(DAT_048af9e8,1,0x34);
        puVar2 = (undefined8 *)(lVar12 + 0x14);
        *(long **)(lVar12 + 0x28) = plVar13;
        *(uint *)(lVar12 + 0x30) = param_1;
        if (param_6 == (undefined8 *)0x0) {
          *(undefined4 *)(lVar12 + 0x24) = 0;
          *puVar2 = 0;
          *(undefined8 *)(lVar12 + 0x1c) = 0;
        }
        else {
          uVar4 = *param_6;
          uVar5 = param_6[1];
          *(undefined4 *)(lVar12 + 0x24) = *(undefined4 *)(param_6 + 2);
          *puVar2 = uVar4;
          *(undefined8 *)(lVar12 + 0x1c) = uVar5;
        }
        do {
          iVar10 = DAT_048afbf4 + 1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(0x48afbf4,0x10);
          if (bVar8) {
            cVar7 = ExclusiveMonitorsStatus();
            DAT_048afbf4 = iVar10;
          }
        } while (cVar7 != '\0');
        *(int *)(lVar12 + 0xc) = iVar10;
        *(undefined4 *)(lVar12 + 0x10) = param_7;
        *(undefined8 *)(lVar12 + 4) = param_2;
        iVar10 = FUN_034b303c(DAT_048afa30,iVar10,param_2,puVar2,param_4,param_5,param_3,
                              *(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x10));
        if (iVar10 == 1) {
          uVar11 = *(undefined4 *)(lVar12 + 0xc);
        }
        else {
          (**(code **)(*plVar13 + 0x18))(plVar13);
          uVar11 = 0;
          *(undefined2 *)(lVar12 + 2) = 0x3d;
        }
        piVar3 = (int *)(DAT_048af9e8 + 0x9c);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = *piVar3 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        return uVar11;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0;
}


