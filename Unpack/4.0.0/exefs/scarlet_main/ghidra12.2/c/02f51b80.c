/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f51b80; name: FUN_02f51b80
 */


void FUN_02f51b80(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = 0;
  *param_1 = 0x1d00;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3 + 0x38);
    lVar3 = lVar3 + 0x68;
    puVar1[6] = &LAB_02f51c60;
    puVar1[-6] = &LAB_02f51c60;
    puVar1[-5] = &LAB_02f51c60;
    puVar1[-4] = &LAB_02f51c60;
    puVar1[-3] = &LAB_02f51c60;
    puVar1[-2] = &LAB_02f51c60;
    puVar1[-1] = &LAB_02f51c60;
    *puVar1 = &LAB_02f51c60;
    puVar1[1] = &LAB_02f51c60;
    puVar1[2] = &LAB_02f51c60;
    puVar1[3] = &LAB_02f51c60;
    puVar1[4] = &LAB_02f51c60;
    puVar1[5] = &LAB_02f51c60;
  } while (lVar3 != 0x548);
  *(undefined1 **)(param_1 + 0x36) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 2) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 4) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x50) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x6a) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x84) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x9e) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0xb8) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0xd2) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0xec) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x106) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x120) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x13a) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 6) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 8) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 10) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0xc) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0xe) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x10) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x12) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x14) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x16) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x18) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x1a) = &LAB_02f51d00;
  *(undefined1 **)(param_1 + 0x1c) = &LAB_02f51d00;
  puVar2 = PTR_FUN_047e48a8;
  *(undefined **)(param_1 + 0x3a) = PTR_FUN_047e48b0;
  *(undefined **)(param_1 + 0x3c) = puVar2;
  puVar2 = PTR_FUN_047e48b8;
  *(undefined **)(param_1 + 0x3e) = PTR_FUN_047e48b8;
  *(undefined **)(param_1 + 0x56) = PTR_FUN_047e48c0;
  *(undefined **)(param_1 + 0x58) = puVar2;
  *(undefined1 **)(param_1 + 0x54) = &LAB_02f51d10;
  *(undefined1 **)(param_1 + 0x6e) = &LAB_02f51d30;
  *(undefined1 **)(param_1 + 0x70) = &LAB_02f51d30;
  return;
}


