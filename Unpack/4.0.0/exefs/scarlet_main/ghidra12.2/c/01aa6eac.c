/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aa6eac; name: FUN_01aa6eac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa6eac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  void *__s;
  undefined8 uVar8;
  
  uVar4 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  uVar2 = _UNK_03caa988;
  uVar1 = _DAT_03caa980;
  lVar7 = *(long *)(param_1 + 8);
  if (param_2 != 0) {
    __s = (void *)(lVar7 + 0x40);
    lVar7 = lVar7 + param_2 * 0xd0;
    param_2 = param_2 * 0xd0;
    do {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 != 0) {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      }
      memset(__s,0,0x90);
      *(undefined1 **)((long)__s + -0x40) = &DAT_cbf29ce484222645;
      *(undefined1 **)((long)__s + -0x38) = &DAT_03c886bc;
      *(undefined8 *)((long)__s + -0x30) = 0;
      *(undefined8 *)((long)__s + -0x28) = 0;
      *(undefined1 **)((long)__s + -0x20) = &DAT_cbf29ce484222645;
      *(undefined1 **)((long)__s + -0x18) = &DAT_03c886bc;
      *(undefined8 *)((long)__s + -0x10) = 0;
      *(undefined8 *)((long)__s + -8) = 0;
      *(undefined8 *)((long)__s + 0x30) = 0;
      *(undefined8 *)((long)__s + 0x38) = 0;
      *(undefined8 *)((long)__s + 0x18) = uVar2;
      *(undefined8 *)((long)__s + 0x10) = uVar1;
      *(undefined8 *)((long)__s + 0x28) = uVar4;
      *(undefined8 *)((long)__s + 0x20) = uVar3;
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      __s = (void *)((long)__s + 0xd0);
      param_2 = param_2 + -0xd0;
    } while (param_2 != 0);
  }
  *(long *)(param_1 + 8) = lVar7;
  return;
}


