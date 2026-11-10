/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292cf80; name: FUN_0292cf80
 */


undefined8 FUN_0292cf80(short param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  short *psVar3;
  
  uVar2 = 1;
  psVar3 = &DAT_045f6a70;
  while (psVar3[-8] != param_1) {
    if (*psVar3 == param_1) goto LAB_0292cfc4;
    uVar2 = uVar2 + 2;
    psVar3 = psVar3 + 0x10;
    if (uVar2 == 0x131) {
      *param_2 = 0;
      return 0;
    }
  }
  uVar2 = uVar2 - 1;
LAB_0292cfc4:
  uVar1 = (**(code **)((uVar2 & 0xffffffff) * 0x10 + 0x45f6a68))(param_2);
  return uVar1;
}


