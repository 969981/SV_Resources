/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cd5e8; name: FUN_007cd5e8
 */


void FUN_007cd5e8(long param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_50;
  if (param_3 == 1) {
    *(undefined4 *)(param_1 + 0x118) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    *(int *)(param_1 + 0x118) = param_3;
    if (**(int **)(param_1 + 0xa8) == 1) {
      FUN_018ff39c(param_1 + 0x120);
    }
    else {
      uVar2 = *(undefined8 *)PTR_DAT_047d0900;
      FUN_00cbd7c0(auStack_40);
      FUN_0078f530(uVar2,auStack_40);
    }
    FUN_007d8da8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x118));
    return;
  }
  if (*(int *)(param_1 + 0x118) == 1) {
    if (**(int **)(param_1 + 0xa8) == 1) {
      FUN_018ff39c(param_1 + 0x120);
      return;
    }
    uVar2 = *(undefined8 *)PTR_DAT_047d0900;
    FUN_00cbd7c0(auStack_30);
    puVar1 = auStack_30;
  }
  else {
    uVar2 = *(undefined8 *)PTR_DAT_047d0900;
    FUN_00cbd7c0(auStack_50);
  }
  FUN_0078f530(uVar2,puVar1);
  return;
}


