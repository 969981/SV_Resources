/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03077608; name: FUN_03077608
 */


void FUN_03077608(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar6 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      uVar3 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar4 * 4) = 0xffffffff;
          *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar4 * 4 + 4) = 0xffffffff;
          *(undefined4 *)(*(long *)(param_1 + 0x28) + uVar4 * 4 + 8) = 0xffffffff;
          lVar5 = uVar4 * 4;
          uVar4 = uVar4 + 4;
          *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar5 + 0xc) = 0xffffffff;
        } while ((uVar6 & 0xfffffffc) != uVar4);
      }
      if ((uVar2 & 3) != 0) {
        lVar5 = uVar4 << 2;
        do {
          *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar5) = 0xffffffff;
          uVar3 = uVar3 - 1;
          lVar5 = lVar5 + 4;
        } while (uVar3 != 0);
      }
    }
    uVar2 = *(uint *)(param_1 + 0x58);
    if (0 < (int)uVar2) {
      if (uVar2 == 1) {
        uVar6 = 0;
      }
      else {
        lVar5 = 0;
        uVar6 = 0;
        do {
          *(undefined2 *)(*(long *)(param_1 + 0x50) + lVar5) = 0xff00;
          uVar6 = uVar6 + 2;
          lVar1 = *(long *)(param_1 + 0x50) + lVar5;
          lVar5 = lVar5 + 4;
          *(undefined2 *)(lVar1 + 2) = 0xff00;
        } while (((ulong)uVar2 & 0xfffffffe) != uVar6);
      }
      if ((uVar2 & 1) != 0) {
        *(undefined2 *)(*(long *)(param_1 + 0x50) + uVar6 * 2) = 0xff00;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x68);
    uVar6 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      uVar3 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined1 *)(*(long *)(param_1 + 0x60) + uVar4) = 0xff;
          *(undefined1 *)(*(long *)(param_1 + 0x60) + uVar4 + 1) = 0xff;
          *(undefined1 *)(*(long *)(param_1 + 0x60) + uVar4 + 2) = 0xff;
          lVar5 = *(long *)(param_1 + 0x60) + uVar4;
          uVar4 = uVar4 + 4;
          *(undefined1 *)(lVar5 + 3) = 0xff;
        } while ((uVar6 & 0xfffffffc) != uVar4);
      }
      if ((uVar2 & 3) != 0) {
        do {
          *(undefined1 *)(*(long *)(param_1 + 0x60) + uVar4) = 0xff;
          uVar4 = uVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}


