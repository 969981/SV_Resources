/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01731820; name: FUN_01731820
 */


void FUN_01731820(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined2 uVar2;
  char cVar3;
  long lVar4;
  
  cVar3 = DAT_045dd450;
  if ((*(char *)(param_1 + 0x58) != DAT_045dd450) || (*(char *)(param_1 + 0x59) != DAT_045dd450)) {
    uVar2 = *(undefined2 *)(param_1 + 0x58);
    plVar1 = (long *)(param_1 + 0x38);
    *(char *)(param_1 + 0x58) = DAT_045dd450;
    *(char *)(param_1 + 0x59) = cVar3;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  }
  if (((*(char *)(param_1 + 0x234) != '\0') && (*(long *)(param_1 + 0x140) != 0)) &&
     ((*(byte *)(*(long *)(param_1 + 0x140) + 0x1e8) & 1) != 0)) {
    FUN_011e5ae0(0,param_1);
    *(undefined1 *)(param_1 + 0x234) = 0;
  }
  if (*(int *)(param_1 + 0x230) != 2) {
    if ((*(int *)(param_1 + 0x230) == 1) &&
       ((*(long *)(param_1 + 0x238) == 0 || (*(short *)(*(long *)(param_1 + 0x238) + 0x1a) == 0))))
    {
      FUN_01731958(param_1);
      return;
    }
    if (*(long *)(param_1 + 0x140) != 0) {
      lVar4 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,0);
      FUN_00c709b0((double)*(long *)(lVar4 + 8) / 1000000000.0,param_1);
      return;
    }
  }
  return;
}


