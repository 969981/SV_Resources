/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057434c; name: FUN_0057434c
 */


void FUN_0057434c(long param_1)

{
  int iVar1;
  ulong *puVar2;
  byte *pbVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 3) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 == (ulong *)0x0) && (pbVar3 = *(byte **)(param_1 + 0x10), pbVar3 != (byte *)0x0)) {
      FUN_00583aac(pbVar3);
LAB_00574414:
      FUN_0049e790(PTR_LAB_047cba48,pbVar3);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
  }
  else if (iVar1 == 2) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if ((puVar2 == (ulong *)0x0) && (pbVar3 = *(byte **)(param_1 + 0x10), pbVar3 != (byte *)0x0)) {
      FUN_00582ecc(pbVar3);
      goto LAB_00574414;
    }
  }
  else if (iVar1 == 1) {
    puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar2 = (ulong *)*puVar2;
    }
    if (((puVar2 == (ulong *)0x0) &&
        (pbVar3 = *(byte **)(param_1 + 0x10), pbVar3 != PTR_DAT_047cba80)) &&
       (pbVar3 != (byte *)0x0)) {
      if ((*pbVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
      }
      goto LAB_00574414;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


