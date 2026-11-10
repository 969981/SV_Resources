/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f72434; name: FUN_02f72434
 */


void FUN_02f72434(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort *puVar1;
  
  if ((2 < *(byte *)(param_4 + 9)) &&
     (puVar1 = (ushort *)(*(long *)(param_4 + 0x20) + (ulong)*(ushort *)(param_4 + 0x28)),
     puVar1 != (ushort *)0x0)) {
    *puVar1 = *puVar1 | 0x400;
    *(byte *)(puVar1 + 3) = (byte)puVar1[3] & 0x1f | 0x60;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined8 *)(param_4 + 0x20) = 0;
    *(undefined2 *)(param_4 + 0x28) = 0;
  }
  (**(code **)(*param_1 + 0x18))();
  return;
}


