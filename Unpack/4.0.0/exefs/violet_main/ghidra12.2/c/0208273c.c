/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0208273c; name: FUN_0208273c
 */


void FUN_0208273c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_60 [3];
  long *local_48;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = &DAT_cbf29ce484222645;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar3 == lVar2) {
    lVar2 = lVar3;
  }
  else {
    do {
      FUN_00c98090(local_60,lVar3);
      lVar1 = local_60[0];
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar1 == 0x1e41d564de2c426d) goto LAB_020827e4;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar3);
    lVar3 = lVar2;
LAB_020827e4:
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if ((lVar3 != 0) && (lVar2 != lVar3)) {
    FUN_00d09648(local_60);
    lVar3 = local_60[0];
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = lVar3;
    lVar2 = *(long *)(param_1 + 0x10);
  }
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != lVar2) {
    do {
      FUN_00c98090(local_60,lVar3);
      lVar1 = local_60[0];
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar1 == 0x6d229416f0bbb625) goto LAB_0208288c;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar3);
    lVar3 = lVar2;
LAB_0208288c:
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if ((lVar3 != 0) && (lVar2 != lVar3)) {
    FUN_00d09648(local_60,lVar3);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = local_60[0];
  }
  return;
}


