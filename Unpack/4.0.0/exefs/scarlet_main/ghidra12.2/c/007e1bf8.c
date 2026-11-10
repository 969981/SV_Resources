/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e1bf8; name: FUN_007e1bf8
 */


void FUN_007e1bf8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((ulong)*(byte *)(param_1 + 0x358) < 4) {
    lVar2 = param_1 + (ulong)*(byte *)(param_1 + 0x358) * 0x98;
    FUN_018dd4a4(lVar2 + 0xf8);
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(lVar2 + 0x180) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(lVar2 + 0x188) = uVar1;
    *(char *)(param_1 + 0x358) = *(char *)(param_1 + 0x358) + '\x01';
  }
  return;
}


