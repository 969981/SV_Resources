/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ecca0; name: FUN_001ecca0
 */


long FUN_001ecca0(long param_1,int param_2,long param_3,undefined8 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int local_24;
  
  local_24 = 0;
  if (param_1 != 0) {
    if (param_5 == (undefined4 *)0x0) {
      return -1;
    }
    if (param_3 == 0) {
      return -1;
    }
    lVar3 = *(long *)(param_1 + (long)param_2 * 0x18 + 0x298);
    if (lVar3 == 0) {
      return -1;
    }
    uVar1 = nnsslConnectionRead(lVar3,param_3,&local_24);
    uVar2 = nnResultIsFailure(uVar1);
    if ((uVar2 & 1) == 0) {
      return (long)local_24;
    }
    uVar2 = FUN_001ecc34(uVar1,0x1987b);
    uVar1 = 0x51;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0x38;
    }
    *param_5 = uVar1;
  }
  return -1;
}


