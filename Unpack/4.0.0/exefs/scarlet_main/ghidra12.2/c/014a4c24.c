/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a4c24; name: FUN_014a4c24
 */


void FUN_014a4c24(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_d8 [152];
  
  *(undefined1 *)(param_1 + 0x68b0) = 0;
  FUN_014a5d34(auStack_d8,param_1,0);
  FUN_014a5148(param_1 + 0x30,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68b1) = 1;
  FUN_014a5d34(auStack_d8,param_1,1);
  FUN_014a5148(param_1 + 200,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68b2) = 2;
  FUN_014a5d34(auStack_d8,param_1,2);
  FUN_014a5148(param_1 + 0x160,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68b3) = 3;
  FUN_014a5d34(auStack_d8,param_1,3);
  FUN_014a5148(param_1 + 0x1f8,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68b4) = 4;
  FUN_014a5d34(auStack_d8,param_1,4);
  FUN_014a5148(param_1 + 0x290,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68b5) = 5;
  FUN_014a5d34(auStack_d8,param_1,5);
  FUN_014a5148(param_1 + 0x328,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68b6) = 0x90;
  FUN_014a5e68(auStack_d8,param_1,0);
  FUN_014a5148(param_1 + 0x55b0,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68b7) = 0x91;
  FUN_014a5e68(auStack_d8,param_1,1);
  FUN_014a5148(param_1 + 0x5648,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68b8) = 0x92;
  FUN_014a5e68(auStack_d8,param_1,2);
  FUN_014a5148(param_1 + 0x56e0,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68b9) = 0x93;
  FUN_014a5e68(auStack_d8,param_1,3);
  FUN_014a5148(param_1 + 0x5778,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68ba) = 0x94;
  FUN_014a5e68(auStack_d8,param_1,4);
  FUN_014a5148(param_1 + 0x5810,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68bb) = 0x95;
  FUN_014a5e68(auStack_d8,param_1,5);
  FUN_014a5148(param_1 + 0x58a8,auStack_d8);
  FUN_014e58d8(auStack_d8);
  uVar1 = 0;
  lVar2 = param_1 + 0xe70;
  do {
    *(char *)(param_1 + 0x68bc + uVar1) = (char)uVar1 + '\x18';
    FUN_014a5418(auStack_d8,param_1,uVar1 & 0xffffffff);
    FUN_014a5148(lVar2,auStack_d8);
    FUN_014e58d8(auStack_d8);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 0x98;
  } while (uVar1 != 0x1e);
  uVar1 = 0;
  lVar2 = param_1 + 0x3210;
  do {
    *(char *)(param_1 + 0x68da + uVar1) = (char)uVar1 + 'T';
    FUN_014a554c(auStack_d8,param_1,uVar1 & 0xffffffff);
    FUN_014a5148(lVar2,auStack_d8);
    FUN_014e58d8(auStack_d8);
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 0x98;
  } while (uVar1 != 0x1e);
  *(undefined1 *)(param_1 + 0x68f8) = 0xc;
  FUN_014a5f9c(auStack_d8,param_1,0);
  FUN_014a5148(param_1 + 0x750,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68f9) = 0xd;
  FUN_014a5f9c(auStack_d8,param_1,1);
  FUN_014a5148(param_1 + 0x7e8,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68fa) = 0xe;
  FUN_014a5f9c(auStack_d8,param_1,2);
  FUN_014a5148(param_1 + 0x880,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68fb) = 0xf;
  FUN_014a5f9c(auStack_d8,param_1,3);
  FUN_014a5148(param_1 + 0x918,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68fc) = 0x10;
  FUN_014a5f9c(auStack_d8,param_1,4);
  FUN_014a5148(param_1 + 0x9b0,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68fd) = 0x11;
  FUN_014a5f9c(auStack_d8,param_1,5);
  FUN_014a5148(param_1 + 0xa48,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68fe) = 0x9c;
  FUN_014a60d0(auStack_d8,param_1,0);
  FUN_014a5148(param_1 + 0x5cd0,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x68ff) = 0x9d;
  FUN_014a60d0(auStack_d8,param_1,1);
  FUN_014a5148(param_1 + 0x5d68,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x6900) = 0x9e;
  FUN_014a60d0(auStack_d8,param_1,2);
  FUN_014a5148(param_1 + 0x5e00,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x6901) = 0x9f;
  FUN_014a60d0(auStack_d8,param_1,3);
  FUN_014a5148(param_1 + 0x5e98,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x6902) = 0xa0;
  FUN_014a60d0(auStack_d8,param_1,4);
  FUN_014a5148(param_1 + 0x5f30,auStack_d8);
  FUN_014e58d8(auStack_d8);
  *(undefined1 *)(param_1 + 0x6903) = 0xa1;
  FUN_014a60d0(auStack_d8,param_1,5);
  FUN_014a5148(param_1 + 0x5fc8,auStack_d8);
  FUN_014e58d8(auStack_d8);
  return;
}


