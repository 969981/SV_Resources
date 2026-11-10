/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013f11ec; name: FUN_013f11ec
 */


void FUN_013f11ec(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *__s;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  __s = *(undefined8 **)(param_1 + 8);
  puVar3 = __s;
  if (param_2 != 0) {
    auVar5 = NEON_fmov(0x3f800000,4);
    puVar3 = __s + param_2 * 0x10;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar2 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar2 != 0) {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      }
      memset(__s,0,0x80);
      *__s = &DAT_cbf29ce484222645;
      __s[1] = &DAT_03c886bc;
      __s[2] = 0;
      __s[7] = auVar5._8_8_;
      __s[6] = auVar5._0_8_;
      __s[9] = auVar5._8_8_;
      __s[8] = auVar5._0_8_;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      __s = __s + 0x10;
    } while (__s != puVar3);
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  return;
}


