/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ba8e2c; name: FUN_00ba8e2c
 */


long * FUN_00ba8e2c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  if (param_2 == 0) {
    lVar2 = tpidr_el0;
    plVar4 = *(long **)(lVar2 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar2 + 0x30) = DAT_04859430;
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x20,8);
    *plVar4 = (long)(PTR_DAT_047dad08 + 0x10);
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
  }
  else {
    plVar4 = (long *)FUN_00c0e238(param_2,0,0x20);
    puVar1 = PTR_DAT_047dad08 + 0x10;
    plVar4[2] = 0;
    plVar4[3] = 0;
    *plVar4 = (long)puVar1;
    plVar4[1] = 0;
    FUN_00c0e13c(param_2,plVar4,PTR_LAB_047dad10);
  }
  return plVar4;
}


