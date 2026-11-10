/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edcdd0; name: FUN_01edcdd0
 */


undefined8 FUN_01edcdd0(long param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  
  if (*param_2 != 0) {
    uVar2 = FUN_00cf44f4(*(undefined8 *)(*param_2 + 0x70));
    uVar3 = FUN_00cf41a8(*(undefined8 *)(*param_2 + 0x70));
    if (uVar2 < 0x402) {
      puVar5 = (ushort *)(param_1 + (ulong)uVar2 * 0x18 + 0x2c);
      uVar2 = *puVar5;
      uVar1 = 0;
      if ((uVar2 & 0xfffe) != 0x298 && uVar2 != 0x2e8) {
        uVar1 = uVar3;
      }
      uVar4 = FUN_00a65d24(puVar5,param_3,uVar1);
      return uVar4;
    }
  }
  return 0;
}


