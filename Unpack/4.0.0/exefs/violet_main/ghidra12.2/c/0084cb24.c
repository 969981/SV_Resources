/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0084cb24; name: FUN_0084cb24
 */


void FUN_0084cb24(long *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047d1a78 + 0x10);
  lVar2 = param_1[4];
  if ((lVar2 != 0) && (lVar2 + (long)(param_1 + 4) != 0)) {
    FUN_012c4338();
  }
  lVar2 = param_1[5];
  if (*(int *)((long)param_1 + 0x34) < 0) {
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + (long)(param_1 + 5);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


