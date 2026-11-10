/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029eb268; name: FUN_029eb268
 */


undefined * FUN_029eb268(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047de200 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047de200), puVar1 = PTR_DAT_047de208, iVar2 != 0)) {
    uVar3 = FUN_0201bb84();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047de200);
  }
  return PTR_DAT_047de208;
}


