/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0207ccd4; name: FUN_0207ccd4
 */


void FUN_0207ccd4(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_60 [3];
  long *local_48;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = &DAT_cbf29ce484222645;
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0xec)) = &DAT_cbf29ce484222645;
  lVar4 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(param_1 + 0x90);
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
      if (lVar1 == -0xc0707885c0b0e57) goto LAB_0207cd68;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 != lVar4);
    lVar4 = lVar3;
LAB_0207cd68:
    lVar3 = *(long *)(param_1 + 0x90);
  }
  if ((lVar4 != 0) && (lVar3 != lVar4)) {
    uVar2 = FUN_00d09600();
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = uVar2;
    lVar3 = *(long *)(param_1 + 0x90);
  }
  lVar4 = *(long *)(param_1 + 0x88);
  if (lVar4 != lVar3) {
    do {
      FUN_00c98090(local_60,lVar4);
      lVar1 = local_60[0];
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar1 == 0x1e0c11ffbbcbdc63) goto LAB_0207cddc;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 != lVar4);
    lVar4 = lVar3;
LAB_0207cddc:
    lVar3 = *(long *)(param_1 + 0x90);
  }
  if ((lVar4 != 0) && (lVar3 != lVar4)) {
    uVar2 = FUN_00d09600(lVar4);
    *(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xec)) = uVar2;
  }
  return;
}


