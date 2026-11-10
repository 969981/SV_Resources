/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e9e0b4; name: FUN_01e9e0b4
 */


void FUN_01e9e0b4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cff40 + 0x10);
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    (**(code **)(*(long *)param_1[10] + 0x18))
              ((long *)param_1[10],param_1[9],param_1[7] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01e9e12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[6] + 0x18))
            ((long *)param_1[6],param_1[5],param_1[3] & 0xfffffffffffffffe,1);
  return;
}


