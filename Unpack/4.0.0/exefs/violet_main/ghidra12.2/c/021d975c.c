/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d975c; name: FUN_021d975c
 */


void FUN_021d975c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)FUN_021dad60();
  if (plVar1 == (long *)0x0) {
    return;
  }
  if ((long *)(param_1 + 0x80) != *(long **)(param_1 + 0x88)) {
    plVar5 = *(long **)(param_1 + 0x88);
    do {
      (**(code **)(*plVar1 + 8))(plVar1,(int)plVar5[6]);
      puVar2 = *(undefined8 **)(param_1 + 0xb0);
      plVar3 = plVar5 + -2;
      *plVar3 = param_1 + 0xa8;
      plVar5[-1] = (long)puVar2;
      *(long **)(param_1 + 0xb0) = plVar3;
      *puVar2 = plVar3;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      plVar3 = (long *)plVar5[2];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)*plVar5;
        if (plVar5 == (long *)plVar3[2]) {
          plVar4 = (long *)*plVar3;
          plVar5 = plVar3;
          if (plVar3 == (long *)plVar4[2]) {
            do {
              plVar5 = plVar4;
              plVar4 = (long *)*plVar5;
            } while (plVar5 == (long *)plVar4[2]);
          }
        }
        else {
          plVar4 = plVar3;
        }
        plVar3 = plVar5;
        if ((long *)plVar5[2] != plVar4) {
          plVar3 = plVar4;
        }
      }
      else {
        plVar5 = (long *)plVar3[1];
        if (plVar5 != (long *)0x0) {
          plVar3 = plVar5;
          for (plVar5 = (long *)plVar5[1]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
            plVar3 = plVar5;
          }
        }
      }
      plVar5 = plVar3;
    } while ((long *)(param_1 + 0x80) != plVar3);
  }
  FUN_026f77d4(param_1 + 0x78);
  return;
}


