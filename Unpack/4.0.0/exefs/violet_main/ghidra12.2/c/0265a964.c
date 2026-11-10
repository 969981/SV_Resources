/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0265a964; name: FUN_0265a964
 */


undefined * FUN_0265a964(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047e03d0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047e03d0), puVar1 = PTR_DAT_047e03d8, iVar2 != 0)) {
    uVar3 = FUN_02650ce4();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047e03d0);
  }
  return PTR_DAT_047e03d8;
}


