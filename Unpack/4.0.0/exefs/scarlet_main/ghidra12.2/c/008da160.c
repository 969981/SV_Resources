/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008da160; name: FUN_008da160
 */


void FUN_008da160(long *param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  
  FUN_00fab594(param_2);
  *param_2 = 1;
  *(byte **)(param_2 + 0x18) = param_3;
  *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) & 0xfffb;
  FUN_00fab56c(param_3);
  *param_3 = *param_3 & 0xfe | *(char *)*param_1 != '\0';
  if (*(byte *)(*param_1 + 6) < 6) {
    uVar2 = (ulong)*(byte *)(*param_1 + 6) << 3;
    bVar1 = (byte)(0x10500060606 >> (uVar2 & 0x3f));
    param_3[1] = bVar1;
    param_3[4] = bVar1;
    bVar1 = (byte)(0x70102010107 >> (uVar2 & 0x3f));
    param_3[2] = bVar1;
    param_3[5] = bVar1;
    bVar1 = (byte)(0x20000L >> (uVar2 & 0x3f));
    param_3[3] = bVar1;
    param_3[6] = bVar1;
  }
  return;
}


