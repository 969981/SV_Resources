/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e9300; name: FUN_003e9300
 */


ulong FUN_003e9300(long *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  code *pcVar8;
  ulong local_28;
  
  local_28 = 0;
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x38) == 0)) {
    uVar3 = 0x79;
    uVar4 = 0x1b6;
  }
  else {
    if ((int)param_3 < 0) {
      FUN_004806c0(0x20,0x68,0x7d,"external/openssl/crypto/bio/bio_lib.c",0x1bb);
      uVar2 = 0;
      goto LAB_003e9380;
    }
    pcVar8 = (code *)param_1[2];
    if ((code *)param_1[1] == (code *)0x0) {
      if (pcVar8 != (code *)0x0) goto LAB_003e93bc;
    }
    else {
      if (pcVar8 == (code *)0x0) {
        uVar2 = (*(code *)param_1[1])(param_1,5,param_2,param_3,0,1);
      }
      else {
LAB_003e93bc:
        uVar2 = (*pcVar8)(param_1,5,param_2,param_3,0,0,1,0);
      }
      if ((int)uVar2 < 1) goto LAB_003e9380;
    }
    if ((int)param_1[4] != 0) {
      uVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
      uVar5 = (ulong)uVar1;
      if ((int)uVar1 < 1) {
        uVar7 = 0;
        pcVar8 = (code *)param_1[1];
        pcVar6 = (code *)param_1[2];
        uVar2 = uVar5;
        if (pcVar8 == (code *)0x0) goto LAB_003e9494;
LAB_003e942c:
        if (pcVar6 == (code *)0x0) {
          if ((int)uVar2 < 1) {
            uVar7 = (long)(int)uVar2;
          }
          uVar5 = (*pcVar8)(param_1,0x85,param_2,param_3,0,uVar7);
          uVar2 = uVar5;
          if (0 < (long)uVar5) {
            uVar2 = 1;
            local_28 = uVar5;
          }
        }
        else {
LAB_003e9498:
          uVar2 = (*pcVar6)(param_1,0x85,param_2,param_3,0,0,uVar2,&local_28);
        }
      }
      else {
        pcVar8 = (code *)param_1[1];
        pcVar6 = (code *)param_1[2];
        uVar2 = 1;
        uVar7 = uVar5;
        local_28 = uVar5;
        if (pcVar8 != (code *)0x0) goto LAB_003e942c;
LAB_003e9494:
        if (pcVar6 != (code *)0x0) goto LAB_003e9498;
      }
      if (0 < (int)uVar2) {
        uVar1 = (uint)local_28;
        if (param_3 < local_28) {
          uVar1 = 0xffffffff;
        }
        uVar2 = (ulong)uVar1;
      }
      goto LAB_003e9380;
    }
    uVar4 = 0x1c6;
    uVar3 = 0x78;
  }
  FUN_004806c0(0x20,0x68,uVar3,"external/openssl/crypto/bio/bio_lib.c",uVar4);
  uVar2 = 0xfffffffe;
LAB_003e9380:
  return uVar2 & 0xffffffff;
}


