/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a3050; name: FUN_007a3050
 */


void FUN_007a3050(long param_1)

{
  undefined1 auStack_30 [16];
  undefined *local_20;
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined1 auStack_4 [4];
  
  local_20 = PTR_DAT_047d0aa8 + 0x10;
  local_18 = 1;
  local_17 = *(undefined1 *)(param_1 + 0x14);
  local_16 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  FUN_007a30a4(auStack_30,&local_20,*(undefined8 *)(param_1 + 8),auStack_4,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


