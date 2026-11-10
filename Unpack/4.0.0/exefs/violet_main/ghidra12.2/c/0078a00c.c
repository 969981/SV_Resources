/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078a00c; name: FUN_0078a00c
 */


void FUN_0078a00c(int param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 - 2U < 0x13) {
    lVar3 = *(long *)(&DAT_03d0aac8 + (long)(int)(param_1 - 2U) * 8);
    iVar1 = *(int *)PTR_DAT_047d0898;
  }
  else {
    lVar3 = 0x13;
    iVar1 = *(int *)PTR_DAT_047d0898;
  }
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(PTR_DAT_047d0898 + 8);
  }
  uVar2 = FUN_007bfee4(param_2,param_3,uVar2,1,0);
  *(undefined8 *)(PTR_DAT_047d08b0 + lVar3 * 8) = uVar2;
  return;
}


