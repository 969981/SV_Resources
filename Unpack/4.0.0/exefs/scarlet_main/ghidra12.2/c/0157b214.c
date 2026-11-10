/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157b214; name: FUN_0157b214
 */


void FUN_0157b214(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  puVar3 = (undefined4 *)FUN_01053840();
  lVar4 = nn::os::GetTlsValue(*puVar3);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar1 = tpidr_el0;
    lVar4 = *(long *)(lVar1 + 0x30);
    if (lVar4 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar4 = DAT_04859430;
      *(long *)(lVar1 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = lVar4;
  param_1[2] = 0xfffffffffffffff;
  param_1[3] = 0;
  return;
}


