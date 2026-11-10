/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298d1a8; name: FUN_0298d1a8
 */


void FUN_0298d1a8(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  if (((*(byte *)(lVar2 + 0x499) >> 2 & 1) == 0) && (*(uint *)(lVar2 + 0x30) < 2)) {
    uVar1 = *(int *)(param_1 + 0xc) + param_2;
    if (0x1869e < uVar1) {
      uVar1 = 99999;
    }
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  return;
}


