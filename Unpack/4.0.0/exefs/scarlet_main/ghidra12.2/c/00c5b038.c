/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5b038; name: FUN_00c5b038
 */


bool FUN_00c5b038(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 + (param_3 & 0xffffffff) * 8;
  iVar1 = *(int *)(param_1 + 0x154);
  iVar2 = *(int *)(param_1 + 0x158);
  if (iVar1 != -1) {
    FUN_008f1150(param_2,iVar1,0,param_4,param_5);
  }
  if (iVar2 != -1) {
    FUN_008f1150(param_2,iVar2,4,param_4,param_5);
  }
  return iVar2 != -1 || iVar1 != -1;
}


