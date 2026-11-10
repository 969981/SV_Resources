/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fffb54; name: FUN_02fffb54
 */


void FUN_02fffb54(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte local_e0 [192];
  
  if (((*(char *)(param_2 + 0x23) == '\0') && ((DAT_0486b700 & 1) == 0)) &&
     (iVar4 = __cxa_guard_acquire(&DAT_0486b700), iVar4 != 0)) {
    memset(local_e0 + 0x60,0,0x60);
    uVar5 = 0;
    do {
      local_e0[uVar5 + 0x60] =
           -(~(uVar5 < 0x10 || ((uVar5 & 0x7ffffffffffffffe) == 0x12 || uVar5 - 0x23 < 0x17)) & 1U);
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x60);
    memset(local_e0,0,0x60);
    uVar5 = 0;
    do {
      local_e0[uVar5] = -((uVar5 & 0x7fffffffffffffec) != 0x4c && 0x1c < uVar5 - 0x23);
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x60);
    memset(&DAT_0486b6a0,0,0x60);
    lVar6 = 0;
    do {
      lVar1 = lVar6 + 2;
      bVar2 = local_e0[lVar6 + 0x61];
      bVar3 = local_e0[lVar6 + 1];
      (&DAT_0486b6a0)[lVar6] = local_e0[lVar6] & local_e0[lVar6 + 0x60];
      (&DAT_0486b6a1)[lVar6] = bVar3 & bVar2;
      lVar6 = lVar1;
    } while (lVar1 != 0x60);
    __cxa_guard_release(&DAT_0486b700);
  }
                    /* WARNING: Could not recover jumptable at 0x02fffb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x80))(*(long **)(param_1 + 8),param_2,param_3);
  return;
}


