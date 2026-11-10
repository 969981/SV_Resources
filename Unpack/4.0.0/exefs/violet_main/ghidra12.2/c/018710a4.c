/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018710a4; name: FUN_018710a4
 */


uint FUN_018710a4(undefined2 param_1,uint param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined *local_40;
  undefined2 local_38;
  
  if (param_2 < 3) {
    local_40 = PTR_DAT_047ddad8 + 0x10;
    local_38 = param_1;
    uVar2 = FUN_01480ea4(&local_40);
    if ((uVar2 & 0xff) == 0) {
      iVar3 = 0;
    }
    else {
      cVar1 = FUN_01871130(&local_40,param_2);
      iVar3 = (int)cVar1;
    }
    *param_3 = iVar3;
  }
  else {
    uVar2 = 0;
    *param_3 = 0;
  }
  return uVar2;
}


