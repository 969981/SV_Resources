/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002544fc; name: FUN_002544fc
 */


void FUN_002544fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(param_1 + 0x10);
  local_30 = 1000000;
                    /* try { // try from 00254520 to 0025452b has its CatchHandler @ 00254570 */
  lVar1 = FUN_00254590(&local_30,param_1 + 0x20,&local_30);
  lVar2 = (long)(*(double *)(param_1 + 0x18) * (double)*(long *)(param_1 + 0x10));
  lVar3 = *(long *)(param_1 + 8) * 1000000;
  if (lVar2 <= lVar3) {
    lVar3 = lVar2;
  }
  *(long *)(param_1 + 0x10) = lVar3;
  *(long *)(param_1 + 0x9e8) = *(long *)(param_1 + 0x9e8) + lVar1 / 1000000;
  return;
}


