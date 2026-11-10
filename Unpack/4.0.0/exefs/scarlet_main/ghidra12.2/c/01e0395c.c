/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0395c; name: FUN_01e0395c
 */


undefined4 FUN_01e0395c(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined8 local_18;
  
  if ((DAT_04837608 & 1) == 0) {
    local_18 = param_1;
    iVar1 = __cxa_guard_acquire(&DAT_04837608);
    param_1 = local_18;
    if (iVar1 != 0) {
      FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04837608);
      param_1 = local_18;
    }
  }
  DAT_04837610 = DAT_048375f8;
  local_18 = (undefined8 *)CONCAT44((int)*param_1,(int)((ulong)*param_1 >> 0x20));
  local_1c = (undefined4)param_1[1];
  uVar2 = FUN_01e03a34(DAT_048375f8,"S79D766EAA0F218AE",(long)&local_18 + 4,&local_18,&local_1c);
  uVar3 = (undefined4)(uVar2 >> 0x20);
  if ((uVar2 & 0xff) == 0) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


