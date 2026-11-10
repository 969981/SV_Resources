/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00345dd0; name: FUN_00345dd0
 */


void FUN_00345dd0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_LAB_047cba48;
  lVar3 = *(long *)(param_1 + 8);
  while (lVar1 = lVar3, lVar1 != param_2) {
    if (*(long *)(lVar1 + -0x18) != 0) {
      FUN_00345dd0((long *)(lVar1 + -0x18));
      FUN_0049e790(puVar2,*(undefined8 *)(lVar1 + -0x18));
    }
    FUN_0025cef0(lVar1 + -0x30,*(undefined8 *)(lVar1 + -0x28));
    lVar3 = lVar1 + -0x50;
    if ((*(byte *)(lVar1 + -0x48) & 1) != 0) {
      FUN_0049e790(puVar2,*(undefined8 *)(lVar1 + -0x38));
    }
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


