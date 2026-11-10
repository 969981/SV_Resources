/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fa120; name: FUN_001fa120
 */


int FUN_001fa120(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_50;
  int local_48;
  
  iVar1 = -0x1f5;
  if ((param_3 != 0) && (param_4 != (int *)0x0)) {
    if (*param_4 == param_3) {
      iVar1 = -0x1f5;
    }
    else {
      local_50 = *(undefined8 *)param_4;
      local_48 = param_4[2];
      FUN_001eda5c(&local_50);
      lVar2 = FUN_001f45a0(param_1 + 0x890,0x98);
      if (lVar2 == 0) {
        iVar1 = -0x385;
      }
      else {
        FUN_001f9154();
        FUN_001f472c(lVar2,param_3,&local_50);
        iVar1 = FUN_001ee7d8(param_1,lVar2);
        if (iVar1 != 0) {
          FUN_001f4758(lVar2);
          FUN_001f45b0(param_1 + 0x890,lVar2);
        }
      }
    }
  }
  return iVar1;
}


