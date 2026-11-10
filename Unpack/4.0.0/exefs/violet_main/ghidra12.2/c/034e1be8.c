/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034e1be8; name: FUN_034e1be8
 */


void FUN_034e1be8(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    plVar2 = *(long **)(param_1 + 0x1a8);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 2);
      if (lVar3 == 0) {
        do {
          if ((int)plVar2[0xe] != 0) {
            *(undefined4 *)(plVar2 + 0xe) = 0;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          if ((plVar2[4] == lVar3) && ((int)plVar2[0xe] != 0)) {
            *(undefined4 *)(plVar2 + 0xe) = 0;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  else if (iVar1 == 1) {
    plVar2 = *(long **)(param_1 + 0x1a8);
    if (plVar2 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 2);
      if (lVar3 == 0) {
        do {
          if ((int)plVar2[0xe] != 1) {
            *(undefined4 *)(plVar2 + 0xe) = 1;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      else {
        do {
          if ((plVar2[4] == lVar3) && ((int)plVar2[0xe] != 1)) {
            *(undefined4 *)(plVar2 + 0xe) = 1;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  else if (iVar1 == 0) {
    FUN_034e1628(param_1,*(undefined8 *)(param_2 + 2),0);
  }
  FUN_0346adac(param_1,param_2);
  return;
}


