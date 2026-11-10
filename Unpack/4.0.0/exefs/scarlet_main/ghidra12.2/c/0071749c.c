/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071749c; name: FUN_0071749c
 */


void FUN_0071749c(long param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar4 = *(byte **)(param_1 + 0x10);
  if (pbVar4 != PTR_DAT_047cba80) {
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
      pbVar4 = *(byte **)(param_1 + 0x18);
      goto joined_r0x007174d0;
    }
    pbVar4[0] = 0;
    pbVar4[1] = 0;
  }
  pbVar4 = *(byte **)(param_1 + 0x18);
joined_r0x007174d0:
  if (pbVar4 != puVar1) {
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
  puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if ((puVar2 == (ulong *)0x0) && (lVar5 = *(long *)(param_1 + 0x20), lVar5 != 0)) {
    FUN_00513c68(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_00717084(param_1);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar3 + 8) & 1) != 0) {
      **(undefined1 **)(uVar3 + 0x18) = 0;
      *(undefined8 *)(uVar3 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar3 + 8) = 0;
  }
  return;
}


