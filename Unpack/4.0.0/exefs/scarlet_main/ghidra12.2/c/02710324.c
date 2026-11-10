/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02710324; name: FUN_02710324
 */


void FUN_02710324(long param_1,void *param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  __n = (long)puVar4 - param_4;
  puVar3 = (undefined8 *)((long)param_2 + __n);
  puVar6 = puVar4;
  if (puVar3 < param_3) {
    do {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 == 0) {
        *puVar6 = *puVar3;
      }
      else {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *puVar6 = *puVar3;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (puVar3 < param_3);
  }
  *(undefined8 **)(param_1 + 8) = puVar6;
  if (__n == 0) {
    return;
  }
  memmove(puVar4 + -((long)__n >> 3),param_2,__n);
  return;
}


