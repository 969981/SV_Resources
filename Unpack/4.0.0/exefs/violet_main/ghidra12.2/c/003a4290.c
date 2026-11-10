/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a4290; name: FUN_003a4290
 */


void FUN_003a4290(long param_1,uint param_2)

{
  short *psVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x18f8) + 0x58) = *(undefined8 *)(param_1 + 0x18e8);
    *(short *)(*(long *)(param_1 + 0x18f8) + 2) = *(short *)(*(long *)(param_1 + 0x18f8) + 2) + 1;
    *(undefined8 *)(param_1 + 0x18e8) = 0;
    return;
  }
  psVar1 = *(short **)(param_1 + 0x18f8);
  *psVar1 = *psVar1 + 1;
  *(undefined8 *)(psVar1 + 8) = *(undefined8 *)(psVar1 + 0x10);
  *(undefined8 *)(psVar1 + 4) = *(undefined8 *)(psVar1 + 0xc);
  lVar2 = *(long *)(param_1 + 0x18f8);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  FUN_003a0f30();
  *(undefined8 *)(param_1 + 0x18e0) = 0;
  return;
}


