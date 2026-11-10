/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e4a84; name: FUN_034e4a84
 */


void FUN_034e4a84(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  void *__dest;
  ulong uVar3;
  undefined4 *puVar4;
  void *__src;
  uint uVar5;
  
  FUN_034e4b94();
  if (*(int *)(param_1 + 0x1c0) < 1) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x1b8);
  uVar5 = *(uint *)(param_1 + 0x1bc);
  if (uVar5 <= uVar2) {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar5 = iVar1 + uVar5;
    uVar3 = (ulong)uVar5 * 0x18;
    __dest = (void *)(param_1 + 0x30);
    if (0x180 < uVar3) {
      __src = *(void **)(param_1 + 0x1b0);
      if (__dest == __src) {
        __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar3,1);
        if (__dest == (void *)0x0) {
          return;
        }
        memcpy(__dest,__src,(ulong)(uVar2 * 0x18));
      }
      else {
        __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,__src,uVar3,1);
        if (__dest == (void *)0x0) {
          return;
        }
      }
    }
    *(void **)(param_1 + 0x1b0) = __dest;
    *(uint *)(param_1 + 0x1bc) = uVar5;
  }
  if (uVar2 < uVar5) {
    uVar5 = *(uint *)(param_1 + 0x1b8);
    *(uint *)(param_1 + 0x1b8) = uVar5 + 1;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      puVar4 = (undefined4 *)(*(long *)(param_1 + 0x1b0) + (ulong)uVar5 * 0x18);
      *puVar4 = 1;
      *(undefined8 *)(puVar4 + 2) = param_2;
      puVar4[4] = 0;
    }
  }
  return;
}


