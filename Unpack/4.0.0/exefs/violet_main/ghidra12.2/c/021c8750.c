/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021c8750; name: FUN_021c8750
 */


undefined * FUN_021c8750(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047dd888 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd888), puVar1 = PTR_DAT_047dd890, iVar2 != 0)) {
    uVar3 = FUN_021c8a78();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047dd888);
  }
  return PTR_DAT_047dd890;
}


