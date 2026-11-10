/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020d48e4; name: FUN_020d48e4
 */


void FUN_020d48e4(long param_1,long *param_2)

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
      if (lVar1 == 0x7809a6b28fd5b8d9) goto LAB_020d498c;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar3);
    lVar3 = lVar2;
LAB_020d498c:
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
      if (lVar1 == 0x342bc83c99605e54) goto LAB_020d4a34;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar3);
    lVar3 = lVar2;
LAB_020d4a34:
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


