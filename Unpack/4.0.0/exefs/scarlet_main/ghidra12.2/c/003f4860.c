/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f4860; name: FUN_003f4860
 */


undefined8 FUN_003f4860(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  size_t sVar5;
  undefined8 uVar6;
  byte *pbVar7;
  
  if (param_1 == (byte *)0x0) {
    FUN_004806c0(0xe,0x77,0x73,"external/openssl/crypto/conf/conf_mod.c",0x209);
    uVar6 = 0;
  }
  else {
    if (param_3 == 0) {
      do {
        pbVar4 = (byte *)strchr((char *)param_1,param_2);
        if ((pbVar4 == param_1) || (*param_1 == 0)) {
          uVar6 = (*param_4)(0,0,param_5);
          iVar3 = (int)uVar6;
        }
        else {
          if (pbVar4 == (byte *)0x0) {
            sVar5 = strlen((char *)param_1);
            iVar3 = (int)param_1 + (int)sVar5;
          }
          else {
            iVar3 = (int)pbVar4;
          }
          uVar6 = (*param_4)(param_1,iVar3 - (int)param_1,param_5);
          iVar3 = (int)uVar6;
        }
        if (iVar3 < 1) {
          return uVar6;
        }
        param_1 = pbVar4 + 1;
      } while (pbVar4 != (byte *)0x0);
    }
    else {
      do {
        bVar1 = *param_1;
        while ((uVar2 = (uint)bVar1, bVar1 != 0 && ((uVar2 == 0x20 || (uVar2 - 9 < 5))))) {
          param_1 = param_1 + 1;
          bVar1 = *param_1;
        }
        pbVar4 = (byte *)strchr((char *)param_1,param_2);
        if ((pbVar4 == param_1) || (uVar2 == 0)) {
          uVar6 = (*param_4)(0,0,param_5);
          iVar3 = (int)uVar6;
        }
        else {
          pbVar7 = pbVar4;
          if (pbVar4 == (byte *)0x0) {
            sVar5 = strlen((char *)param_1);
            pbVar7 = param_1 + sVar5;
          }
          do {
            do {
              pbVar7 = pbVar7 + -1;
            } while (*pbVar7 == 0x20);
          } while (*pbVar7 - 9 < 5);
          uVar6 = (*param_4)(param_1,((int)pbVar7 - (int)param_1) + 1,param_5);
          iVar3 = (int)uVar6;
        }
        if (iVar3 < 1) {
          return uVar6;
        }
        param_1 = pbVar4 + 1;
      } while (pbVar4 != (byte *)0x0);
    }
    uVar6 = 1;
  }
  return uVar6;
}


