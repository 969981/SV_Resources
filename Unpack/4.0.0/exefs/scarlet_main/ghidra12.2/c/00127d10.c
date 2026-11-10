/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00127d10; name: FUN_00127d10
 */


void FUN_00127d10(long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(int *)(param_1 + 0xb0) + 1;
  *(uint *)(param_1 + 0xb0) = uVar1;
  if (199 < (uVar1 & 0xfff8)) {
    FUN_0013afc0(param_1);
  }
  lVar2 = FUN_001278b0(param_1,param_2,param_3);
  if (lVar2 != 0) {
    *(undefined2 *)(lVar2 + 0x3e) = 4;
    FUN_00141150(param_1,lVar2);
  }
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
  return;
}


