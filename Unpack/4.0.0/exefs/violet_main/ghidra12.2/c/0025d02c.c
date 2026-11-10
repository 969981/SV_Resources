/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025d02c; name: FUN_0025d02c
 */


void FUN_0025d02c(ulong *param_1)

{
  byte *pbVar1;
  
  if ((byte)param_1[4] != 0) {
    if ((*param_1 & 1) == 0) {
      pbVar1 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar1 = (byte *)param_1[2];
    }
    nn::fs::Unmount((char *)pbVar1);
    *(byte *)(param_1 + 4) = 0;
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0025d084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))
            ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
  return;
}


