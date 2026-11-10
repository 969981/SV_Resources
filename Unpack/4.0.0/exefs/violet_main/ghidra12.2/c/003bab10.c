/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003bab10; name: FUN_003bab10
 */


undefined8 FUN_003bab10(int *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((param_3 & param_2) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
  if ((param_3 >> 0xb & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      iVar2 = **(int **)(param_1 + 2);
      bVar3 = 0x303 < iVar2 && iVar2 != 0x10000;
      goto LAB_003bab5c;
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((param_2 >> 2 & 1) != 0) && ((uVar1 >> 3 & 1) != 0)) {
    return 0;
  }
LAB_003bab5c:
  if ((((((param_2 >> 3 & 1) != 0) || (*param_1 != 0x300)) &&
       (((param_2 >> 4 & 1) == 0 || (!bVar3)))) &&
      ((((param_3 >> 7 & 1) != 0 || ((param_2 >> 5 & 1) == 0)) || (bVar3)))) &&
     (((((param_2 >> 5 & 1) == 0 || (bVar3)) || (param_1[0xe] == 0)) &&
      (((param_2 >> 6 ^ 0xffffffff) & 1) != 0 || param_1[0x32] == 0)))) {
    if ((((param_2 >> 5 & 1) == 0) || ((param_3 >> 7 & 1) == 0)) ||
       ((uVar4 = 0, 0x303 < param_4 && ((uVar1 >> 3 & 1) == 0)))) {
      uVar4 = 1;
    }
    return uVar4;
  }
  return 0;
}


