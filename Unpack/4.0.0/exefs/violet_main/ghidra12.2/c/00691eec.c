/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00691eec; name: FUN_00691eec
 */


void FUN_00691eec(long param_1)

{
  int iVar1;
  byte *pbVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  
  pbVar2 = *(byte **)(param_1 + 0x10);
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
      iVar1 = *(int *)(param_1 + 0x24);
      goto joined_r0x00691f20;
    }
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  iVar1 = *(int *)(param_1 + 0x24);
joined_r0x00691f20:
  if (iVar1 == 2) {
    puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    if ((puVar3 == (ulong *)0x0) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
      FUN_0068a49c(lVar5);
      FUN_0049e790(PTR_LAB_047cba48,lVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar4 + 8) & 1) != 0) {
      **(undefined1 **)(uVar4 + 0x18) = 0;
      *(undefined8 *)(uVar4 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar4 + 8) = 0;
  }
  return;
}


