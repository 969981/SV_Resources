/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ccc4c; name: FUN_002ccc4c
 */


void FUN_002ccc4c(byte *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* try { // try from 002ccc60 to 002ccc6f has its CatchHandler @ 002ccdc4 */
    FUN_002e4804();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_002e4804();
  }
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    FUN_002d0428(lVar2);
    FUN_0049e790(PTR_LAB_047cba48,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    FUN_002d0428(lVar2);
    FUN_0049e790(PTR_LAB_047cba48,lVar2);
  }
  pbVar3 = *(byte **)(param_1 + 0x38);
  if ((pbVar3 != (byte *)0x0) && (pbVar3 != DAT_047ef1b8)) {
    if ((*pbVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar3 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar3);
  }
  lVar2 = *(long *)(param_1 + 0xa0);
  if ((lVar2 != 0) && (lVar2 != DAT_047ef1c0)) {
    FUN_002ceba4(lVar2,*(undefined8 *)(lVar2 + 8));
    FUN_0049e790(PTR_LAB_047cba48,lVar2);
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  if ((lVar2 != 0) && (lVar2 != DAT_047ef1c8)) {
    FUN_002cec00(lVar2,*(undefined8 *)(lVar2 + 8));
    FUN_0049e790(PTR_LAB_047cba48,lVar2);
  }
  if ((param_1[0x60] & 1) == 0) {
    bVar1 = param_1[0x48];
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x70));
    bVar1 = param_1[0x48];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *param_1;
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x58));
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x10));
  return;
}


