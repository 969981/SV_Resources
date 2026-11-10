/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a50508; name: FUN_00a50508
 */


undefined8 FUN_00a50508(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  
  if (0x401 < param_2) {
    return 0;
  }
  puVar3 = (ushort *)(param_1 + (long)param_2 * 0x18 + 0x2c);
  uVar2 = *puVar3;
  uVar1 = 0;
  if ((uVar2 & 0xfffe) != 0x298 && uVar2 != 0x2e8) {
    uVar1 = param_3;
  }
  uVar4 = FUN_00a65d24(puVar3,param_4,uVar1);
  return uVar4;
}


