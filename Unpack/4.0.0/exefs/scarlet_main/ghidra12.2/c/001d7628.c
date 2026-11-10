/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d7628; name: FUN_001d7628
 */


void FUN_001d7628(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  *(undefined8 *)(lVar1 + 0x228) = 0;
  *(undefined1 *)(lVar1 + 0x21c) = 0;
  *(undefined4 *)(lVar1 + 0x238) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x240) = 0;
  *(undefined8 *)(lVar1 + 0x248) = 0;
  *(undefined2 *)(lVar1 + 0x250) = 0;
  *(undefined8 *)(lVar1 + 600) = *(undefined8 *)(param_1 + 0x1130);
  *(undefined8 *)(lVar1 + 0x260) = *(undefined8 *)(param_1 + 0xc10);
  *(undefined8 *)(lVar1 + 0x268) = 0;
  return;
}


