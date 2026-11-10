/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292cfe0; name: FUN_0292cfe0
 */


undefined8 FUN_0292cfe0(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = 1;
  for (plVar3 = &DAT_045f14e0; plVar3[-2] != param_1; plVar3 = plVar3 + 4) {
    if (uVar2 == 0xd3) goto LAB_0292d040;
    if (*plVar3 == param_1) goto LAB_0292d01c;
    uVar2 = uVar2 + 2;
  }
  uVar2 = uVar2 - 1;
LAB_0292d01c:
  if ((uVar2 & 0xffffffff) != 0xd2) {
                    /* WARNING: Could not recover jumptable at 0x0292d03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uVar2 & 0xffffffff) * 0x10 + 0x45f14d8))(param_2);
    return uVar1;
  }
LAB_0292d040:
  *param_2 = 0;
  return 0;
}


