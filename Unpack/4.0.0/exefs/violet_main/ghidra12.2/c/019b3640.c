/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b3640; name: FUN_019b3640
 */


void FUN_019b3640(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  
  if ((param_1 != (int *)0x0) && (param_2 != (uint *)0x0)) {
    param_2[5] = 0;
    iVar2 = FUN_0010c810(param_1[0x46]);
    if (iVar2 == 0) {
      param_2[1] = *param_1 + 7U & 0xfffffff8;
      param_2[2] = param_1[1] + 7U & 0xfffffff8;
      param_2[3] = (*param_1 + 1U >> 1) + 7 & 0xfffffff8;
      uVar3 = (param_1[1] + 1U >> 1) + 7 & 0xfffffff8;
    }
    else {
      uVar1 = *param_1 + 0x1fU & 0xffffffe0;
      param_2[1] = uVar1;
      uVar3 = param_1[1] + 0xfU & 0xfffffff0;
      param_2[2] = uVar3;
      param_2[3] = uVar1 >> 1;
      uVar3 = uVar3 >> 1;
    }
    param_2[4] = uVar3;
    if (param_1[2] == 1) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
      if ((*(byte *)(param_1 + 8) & 8) != 0) {
        uVar3 = 3;
      }
    }
    *param_2 = uVar3;
    if (*(long *)(param_1 + 0x2c) != 0) {
      memcpy(param_2 + 6,(void *)(*(long *)(param_1 + 0x2c) + 0x18),0xf0);
      return;
    }
    puVar5 = param_2 + 0x18;
    puVar5[0] = 0;
    puVar5[1] = 0;
    param_2[0x3e] = 0;
    param_2[0x3f] = 0;
    param_2[0x40] = 0;
    param_2[0x41] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0x3a] = 0;
    param_2[0x3b] = 0;
    param_2[0x3c] = 0;
    param_2[0x3d] = 0;
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    param_2[0x34] = 0;
    param_2[0x35] = 0;
    param_2[0x2e] = 0;
    param_2[0x2f] = 0;
    param_2[0x30] = 0;
    param_2[0x31] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    param_2[0x2c] = 0;
    param_2[0x2d] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x22] = 0;
    param_2[0x23] = 0;
    param_2[0x24] = 0;
    param_2[0x25] = 0;
    param_2[0x1e] = 0;
    param_2[0x1f] = 0;
    param_2[0x20] = 0;
    param_2[0x21] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    param_2[0x1d] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    uVar4 = 0;
    do {
      puVar5[-0x10] = 1;
      uVar4 = uVar4 + 1;
      puVar5[-0xc] = 1;
      puVar5[-8] = 1;
      puVar5[-4] = (uint)param_1[8] >> 0x14 & 1;
      *puVar5 = (uint)param_1[8] >> 2 & 1;
      puVar5 = puVar5 + 0x14;
    } while (uVar4 < uVar3);
  }
  return;
}


