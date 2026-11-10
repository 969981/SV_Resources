/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0194a028; name: FUN_0194a028
 */


void FUN_0194a028(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0x88) & 7) != 0) {
      iVar2 = FUN_0194a110((undefined8 *)(param_1 + 0x80));
      if (iVar2 == param_2) {
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
    }
    if ((*(byte *)(param_1 + 0x98) & 7) != 0) {
      iVar2 = FUN_0194a110((undefined8 *)(param_1 + 0x90));
      if (iVar2 == param_2) {
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
    }
    if ((*(byte *)(param_1 + 0xa8) & 7) != 0) {
      iVar2 = FUN_0194a110((undefined8 *)(param_1 + 0xa0));
      if (iVar2 == param_2) {
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined1 *)(param_1 + 0x399) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        *(undefined8 *)(param_1 + 0x118) = 0;
      }
    }
    lVar3 = 0;
    do {
      lVar1 = param_1 + lVar3;
      if (((*(byte *)(lVar1 + 0xb8) & 7) != 0) &&
         (iVar2 = FUN_0194a110(lVar1 + 0xb0), iVar2 == param_2)) {
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        *(undefined8 *)(lVar1 + 0xb8) = 0;
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0x2e0);
  }
  return;
}


