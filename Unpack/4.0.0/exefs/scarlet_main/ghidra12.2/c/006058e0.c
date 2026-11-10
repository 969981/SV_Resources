/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006058e0; name: FUN_006058e0
 */


void FUN_006058e0(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar1 != PTR_DAT_047cba80) {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar1 + 0x10) = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
    }
  }
  uVar2 = *(ulong *)(param_1 + 8);
  uVar3 = uVar2 & 1;
  puVar4 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) != 0) {
    puVar4 = (ulong *)*puVar4;
  }
  if ((puVar4 == (ulong *)0x0) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
    FUN_006110c4(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar3 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (uVar3 != 0) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) != 0) {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar2 + 8) = 0;
  }
  return;
}


