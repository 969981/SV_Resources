/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b9fd0; name: FUN_003b9fd0
 */


uint FUN_003b9fd0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
  if ((param_3 >> 0xb & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      iVar2 = **(int **)(param_1 + 2);
      bVar3 = 0x303 < iVar2 && iVar2 != 0x10000;
      goto LAB_003ba014;
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((param_2 >> 2 & 1) != 0) && ((uVar1 >> 3 & 1) != 0)) {
    return 0;
  }
LAB_003ba014:
  if ((((((param_2 >> 3 & 1) != 0) || (*param_1 != 0x300)) &&
       (((param_2 >> 4 & 1) == 0 || (!bVar3)))) &&
      ((((param_3 >> 7 & 1) != 0 || ((param_2 >> 5 & 1) == 0)) || (bVar3)))) &&
     ((((param_2 >> 5 & 1) == 0 || (bVar3)) || (param_1[0xe] == 0)))) {
    return (param_2 >> 6 ^ 0xffffffff) & 1 | (uint)(param_1[0x32] == 0);
  }
  return 0;
}


