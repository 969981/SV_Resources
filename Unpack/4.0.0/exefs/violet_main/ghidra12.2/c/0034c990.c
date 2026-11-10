/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034c990; name: FUN_0034c990
 */


uint FUN_0034c990(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  
  if ((param_1 != (long *)0x0) && (lVar4 = *param_1, lVar4 != 0)) {
    puVar3 = (uint *)(param_1[1] + 0x10);
    do {
      if ((puVar3[-4] == 1) &&
         (iVar2 = strcmp("grpc.compression_enabled_algorithms_bitset",*(char **)(puVar3 + -2)),
         iVar2 == 0)) {
        uVar1 = *puVar3 & 0xe | 1;
        *puVar3 = uVar1;
        return uVar1;
      }
      puVar3 = puVar3 + 8;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return 0xf;
}


