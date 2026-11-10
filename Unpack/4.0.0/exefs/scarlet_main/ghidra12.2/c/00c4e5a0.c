/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4e5a0; name: FUN_00c4e5a0
 */


void FUN_00c4e5a0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  param_1[2] = 0;
  *param_1 = param_2;
  lVar3 = FUN_00c4e600();
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar3 + 0x12c8);
  lVar3 = FUN_00c4e600();
  param_1[2] = *(undefined8 *)(lVar3 + 0x12c0);
  lVar3 = FUN_00c4e600();
  iVar2 = *(int *)(lVar3 + 0x12c8);
  iVar1 = iVar2 + 1;
  *(int *)(lVar3 + 0x12c8) = iVar1;
  if (*(int *)(lVar3 + 0x12cc) <= iVar2) {
    *(int *)(lVar3 + 0x12cc) = iVar1;
  }
  return;
}


