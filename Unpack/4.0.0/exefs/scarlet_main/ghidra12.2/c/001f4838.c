/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4838; name: FUN_001f4838
 */


void FUN_001f4838(undefined8 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = 4;
  *(undefined1 *)((long)param_1 + 0xc) = 8;
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  return;
}


