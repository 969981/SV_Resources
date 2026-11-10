/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027560cc; name: FUN_027560cc
 */


void FUN_027560cc(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  long *local_30;
  long *local_28;
  
  if (*(char *)(param_1 + 0x458) != '\0') {
    plVar2 = (long *)FUN_01104bd8(*param_3 + 0x108,auStack_48);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x58))(plVar2);
    }
    plVar3 = *(long **)(param_1 + 0x38);
    *(long **)(param_1 + 0x38) = plVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x60))();
      plVar2 = *(long **)(param_1 + 0x38);
    }
    if ((plVar2 != (long *)0x0) && ((int)plVar2[0x26] == 2)) {
      uVar1 = FUN_027561cc(param_1);
      *(undefined4 *)(param_1 + 0x40) = uVar1;
      FUN_0275636c(&local_28,param_1 + 0x78,*(undefined4 *)(param_1 + 0x47c));
      uVar4 = DAT_0485a0e8;
      FUN_0135d26c(auStack_48,&local_28);
      uVar4 = FUN_00c42b68(uVar4,auStack_48,param_1 + 0x98,0);
      *(undefined8 *)(param_1 + 0x450) = uVar4;
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x458) = 0;
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


