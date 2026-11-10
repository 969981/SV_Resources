/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006161b4; name: FUN_006161b4
 */


void FUN_006161b4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_1 == 0) {
    plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (plVar2 == (long *)0x0) {
      return;
    }
    plVar2[1] = 0;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x28);
    }
    plVar2 = (long *)FUN_00520c00(param_1,0x28);
    plVar2[1] = param_1;
  }
  plVar2[2] = (long)PTR_DAT_047cba80;
  plVar2[3] = 0;
  puVar1 = PTR_DAT_047cedd8;
  *(undefined4 *)(plVar2 + 4) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


