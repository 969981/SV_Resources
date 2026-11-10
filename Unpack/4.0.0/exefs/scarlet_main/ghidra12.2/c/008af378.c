/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008af378; name: FUN_008af378
 */


void FUN_008af378(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long local_50;
  long lStack_48;
  
  if ((*(long *)(param_1 + 0xd8) != 0) && ((**(byte **)(param_2 + 200) >> 1 & 1) == 0)) {
    FUN_008a42d8(*(long *)(param_1 + 0xd8),param_2);
    if (*(byte *)(param_1 + 0xf0) < 4) {
      FUN_00892c60(param_3,param_2);
      uVar9 = *(uint *)(param_1 + 0x60);
      if ((uVar9 >> 0x12 & 1) != 0) {
        lVar4 = FUN_00d36bcc(param_1,0x12);
        if (lVar4 != 0) {
          lVar5 = FUN_008a6694(param_1,6);
          if ((((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) && ((*(byte *)(lVar5 + 4) >> 4 & 1) != 0)
              ) && (0.0 < *(float *)(lVar5 + 0xdc))) {
            FUN_008af238(param_1,param_2,param_3,lVar5,lVar4);
          }
          plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                           (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
          lStack_48 = plVar1[1];
          local_50 = *plVar1 + (ulong)*(uint *)(lVar4 + 8);
          if (-1 < *(int *)(lVar4 + 4)) {
            FUN_008f1150(param_3,*(int *)(lVar4 + 4),4,&local_50,0x120);
          }
          if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
            FUN_008a8bf8(param_1,param_3,param_2);
          }
          if ((*(byte *)(lVar5 + 4) & 0x9f) == 0x90) {
            return;
          }
          FUN_00892cd0(param_3,param_2);
          return;
        }
        uVar9 = *(uint *)(param_1 + 0x60);
      }
      if ((uVar9 >> 0x11 & 1) != 0) {
        FUN_008a8bf8(param_1,param_3,param_2);
      }
      FUN_00892cd0(param_3,param_2);
      return;
    }
    uVar6 = FUN_00892e08(param_2,*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x20),
                         *(undefined2 *)(*(long *)(param_1 + 0xd8) + 0x4a));
    if ((uVar6 & 1) != 0) {
      FUN_008a5d9c(*(undefined8 *)(param_1 + 0xd8),param_3);
    }
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_48 = plVar1[1];
    local_50 = *plVar1 + *(long *)(*(long *)(param_1 + 0xf8) + 8);
    uVar7 = FUN_008f0008(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar8 = FUN_008f0034(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    FUN_008f0b9c(param_3,0,&local_50,uVar7,uVar8);
    *(undefined1 *)(param_2 + 0x18c) = 1;
    FUN_008a57b0(*(undefined8 *)(param_1 + 0xd8),param_3,param_2);
    if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
      FUN_008a8bf8(param_1,param_3,param_2);
    }
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_48 = plVar1[1];
    local_50 = *plVar1 + *(long *)(*(long *)(param_1 + 0xf8) + 0x10);
    uVar2 = FUN_008f004c(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar3 = FUN_008f005c(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    FUN_008f0a30(param_3,3,uVar2,&local_50,uVar3,0);
  }
  return;
}


