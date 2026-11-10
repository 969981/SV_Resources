/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b8ad0; name: FUN_007b8ad0
 */


void FUN_007b8ad0(long param_1)

{
  undefined1 auStack_20 [16];
  
  FUN_0078b184(param_1 + 0x1218);
  FUN_0078b184(param_1 + 0x1238);
  *(undefined2 *)(param_1 + 0x1210) = 0;
  *(undefined1 *)(param_1 + 0x1190) = 0;
  *(undefined8 *)(param_1 + 0x12c4) = 0x9c409c40c000c000;
  *(undefined4 *)(param_1 + 0x12cc) = 0x88b888b8;
  if (0 < *(int *)(param_1 + 0x11f8)) {
    FUN_00792300(auStack_20,param_1 + 0x11f4);
  }
  if (0 < *(int *)(param_1 + 0x11e4)) {
    FUN_00792300(auStack_20,param_1 + 0x11e0);
  }
  if (0 < *(int *)(param_1 + 0x11d0)) {
    FUN_00792300(auStack_20,param_1 + 0x11cc);
  }
  return;
}


