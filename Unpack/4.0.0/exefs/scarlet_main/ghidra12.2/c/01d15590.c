/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d15590; name: FUN_01d15590
 */


void FUN_01d15590(undefined8 *param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x168,8);
  if (plVar2 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
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
    *plVar2 = (long)(PTR_DAT_047cfd80 + 0x10);
    *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_3 + 8);
    FUN_01cfa5b0(plVar2 + 2,param_3 + 0x10);
    *(undefined4 *)(plVar2 + 6) = *(undefined4 *)(param_3 + 0x30);
    FUN_01cfa5b0(plVar2 + 7,param_3 + 0x38);
    FUN_01cfa5b0(plVar2 + 0xb,param_3 + 0x58);
    FUN_01cfa5b0(plVar2 + 0xf,param_3 + 0x78);
    FUN_01cfa5b0(plVar2 + 0x13,param_3 + 0x98);
    FUN_01cfa5b0(plVar2 + 0x17,param_3 + 0xb8);
    FUN_01cfa5b0(plVar2 + 0x1b,param_3 + 0xd8);
    FUN_01cfa5b0(plVar2 + 0x1f,param_3 + 0xf8);
    FUN_01cfa5b0(plVar2 + 0x23,param_3 + 0x118);
    FUN_01cfa5b0(plVar2 + 0x27,param_3 + 0x138);
    plVar2[0x2b] = (long)(PTR_DAT_047cfd88 + 0x10);
    plVar2[0x2c] = *(long *)(param_3 + 0x160);
    *param_1 = plVar2;
    param_1[1] = param_2;
    param_1[2] = 0x168;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


