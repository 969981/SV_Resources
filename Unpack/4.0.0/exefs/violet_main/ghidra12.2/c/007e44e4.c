/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e44e4; name: FUN_007e44e4
 */


ulong FUN_007e44e4(uint *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007e44f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_1 + 0x10))(param_2,*param_1);
    return uVar4;
  }
  uVar1 = (uint)*param_2 + (uint)param_2[1] + (uint)param_2[2] + (uint)param_2[3] + (uint)param_2[4]
          + (uint)param_2[5] + (uint)param_2[6] + (uint)param_2[7] + (uint)param_2[8] +
          (uint)param_2[9] + (uint)param_2[10] + (uint)param_2[0xb] + (uint)param_2[0xc] +
          (uint)param_2[0xd] + (uint)param_2[0xe] + (uint)param_2[0xf] + (uint)param_2[0x10] +
          (uint)param_2[0x11] + (uint)param_2[0x12] + (uint)param_2[0x13] + (uint)param_2[0x14] +
          (uint)param_2[0x15] + (uint)param_2[0x16] + (uint)param_2[0x17] + (uint)param_2[0x18] +
          (uint)param_2[0x19] + (uint)param_2[0x1a] + (uint)param_2[0x1b] + (uint)param_2[0x1c] +
          (uint)param_2[0x1d] + (uint)param_2[0x1e] + (uint)param_2[0x1f];
  uVar2 = *param_1;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  return (ulong)(uVar1 - uVar3 * uVar2);
}


