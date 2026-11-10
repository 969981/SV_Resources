/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e9110; name: FUN_003e9110
 */


ulong FUN_003e9110(long *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  code *pcVar9;
  ulong local_18;
  
  local_18 = 0;
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x30) == 0)) {
    uVar3 = 0x79;
    uVar4 = 0x189;
    goto LAB_003e9194;
  }
  pcVar9 = (code *)param_1[2];
  if ((code *)param_1[1] == (code *)0x0) {
    if (pcVar9 != (code *)0x0) goto LAB_003e91b0;
  }
  else {
    if (pcVar9 == (code *)0x0) {
      uVar2 = (*(code *)param_1[1])(param_1,4,param_2,0,0,1);
      iVar5 = (int)uVar2;
    }
    else {
LAB_003e91b0:
      uVar2 = (*pcVar9)(param_1,4,param_2,0,0,0,1,0);
      iVar5 = (int)uVar2;
    }
    if (iVar5 < 1) goto LAB_003e916c;
  }
  if ((int)param_1[4] == 0) {
    uVar4 = 0x194;
    uVar3 = 0x78;
LAB_003e9194:
    FUN_004806c0(0x20,0x6e,uVar3,"external/openssl/crypto/bio/bio_lib.c",uVar4);
    return 0xfffffffe;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
  uVar6 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    uVar7 = 0;
    pcVar9 = (code *)param_1[1];
    pcVar8 = (code *)param_1[2];
    uVar2 = uVar6;
    if (pcVar9 != (code *)0x0) goto LAB_003e9228;
LAB_003e9290:
    if (pcVar8 != (code *)0x0) {
LAB_003e9294:
      uVar2 = (*pcVar8)(param_1,0x84,param_2,0,0,0,uVar2,&local_18);
    }
  }
  else {
    param_1[0xc] = param_1[0xc] + uVar6;
    pcVar9 = (code *)param_1[1];
    pcVar8 = (code *)param_1[2];
    uVar2 = 1;
    uVar7 = uVar6;
    local_18 = uVar6;
    if (pcVar9 == (code *)0x0) goto LAB_003e9290;
LAB_003e9228:
    if (pcVar8 != (code *)0x0) goto LAB_003e9294;
    if ((int)uVar2 < 1) {
      uVar7 = (long)(int)uVar2;
    }
    uVar6 = (*pcVar9)(param_1,0x84,param_2,0,0,uVar7);
    uVar2 = uVar6;
    if (0 < (long)uVar6) {
      uVar2 = 1;
      local_18 = uVar6;
    }
  }
  if ((0 < (int)uVar2) && (uVar2 = local_18, local_18 >> 0x1f != 0)) {
    FUN_004806c0(0x20,0x6e,0x66,"external/openssl/crypto/bio/bio_lib.c",0x1a6);
    return 0xffffffff;
  }
LAB_003e916c:
  return uVar2 & 0xffffffff;
}


