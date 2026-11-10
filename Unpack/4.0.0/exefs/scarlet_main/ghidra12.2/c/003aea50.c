/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003aea50; name: FUN_003aea50
 */


undefined4 FUN_003aea50(long param_1,long param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  
  if ((param_2 == 0) || (iVar2 = FUN_0047e430(param_2), iVar2 == 0)) {
    return 0;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x550) + 0x1d0);
  if (lVar7 == 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x660) + 0x20);
    lVar4 = FUN_004879e0();
  }
  else {
    lVar4 = FUN_004879e0();
  }
  if (lVar4 == 0) {
    FUN_004806c0(0x14,0xcf,0x41,"external/openssl/ssl/ssl_cert.c",0x17d);
    return 0;
  }
  uVar5 = FUN_0047e450(param_2,0);
  iVar2 = FUN_00487ac0(lVar4,lVar7,uVar5,param_2);
  if (iVar2 == 0) {
    FUN_004806c0(0x14,0xcf,0xb,"external/openssl/ssl/ssl_cert.c",0x183);
  }
  else {
    uVar5 = FUN_004888d0(lVar4);
    uVar3 = FUN_003b5720(param_1);
    FUN_0048a230(uVar5,uVar3);
    FUN_00488880(lVar4,*(uint *)(*(long *)(param_1 + 0x550) + 0x1c) & 0x30000);
    iVar2 = FUN_0047e650(&DAT_047f1640,FUN_003adb40);
    uVar3 = 0xffffffff;
    if ((iVar2 != 0) && (DAT_047f1644 != 0)) {
      uVar3 = DAT_0449bcb0;
    }
    iVar2 = FUN_004879a0(lVar4,uVar3,param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 0xe0));
      if (0 < iVar2) {
        FUN_004888e0(lVar4,param_1 + 0xd8);
      }
      pcVar1 = "ssl_server";
      if (*(int *)(param_1 + 0x38) != 0) {
        pcVar1 = "ssl_client";
      }
      FUN_004888a0(lVar4,pcVar1);
      FUN_0048a1e0(uVar5,*(undefined8 *)(param_1 + 0xd0));
      if (*(long *)(param_1 + 0x628) != 0) {
        FUN_00488890(lVar4);
      }
      pcVar6 = *(code **)(*(long *)(param_1 + 0x660) + 0xa0);
      if (pcVar6 == (code *)0x0) {
        uVar3 = FUN_00486040(lVar4);
      }
      else {
        uVar3 = (*pcVar6)(lVar4,*(undefined8 *)(*(long *)(param_1 + 0x660) + 0xa8));
      }
      iVar2 = FUN_004879b0(lVar4);
      *(long *)(param_1 + 0x670) = (long)iVar2;
      FUN_0047e3b0(*(undefined8 *)(param_1 + 0x668),PTR_FUN_047cd0a0);
      *(undefined8 *)(param_1 + 0x668) = 0;
      lVar7 = FUN_004879c0(lVar4);
      if (lVar7 != 0) {
        lVar7 = FUN_004879d0(lVar4);
        *(long *)(param_1 + 0x668) = lVar7;
        if (lVar7 == 0) {
          FUN_004806c0(0x14,0xcf,0x41,"external/openssl/ssl/ssl_cert.c",0x1b3);
          uVar3 = 0;
        }
      }
      FUN_0048a240(*(undefined8 *)(param_1 + 0xd0),uVar5);
      goto LAB_003aec74;
    }
  }
  uVar3 = 0;
LAB_003aec74:
  FUN_00487a30(lVar4);
  return uVar3;
}


