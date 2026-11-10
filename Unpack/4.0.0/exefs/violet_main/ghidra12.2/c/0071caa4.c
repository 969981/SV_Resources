/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0071caa4; name: FUN_0071caa4
 */


long * FUN_0071caa4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x138);
    puVar2 = PTR_DAT_047d0200;
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar3[2] = 0;
    plVar3[1] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    *(undefined4 *)(plVar3 + 3) = 0;
    FUN_0071ece8(plVar3 + 2);
    *(undefined4 *)(plVar3 + 3) = 0;
    plVar3[5] = 0;
    *(undefined4 *)(plVar3 + 6) = 0;
    FUN_0071ece8(plVar3 + 5);
    *(undefined4 *)(plVar3 + 6) = 0;
    plVar3[9] = 0;
    plVar3[8] = 0;
    *(undefined4 *)((long)plVar3 + 0x134) = 0;
    plVar3[0xc] = 0;
    plVar3[0xb] = 0;
    puVar2 = PTR_DAT_047d0208;
    plVar3[0xf] = 0;
    plVar3[0xe] = 0;
    iVar1 = *(int *)puVar2;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00520d08(param_1,0,0x138);
    }
    plVar3 = (long *)FUN_00520c00(param_1,0x138);
    *plVar3 = (long)(PTR_DAT_047d0200 + 0x10);
    plVar3[1] = param_1;
    plVar3[2] = param_1;
    *(undefined4 *)(plVar3 + 3) = 0;
    FUN_0071ece8();
    *(undefined4 *)(plVar3 + 3) = 0;
    plVar3[5] = param_1;
    *(undefined4 *)(plVar3 + 6) = 0;
    FUN_0071ece8();
    *(undefined4 *)(plVar3 + 6) = 0;
    plVar3[9] = param_1;
    plVar3[0xc] = param_1;
    plVar3[8] = 0;
    plVar3[0xb] = 0;
    plVar3[0xe] = 0;
    puVar2 = PTR_DAT_047d0208;
    plVar3[0xf] = param_1;
    *(undefined4 *)((long)plVar3 + 0x134) = 0;
    iVar1 = *(int *)puVar2;
  }
  if (iVar1 != 0) {
    FUN_0052b230(PTR_DAT_047d0208);
  }
  plVar3[0x18] = 0;
  plVar3[0x17] = 0;
  puVar2 = PTR_DAT_047cba80;
  plVar3[0x1a] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1c] = 0;
  plVar3[0x1b] = 0;
  plVar3[0x11] = (long)puVar2;
  plVar3[0x12] = (long)puVar2;
  plVar3[0x1e] = 0;
  plVar3[0x1d] = 0;
  plVar3[0x20] = 0;
  plVar3[0x1f] = 0;
  plVar3[0x13] = (long)puVar2;
  plVar3[0x14] = (long)puVar2;
  plVar3[0x15] = (long)puVar2;
  plVar3[0x16] = (long)puVar2;
  plVar3[0x22] = 0;
  plVar3[0x21] = 0;
  plVar3[0x24] = 0;
  plVar3[0x23] = 0;
  *(undefined8 *)((long)plVar3 + 300) = 0;
  *(undefined8 *)((long)plVar3 + 0x124) = 0;
  return plVar3;
}


