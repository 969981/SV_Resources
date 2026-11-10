/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00611194; name: FUN_00611194
 */


void FUN_00611194(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    do {
      while (pbVar3 = (byte *)*puVar2, (*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        puVar2 = puVar2 + 1;
        uVar1 = uVar1 - 1;
        if (uVar1 == 0) goto LAB_006111e0;
      }
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
LAB_006111e0:
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar1 = (ulong)*(uint *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    do {
      while (pbVar3 = (byte *)*puVar2, (*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        puVar2 = puVar2 + 1;
        uVar1 = uVar1 - 1;
        if (uVar1 == 0) goto LAB_00611230;
      }
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
LAB_00611230:
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  pbVar3 = *(byte **)(param_1 + 0x40);
  if (pbVar3 != PTR_DAT_047cba80) {
    if ((*pbVar3 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      uVar1 = *(ulong *)(param_1 + 8);
      *(undefined1 *)(param_1 + 0x48) = 0;
      goto joined_r0x00611278;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x48) = 0;
joined_r0x00611278:
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar1 = uVar1 & 0xfffffffffffffffe;
  if ((*(byte *)(uVar1 + 8) & 1) == 0) {
    *(undefined2 *)(uVar1 + 8) = 0;
    return;
  }
  **(undefined1 **)(uVar1 + 0x18) = 0;
  *(undefined8 *)(uVar1 + 0x10) = 0;
  return;
}


