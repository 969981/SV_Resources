/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f44d8; name: FUN_018f44d8
 */


undefined8 FUN_018f44d8(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_2 == 0) {
    iVar1 = FUN_018f457c(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x1d0),0xb,0,0x500000000);
    uVar2 = 1;
    if (-1 < iVar1) {
      (**(code **)(**(long **)(param_1 + 0x218) + 0x6e8))(*(long **)(param_1 + 0x218),iVar1,0xb);
      *param_2 = 1;
      uVar2 = 0;
    }
  }
  else {
    if (*param_2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x018f454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(long **)(param_1 + 0x218) + 0x6f0))();
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}


