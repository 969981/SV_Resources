/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020d8d60; name: FUN_020d8d60
 */


void FUN_020d8d60(long param_1,long *param_2)

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
      if (lVar1 == -0x7b4c63b7f4cc60d2) goto LAB_020d8dfc;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 != lVar2);
    lVar2 = lVar3;
LAB_020d8dfc:
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


