/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d11880; name: FUN_01d11880
 */


void FUN_01d11880(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
  if (plVar4 == (long *)0x0) {
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
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    puVar1 = PTR_DAT_047cfc88 + 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *plVar4 = (long)puVar1;
    FUN_01cfa5b0(plVar4 + 1,param_3 + 8);
    FUN_01cfa5b0(plVar4 + 5,param_3 + 0x28);
    lVar2 = *(long *)(param_3 + 0x50);
    plVar4[9] = *(long *)(param_3 + 0x48);
    plVar4[10] = lVar2;
    *param_1 = plVar4;
    param_1[1] = param_2;
    param_1[2] = 0x58;
    param_1[3] = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


