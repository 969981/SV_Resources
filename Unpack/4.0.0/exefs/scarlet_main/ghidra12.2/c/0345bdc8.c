/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0345bdc8; name: FUN_0345bdc8
 */


void FUN_0345bdc8(long param_1,long *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  uVar2 = FUN_03458770();
                    /* WARNING: Could not recover jumptable at 0x0345be04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))(param_2,0,bVar1 & 0x1f,uVar2);
  return;
}


