/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0267c780; name: FUN_0267c780
 */


undefined8 FUN_0267c780(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  
  uVar2 = FUN_0267a0c0(param_1,1);
  uVar3 = FUN_00c646d0(param_1,2,0);
  if (((DAT_04856568 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04856568), iVar1 != 0)) {
    DAT_04856558 = PTR_FUN_047e0690;
    DAT_04856560 = 0;
    __cxa_guard_release(&DAT_04856568,extraout_x1,uVar3);
  }
  FUN_0267c5b0(&DAT_04856558,uVar2,uVar3);
  return 0;
}


