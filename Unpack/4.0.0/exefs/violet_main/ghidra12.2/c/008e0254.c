/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e0254; name: FUN_008e0254
 */


undefined8
FUN_008e0254(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,int param_5,
            uint param_6,undefined8 param_7,uint param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_60;
  undefined8 uStack_58;
  
  if (((param_6 & 1) == 0) || (*(int *)(param_3 + 0x34) == param_5)) {
    return 0;
  }
  FUN_00d8d140(param_2,*param_4,0x3f);
  lVar3 = *(long *)(param_3 + 0x6d8);
  uStack_58 = *(undefined8 *)(lVar3 + 0x198);
  local_60 = (*(long *)(param_3 + (ulong)*(uint *)(param_3 + 0x30) * 8 + 0x6c0) -
             *(long *)(lVar3 + 0x1a8)) + *(long *)(lVar3 + 400);
  if (*(int *)((long)param_4 + 0xc) != -1) {
    FUN_008f1150(param_2,*(int *)((long)param_4 + 0xc),5,&local_60,0xc0);
  }
  lVar2 = *(long *)(param_3 + 0x238);
  lVar3 = *(long *)(lVar2 + 0x20);
  uStack_58 = *(undefined8 *)(lVar3 + 0x198);
  local_60 = *(long *)(lVar3 + 400) + *(long *)(lVar2 + 0x28);
  if (*(int *)(param_4 + 2) != -1) {
    FUN_008f1150(param_2,*(int *)(param_4 + 2),5,&local_60,0x750);
    lVar2 = *(long *)(param_3 + 0x238);
    lVar3 = *(long *)(lVar2 + 0x20);
  }
  uStack_58 = *(undefined8 *)(lVar3 + 0x198);
  local_60 = *(long *)(lVar3 + 400) + *(long *)(lVar2 + 0x40);
  if (*(int *)((long)param_4 + 0x14) != -1) {
    FUN_008f1150(param_2,*(int *)((long)param_4 + 0x14),5,&local_60,0x120);
  }
  iVar1 = *(int *)(param_4 + 3);
  lVar3 = FUN_008d9bf0();
  if (iVar1 != -1) {
    FUN_00c5afc0(param_2,iVar1,5,lVar3 + 0x260,*(long *)(param_1 + 8) + 0x28);
  }
  lVar2 = (long)*(int *)(param_3 + 0x28) << 4;
  lVar3 = *(long *)(param_3 + 0x6f0);
  uStack_58 = *(undefined8 *)(lVar3 + 0x1e0);
  local_60 = (**(long **)(param_3 + 0xc0) - *(long *)(lVar3 + 0x170)) + *(long *)(lVar3 + 0x1d8);
  FUN_008f11bc(param_2,*(undefined4 *)((long)param_4 + 0x1c),5,&local_60,lVar2);
  lVar3 = *(long *)(param_3 + 0x6f0);
  uStack_58 = *(undefined8 *)(lVar3 + 0x1e0);
  local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 8) - *(long *)(lVar3 + 0x170)) +
             *(long *)(lVar3 + 0x1d8);
  FUN_008f11bc(param_2,*(undefined4 *)(param_4 + 4),5,&local_60,lVar2);
  lVar3 = *(long *)(param_3 + 0x6f0);
  uStack_58 = *(undefined8 *)(lVar3 + 0x1e0);
  local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x10) - *(long *)(lVar3 + 0x170)) +
             *(long *)(lVar3 + 0x1d8);
  FUN_008f11bc(param_2,*(undefined4 *)((long)param_4 + 0x24),5,&local_60,lVar2);
  if (*(int *)(param_4 + 5) != -1) {
    lVar3 = *(long *)(param_3 + 0x6f0);
    uStack_58 = *(undefined8 *)(lVar3 + 0x1e0);
    local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x18) - *(long *)(lVar3 + 0x170)) +
               *(long *)(lVar3 + 0x1d8);
    FUN_008f11bc(param_2,*(int *)(param_4 + 5),5,&local_60,lVar2);
  }
  if (*(int *)((long)param_4 + 0x2c) != -1) {
    lVar3 = *(long *)(param_3 + 0x6f0);
    uStack_58 = *(undefined8 *)(lVar3 + 0x1e0);
    local_60 = (*(long *)(*(long *)(param_3 + 0xc0) + 0x20) - *(long *)(lVar3 + 0x170)) +
               *(long *)(lVar3 + 0x1d8);
    FUN_008f11bc(param_2,*(int *)((long)param_4 + 0x2c),5,&local_60,lVar2);
  }
  if (*(int *)(param_4 + 6) != -1) {
    lVar3 = *(long *)(*(long *)(param_3 + 0xc0) + 0x40);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(param_3 + 0xc0) + 0x20);
    }
    lVar4 = *(long *)(param_3 + 0x6f0);
    uStack_58 = *(undefined8 *)(lVar4 + 0x1e0);
    local_60 = (lVar3 - *(long *)(lVar4 + 0x170)) + *(long *)(lVar4 + 0x1d8);
    FUN_008f11bc(param_2,*(int *)(param_4 + 6),5,&local_60,lVar2);
  }
  if (*(int *)((long)param_4 + 0x34) != -1) {
    lVar3 = *(long *)(*(long *)(param_3 + 0xc0) + 0x48);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(param_3 + 0xc0) + 0x20);
    }
    lVar4 = *(long *)(param_3 + 0x6f0);
    uStack_58 = *(undefined8 *)(lVar4 + 0x1e0);
    local_60 = (lVar3 - *(long *)(lVar4 + 0x170)) + *(long *)(lVar4 + 0x1d8);
    FUN_008f11bc(param_2,*(int *)((long)param_4 + 0x34),5,&local_60,lVar2);
  }
  if (*(int *)(param_4 + 7) != -1) {
    lVar3 = *(long *)(*(long *)(param_3 + 0xc0) + 0x50);
    if (lVar3 == 0) {
      lVar3 = *(long *)(*(long *)(param_3 + 0xc0) + 0x20);
    }
    lVar4 = *(long *)(param_3 + 0x6f0);
    uStack_58 = *(undefined8 *)(lVar4 + 0x1e0);
    local_60 = (lVar3 - *(long *)(lVar4 + 0x170)) + *(long *)(lVar4 + 0x1d8);
    FUN_008f11bc(param_2,*(int *)(param_4 + 7),5,&local_60,lVar2);
  }
  FUN_008f110c(param_2,0x40);
  FUN_008f09b4(param_2,(int)((float)*(int *)(param_3 + 0x28) * 0.03125),1,1);
  if ((param_8 & 1) != 0) {
    FUN_00d8d070(param_2,0x40);
  }
  *(int *)(param_3 + 0x34) = param_5;
  *(undefined1 *)(param_3 + 10) = 1;
  return 1;
}


