/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278cc34; name: FUN_0278cc34
 */


undefined8 FUN_0278cc34(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((param_2 == (char *)0x0) || (iVar1 = strncmp(param_2,"https",5), iVar1 != 0)) {
LAB_0278cc68:
    uVar2 = 1;
  }
  else {
    FUN_0278cdd0(&local_40,*param_1);
    lVar3 = local_40;
    local_40 = 0;
    lVar4 = param_1[10];
    param_1[10] = lVar3;
    if (lVar4 == 0) {
      param_1[0xb] = local_38;
      param_1[0xc] = local_30;
      param_1[0xd] = local_28;
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      FUN_0278c83c(param_1 + 0xb);
      param_1[0xc] = local_30;
      param_1[0xd] = local_28;
      lVar3 = param_1[10];
      param_1[0xb] = local_38;
      if (lVar3 == 0) {
        return 0;
      }
    }
    iVar1 = nn::ssl::Context::Create(lVar3,0x2000001);
    *(int *)(param_1 + 0x16) = iVar1;
    if (iVar1 == 0) {
      iVar1 = FUN_0278ca04(param_1[0xe],0x2906,param_1[10]);
      if (iVar1 == 0) goto LAB_0278cc68;
      if (param_1[10] == 0) {
        return 0;
      }
      nn::ssl::Context::Destroy();
      lVar3 = param_1[10];
      param_1[10] = 0;
      if (lVar3 != 0) goto LAB_0278cce0;
    }
    else if (param_1[10] != 0) {
      param_1[10] = 0;
LAB_0278cce0:
      FUN_0278c83c(param_1 + 0xb);
    }
    uVar2 = 0;
  }
  return uVar2;
}


