/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f2fd0; name: FUN_001f2fd0
 */


void FUN_001f2fd0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x1a0;
  iVar2 = FUN_001f4b34(lVar1,*(undefined8 *)(param_1 + 0x218));
  if (iVar2 != 0) {
    FUN_001eda90(param_1,*(undefined4 *)(param_1 + 0x93c),1,"HEADERS: could not unpack");
    return;
  }
  lVar3 = FUN_001edb18(param_1,*(undefined4 *)(param_1 + 0x1a8));
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    FUN_001efcc4(param_1,lVar1);
    return;
  }
  if (*(int *)(lVar3 + 0xdc) == 1) {
    if ((*(uint *)(param_1 + 0x1a8) != 0) &&
       ((*(uint *)(param_1 + 0x1a8) & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0'))) {
      *(undefined4 *)(param_1 + 0x1d8) = 1;
      FUN_001efe9c(param_1,lVar1,lVar3);
      return;
    }
  }
  else if (*(int *)(lVar3 + 0xdc) == 4) {
    *(undefined4 *)(param_1 + 0x1d8) = 2;
    FUN_001eff20(param_1,lVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0x1d8) = 3;
  FUN_001f0060(param_1,lVar1);
  return;
}


