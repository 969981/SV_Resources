/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057f700; name: FUN_0057f700
 */


void FUN_0057f700(long param_1)

{
  ulong *puVar1;
  byte *pbVar2;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 3:
  case 4:
  case 5:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if ((puVar1 == (ulong *)0x0) && (pbVar2 = *(byte **)(param_1 + 0x18), pbVar2 != (byte *)0x0)) {
      FUN_00267ec4(pbVar2);
LAB_0057f7bc:
      FUN_0049e790(PTR_LAB_047cba48,pbVar2);
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
    break;
  case 6:
  case 7:
  case 8:
    puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) != 0) {
      puVar1 = (ulong *)*puVar1;
    }
    if (((puVar1 == (ulong *)0x0) &&
        (pbVar2 = *(byte **)(param_1 + 0x18), pbVar2 != PTR_DAT_047cba80)) &&
       (pbVar2 != (byte *)0x0)) {
      if ((*pbVar2 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar2 + 0x10));
      }
      goto LAB_0057f7bc;
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


