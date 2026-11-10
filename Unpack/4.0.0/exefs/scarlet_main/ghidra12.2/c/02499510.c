/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02499510; name: FUN_02499510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02499510(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  void *__s;
  long lVar8;
  
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x90,0x10);
  if (__s == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    memset(__s,0,0x90);
    *(undefined1 *)((long)__s + 0x80) = 0;
    *(undefined8 *)((long)__s + 0x10) = 0x3e99999a3e99999a;
    *(undefined4 *)((long)__s + 0x18) = 0x3f800000;
    uVar6 = _UNK_03cabe68;
    uVar5 = _DAT_03cabe60;
    uVar4 = _UNK_03cabe58;
    uVar3 = _DAT_03cabe50;
    uVar2 = DAT_03cab628;
    uVar1 = DAT_03cab620;
    *(undefined8 *)((long)__s + 0x30) = 0x50000000a;
    *(undefined8 *)((long)__s + 0x28) = uVar4;
    *(undefined8 *)((long)__s + 0x20) = uVar3;
    *(undefined8 *)((long)__s + 0x48) = uVar2;
    *(undefined8 *)((long)__s + 0x40) = uVar1;
    *(undefined8 *)((long)__s + 0x58) = uVar6;
    *(undefined8 *)((long)__s + 0x50) = uVar5;
    uVar1 = _DAT_03caa5b0;
    *(undefined8 *)((long)__s + 0x68) = _UNK_03caa5b8;
    *(undefined8 *)((long)__s + 0x60) = uVar1;
    *(undefined8 *)((long)__s + 0x78) = uVar4;
    *(undefined8 *)((long)__s + 0x70) = uVar3;
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0x90;
    param_1[3] = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


