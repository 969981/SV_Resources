/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020cc068; name: FUN_020cc068
 */


void FUN_020cc068(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_60 [3];
  long *local_48;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x74)) = &DAT_cbf29ce484222645;
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
      if (lVar1 == 0x238f3c3c39758535) goto LAB_020cc140;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar3);
    lVar3 = lVar2;
LAB_020cc140:
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
      if (lVar1 == -0xd52fe1dc84be10b) goto LAB_020cc1e8;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar3);
    lVar3 = lVar2;
LAB_020cc1e8:
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if ((lVar3 != 0) && (lVar2 != lVar3)) {
    FUN_00d09648(local_60,lVar3);
    lVar3 = local_60[0];
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = lVar3;
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
      if (lVar1 == 0x65469f37e9cd5de) goto LAB_020cc290;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar3);
    lVar3 = lVar2;
LAB_020cc290:
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if ((lVar3 != 0) && (lVar2 != lVar3)) {
    FUN_00d09648(local_60,lVar3);
    lVar3 = local_60[0];
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x68)) = lVar3;
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
      if (lVar1 == 0x29212085f1b5a484) goto LAB_020cc338;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar3);
    lVar3 = lVar2;
LAB_020cc338:
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if ((lVar3 != 0) && (lVar2 != lVar3)) {
    FUN_00d09648(local_60,lVar3);
    lVar3 = local_60[0];
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x6c)) = lVar3;
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
      if (lVar1 == 0x4ce6531060befcf5) goto LAB_020cc3e0;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar3);
    lVar3 = lVar2;
LAB_020cc3e0:
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if ((lVar3 != 0) && (lVar2 != lVar3)) {
    FUN_00d09648(local_60,lVar3);
    lVar3 = local_60[0];
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x70)) = lVar3;
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
      if (lVar1 == -0x3f68f8667281304b) goto LAB_020cc488;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar3);
    lVar3 = lVar2;
LAB_020cc488:
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if ((lVar3 != 0) && (lVar2 != lVar3)) {
    FUN_00d09648(local_60,lVar3);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x74)) = local_60[0];
  }
  return;
}


