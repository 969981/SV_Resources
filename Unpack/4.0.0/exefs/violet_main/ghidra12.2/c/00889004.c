/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00889004; name: FUN_00889004
 */


long * FUN_00889004(long *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    param_1[1] = *plVar2;
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    *(undefined2 *)(plVar2 + 10) = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = param_2;
    *(undefined2 *)((long)plVar2 + 0x36) = param_3;
    *(undefined2 *)((long)plVar2 + 0x34) = param_4;
    plVar2[2] = (long)(plVar2 + 2);
    plVar2[3] = (long)(plVar2 + 2);
    plVar2[7] = 0x100;
    plVar2[8] = 0;
    plVar2[9] = 0;
    lVar1 = FUN_00889074(param_1,*param_1,plVar2);
    *param_1 = lVar1;
    *(undefined1 *)(lVar1 + 0x39) = 0;
  }
  return plVar2;
}


