/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c74294; name: FUN_00c74294
 */


void FUN_00c74294(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_3;
  uVar1 = FUN_00c742fc(*param_1 + 0x28);
  if (((uVar1 & 1) != 0) && (0.0 < *(float *)(lVar2 + 4))) {
                    /* WARNING: Could not recover jumptable at 0x00c742e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1[2])(param_1[1],param_2,lVar2 + 8);
    return;
  }
  return;
}


