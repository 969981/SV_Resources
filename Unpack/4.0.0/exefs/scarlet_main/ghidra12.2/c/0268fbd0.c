/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0268fbd0; name: FUN_0268fbd0
 */


undefined8 FUN_0268fbd0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  
  uVar2 = FUN_0268da20(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_04856a80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04856a80), iVar1 != 0)) {
    DAT_04856a70 = &LAB_02ba5198;
    DAT_04856a78 = 0;
    __cxa_guard_release(&DAT_04856a80,extraout_x1,uVar3);
  }
  FUN_0268faa0(&DAT_04856a70,uVar2,uVar3);
  return 0;
}


