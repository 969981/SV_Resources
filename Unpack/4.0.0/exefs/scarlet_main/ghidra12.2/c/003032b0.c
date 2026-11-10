/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003032b0; name: FUN_003032b0
 */


int FUN_003032b0(long param_1,undefined8 param_2,uint param_3,uint param_4,ulong param_5,
                uint param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  int iVar2;
  void *local_50;
  undefined8 local_48;
  
  iVar2 = 2;
  if ((param_1 != 0) && (param_8 != 0)) {
    local_50 = (void *)0x0;
    local_48 = 0;
    iVar2 = FUN_00301260(param_1,param_2,0xc,0x10,param_3 & 1,&local_48,&local_50);
    if (iVar2 == 0) {
      uVar1 = 8;
      if ((param_3 & 1) == 0) {
        uVar1 = 5;
      }
      if ((param_5 & 1) == 0) {
        iVar2 = FUN_00305040(local_48,uVar1,param_4 & 1,param_6 & 1,param_8);
      }
      else {
        iVar2 = FUN_00304b90();
      }
      if (iVar2 != 0) {
        FUN_00302b50(local_48);
      }
    }
    else {
      free(local_50);
      iVar2 = 7;
    }
  }
  return iVar2;
}


