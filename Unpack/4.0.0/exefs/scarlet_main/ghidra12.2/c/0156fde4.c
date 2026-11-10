/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156fde4; name: FUN_0156fde4
 */


undefined8 * FUN_0156fde4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_28;
  
  puVar1 = operator_new(0x78);
  puVar1[9] = 0;
  puVar1[2] = 0x780;
  puVar1[3] = 0x438;
  *(undefined2 *)(puVar1 + 4) = 1;
  *(undefined1 *)((long)puVar1 + 0x54) = 1;
  *(undefined4 *)(puVar1 + 0xb) = 3;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  puVar1[0xe] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0x400000800;
  *(undefined4 *)(puVar1 + 10) = 0x800;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  FUN_015739d8(param_1,puVar1);
  local_28 = 0;
  FUN_0156fcc4(&local_28);
  return puVar1;
}


