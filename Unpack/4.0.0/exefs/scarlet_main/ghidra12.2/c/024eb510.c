/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024eb510; name: FUN_024eb510
 */


undefined8 FUN_024eb510(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  
  uVar2 = FUN_024cb7e0(param_1,1);
  uVar3 = FUN_024cb150(param_1,2);
  if ((DAT_0484d918 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0484d918);
    if (iVar1 != 0) {
      DAT_0484d908 = PTR_LAB_047df140;
      DAT_0484d910 = 0;
      __cxa_guard_release(&DAT_0484d918,extraout_x1,uVar3);
    }
  }
  FUN_024eb5bc(&DAT_0484d908,uVar2,uVar3);
  FUN_00c46da0(param_1);
  return 1;
}


