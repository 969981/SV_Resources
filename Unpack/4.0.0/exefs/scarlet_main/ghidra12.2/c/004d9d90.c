/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d9d90; name: FUN_004d9d90
 */


void FUN_004d9d90(undefined *param_1)

{
  undefined *puVar1;
  long *plVar2;
  byte *pbVar3;
  
  puVar1 = PTR_DAT_047cba80;
  pbVar3 = *(byte **)(param_1 + 0x18);
  if (pbVar3 == PTR_DAT_047cba80 || pbVar3 == (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x20);
    if (pbVar3 != PTR_DAT_047cba80 && pbVar3 != (byte *)0x0) {
LAB_004d9e0c:
      if ((*pbVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar3);
      pbVar3 = *(byte **)(param_1 + 0x28);
      goto joined_r0x004d9dcc;
    }
  }
  else {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
    pbVar3 = *(byte **)(param_1 + 0x20);
    if (pbVar3 != puVar1 && pbVar3 != (byte *)0x0) goto LAB_004d9e0c;
  }
  pbVar3 = *(byte **)(param_1 + 0x28);
joined_r0x004d9dcc:
  if ((pbVar3 != puVar1) && (pbVar3 != (byte *)0x0)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  if ((param_1 == PTR_DAT_047cd8e0) || (plVar2 = *(long **)(param_1 + 0x30), plVar2 == (long *)0x0))
  {
    return;
  }
  *plVar2 = (long)(PTR_DAT_047cd900 + 0x10);
                    /* try { // try from 004d9e98 to 004d9e9b has its CatchHandler @ 004d9ed0 */
  FUN_004ca714(plVar2 + 1);
  FUN_004d2ad4(plVar2 + 6);
  FUN_005212b0(plVar2 + 2);
  FUN_0049e790(PTR_LAB_047cba48,plVar2);
  return;
}


