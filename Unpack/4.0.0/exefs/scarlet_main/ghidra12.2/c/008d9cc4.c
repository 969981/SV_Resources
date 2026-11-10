/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d9cc4; name: FUN_008d9cc4
 */


void FUN_008d9cc4(undefined2 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_047d25a0;
  uVar2 = *(uint *)PTR_DAT_047d25a0 ^ *(uint *)PTR_DAT_047d25a0 << 0xb;
  puVar1 = (undefined4 *)(PTR_DAT_047d25a0 + 8);
  uVar3 = *(uint *)(PTR_DAT_047d25a0 + 0xc);
  *(undefined4 *)PTR_DAT_047d25a0 = *(undefined4 *)(PTR_DAT_047d25a0 + 4);
  *(undefined4 *)(puVar4 + 4) = *puVar1;
  uVar2 = uVar2 ^ uVar2 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
  *(uint *)(puVar4 + 8) = uVar3;
  *(uint *)(puVar4 + 0xc) = uVar2;
  *param_1 = (short)uVar2;
  uVar2 = *(uint *)puVar4 ^ *(uint *)puVar4 << 0xb;
  uVar3 = *(uint *)(puVar4 + 0xc);
  *(undefined4 *)puVar4 = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar4 + 8);
  uVar2 = uVar2 ^ uVar2 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
  *(uint *)(puVar4 + 8) = uVar3;
  *(uint *)(puVar4 + 0xc) = uVar2;
  param_1[1] = (short)uVar2;
  uVar2 = *(uint *)puVar4 ^ *(uint *)puVar4 << 0xb;
  uVar3 = *(uint *)(puVar4 + 0xc);
  *(undefined4 *)puVar4 = *(undefined4 *)(puVar4 + 4);
  *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar4 + 8);
  uVar2 = uVar2 ^ uVar2 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
  *(uint *)(puVar4 + 8) = uVar3;
  *(uint *)(puVar4 + 0xc) = uVar2;
  *(uint *)(param_1 + 2) = uVar2;
  return;
}


