/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f34de4; name: FUN_02f34de4
 */


void FUN_02f34de4(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  MutexType *pMVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(byte *)(param_2 + 0x54) >> 3 & 1) != 0) {
    if (*(uint *)(param_2 + 0x84) == *(uint *)(param_2 + 0x50)) {
      FUN_02f09c28(param_1 + 0x28);
      return;
    }
    pMVar6 = *(MutexType **)(param_1 + 0x128);
    lVar8 = *(long *)(param_1 + 0x38);
    uVar7 = (ulong)*(uint *)(param_2 + 0x50) & 0xffffff;
    nn::os::LockMutex(pMVar6);
    uVar4 = (long)*(int *)(param_1 + 0xf0) - 1;
    iVar3 = *(int *)(*(long *)(param_1 + 0x108) + uVar7 * 4);
    if (iVar3 < (int)uVar4) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar4 * 0x10);
      uVar5 = *puVar1;
      uVar2 = *(uint *)(puVar1 + 1);
      *(int *)(*(long *)(param_1 + 0x108) + ((ulong)uVar2 & 0xffffff) * 4) = iVar3;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0xe8) + (long)iVar3 * 0x10);
      *puVar1 = uVar5;
      *(uint *)(puVar1 + 1) = uVar2;
      uVar4 = (ulong)(*(int *)(param_1 + 0xf0) - 1);
    }
    *(int *)(param_1 + 0xf0) = (int)uVar4;
    nn::os::UnlockMutex(pMVar6);
    *(undefined1 *)(*(long *)(param_1 + 0xf8) + uVar7) = 0xff;
    lVar8 = lVar8 + uVar7 * 0xc0;
    *(uint *)(lVar8 + 0x54) = *(uint *)(lVar8 + 0x54) & 0xfffffff7;
    *(ushort *)(lVar8 + 0x58) = *(ushort *)(lVar8 + 0x58) | 0x228;
    *(undefined4 *)(*(long *)(param_1 + 0x108) + uVar7 * 4) = 0xffffffff;
  }
  return;
}


