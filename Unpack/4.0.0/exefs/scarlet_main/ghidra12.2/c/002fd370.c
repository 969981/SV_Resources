/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fd370; name: FUN_002fd370
 */


undefined8 * FUN_002fd370(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_0038c7b0(0x88);
  *puVar1 = &DAT_04494318;
  *(undefined4 *)(puVar1 + 0x10) = 0xb;
  *(int *)(puVar1 + 2) = param_1;
  puVar1[0xf] = 0x100;
  uVar2 = FUN_0038c780(0x100);
  puVar1[0xe] = uVar2;
  *(uint *)((long)puVar1 + 0x14) = (uint)(param_1 == 0);
  *(uint *)(puVar1 + 3) = (uint)(param_1 == 0);
  return puVar1;
}


