/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020819f0; name: FUN_020819f0
 */


void FUN_020819f0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_60 [3];
  long *local_48;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar2 == lVar3) {
    lVar3 = lVar2;
  }
  else {
    do {
      FUN_00c98090(local_60,lVar2);
      lVar1 = local_60[0];
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar1 == -0x6ab91d2507e4b867) goto LAB_02081a8c;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 != lVar2);
    lVar2 = lVar3;
LAB_02081a8c:
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if ((lVar2 != 0) && (lVar3 != lVar2)) {
    FUN_00d09648(local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = local_60[0];
  }
  return;
}


