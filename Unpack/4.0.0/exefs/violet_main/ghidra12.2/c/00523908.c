/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00523908; name: FUN_00523908
 */


void FUN_00523908(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  if (*(ushort *)(param_1 + 8) < 0x101) {
    if ((ulong)*(ushort *)(param_1 + 10) != 0) {
      lVar4 = (ulong)*(ushort *)(param_1 + 10) << 5;
      lVar2 = *(long *)(param_1 + 0x10) + 8;
      do {
        FUN_005217b4(lVar2);
        lVar4 = lVar4 + -0x20;
        lVar2 = lVar2 + 0x20;
      } while (lVar4 != 0);
    }
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    plVar5 = (long *)*puVar3;
    while (plVar5 != puVar3 + 1) {
      FUN_005217b4(plVar5 + 5);
      plVar1 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar1 = plVar5 + 2;
        if (*(long **)*plVar1 == plVar5) {
          plVar5 = (long *)*plVar1;
        }
        else {
          do {
            lVar2 = *plVar1;
            plVar1 = (long *)(lVar2 + 0x10);
            plVar5 = (long *)*plVar1;
          } while (*plVar5 != lVar2);
        }
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
  }
  return;
}


