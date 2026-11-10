/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f94f4; name: FUN_021f94f4
 */


void FUN_021f94f4(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_021f1020();
  lVar3 = *(long *)(param_1 + 0x70);
  bVar1 = *(char *)(lVar3 + 0x19) == '\0';
  if (bVar1) {
    FUN_00e677e8();
    lVar3 = *(long *)(param_1 + 0x70);
  }
  FUN_00eec37c(lVar3);
  FUN_00f13b9c(param_1,1);
  uVar2 = FUN_00d75438(*(undefined8 *)(param_1 + 0x70));
  FUN_00f14810(*(undefined8 *)(param_1 + 0x70),uVar2);
  FUN_00deb388(*(undefined8 *)(param_1 + 0x70),0);
  FUN_00deb1b4(param_1);
  if ((bVar1) && (*(char *)(*(long *)(param_1 + 0x70) + 0x19) != '\0')) {
    FUN_00e679f0();
  }
  FUN_00f14018(param_1);
  return;
}


