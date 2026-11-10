/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087a8a8; name: FUN_0087a8a8
 */


void FUN_0087a8a8(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + 0x4f0) != 0) && (*(int *)(param_1 + 0xc) != 0)) &&
     (memset((void *)(*(long *)(param_1 + 0x4f0) + 4),0,0x160), 1 < *(uint *)(param_1 + 0xc))) {
    uVar1 = 1;
    lVar2 = 0x174;
    do {
      memset((void *)(*(long *)(param_1 + 0x4f0) + lVar2),0,0x160);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x170;
    } while (uVar1 < *(uint *)(param_1 + 0xc));
  }
  if (*(long *)(param_1 + 0x4f8) != 0) {
    memset((void *)(*(long *)(param_1 + 0x4f8) + 4),0,0x160);
    memset((void *)(*(long *)(param_1 + 0x4f8) + 0x174),0,0x160);
  }
  if (((*(long *)(param_1 + 0x500) != 0) && (*(int *)(param_1 + 0x510) != 0)) &&
     (memset((void *)(*(long *)(param_1 + 0x500) + 4),0,0x160), 1 < *(uint *)(param_1 + 0x510))) {
    uVar1 = 1;
    lVar2 = 0x174;
    do {
      memset((void *)(*(long *)(param_1 + 0x500) + lVar2),0,0x160);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x170;
    } while (uVar1 < *(uint *)(param_1 + 0x510));
  }
  return;
}


