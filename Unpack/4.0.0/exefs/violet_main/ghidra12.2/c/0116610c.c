/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0116610c; name: FUN_0116610c
 */


void FUN_0116610c(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_70 [3];
  long *local_58;
  
  lVar2 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar2 == lVar3) {
    lVar3 = lVar2;
  }
  else {
    do {
      FUN_00c98090(local_70,lVar2);
      lVar1 = local_70[0];
      lVar4 = *param_3;
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (lVar1 == lVar4) goto LAB_01166174;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 != lVar2);
    lVar2 = lVar3;
LAB_01166174:
    lVar3 = *(long *)(param_2 + 0x10);
  }
  lVar1 = 0;
  if (lVar3 != lVar2) {
    lVar1 = lVar2;
  }
  *param_1 = lVar1;
  return;
}


