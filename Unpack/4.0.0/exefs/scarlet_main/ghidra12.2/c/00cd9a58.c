/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd9a58; name: FUN_00cd9a58
 */


void FUN_00cd9a58(long *param_1)

{
  undefined *puVar1;
  
  FUN_0129a6e4();
  puVar1 = PTR_DAT_047e13b0;
  *param_1 = (long)(PTR_DAT_047e13b0 + 0x10);
  param_1[4] = (long)(puVar1 + 0xd8);
  param_1[5] = (long)(puVar1 + 0x128);
  memset(param_1 + 0x71,0,0x80);
  *(undefined4 *)(param_1 + 0x81) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x40c) = 0;
  *(undefined8 *)((long)param_1 + 0x414) = 0;
  *(undefined8 *)((long)param_1 + 0x41c) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0x3f80000000000000;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  *(undefined8 *)((long)param_1 + 0x444) = 0;
  *(undefined4 *)((long)param_1 + 0x44c) = 0;
  param_1[0x8a] = 0x3f800000;
  param_1[0x8b] = 0;
  return;
}


