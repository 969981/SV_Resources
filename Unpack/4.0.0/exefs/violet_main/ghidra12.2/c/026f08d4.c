/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f08d4; name: FUN_026f08d4
 */


undefined4 FUN_026f08d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *local_30;
  undefined8 *puStack_28;
  undefined4 local_20;
  undefined4 local_14;
  
  if ((*param_1 == 0) || (lVar1 = *(long *)(*param_1 + 0x10), lVar1 == 0)) {
    local_14 = 0;
  }
  else {
    local_14 = 0x10;
    local_30 = &local_14;
    *param_4 = param_2;
    param_4[1] = param_3;
    local_20 = 0x8000;
    puStack_28 = param_4;
    FUN_026f1138(lVar1 + 0xe0,&local_30);
  }
  return local_14;
}


