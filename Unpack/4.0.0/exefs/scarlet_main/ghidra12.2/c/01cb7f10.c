/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cb7f10; name: FUN_01cb7f10
 */


undefined8 FUN_01cb7f10(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (((DAT_04818a10 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04818a10), iVar2 != 0)) {
    DAT_0481a9e0 = '\x01';
    __cxa_guard_release(&DAT_04818a10);
  }
  uVar3 = FUN_0186beb0(param_1,1);
  uVar1 = 0x54;
  if (DAT_0481a9e0 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  fVar4 = (float)FUN_01cb7ec8(uVar3,uVar1);
  FUN_00c46da0((double)fVar4,param_1);
  return 1;
}


