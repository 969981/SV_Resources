/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eebf7c; name: FUN_00eebf7c
 */


void FUN_00eebf7c(undefined8 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  
  FUN_00eec698();
  *param_1 = &DAT_045a9288;
  param_1[4] = &PTR_LAB_045a92c8;
  FUN_00ff2020(param_1,param_1[1]);
  lVar3 = param_1[0xe];
  bVar1 = *(char *)(lVar3 + 0x19) == '\0';
  if (bVar1) {
    FUN_00e677e8();
    lVar3 = param_1[0xe];
  }
  FUN_00eec37c(lVar3);
  FUN_00f13b9c(param_1,1);
  uVar2 = FUN_00d75438(param_1[0xe]);
  FUN_00f14810(param_1[0xe],uVar2);
  FUN_00deb388(param_1[0xe],0);
  FUN_00deb1b4(param_1);
  if ((bVar1) && (*(char *)(param_1[0xe] + 0x19) != '\0')) {
    FUN_00e679f0();
    return;
  }
  return;
}


