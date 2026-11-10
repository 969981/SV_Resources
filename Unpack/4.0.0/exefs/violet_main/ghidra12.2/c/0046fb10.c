/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046fb10; name: FUN_0046fb10
 */


undefined4
FUN_0046fb10(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5,long param_6
            )

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_48;
  int local_34;
  
  local_48 = 0;
  local_34 = 0;
  pcVar3 = *(code **)(*(long *)(param_6 + 8) + 0x58);
  if (pcVar3 != (code *)0x0) {
    uVar1 = (*pcVar3)(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_1 == 0x72) {
    if (param_3 != 0x24) {
      FUN_004806c0(4,0x75,0x83,"external/openssl/crypto/rsa/rsa_sign.c",0x58);
      return 0;
    }
    local_34 = 0x24;
LAB_0046fbb0:
    iVar5 = local_34;
    uVar4 = local_48;
    iVar2 = FUN_00469640(param_6);
    if (iVar2 + -0xb < iVar5) {
      FUN_004806c0(4,0x75,0x70,"external/openssl/crypto/rsa/rsa_sign.c",100);
    }
    else {
      iVar2 = FUN_00469680(iVar5,param_2,param_4,param_6,1);
      if (0 < iVar2) {
        *param_5 = iVar2;
        uVar1 = 1;
        goto LAB_0046fc14;
      }
    }
  }
  else {
    iVar2 = FUN_0046fc70(&local_48,&local_34,param_1,param_2);
    uVar4 = local_48;
    iVar5 = local_34;
    if (iVar2 != 0) {
      param_2 = local_48;
      goto LAB_0046fbb0;
    }
  }
  uVar1 = 0;
LAB_0046fc14:
  FUN_00453260(uVar4,(long)iVar5,"external/openssl/crypto/rsa/rsa_sign.c",0x70);
  return uVar1;
}


