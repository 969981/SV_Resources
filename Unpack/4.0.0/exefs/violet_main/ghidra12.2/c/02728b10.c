/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02728b10; name: FUN_02728b10
 */


void FUN_02728b10(long param_1,void *param_2,ulong param_3)

{
  size_t __n;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  FUN_00c41540(lVar1);
  __n = -((param_3 & 0xffffffff) >> 0x1f) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
  if (0xf < __n) {
    __n = 0x10;
  }
  memcpy((void *)(lVar1 + 0xfc),param_2,__n);
  return;
}


