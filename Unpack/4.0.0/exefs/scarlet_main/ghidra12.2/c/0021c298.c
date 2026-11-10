/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021c298; name: FUN_0021c298
 */


void FUN_0021c298(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  byte *pbVar3;
  
  if (*(int *)(param_1 + 0x1c) == 2) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  else {
    if (*(int *)(param_1 + 0x1c) != 1) goto LAB_0021c334;
    uVar2 = *(ulong *)(param_1 + 8);
  }
  puVar1 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  if (((puVar1 == (ulong *)0x0) && (pbVar3 = *(byte **)(param_1 + 0x10), pbVar3 != PTR_DAT_047cba80)
      ) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
LAB_0021c334:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


