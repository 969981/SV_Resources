/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00615af4; name: FUN_00615af4
 */


long * FUN_00615af4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  
  if (param_1 == 0) {
    plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x60);
    puVar1 = PTR_DAT_047ced88;
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar4[3] = 0;
    plVar4[2] = 0;
    plVar4[5] = 0;
    plVar4[4] = 0;
    plVar4[7] = 0;
    plVar4[6] = 0;
    puVar3 = PTR_DAT_047ced90;
    *(undefined4 *)((long)plVar4 + 0x5c) = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    plVar4[1] = 0;
    iVar2 = *(int *)puVar3;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x60);
    }
    plVar4 = (long *)FUN_00520c00(param_1,0x60);
    puVar1 = PTR_DAT_047ced88 + 0x10;
    plVar4[2] = param_1;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = param_1;
    *plVar4 = (long)puVar1;
    plVar4[1] = param_1;
    puVar1 = PTR_DAT_047ced90;
    plVar4[6] = 0;
    plVar4[7] = 0;
    *(undefined4 *)((long)plVar4 + 0x5c) = 0;
    iVar2 = *(int *)puVar1;
  }
  if (iVar2 != 0) {
    FUN_0052b230(PTR_DAT_047ced90);
  }
  puVar1 = PTR_DAT_047cba80;
  plVar4[10] = 0;
  plVar4[8] = (long)puVar1;
  plVar4[9] = (long)puVar1;
  *(undefined4 *)(plVar4 + 0xb) = 0;
  return plVar4;
}


