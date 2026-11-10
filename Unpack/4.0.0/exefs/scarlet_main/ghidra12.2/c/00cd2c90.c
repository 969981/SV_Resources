/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cd2c90; name: FUN_00cd2c90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cd2c90(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *__s;
  long lVar4;
  
  __s = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xe0,0x10);
  if (__s == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    memset(__s,0,0xe0);
    uVar2 = _UNK_03caaaa8;
    uVar1 = _DAT_03caaaa0;
    *(undefined8 *)((long)__s + 0x14) = 0x45bb80003ea3d70a;
    *(undefined8 *)((long)__s + 0x1c) = 0x3fe38e393f060a92;
    *(undefined8 *)((long)__s + 0x24) = 0x44700000c4700000;
    *(undefined8 *)((long)__s + 0x2c) = 0x44070000c4070000;
    *(undefined4 *)(__s + 2) = 0;
    *(undefined1 *)(__s + 0x1a) = 0;
    __s[1] = uVar2;
    *__s = uVar1;
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0xe0;
    param_1[3] = 0x10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


