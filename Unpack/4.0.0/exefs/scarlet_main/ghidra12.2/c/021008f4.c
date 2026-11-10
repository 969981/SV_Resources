/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021008f4; name: FUN_021008f4
 */


undefined8 FUN_021008f4(long param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*param_2 == 0) {
    FUN_0170ad2c(*(undefined8 *)(param_1 + 0x50));
    iVar2 = FUN_0170ae2c();
    if (iVar2 != 0) {
      bVar1 = *(byte *)(*(long *)(param_1 + 0x48) + 0x95);
      *(undefined8 *)(param_1 + 0x32c) = 0;
      *(undefined8 *)(param_1 + 0x334) = 0;
      *(undefined8 *)(param_1 + 0x33c) = 0;
      *(int *)(param_1 + 0x328) = iVar2;
      *(undefined4 *)(param_1 + 0x31c) = 0x226;
      *(undefined2 *)(param_1 + 800) = 0x2100;
      *(uint *)(param_1 + 0x324) = (uint)bVar1;
      (**(code **)(**(long **)(param_1 + 0x218) + 0x1f8))
                (*(long **)(param_1 + 0x218),0,param_1 + 0x31c,0,0,1,0);
      *param_2 = *param_2 + 1;
LAB_021009a8:
                    /* WARNING: Could not recover jumptable at 0x021009bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(long **)(param_1 + 0x218) + 0x228))();
      return uVar3;
    }
  }
  else if (*param_2 == 1) goto LAB_021009a8;
  return 1;
}


