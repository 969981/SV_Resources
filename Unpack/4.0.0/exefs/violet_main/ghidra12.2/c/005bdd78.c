/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005bdd78; name: FUN_005bdd78
 */


void FUN_005bdd78(ulong *param_1)

{
  if ((param_1[0x11] & 1) != 0) {
    (**(code **)(*(long *)param_1[0x14] + 0x18))
              ((long *)param_1[0x14],param_1[0x13],param_1[0x11] & 0xfffffffffffffffe,1);
  }
  if ((param_1[0xd] & 1) != 0) {
    (**(code **)(*(long *)param_1[0x10] + 0x18))
              ((long *)param_1[0x10],param_1[0xf],param_1[0xd] & 0xfffffffffffffffe,1);
  }
  FUN_027c2bd0(param_1 + 9,param_1[10]);
  if ((param_1[5] & 1) != 0) {
    (**(code **)(*(long *)param_1[8] + 0x18))
              ((long *)param_1[8],param_1[7],param_1[5] & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(param_1 + 4);
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005bde2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  return;
}


