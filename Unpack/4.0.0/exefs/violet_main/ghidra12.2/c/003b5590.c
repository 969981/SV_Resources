/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b5590; name: FUN_003b5590
 */


long FUN_003b5590(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  FUN_0042bbe0(*param_1);
  *param_1 = 0;
  lVar2 = FUN_0042bbc0();
  *param_1 = lVar2;
  lVar3 = 0;
  if (lVar2 == 0) {
LAB_003b55e4:
    FUN_0042bbe0(lVar3);
    *param_1 = 0;
    return 0;
  }
  lVar3 = lVar2;
  if (param_2 != 0) {
    iVar1 = FUN_0042bc40(lVar2,param_2,0);
    lVar3 = *param_1;
    if (iVar1 < 1) goto LAB_003b55e4;
  }
  return lVar3;
}


