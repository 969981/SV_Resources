/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005781dc; name: FUN_005781dc
 */


void FUN_005781dc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    plVar1 = *(long **)(param_1 + 0x20);
    do {
      plVar1 = plVar1 + 1;
      lVar4 = *plVar1;
      FUN_005799fc(lVar4);
      uVar2 = *(ulong *)(lVar4 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar2 & 0xfffffffffffffffe;
        if ((*(byte *)(uVar2 + 8) & 1) == 0) {
          *(undefined2 *)(uVar2 + 8) = 0;
        }
        else {
          **(undefined1 **)(uVar2 + 0x18) = 0;
          *(undefined8 *)(uVar2 + 0x10) = 0;
        }
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
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
      uVar5 = *(ulong *)(param_1 + 8);
      goto joined_r0x00578290;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  uVar5 = *(ulong *)(param_1 + 8);
joined_r0x00578290:
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar5 = uVar5 & 0xfffffffffffffffe;
  if ((*(byte *)(uVar5 + 8) & 1) == 0) {
    *(undefined2 *)(uVar5 + 8) = 0;
    return;
  }
  **(undefined1 **)(uVar5 + 0x18) = 0;
  *(undefined8 *)(uVar5 + 0x10) = 0;
  return;
}


