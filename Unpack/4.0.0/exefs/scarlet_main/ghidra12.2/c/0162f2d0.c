/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0162f2d0; name: FUN_0162f2d0
 */


void FUN_0162f2d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    plVar4 = (long *)param_3[3];
    param_2[3] = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    uVar1 = *(undefined1 *)(param_3 + 4);
    param_2[6] = 0;
    *(undefined1 *)(param_2 + 4) = uVar1;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    if ((code *)param_3[8] != (code *)0x0) {
      (*(code *)param_3[8])(param_3 + 10,param_2 + 10);
      uVar5 = param_3[9];
      param_2[7] = param_3[7];
      param_2[9] = uVar5;
      uVar5 = param_3[6];
      param_2[8] = param_3[8];
      param_2[6] = uVar5;
    }
    param_2[0x16] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x17] = 0;
    if ((code *)param_3[0x18] != (code *)0x0) {
      (*(code *)param_3[0x18])(param_3 + 0x1a,param_2 + 0x1a);
      uVar5 = param_3[0x19];
      param_2[0x17] = param_3[0x17];
      param_2[0x19] = uVar5;
      uVar5 = param_3[0x16];
      param_2[0x18] = param_3[0x18];
      param_2[0x16] = uVar5;
    }
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    if ((code *)param_3[0x28] != (code *)0x0) {
      (*(code *)param_3[0x28])(param_3 + 0x2a,param_2 + 0x2a);
      uVar5 = param_3[0x29];
      param_2[0x27] = param_3[0x27];
      param_2[0x29] = uVar5;
      uVar5 = param_3[0x26];
      param_2[0x28] = param_3[0x28];
      param_2[0x26] = uVar5;
    }
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    if ((code *)param_3[0x38] != (code *)0x0) {
      (*(code *)param_3[0x38])(param_3 + 0x3a,param_2 + 0x3a);
      uVar5 = param_3[0x39];
      param_2[0x37] = param_3[0x37];
      param_2[0x39] = uVar5;
      uVar5 = param_3[0x36];
      param_2[0x38] = param_3[0x38];
      param_2[0x36] = uVar5;
    }
    param_2[0x49] = 0;
    param_2[0x48] = 0;
    param_2[0x47] = 0;
    param_2[0x46] = 0;
    if ((code *)param_3[0x48] != (code *)0x0) {
      (*(code *)param_3[0x48])(param_3 + 0x4a,param_2 + 0x4a);
      uVar5 = param_3[0x49];
      param_2[0x47] = param_3[0x47];
      param_2[0x49] = uVar5;
      uVar5 = param_3[0x46];
      param_2[0x48] = param_3[0x48];
      param_2[0x46] = uVar5;
    }
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    plVar4 = (long *)param_3[3];
    param_2[3] = plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))();
    }
    uVar1 = *(undefined1 *)(param_3 + 4);
    param_2[6] = 0;
    *(undefined1 *)(param_2 + 4) = uVar1;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    if ((code *)param_3[8] != (code *)0x0) {
      (*(code *)param_3[8])(param_3 + 10,param_2 + 10);
      uVar5 = param_3[9];
      param_2[7] = param_3[7];
      param_2[9] = uVar5;
      uVar5 = param_3[6];
      param_2[8] = param_3[8];
      param_2[6] = uVar5;
    }
    param_2[0x16] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    param_2[0x17] = 0;
    if ((code *)param_3[0x18] != (code *)0x0) {
      (*(code *)param_3[0x18])(param_3 + 0x1a,param_2 + 0x1a);
      uVar5 = param_3[0x19];
      param_2[0x17] = param_3[0x17];
      param_2[0x19] = uVar5;
      uVar5 = param_3[0x16];
      param_2[0x18] = param_3[0x18];
      param_2[0x16] = uVar5;
    }
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x26] = 0;
    param_2[0x27] = 0;
    if ((code *)param_3[0x28] != (code *)0x0) {
      (*(code *)param_3[0x28])(param_3 + 0x2a,param_2 + 0x2a);
      uVar5 = param_3[0x29];
      param_2[0x27] = param_3[0x27];
      param_2[0x29] = uVar5;
      uVar5 = param_3[0x26];
      param_2[0x28] = param_3[0x28];
      param_2[0x26] = uVar5;
    }
    param_2[0x38] = 0;
    param_2[0x39] = 0;
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    if ((code *)param_3[0x38] != (code *)0x0) {
      (*(code *)param_3[0x38])(param_3 + 0x3a,param_2 + 0x3a);
      uVar5 = param_3[0x39];
      param_2[0x37] = param_3[0x37];
      param_2[0x39] = uVar5;
      uVar5 = param_3[0x36];
      param_2[0x38] = param_3[0x38];
      param_2[0x36] = uVar5;
    }
    param_2[0x49] = 0;
    param_2[0x48] = 0;
    param_2[0x47] = 0;
    param_2[0x46] = 0;
    if ((code *)param_3[0x48] != (code *)0x0) {
      (*(code *)param_3[0x48])(param_3 + 0x4a,param_2 + 0x4a);
      uVar5 = param_3[0x49];
      param_2[0x47] = param_3[0x47];
      param_2[0x49] = uVar5;
      uVar5 = param_3[0x46];
      param_2[0x48] = param_3[0x48];
      param_2[0x46] = uVar5;
    }
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


