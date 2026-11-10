/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e8d10; name: FUN_003e8d10
 */


ulong FUN_003e8d10(long *param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x20) == 0)) {
    uVar5 = 0x79;
    uVar6 = 0x100;
LAB_003e8d8c:
    FUN_004806c0(0x20,0x78,uVar5,"external/openssl/crypto/bio/bio_lib.c",uVar6);
    uVar3 = 0xfffffffe;
  }
  else {
    pcVar1 = (code *)param_1[2];
    if ((code *)param_1[1] == (code *)0x0) {
      if (pcVar1 != (code *)0x0) goto LAB_003e8dac;
LAB_003e8ddc:
      if ((int)param_1[4] == 0) {
        uVar6 = 0x10a;
        uVar5 = 0x78;
        goto LAB_003e8d8c;
      }
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
      uVar3 = uVar4 & 0xffffffff;
      iVar2 = (int)uVar4;
      if (0 < iVar2) {
        param_1[0xb] = param_1[0xb] + *param_4;
      }
      pcVar1 = (code *)param_1[2];
      if ((code *)param_1[1] == (code *)0x0) {
        if (pcVar1 != (code *)0x0) goto LAB_003e8e6c;
      }
      else if (pcVar1 == (code *)0x0) {
        if (param_3 >> 0x1f == 0) {
          if (iVar2 < 1) {
            uVar3 = (ulong)iVar2;
          }
          else {
            uVar3 = *param_4;
            if (uVar3 >> 0x1f != 0) goto LAB_003e8e44;
          }
          uVar3 = (*(code *)param_1[1])(param_1,0x82,param_2,param_3 & 0xffffffff,0,uVar3);
          if (0 < (long)uVar3) {
            *param_4 = uVar3;
            uVar3 = 1;
          }
        }
        else {
LAB_003e8e44:
          uVar3 = 0xffffffffffffffff;
        }
      }
      else {
LAB_003e8e6c:
        uVar3 = (*pcVar1)(param_1,0x82,param_2,param_3,0,0,uVar3,param_4);
      }
      if (((int)uVar3 < 1) || (*param_4 <= param_3)) goto LAB_003e8d94;
      FUN_004806c0(0x20,0x78,0x44,"external/openssl/crypto/bio/bio_lib.c",0x119);
    }
    else {
      if (pcVar1 != (code *)0x0) {
LAB_003e8dac:
        uVar3 = (*pcVar1)(param_1,2,param_2,param_3,0,0,1,0);
LAB_003e8dd0:
        if ((int)uVar3 < 1) goto LAB_003e8d94;
        goto LAB_003e8ddc;
      }
      if (param_3 >> 0x1f == 0) {
        uVar3 = (*(code *)param_1[1])(param_1,2,param_2,param_3 & 0xffffffff,0,1);
        goto LAB_003e8dd0;
      }
    }
    uVar3 = 0xffffffff;
  }
LAB_003e8d94:
  return uVar3 & 0xffffffff;
}


