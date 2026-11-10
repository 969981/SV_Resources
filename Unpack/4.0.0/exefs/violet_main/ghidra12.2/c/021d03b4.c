/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d03b4; name: FUN_021d03b4
 */


undefined8 * FUN_021d03b4(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04841c38 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_04841c38), puVar1 = PTR_DAT_047d3988, iVar2 != 0)) {
    if (((*PTR_DAT_047d3980 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar2 != 0)) {
      uVar3 = FUN_01adab84();
      *(undefined8 *)puVar1 = uVar3;
      __cxa_guard_release(PTR_DAT_047d3980);
    }
    DAT_04841c30 = puVar1;
    __cxa_guard_release(&DAT_04841c38);
  }
  return &DAT_04841c30;
}


