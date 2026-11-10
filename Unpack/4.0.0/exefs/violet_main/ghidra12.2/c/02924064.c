/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02924064; name: FUN_02924064
 */


void FUN_02924064(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  
  *(undefined1 *)(param_1 + 0xa8) = 0;
  if (*(char *)(param_1 + 0xa6) != '\0') {
    uVar3 = 0;
    do {
      *(char *)(param_1 + 0xa8) = (char)uVar3 + '\x01';
      plVar4 = *(long **)(param_1 + uVar3 * 8);
      if (plVar4 == (long *)0x0) {
        return;
      }
      uVar3 = (**(code **)(*plVar4 + 0x200))(plVar4);
      if ((uVar3 & 1) == 0) {
        uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
        cVar1 = FUN_01481420(param_2,uVar2);
        if (cVar1 == '\n') goto LAB_029240fc;
      }
      else {
LAB_029240fc:
        FUN_0167bf08(param_1,plVar4);
      }
      uVar3 = (ulong)*(byte *)(param_1 + 0xa8);
    } while (*(byte *)(param_1 + 0xa8) < *(byte *)(param_1 + 0xa6));
  }
  return;
}


