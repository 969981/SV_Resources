/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02758f24; name: FUN_02758f24
 */


void FUN_02758f24(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [24];
  long *local_38;
  
  uVar2 = FUN_02759028(*(undefined8 *)(param_1 + 0x450));
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)FUN_01104bd8(*param_3 + 0x108,auStack_50);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x58))(plVar3);
    }
    plVar4 = *(long **)(param_1 + 0x38);
    *(long **)(param_1 + 0x38) = plVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x60))();
      plVar3 = *(long **)(param_1 + 0x38);
    }
    if ((plVar3 != (long *)0x0) && ((int)plVar3[0x26] == 2)) {
      uVar1 = FUN_0275906c(param_1);
      *(undefined4 *)(param_1 + 0x40) = uVar1;
      uVar5 = *(undefined8 *)(param_1 + 0x450);
      if (*(char *)(param_1 + 0x458) == '\0') {
        FUN_0135d26c(auStack_50,param_1 + 0x50);
        FUN_02759268(uVar5,auStack_50,*(undefined2 *)(param_1 + 0x42));
      }
      else {
        FUN_0135d26c(auStack_50,param_1 + 0x50);
        FUN_0275920c(uVar5,auStack_50,*(undefined2 *)(param_1 + 0x42));
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}


