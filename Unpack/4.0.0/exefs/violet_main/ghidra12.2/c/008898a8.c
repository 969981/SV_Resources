/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008898a8; name: FUN_008898a8
 */


void FUN_008898a8(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar1 = *(int *)(param_1 + 3) - 1;
  lVar2 = param_1[2];
  *param_1 = 0;
  param_1[1] = lVar2;
  if (1 < *(int *)(param_1 + 3)) {
    if (uVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      plVar3 = (long *)(lVar2 + 0x58);
      do {
        uVar4 = uVar4 + 2;
        plVar3[-0xb] = (long)plVar3;
        *plVar3 = (long)(plVar3 + 0xb);
        plVar3 = plVar3 + 0x16;
      } while (((ulong)uVar1 & 0xfffffffe) != uVar4);
    }
    if ((uVar1 & 1) != 0) {
      plVar3 = (long *)(lVar2 + uVar4 * 0x58);
      *plVar3 = (long)(plVar3 + 0xb);
    }
  }
  *(undefined8 *)(lVar2 + (long)(int)(uVar1 * 0xb) * 8) = 0;
  param_1[2] = lVar2;
  return;
}


