/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a6a748; name: FUN_00a6a748
 */


void FUN_00a6a748(long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  lVar2 = *(long *)(param_1 + 0x1a8);
  iVar5 = *(int *)(lVar2 + 0x6c38);
  uVar1 = *(uint *)(lVar2 + 0x6c3c);
  uVar4 = uVar1 >> 0xe & 0x3f;
  iVar3 = uVar4 * 6;
  if (1 < iVar5 - 1U) {
    uVar4 = 0;
  }
  if (iVar5 == 0) {
    uVar4 = (uVar1 >> 8 & 0x3f) + iVar3;
  }
  iVar5 = FUN_00a67f9c(*(undefined8 *)(param_1 + 0x1a0),iVar5,uVar1 & 0xff,uVar4,
                       uVar1 >> 0x14 & 0x3f,uVar1 >> 0x1a,param_2,param_3,
                       *(undefined2 *)(param_1 + 0x1e2));
  if (iVar5 == 0) {
    iVar5 = *(int *)(lVar2 + 0x6c38);
    uVar1 = *(uint *)(lVar2 + 0x6c3c);
    uVar4 = uVar1 >> 0xe & 0x3f;
    iVar3 = uVar4 * 6;
    if (1 < iVar5 - 1U) {
      uVar4 = 0;
    }
    if (iVar5 == 0) {
      uVar4 = (uVar1 >> 8 & 0x3f) + iVar3;
    }
    FUN_00a685c8(*(undefined8 *)(param_1 + 0x1a0),iVar5,uVar1 & 0xff,uVar4,param_2,param_3,
                 uVar1 >> 0x14 & 0x3f,uVar1 >> 0x1a);
    FUN_01dc2574(*(undefined8 *)(param_1 + 0x1a8),0);
    *(undefined1 *)(param_1 + 0x19c) = 0;
  }
  return;
}


