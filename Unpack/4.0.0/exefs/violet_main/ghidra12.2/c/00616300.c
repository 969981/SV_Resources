/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00616300; name: FUN_00616300
 */


long * FUN_00616300(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  
  if (param_1 == 0) {
    plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x50);
    puVar1 = PTR_DAT_047ced50;
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar4[3] = 0;
    plVar4[2] = 0;
    plVar4[5] = 0;
    plVar4[4] = 0;
    plVar4[7] = 0;
    plVar4[6] = 0;
    puVar3 = PTR_DAT_047ced58;
    *(undefined4 *)((long)plVar4 + 0x4c) = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0;
    iVar2 = *(int *)puVar3;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x50);
    }
    plVar4 = (long *)FUN_00520c00(param_1,0x50);
    puVar1 = PTR_DAT_047ced50 + 0x10;
    plVar4[2] = param_1;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = param_1;
    *plVar4 = (long)puVar1;
    plVar4[1] = param_1;
    puVar1 = PTR_DAT_047ced58;
    plVar4[6] = 0;
    plVar4[7] = 0;
    *(undefined4 *)((long)plVar4 + 0x4c) = 0;
    iVar2 = *(int *)puVar1;
  }
  if (iVar2 != 0) {
    FUN_0052b230(PTR_DAT_047ced58);
  }
  plVar4[8] = (long)PTR_DAT_047cba80;
  *(undefined1 *)(plVar4 + 9) = 0;
  return plVar4;
}


