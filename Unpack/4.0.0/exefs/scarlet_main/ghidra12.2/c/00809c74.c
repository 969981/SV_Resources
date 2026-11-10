/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00809c74; name: FUN_00809c74
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00809c74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  ulong local_100;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined *local_d8;
  undefined1 local_d0;
  undefined2 local_cf;
  undefined1 local_cd [117];
  undefined8 local_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  puVar2 = PTR_DAT_047d15d8;
  lVar4 = thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
  nn::os::LockMutex((MutexType *)(lVar4 + 0x250));
  lVar5 = thunk_FUN_00799c50(*(undefined8 *)puVar2);
  nn::os::LockMutex((MutexType *)(lVar5 + 0x1378));
  lVar6 = thunk_FUN_00799c50(*(undefined8 *)puVar2);
  plVar12 = *(long **)(lVar6 + 0x270);
  lVar6 = thunk_FUN_00799c50(*(undefined8 *)puVar2);
  lVar11 = *(long *)(lVar6 + 0x1308);
  lVar6 = thunk_FUN_00799c50(*(undefined8 *)puVar2);
  if ((*(int *)(lVar6 + 0x288) != 1) &&
     (iVar3 = FUN_00809130(param_1), *(int *)(param_1 + 0x40) == iVar3)) {
    uVar7 = thunk_FUN_00799c50(*(undefined8 *)puVar2);
    FUN_0079b704(uVar7,1);
  }
  iVar3 = FUN_00560b90(param_2);
  if (iVar3 == *(int *)(param_1 + 0x3c)) {
    FUN_007a8258(plVar12,3);
  }
  uVar8 = FUN_00560b98(param_2);
  local_108 = (undefined1  [8])(PTR_DAT_047d1760 + 0x10);
  local_d8 = PTR_DAT_047d1768 + 0x68;
  local_f8 = PTR_DAT_047d1768 + 0x10;
  puStack_f0 = &local_d0;
  local_e8 = 0x70;
  lVar6 = 0;
  puVar10 = (undefined8 *)local_108;
  do {
    *(undefined2 *)((long)puVar10 + 0x39) = 0;
    lVar1 = lVar6 + 4;
    *(undefined1 *)((long)puVar10 + 0x3b) = 0;
    puVar10 = (undefined8 *)((long)local_108 + lVar1);
    local_cd[lVar6 + 1] = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0x70);
  uVar8 = uVar8 & 0xffffffff;
  local_58 = 0;
  local_d0 = 0;
  lVar6 = 0;
  puVar10 = (undefined8 *)local_108;
  do {
    *(undefined2 *)((long)puVar10 + 0x39) = 0;
    lVar1 = lVar6 + 4;
    *(undefined1 *)((long)puVar10 + 0x3b) = 0;
    puVar10 = (undefined8 *)((long)local_108 + lVar1);
    local_cd[lVar6 + 1] = 0;
    lVar6 = lVar1;
  } while (lVar1 != 0x70);
  uStack_e4 = 0;
  local_e0 = 0;
  local_100 = uVar8;
  plVar9 = (long *)thunk_FUN_00799c50(*(undefined8 *)puVar2);
  (**(code **)(*plVar9 + 0x3c0))(auStack_128,plVar9,local_108);
  uVar7 = thunk_FUN_00799c50(*(undefined8 *)puVar2);
  FUN_007fedb0(auStack_128,uVar7,uVar8);
  (**(code **)(*plVar12 + 0x78))(plVar12,auStack_128);
  lVar6 = FUN_00801444(lVar11,uVar8);
  if (lVar6 != 0) {
    uVar7 = thunk_FUN_00799c50(*(undefined8 *)puVar2);
    FUN_00800374(uVar7,*(undefined8 *)(lVar6 + 8));
  }
  FUN_008011cc(lVar11,uVar8);
  *(undefined1 *)(lVar11 + 0x10) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x1378));
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x250));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


