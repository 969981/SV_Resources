/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298e6f8; name: FUN_0298e6f8
 */


void FUN_0298e6f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_014c06c0(param_1,param_6);
  FUN_014c0254(param_1,0,param_2);
  FUN_014c0254(param_1,2,param_3);
  FUN_014c0254(param_1,1,param_4);
  FUN_014c0254(param_1,3,param_5);
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = param_7;
  *(undefined1 *)(param_1 + 0x8d) = 4;
  return;
}


