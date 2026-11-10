/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a50540; name: FUN_00a50540
 */


undefined8 FUN_00a50540(long param_1,int param_2,undefined4 param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_2 < 0x402) &&
     (uVar5 = (uint)*(byte *)(param_1 + (long)param_2 * 0x18 + 0x2e), uVar5 != 0)) {
    uVar6 = 0;
    puVar1 = (ushort *)(param_1 + (long)param_2 * 0x18 + 0x2c);
    do {
      uVar3 = *puVar1;
      uVar2 = 0;
      if ((uVar3 & 0xfffe) != 0x298 && uVar3 != 0x2e8) {
        uVar2 = uVar6;
      }
      uVar4 = FUN_00a65d24(puVar1,param_3,uVar2);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  return 0;
}


