/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e1c6a4; name: FUN_00e1c6a4
 */


void FUN_00e1c6a4(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *__s;
  long *plVar4;
  undefined8 uVar5;
  
  __s = *(long **)(param_1 + 8);
  plVar4 = __s;
  if (param_2 != 0) {
    plVar4 = __s + param_2 * 0xc;
    puVar1 = PTR_DAT_047e31c8 + 0x10;
    do {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 != 0) {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      }
      memset(__s,0,0x60);
      *__s = (long)puVar1;
      *(undefined1 *)(__s + 1) = 0;
      *(undefined4 *)((long)__s + 0xc) = 0;
      __s[4] = (long)&DAT_cbf29ce484222645;
      __s[5] = (long)&DAT_03c886bc;
      __s[6] = 0;
      __s[7] = 0;
      __s[8] = 0;
      __s[9] = 0;
      *(undefined8 *)((long)__s + 0x4d) = 0;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      __s = __s + 0xc;
    } while (__s != plVar4);
  }
  *(long **)(param_1 + 8) = plVar4;
  return;
}


