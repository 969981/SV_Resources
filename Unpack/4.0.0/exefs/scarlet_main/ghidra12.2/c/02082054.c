/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02082054; name: FUN_02082054
 */


void FUN_02082054(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_60 [3];
  long *local_48;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = &DAT_cbf29ce484222645;
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar4 == lVar3) {
    lVar3 = lVar4;
  }
  else {
    do {
      FUN_00c98090(local_60,lVar4);
      lVar1 = local_60[0];
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar1 == -0x2d6284f03415a81e) goto LAB_020820fc;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 != lVar4);
    lVar4 = lVar3;
LAB_020820fc:
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if ((lVar4 != 0) && (lVar3 != lVar4)) {
    uVar2 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = uVar2;
    lVar3 = *(long *)(param_1 + 0x10);
  }
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 != lVar3) {
    do {
      FUN_00c98090(local_60,lVar4);
      lVar1 = local_60[0];
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar1 == -0x74966124970e0874) goto LAB_02082184;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 != lVar4);
    lVar4 = lVar3;
LAB_02082184:
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if ((lVar4 != 0) && (lVar3 != lVar4)) {
    uVar2 = FUN_00d09600(lVar4);
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100)) = uVar2;
  }
  return;
}


