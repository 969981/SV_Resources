/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010afb78; name: FUN_010afb78
 */


void FUN_010afb78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(lVar3 + 0x408) = 0;
  memset((void *)(*(long *)(lVar3 + 8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x28) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x48) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x68) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x88) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0xa8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 200) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0xe8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x108) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x128) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x148) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x168) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x188) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x1a8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x1c8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x1e8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x208) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x228) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x248) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x268) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x288) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x2a8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x2c8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x2e8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x308) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x328) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x348) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x368) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x388) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x3a8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 0x3c8) + 8),0,0x430);
  memset((void *)(*(long *)(lVar3 + 1000) + 8),0,0x430);
  lVar2 = *(long *)(param_1 + 0x38);
  lVar3 = 0;
  *(undefined4 *)(lVar2 + 0xc08) = 0;
  do {
    lVar1 = lVar2 + lVar3;
    lVar3 = lVar3 + 0x60;
    *(undefined2 *)(*(long *)(lVar1 + 8) + 8) = 0;
    *(undefined2 *)(*(long *)(lVar1 + 0x28) + 8) = 0;
    *(undefined2 *)(*(long *)(lVar1 + 0x48) + 8) = 0;
  } while (lVar3 != 0xc00);
  return;
}


