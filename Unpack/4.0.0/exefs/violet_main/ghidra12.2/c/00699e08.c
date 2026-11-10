/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00699e08; name: FUN_00699e08
 */


void FUN_00699e08(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_047cba80;
  uVar6 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    plVar2 = *(long **)(param_1 + 0x20);
    do {
      plVar2 = plVar2 + 1;
      lVar5 = *plVar2;
      pbVar3 = *(byte **)(lVar5 + 0x10);
      if (pbVar3 == puVar1) {
LAB_00699e64:
        FUN_0069a620(lVar5);
        uVar4 = *(ulong *)(lVar5 + 8);
      }
      else {
        if ((*pbVar3 & 1) == 0) {
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          goto LAB_00699e64;
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
        FUN_0069a620(lVar5);
        uVar4 = *(ulong *)(lVar5 + 8);
      }
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar4 & 0xfffffffffffffffe;
        if ((*(byte *)(uVar4 + 8) & 1) == 0) {
          *(undefined2 *)(uVar4 + 8) = 0;
        }
        else {
          **(undefined1 **)(uVar4 + 0x18) = 0;
          *(undefined8 *)(uVar4 + 0x10) = 0;
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (pbVar3 != puVar1) {
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
      uVar6 = *(ulong *)(param_1 + 8);
      goto joined_r0x00699ef4;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  uVar6 = *(ulong *)(param_1 + 8);
joined_r0x00699ef4:
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar6 = uVar6 & 0xfffffffffffffffe;
  if ((*(byte *)(uVar6 + 8) & 1) == 0) {
    *(undefined2 *)(uVar6 + 8) = 0;
    return;
  }
  **(undefined1 **)(uVar6 + 0x18) = 0;
  *(undefined8 *)(uVar6 + 0x10) = 0;
  return;
}


