/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005fcd50; name: FUN_005fcd50
 */


void FUN_005fcd50(long param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    do {
      puVar1 = puVar1 + 1;
      FUN_0060d320(*puVar1);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  pbVar2 = *(byte **)(param_1 + 0x28);
  if (pbVar2 != PTR_DAT_047cba80) {
    if ((*pbVar2 & 1) != 0) {
      **(undefined1 **)(pbVar2 + 0x10) = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      uVar3 = *(ulong *)(param_1 + 8);
      goto joined_r0x005fcdc8;
    }
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  uVar3 = *(ulong *)(param_1 + 8);
joined_r0x005fcdc8:
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar3 = uVar3 & 0xfffffffffffffffe;
  if ((*(byte *)(uVar3 + 8) & 1) == 0) {
    *(undefined2 *)(uVar3 + 8) = 0;
    return;
  }
  **(undefined1 **)(uVar3 + 0x18) = 0;
  *(undefined8 *)(uVar3 + 0x10) = 0;
  return;
}


