/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0014bb20; name: FUN_0014bb20
 */


int FUN_0014bb20(undefined8 *param_1,uint param_2,undefined8 *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_44;
  
  iVar1 = FUN_0014bc30(param_1,param_3,param_4);
  local_44 = *param_4;
  uVar4 = local_44;
  if (iVar1 == 9) {
    if (*(char *)*param_3 != '\0') {
      iVar2 = FUN_0014bc30(param_1,param_3,&local_44);
      if ((iVar2 != 5) && (uVar4 = local_44, local_44 != 0)) goto LAB_0014bbac;
    }
    uVar4 = local_44;
    FUN_00123970(*param_1,1,"invalid next option for option \'X\'");
  }
LAB_0014bbac:
  uVar3 = 0;
  if ((iVar1 != 5) && (1 < (int)uVar4)) {
    uVar3 = *(uint *)((long)param_1 + 0xc);
    if ((int)uVar3 < (int)uVar4) {
      uVar4 = uVar3;
      local_44 = uVar3;
    }
    uVar3 = uVar4 - 1;
    if ((uVar4 & uVar3) != 0) {
      FUN_00123970(*param_1,1,"format asks for alignment not power of 2");
    }
    uVar3 = uVar4 - (uVar3 & param_2) & uVar3;
  }
  *param_5 = uVar3;
  return iVar1;
}


