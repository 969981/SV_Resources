/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089e2a0; name: FUN_0089e2a0
 */


long * FUN_0089e2a0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  plVar2 = (long *)FUN_00896e78(0x88);
  if (plVar2 != (long *)0x0) {
    FUN_00fab5bc(plVar2);
    puVar1 = PTR_DAT_047d2328 + 0x10;
    plVar2[0xc] = lVar3;
    plVar2[0xd] = 0;
    *plVar2 = (long)puVar1;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    *(undefined4 *)(plVar2 + 0x10) = 2;
  }
  return plVar2;
}


