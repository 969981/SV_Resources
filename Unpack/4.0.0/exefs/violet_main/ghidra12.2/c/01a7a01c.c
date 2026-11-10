/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a7a01c; name: FUN_01a7a01c
 */


uint FUN_01a7a01c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0))
  {
    uVar3 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar3;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (plVar2 == (long *)PTR_DAT_047d3f08) break;
    plVar2 = (long *)*plVar2;
  }
  iVar1 = FUN_01a6acfc(param_1);
  if ((iVar1 - 0x319U & 0xffff) < 0xe) {
    return 0x3c7fU >> (ulong)(iVar1 - 0x319U & 0x1f) & 1;
  }
  return 0;
}


