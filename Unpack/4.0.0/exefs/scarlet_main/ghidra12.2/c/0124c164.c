/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124c164; name: FUN_0124c164
 */


void FUN_0124c164(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5,uint param_6,uint param_7)

{
  FUN_0124c1f4(*(undefined8 *)(param_1 + 0x20));
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x79,param_2,param_3,param_4,param_5,param_6);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x88,param_2,param_5,param_6 & 0xff,param_7 & 1);
  return;
}


