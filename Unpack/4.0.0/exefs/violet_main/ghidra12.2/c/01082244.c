/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01082244; name: FUN_01082244
 */


void FUN_01082244(long param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  long *plVar3;
  
  if (param_2 == 1) {
    if ((*(char *)(param_1 + 0x58) == '\0') && (*(char *)(param_1 + 0x59) == '\0')) {
      return;
    }
    uVar2 = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0x58) = 0;
  }
  else {
    switch(param_2) {
    case 2:
      if ((*(char *)(param_1 + 0x58) == '\x01') && (*(char *)(param_1 + 0x59) == '\x01')) {
        return;
      }
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      uVar1 = 0x101;
      break;
    case 3:
      if ((*(char *)(param_1 + 0x58) == '\x02') && (*(char *)(param_1 + 0x59) == '\x02')) {
        return;
      }
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      uVar1 = 0x202;
      break;
    case 4:
      if ((*(char *)(param_1 + 0x58) == '\x03') && (*(char *)(param_1 + 0x59) == '\x03')) {
        return;
      }
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      uVar1 = 0x303;
      break;
    case 5:
      if ((*(char *)(param_1 + 0x58) == '\x04') && (*(char *)(param_1 + 0x59) == '\x04')) {
        return;
      }
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      uVar1 = 0x404;
      break;
    case 6:
      if ((*(char *)(param_1 + 0x58) == '\x06') && (*(char *)(param_1 + 0x59) == '\x06')) {
        return;
      }
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      uVar1 = 0x606;
      break;
    case 7:
      if ((*(char *)(param_1 + 0x58) == '\b') && (*(char *)(param_1 + 0x59) == '\b')) {
        return;
      }
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      uVar1 = 0x808;
      break;
    case 8:
      if ((*(char *)(param_1 + 0x58) == '\t') && (*(char *)(param_1 + 0x59) == '\t')) {
        return;
      }
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      uVar1 = 0x909;
      break;
    case 9:
      if ((*(char *)(param_1 + 0x58) == '\n') && (*(char *)(param_1 + 0x59) == '\n')) {
        return;
      }
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      uVar1 = 0xa0a;
      break;
    default:
      if ((*(char *)(param_1 + 0x58) == -0x7e) && (*(char *)(param_1 + 0x59) == -0x7e)) {
        return;
      }
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      uVar1 = 0x8282;
    }
    *(undefined2 *)(param_1 + 0x58) = uVar1;
  }
  plVar3 = (long *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x48),plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x01082294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))(plVar3,uVar2);
  return;
}


