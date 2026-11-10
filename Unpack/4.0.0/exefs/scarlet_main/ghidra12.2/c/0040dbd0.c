/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040dbd0; name: FUN_0040dbd0
 */


undefined8
FUN_0040dbd0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(*param_1 + 0x88);
  if (pcVar4 == (code *)0x0) {
    uVar2 = 0x42;
    uVar3 = 0x322;
    goto LAB_0040dc20;
  }
  if ((*param_1 != *param_2) ||
     ((((int)param_1[4] != 0 && ((int)param_2[1] != 0)) && ((int)param_1[4] != (int)param_2[1])))) {
    uVar2 = 0x65;
    uVar3 = 0x326;
    goto LAB_0040dc20;
  }
  uVar2 = (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  pcVar4 = *(code **)(*param_1 + 0xd0);
  if (pcVar4 == (code *)0x0) {
    uVar2 = 0x42;
    uVar3 = 0x3ae;
LAB_0040dcb0:
    FUN_004806c0(0x10,0x77,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
  }
  else {
    if ((*param_1 != *param_2) ||
       ((((int)param_1[4] != 0 && ((int)param_2[1] != 0)) && ((int)param_1[4] != (int)param_2[1]))))
    {
      uVar2 = 0x65;
      uVar3 = 0x3b2;
      goto LAB_0040dcb0;
    }
    iVar1 = (*pcVar4)(param_1,param_2,param_5);
    if (0 < iVar1) {
      return 1;
    }
  }
  uVar2 = 0x6b;
  uVar3 = 0x32d;
LAB_0040dc20:
  FUN_004806c0(0x10,0x126,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
  return 0;
}


