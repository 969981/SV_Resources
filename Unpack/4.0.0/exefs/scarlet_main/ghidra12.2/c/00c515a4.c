/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c515a4; name: FUN_00c515a4
 */


void FUN_00c515a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  
  FUN_00c53978(param_1,param_3);
  puVar6 = *(uint **)(param_1 + 0x50);
  puVar5 = *(uint **)(param_1 + 0x58);
  if (puVar6 == puVar5) {
    uVar7 = 1;
  }
  else {
    uVar7 = puVar6[3];
    uVar3 = puVar6[4];
    lVar1 = param_3 + (ulong)(*puVar6 << 2) * 4;
    *(undefined8 *)(lVar1 + 0xc4) = *(undefined8 *)(puVar6 + 1);
    *(uint *)(lVar1 + 0xcc) = uVar7;
    *(uint *)(lVar1 + 0xd0) = uVar3;
    uVar7 = *puVar6 + 1;
    while (puVar2 = puVar6 + 5, puVar2 != puVar5) {
      uVar3 = puVar6[8];
      uVar4 = puVar6[9];
      lVar1 = param_3 + (ulong)(*puVar2 << 2) * 4;
      *(undefined8 *)(lVar1 + 0xc4) = *(undefined8 *)(puVar6 + 6);
      *(uint *)(lVar1 + 0xcc) = uVar3;
      *(uint *)(lVar1 + 0xd0) = uVar4;
      puVar6 = puVar2;
      if (uVar7 <= *puVar2) {
        uVar7 = *puVar2 + 1;
      }
    }
  }
  (**(code **)PTR_DAT_047e0c88)(*(undefined8 *)(param_3 + 0x28),0,uVar7,param_3 + 0xc4);
  (**(code **)PTR_DAT_047e0c90)(*(undefined8 *)(param_3 + 0x28),0,uVar7,param_3 + 0x144);
  (**(code **)PTR_DAT_047e0c98)
            (*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
             *(undefined8 *)(param_3 + 0x28));
  FUN_00c53564(param_1,param_3);
  return;
}


