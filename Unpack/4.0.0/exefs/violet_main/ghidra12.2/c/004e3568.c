/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e3568; name: FUN_004e3568
 */


void FUN_004e3568(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
    do {
      while (pbVar4 = (byte *)*puVar3, (*pbVar4 & 1) != 0) {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) goto LAB_004e35bc;
      }
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
LAB_004e35bc:
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0x60);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0x68);
      if ((*pbVar4 & 1) != 0) {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        uVar2 = *(ulong *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x10) = 0;
        goto joined_r0x004e3640;
      }
      pbVar4[0] = 0;
      pbVar4[1] = 0;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
joined_r0x004e3640:
  if (((uVar2 & 1) == 0) ||
     (*(long *)((uVar2 & 0xfffffffffffffffe) + 8) == *(long *)((uVar2 & 0xfffffffffffffffe) + 0x10))
     ) {
    return;
  }
  FUN_00514600();
  return;
}


