/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e8f30; name: FUN_003e8f30
 */


ulong FUN_003e8f30(long *param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (param_1 == (long *)0x0) {
    uVar6 = 0;
    goto LAB_003e8fa4;
  }
  if ((*param_1 == 0) || (*(long *)(*param_1 + 0x10) == 0)) {
    uVar4 = 0x79;
    uVar5 = 0x149;
  }
  else {
    pcVar1 = (code *)param_1[2];
    if ((code *)param_1[1] == (code *)0x0) {
      if (pcVar1 != (code *)0x0) goto LAB_003e8fbc;
    }
    else {
      if (pcVar1 == (code *)0x0) {
        if (param_3 >> 0x1f != 0) {
          uVar6 = 0xffffffff;
          goto LAB_003e8fa4;
        }
        uVar6 = (*(code *)param_1[1])(param_1,3,param_2,param_3 & 0xffffffff,0,1);
        iVar2 = (int)uVar6;
      }
      else {
LAB_003e8fbc:
        uVar6 = (*pcVar1)(param_1,3,param_2,param_3,0,0,1,0);
        iVar2 = (int)uVar6;
      }
      if (iVar2 < 1) goto LAB_003e8fa4;
    }
    if ((int)param_1[4] != 0) {
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
      uVar6 = uVar3 & 0xffffffff;
      iVar2 = (int)uVar3;
      if (0 < iVar2) {
        param_1[0xc] = param_1[0xc] + *param_4;
      }
      pcVar1 = (code *)param_1[2];
      if ((code *)param_1[1] == (code *)0x0) {
        if (pcVar1 == (code *)0x0) goto LAB_003e8fa4;
      }
      else if (pcVar1 == (code *)0x0) {
        if (param_3 >> 0x1f == 0) {
          if (iVar2 < 1) {
            uVar6 = (ulong)iVar2;
          }
          else {
            uVar6 = *param_4;
            if (uVar6 >> 0x1f != 0) goto LAB_003e9054;
          }
          uVar6 = (*(code *)param_1[1])(param_1,0x83,param_2,param_3 & 0xffffffff,0,uVar6);
          if (0 < (long)uVar6) {
            *param_4 = uVar6;
            uVar6 = 1;
          }
        }
        else {
LAB_003e9054:
          uVar6 = 0xffffffffffffffff;
        }
        goto LAB_003e8fa4;
      }
      uVar6 = (*pcVar1)(param_1,0x83,param_2,param_3,0,0,uVar6,param_4);
      goto LAB_003e8fa4;
    }
    uVar5 = 0x153;
    uVar4 = 0x78;
  }
  FUN_004806c0(0x20,0x80,uVar4,"external/openssl/crypto/bio/bio_lib.c",uVar5);
  uVar6 = 0xfffffffe;
LAB_003e8fa4:
  return uVar6 & 0xffffffff;
}


