/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c6f48; name: FUN_001c6f48
 */


void FUN_001c6f48(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x3fc);
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  if ((uVar2 & 4) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x100);
  }
  if ((uVar2 & 0x20) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x160);
  }
  if ((uVar2 & 0x40) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x120);
  }
  FUN_001ce394(param_2,0x80,"%ld%s",*(undefined8 *)(param_1 + 400),*puVar1);
  return;
}


