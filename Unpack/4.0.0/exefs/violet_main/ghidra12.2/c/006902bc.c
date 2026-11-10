/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006902bc; name: FUN_006902bc
 */


void FUN_006902bc(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong *puVar5;
  long lVar6;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    do {
      while (pbVar4 = (byte *)*puVar2, (*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        puVar2 = puVar2 + 1;
        uVar1 = uVar1 - 1;
        if (uVar1 == 0) goto LAB_00690314;
      }
      **(undefined1 **)(pbVar4 + 0x10) = 0;
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
LAB_00690314:
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  pbVar4 = *(byte **)(param_1 + 0x28);
  if (pbVar4 != PTR_DAT_047cba80) {
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
  uVar1 = *(ulong *)(param_1 + 8);
  uVar3 = uVar1 & 1;
  puVar5 = (ulong *)(uVar1 & 0xfffffffffffffffe);
  if ((uVar1 & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  if ((puVar5 == (ulong *)0x0) && (lVar6 = *(long *)(param_1 + 0x30), lVar6 != 0)) {
    FUN_00534a90(lVar6);
    FUN_0049e790(PTR_LAB_047cba48,lVar6);
    uVar1 = *(ulong *)(param_1 + 8);
    uVar3 = uVar1 & 1;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (uVar3 != 0) {
    uVar1 = uVar1 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar1 + 8) & 1) != 0) {
      **(undefined1 **)(uVar1 + 0x18) = 0;
      *(undefined8 *)(uVar1 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar1 + 8) = 0;
  }
  return;
}


