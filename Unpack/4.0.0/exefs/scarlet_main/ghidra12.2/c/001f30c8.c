/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f30c8; name: FUN_001f30c8
 */


undefined8 FUN_001f30c8(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x950);
  if (*(int *)(param_1 + 0x95c) - param_2 < iVar1 || 0x7fffffff - param_2 < iVar1) {
    uVar2 = FUN_001eda90(param_1,*(undefined4 *)(param_1 + 0x93c),3,0);
    return uVar2;
  }
  *(int *)(param_1 + 0x950) = iVar1 + param_2;
  if (((*(byte *)(param_1 + 0x99c) & 1) == 0) && (*(char *)(param_1 + 0x9ac) == '\0')) {
    uVar2 = FUN_001ed6e8();
    if (((int)uVar2 != 0) &&
       (uVar2 = FUN_001f3450(param_1,0,0,*(undefined4 *)(param_1 + 0x950)), (int)uVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x950) = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


