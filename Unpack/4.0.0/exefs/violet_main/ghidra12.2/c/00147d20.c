/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00147d20; name: FUN_00147d20
 */


uint FUN_00147d20(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint local_14;
  
  iVar1 = FUN_00121a10(param_2,param_3);
  if (iVar1 == 0) {
    pcVar3 = "too many arguments to resume";
  }
  else {
    FUN_00121ad0(param_1,param_2,param_3);
    uVar2 = FUN_00127e30(param_2,param_1,param_3,&local_14);
    if (1 < uVar2) {
      FUN_00121ad0(param_2,param_1,1);
      return 0xffffffff;
    }
    iVar1 = FUN_00121a10(param_1,local_14 + 1);
    if (iVar1 != 0) {
      FUN_00121ad0(param_2,param_1);
      return local_14;
    }
    FUN_00c5db00(param_2,~local_14);
    pcVar3 = "too many results to resume";
  }
  FUN_00c85bd0(param_1,pcVar3);
  return 0xffffffff;
}


