/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e09e64; name: FUN_00e09e64
 */


void FUN_00e09e64(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  MutexType *pMVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  local_68 = *(undefined4 *)(param_1 + 0x23c);
  local_70 = 0x4908000010;
  FUN_00e08a00(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_70);
  local_38 = 0;
  local_58 = auStack_48;
  local_50 = -0x7ffffffeffffffff;
  FUN_030aaba4(param_1,&local_58);
  lVar11 = *(long *)(*(long *)(param_1 + 0x180) + 0x250);
  lVar12 = *(long *)(param_1 + 0x210);
  pMVar9 = *(MutexType **)(lVar11 + 0x28);
  nn::os::LockMutex(pMVar9);
  lVar11 = *(long *)(*(long *)(lVar11 + 0x18) + (ulong)*(byte *)(lVar12 + 0x18) * 8);
  if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
    plVar5 = (long *)(lVar12 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  iVar6 = *(int *)(lVar11 + 0x48);
  lVar7 = (long)iVar6;
  if ((int)(*(uint *)(lVar11 + 0x4c) & 0x7fffffff) <= iVar6) {
    FUN_030d1cf4(lVar11 + 0x40,PTR_PTR_047d1a50,lVar7 + 1);
    iVar6 = *(int *)(lVar11 + 0x48);
  }
  *(long *)(*(long *)(lVar11 + 0x40) + (long)iVar6 * 8) = lVar12;
  *(int *)(lVar11 + 0x48) = (int)(lVar7 + 1);
  nn::os::UnlockMutex(pMVar9);
  if (local_38 != 0) {
    puVar2 = local_58 + local_38 * 0x10;
    puVar10 = local_58;
    do {
      plVar5 = *(long **)(puVar10 + 8);
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      puVar10 = puVar10 + 0x10;
    } while (puVar10 != puVar2);
  }
  lVar11 = local_50;
  uVar8 = (ulong)local_50._4_4_;
  local_50 = (ulong)local_50._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_58 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_58,uVar8 << 4);
  }
  return;
}


