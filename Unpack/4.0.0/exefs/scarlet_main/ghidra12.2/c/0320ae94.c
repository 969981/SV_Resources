/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320ae94; name: FUN_0320ae94
 */


void FUN_0320ae94(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((int)param_1[5] == 0) {
    uVar10 = param_2[1];
    lVar11 = *(long *)PTR_DAT_047e3fe8;
    nn::os::LockMutex((MutexType *)(lVar11 + 0xc0));
    iVar6 = FUN_031ddfe0(lVar11 + 0x38,uVar10);
    iVar7 = *(int *)(*(long *)(lVar11 + 0x38) + (long)iVar6 * 0x18 + 0x10);
    nn::os::UnlockMutex((MutexType *)(lVar11 + 0xc0));
    if ((-1 < iVar6) && (iVar7 != 0)) {
      uVar10 = *param_2;
      puVar3 = (ulong *)param_2[1];
      if (puVar3 != (ulong *)0x0) {
        puVar8 = puVar3;
        do {
          uVar9 = *puVar8;
          if (((uint)uVar9 >> 2 & 1) != 0) {
            uVar9 = puVar8[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
            if ((uVar9 & 1) != 0) {
              piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            goto LAB_0320af24;
          }
          puVar8 = (ulong *)puVar8[1];
        } while (puVar8 != (ulong *)0x0);
      }
      uVar9 = 0;
LAB_0320af24:
      iVar7 = (int)param_1[1];
      lVar11 = (long)iVar7;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar7) {
        FUN_0321abfc(param_1,PTR_PTR_047d1a50,lVar11 + 1);
        iVar7 = (int)param_1[1];
      }
      puVar2 = (undefined8 *)(*param_1 + (long)iVar7 * 0x20);
      *puVar2 = uVar10;
      puVar2[1] = puVar3;
      puVar2[2] = uVar9;
      *(undefined4 *)(puVar2 + 3) = 0xffffffff;
      *(int *)(param_1 + 1) = (int)(lVar11 + 1);
    }
  }
  return;
}


