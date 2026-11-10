/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0226e9f4; name: FUN_0226e9f4
 */


void FUN_0226e9f4(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_04842808 & 1) != 0) ||
     (iVar2 = __cxa_guard_acquire(&DAT_04842808), puVar1 = PTR_DAT_047ddd60, iVar2 == 0)) {
    return;
  }
  if (((*PTR_DAT_047ddd58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047ddd58), iVar2 != 0))
  {
    uVar3 = FUN_02258b4c();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047ddd58);
  }
  DAT_04842800 = puVar1;
  __cxa_guard_release(&DAT_04842808);
  return;
}


