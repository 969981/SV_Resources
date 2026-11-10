/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00deab04; name: FUN_00deab04
 */


bool FUN_00deab04(long param_1,ushort *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte local_50 [32];
  
  local_50[0x10] = 0;
  local_50[0x11] = 0;
  local_50[0x12] = 0;
  local_50[0x13] = 0;
  local_50[0x14] = 0;
  local_50[0x15] = 0;
  local_50[0x16] = 0;
  local_50[0x17] = 0;
  local_50[0x18] = 0;
  local_50[0x19] = 0;
  local_50[0x1a] = 0;
  local_50[0x1b] = 0;
  local_50[0x1c] = 0;
  local_50[0x1d] = 0;
  local_50[0x1e] = 0;
  local_50[0x1f] = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  puVar2 = &DAT_cbf29ce484222645;
  snprintf((char *)local_50,0x20,"net_%u__%u",*param_2 & 3,(uint)(*param_2 >> 2));
  if (local_50[0] != 0) {
    pbVar1 = (byte *)((ulong)local_50 | 1);
    do {
      puVar2 = (undefined1 *)(((ulong)puVar2 ^ (ulong)local_50[0]) * 0x100000001b3);
      local_50[0] = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while (local_50[0] != 0);
  }
  return puVar2 == (undefined1 *)**(undefined8 **)(param_1 + 8);
}


