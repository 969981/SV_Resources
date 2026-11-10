/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01473e20; name: FUN_01473e20
 */


bool FUN_01473e20(long param_1,int param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x80);
  lVar3 = *(long *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) == lVar3) {
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    uVar1 = *(long *)(param_1 + 0x88) + uVar2;
    lVar4 = *(long *)(lVar3 + (uVar2 / 0x55) * 8) + (uVar2 % 0x55) * 0x30;
    lVar5 = *(long *)(lVar3 + (uVar1 / 0x55) * 8) + (uVar1 % 0x55) * 0x30;
  }
  if (lVar5 != lVar4) {
    plVar6 = (long *)(lVar3 + (uVar2 / 0x55) * 8);
    if ((undefined1 *)*param_3 == &DAT_cbf29ce484222645) {
      if (param_2 != -1) {
        do {
          if (*(int *)(lVar4 + 0x18) == param_2) break;
          lVar4 = lVar4 + 0x30;
          if (lVar4 - *plVar6 == 0xff0) {
            plVar6 = plVar6 + 1;
            lVar4 = *plVar6;
          }
        } while (lVar5 != lVar4);
      }
    }
    else {
      do {
        if ((param_2 == -1 || *(int *)(lVar4 + 0x18) == param_2) &&
           ((undefined1 *)*param_3 == *(undefined1 **)(lVar4 + 0x28))) break;
        lVar4 = lVar4 + 0x30;
        if (lVar4 - *plVar6 == 0xff0) {
          plVar6 = plVar6 + 1;
          lVar4 = *plVar6;
        }
      } while (lVar5 != lVar4);
    }
  }
  if (*(long *)(param_1 + 0x50) == lVar3) {
    lVar3 = 0;
  }
  else {
    uVar2 = *(long *)(param_1 + 0x88) + uVar2;
    lVar3 = *(long *)(lVar3 + (uVar2 / 0x55) * 8) + (uVar2 % 0x55) * 0x30;
  }
  return lVar3 != lVar4;
}


