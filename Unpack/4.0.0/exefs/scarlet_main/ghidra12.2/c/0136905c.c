/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0136905c; name: FUN_0136905c
 */


void FUN_0136905c(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  local_48 = *(undefined8 *)(param_1 + 0x40);
  local_58 = param_2;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x48,8);
  if (lVar2 == 0) {
    param_2 = (long *)0x0;
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_0136b544(lVar2,&local_58);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    uVar4 = 8;
    uVar5 = 0x48;
  }
  lVar3 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar2;
  if (lVar3 != 0) {
    FUN_010aa124(param_1 + 0x58);
  }
  *(long **)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  return;
}


