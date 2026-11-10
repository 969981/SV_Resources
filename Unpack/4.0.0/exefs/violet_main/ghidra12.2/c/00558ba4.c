/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00558ba4; name: FUN_00558ba4
 */


void FUN_00558ba4(undefined8 param_1,ulong *param_2)

{
  byte bVar1;
  
  if ((param_2[0xf] & 1) == 0) {
    bVar1 = (byte)param_2[9];
  }
  else {
    (**(code **)(*(long *)param_2[0x12] + 0x18))
              ((long *)param_2[0x12],param_2[0x11],param_2[0xf] & 0xfffffffffffffffe,1);
    bVar1 = (byte)param_2[9];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)param_2[5];
  }
  else {
    (**(code **)(*(long *)param_2[0xc] + 0x18))
              ((long *)param_2[0xc],param_2[0xb],param_2[9] & 0xfffffffffffffffe,1);
    bVar1 = (byte)param_2[5];
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = (byte)*param_2;
  }
  else {
    (**(code **)(*(long *)param_2[8] + 0x18))
              ((long *)param_2[8],param_2[7],param_2[5] & 0xfffffffffffffffe,1);
    bVar1 = (byte)*param_2;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00558c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[3] + 0x18))
            ((long *)param_2[3],param_2[2],*param_2 & 0xfffffffffffffffe,1);
  return;
}


