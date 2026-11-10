/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ca930; name: FUN_003ca930
 */


undefined4 FUN_003ca930(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_58;
  
  local_58 = (ulong)CONCAT11((char)param_2,(char)((ulong)param_2 >> 8)) << 0x30;
  lVar3 = FUN_003a2e30(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120),&local_58);
  if (lVar3 == 0) {
    FUN_003c3950(param_1,0x50,0x186,0x44,"external/openssl/ssl/statem/statem_dtls.c",0x45b);
    uVar2 = 0;
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
    puVar6 = *(undefined1 **)(lVar3 + 8);
    lVar3 = 0xc;
    if (*(int *)(puVar6 + 0x28) != 0) {
      lVar3 = 1;
    }
    memcpy(*(void **)(*(long *)(param_1 + 0x88) + 8),*(void **)(puVar6 + 0x58),
           *(long *)(puVar6 + 8) + lVar3);
    lVar4 = *(long *)(puVar6 + 8);
    *(long *)(param_1 + 0x98) = lVar4 + lVar3;
    uVar1 = *(undefined2 *)(puVar6 + 0x10);
    uVar5 = *(undefined8 *)(puVar6 + 0x20);
    lVar3 = *(long *)(param_1 + 0xb0);
    *(undefined1 *)(lVar3 + 0x138) = *puVar6;
    *(long *)(lVar3 + 0x140) = lVar4;
    *(undefined2 *)(lVar3 + 0x148) = uVar1;
    *(undefined8 *)(lVar3 + 0x150) = 0;
    *(undefined8 *)(lVar3 + 0x158) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x530);
    uVar7 = *(undefined8 *)(param_1 + 0x548);
    uVar8 = *(undefined8 *)(param_1 + 0x520);
    uVar9 = *(undefined8 *)(param_1 + 0x5d0);
    uVar1 = *(undefined2 *)(*(long *)(param_1 + 0x18f8) + 2);
    *(undefined4 *)(lVar3 + 0x20c) = 1;
    *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(puVar6 + 0x30);
    *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(puVar6 + 0x38);
    *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(puVar6 + 0x40);
    *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(puVar6 + 0x48);
    FUN_003a3190(param_1 + 0x948,*(undefined2 *)(puVar6 + 0x50));
    uVar2 = 0x16;
    if (*(int *)(puVar6 + 0x28) != 0) {
      uVar2 = 0x14;
    }
    uVar2 = FUN_003c99a0(param_1,uVar2);
    *(undefined8 *)(param_1 + 0x530) = uVar5;
    *(undefined8 *)(param_1 + 0x548) = uVar7;
    *(undefined8 *)(param_1 + 0x520) = uVar8;
    *(undefined8 *)(param_1 + 0x5d0) = uVar9;
    FUN_003a3190(param_1 + 0x948,uVar1);
    *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x20c) = 0;
    FUN_003e9560(*(undefined8 *)(param_1 + 0x18),0xb,0,0);
  }
  return uVar2;
}


