/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197bb80; name: FUN_0197bb80
 */


undefined8 FUN_0197bb80(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  if (((DAT_04818bb8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04818bb8), iVar2 != 0)) {
    DAT_0481aa50 = '\x01';
    __cxa_guard_release(&DAT_04818bb8);
  }
  uVar3 = FUN_018d3b10(param_1,1);
  local_18 = FUN_00c92df0(param_1,2,0);
  uVar1 = 0x50;
  if (DAT_0481aa50 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  FUN_0197bc24(uVar3,uVar1,&local_18);
  return 0;
}


