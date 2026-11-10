/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002dce60; name: FUN_002dce60
 */


long FUN_002dce60(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  char local_3c [4];
  ulong local_38;
  ulong local_30;
  byte *local_28;
  
  if (*(char *)(param_1 + 0x48) != '\0') {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if ((*(int *)(lVar6 + 8) == 0) && (*(int *)(lVar6 + 0xc) == 0)) {
    *(undefined4 *)(param_1 + 0x68) = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  lVar2 = *(long *)(lVar6 + 0x60);
  *(undefined8 *)(lVar6 + 0x60) = uVar3;
  if (lVar2 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  *(undefined4 *)(lVar6 + 0x68) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x10) = *(undefined4 *)(param_1 + 0x68);
  FUN_002d04e4();
  FUN_002d16bc(*(undefined8 *)(param_1 + 0x40));
  FUN_002d118c(*(undefined8 *)(param_1 + 0x40));
  if (*(char *)(*(long *)(param_1 + 0x40) + 2) == '\0') {
    local_38 = 0;
    local_30 = 0;
    local_28 = (byte *)0x0;
                    /* try { // try from 002dcf08 to 002dcf17 has its CatchHandler @ 002dcfd4 */
    uVar1 = FUN_002e6174(param_2,&local_38,local_3c);
    if (local_3c[0] == '\0' && ((uVar1 ^ 0xffffffff) & 1) == 0) {
      if ((local_38 & 1) == 0) {
        lVar6 = *(long *)(param_1 + 0x40);
        uVar4 = local_38 >> 1 & 0x7f;
        pbVar5 = (byte *)((ulong)&local_38 | 1);
      }
      else {
        lVar6 = *(long *)(param_1 + 0x40);
        uVar4 = local_30;
        pbVar5 = local_28;
      }
      *(ulong *)(lVar6 + 0x18) = uVar4;
      *(uint *)(lVar6 + 0x20) = (uint)*pbVar5;
      *(uint *)(lVar6 + 0x24) = (uint)pbVar5[uVar4 - 1];
    }
    if ((local_38 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_28);
    }
  }
  if (*(long *)(param_1 + 0x70) < 1) {
    lVar6 = *(long *)(param_1 + 0x40);
    uVar4 = 0x100000;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x40);
    lVar2 = 0;
    if (*(long *)(lVar6 + 0x50) != 0) {
      lVar2 = (long)*(int *)(lVar6 + 0x10) << 1;
    }
    uVar4 = ((*(long *)(param_1 + 0x70) + (long)*(int *)(lVar6 + 0x10) * -8) - lVar2) - 0x1a8;
    uVar4 = uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU);
  }
  *(ulong *)(lVar6 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return lVar6;
}


