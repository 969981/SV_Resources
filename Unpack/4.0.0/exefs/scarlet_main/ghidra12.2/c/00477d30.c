/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00477d30; name: FUN_00477d30
 */


undefined8 FUN_00477d30(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_0040c210();
  lVar4 = FUN_00477de0();
  iVar1 = FUN_0043b720(param_2);
  uVar5 = 0;
  if ((lVar4 != 0) && (-1 < iVar1)) {
    iVar2 = FUN_003def90(0,(int)lVar4 + 1,2);
    iVar1 = FUN_003def90(0,iVar1,4);
    iVar3 = FUN_003def90(0,param_3,4);
    uVar5 = 1;
    iVar1 = FUN_003def90(1,iVar1 + iVar2 * 2 + iVar3,0x10);
    *param_4 = (long)iVar1;
  }
  return uVar5;
}


