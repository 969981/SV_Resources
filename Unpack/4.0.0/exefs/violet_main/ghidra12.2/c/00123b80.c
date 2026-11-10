/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00123b80; name: FUN_00123b80
 */


undefined8 FUN_00123b80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *__s1;
  undefined8 uVar4;
  
  iVar2 = FUN_00c5d980();
  FUN_00125400(param_1,&DAT_03bec811,param_2);
  FUN_00c5d9a0(param_1,0xfff0b9d8,"_LOADED");
  iVar1 = iVar2 + 1;
  iVar3 = FUN_001250f0(param_1,iVar1,2);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    __s1 = (char *)FUN_00c646d0(param_1,0xffffffff,0);
    iVar2 = strncmp(__s1,"_G.",3);
    if (iVar2 == 0) {
      FUN_00c85bd0(param_1,__s1 + 3);
      FUN_00c5dcd0(param_1,0xfffffffe,0xffffffff);
      FUN_00c5db00(param_1,0xfffffffe);
    }
    FUN_00121c40(param_1,0xffffffff,iVar1);
    uVar4 = 1;
    iVar2 = iVar1;
  }
  FUN_00c5db00(param_1,iVar2);
  return uVar4;
}


