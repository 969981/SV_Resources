/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c37d88; name: FUN_00c37d88
 */


void FUN_00c37d88(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  
  FUN_00c37ebc();
  iVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4);
  FUN_02a007d0(param_5,&DAT_03c17da2,3);
  if ((0 < iVar1) && (FUN_00c36d80(param_1,param_2,param_3,param_4,0,param_5), iVar1 != 1)) {
    iVar2 = 1;
    do {
      FUN_02a007d0(param_5,&DAT_03c82382,2);
      FUN_00c36d80(param_1,param_2,param_3,param_4,iVar2,param_5);
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar2);
  }
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_02a007d0(param_5,&DAT_03c33d7e,2);
    *(undefined1 *)(param_5 + 0x14) = 1;
    return;
  }
  FUN_02a007d0(param_5,&DAT_03bf4f7f,2);
  return;
}


