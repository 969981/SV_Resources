/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003292fc; name: FUN_003292fc
 */


void FUN_003292fc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] != '\0') {
    plVar2 = (long *)(lVar1 + 0x70);
    if (*plVar2 != 0) {
      FUN_0032939c(plVar2);
      FUN_0049e790(PTR_LAB_047cba48,*plVar2);
    }
    FUN_0025cef0(lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x60));
    if ((*(byte *)(lVar1 + 0x40) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar1 + 0x50));
    }
    if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar1 + 0x30));
    }
  }
  FUN_0049e790(PTR_LAB_047cba48,lVar1);
  return;
}


