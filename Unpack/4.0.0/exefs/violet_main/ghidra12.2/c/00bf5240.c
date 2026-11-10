/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf5240; name: FUN_00bf5240
 */


undefined8 * FUN_00bf5240(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (param_1 == 0) {
    lVar1 = tpidr_el0;
    plVar4 = *(long **)(lVar1 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x18,8);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00c0e238(param_1,0,0x18);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    FUN_00c0e13c(param_1,puVar3,PTR_LAB_047dabf0);
  }
  return puVar3;
}


