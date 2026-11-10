/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02945cd0; name: FUN_02945cd0
 */


void FUN_02945cd0(long param_1,int param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  if (iVar2 == param_2) {
    if ((param_4 & 1) == 0) {
      uVar1 = FUN_01828610(param_1,param_2);
    }
    else {
      uVar1 = FUN_02945ea0();
    }
    if ((uVar1 & 1) != 0) {
      FUN_018286e0(param_1,param_2);
      return;
    }
  }
  return;
}


