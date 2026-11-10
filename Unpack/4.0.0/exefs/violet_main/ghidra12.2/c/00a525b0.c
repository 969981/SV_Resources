/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a525b0; name: FUN_00a525b0
 */


undefined8 FUN_00a525b0(long param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 < 0x402) {
    param_1 = param_1 + (long)param_2 * 0x18;
    local_40 = *(undefined8 *)(param_1 + 0x34);
    uStack_38 = *(undefined8 *)(param_1 + 0x3c);
    local_48 = *(ulong *)(param_1 + 0x2c);
    uVar3 = local_48 >> 0x10;
    if ((local_48 >> 0x10 & 0xff) != 0) {
      uVar1 = (ushort)local_48 & 0xfffe;
      bVar4 = (ushort)local_48 != 0x2e8;
      uVar6 = 0;
      do {
        uVar2 = 0;
        if (bVar4 && uVar1 != 0x298) {
          uVar2 = uVar6;
        }
        uVar5 = FUN_00a65d24(&local_48,0,uVar2);
        if ((uVar5 & 1) != 0) {
          return 1;
        }
        uVar6 = uVar6 + 1;
      } while (((uint)uVar3 & 0xff) != uVar6);
    }
  }
  return 0;
}


