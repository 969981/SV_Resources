/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001400d0; name: FUN_001400d0
 */


void FUN_001400d0(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  
  iVar5 = 2000;
  do {
    if (param_5 == (undefined8 *)0x0) {
      plVar4 = (long *)FUN_0013df20(param_1,param_2,0);
      bVar1 = *(byte *)(plVar4 + 1);
      if ((bVar1 & 0xf) == 0) {
        FUN_00125b40(param_1,param_2,"index");
                    /* WARNING: Does not return */
        pcVar2 = (code *)UndefinedInstructionException(0,0x140218);
        (*pcVar2)();
      }
    }
    else {
      lVar3 = *(long *)(*param_2 + 0x28);
      if (((lVar3 == 0) || ((*(byte *)(lVar3 + 10) & 1) != 0)) ||
         (plVar4 = (long *)FUN_0013dec0(lVar3,0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x118)),
         plVar4 == (long *)0x0)) {
        *(undefined1 *)(param_4 + 1) = 0;
        return;
      }
      bVar1 = *(byte *)(plVar4 + 1);
    }
    if ((bVar1 & 0xf) == 6) {
      FUN_0013e0d0(param_1,plVar4,param_2,param_3,param_4);
      return;
    }
    if (bVar1 == 0x45) {
      param_5 = (undefined8 *)FUN_0013d560(*plVar4,param_3);
      if ((*(byte *)(param_5 + 1) & 0xf) != 0) {
        *param_4 = *param_5;
        *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_5 + 1);
        return;
      }
    }
    else {
      param_5 = (undefined8 *)0x0;
    }
    iVar5 = iVar5 + -1;
    param_2 = plVar4;
  } while (iVar5 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_00125b90(param_1,"\'__index\' chain too long; possible loop");
}


