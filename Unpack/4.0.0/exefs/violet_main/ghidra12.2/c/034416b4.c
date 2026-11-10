/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034416b4; name: FUN_034416b4
 */


undefined8 FUN_034416b4(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(int *)(param_2 + 0x44) == 0) {
    uVar3 = 0x1f;
  }
  else {
    uVar3 = FUN_0343c2bc();
    if ((int)uVar3 == 1) {
      plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))
                                 (7,(ulong)*(uint *)(param_2 + 0x44) * 0x50);
      *(long **)(param_1 + 0x648) = plVar4;
      if (plVar4 == (long *)0x0) {
        uVar3 = 2;
      }
      else {
        uVar2 = *(uint *)(param_2 + 0x44);
        plVar5 = plVar4;
        do {
          *plVar5 = 0;
          plVar1 = plVar5 + 10;
          plVar5[7] = 0;
          if (*(long *)(param_1 + 0x640) == 0) {
            *(long **)(param_1 + 0x640) = plVar5;
            *(long **)(param_1 + 0x638) = plVar5;
            *plVar5 = 0;
          }
          else {
            *plVar5 = *(long *)(param_1 + 0x640);
            *(long **)(param_1 + 0x640) = plVar5;
          }
          *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
          plVar5 = plVar1;
        } while (plVar1 < plVar4 + (ulong)uVar2 * 10);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


