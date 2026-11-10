/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021a214; name: FUN_0021a214
 */


void FUN_0021a214(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  byte *pbVar4;
  
  *param_1 = (long)(PTR_DAT_047cbde0 + 0x10);
  puVar1 = PTR_DAT_047cba80;
  pbVar4 = (byte *)param_1[2];
  if (pbVar4 == PTR_DAT_047cba80 || pbVar4 == (byte *)0x0) {
    pbVar4 = (byte *)param_1[3];
    if (pbVar4 != PTR_DAT_047cba80 && pbVar4 != (byte *)0x0) {
LAB_0021a29c:
      if ((*pbVar4 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar4 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar4);
      uVar2 = param_1[1];
      goto joined_r0x0021a25c;
    }
  }
  else {
    if ((*pbVar4 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar4 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar4);
    pbVar4 = (byte *)param_1[3];
    if (pbVar4 != puVar1 && pbVar4 != (byte *)0x0) goto LAB_0021a29c;
  }
  uVar2 = param_1[1];
joined_r0x0021a25c:
  if ((((uVar2 & 1) == 0) || (plVar3 = (long *)(uVar2 & 0xfffffffffffffffe), *plVar3 != 0)) ||
     (plVar3 == (long *)0x0)) {
    return;
  }
  if ((*(byte *)(plVar3 + 1) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,plVar3[3]);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar3);
  return;
}


