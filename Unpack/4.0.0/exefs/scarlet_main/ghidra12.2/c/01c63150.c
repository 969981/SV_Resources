/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c63150; name: FUN_01c63150
 */


void FUN_01c63150(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x28,8);
  if (puVar4 == (undefined8 *)0x0) {
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
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar6 = *param_3;
    uVar1 = param_3[1];
    *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(param_3 + 2);
    *puVar4 = uVar6;
    puVar4[1] = uVar1;
    uVar6 = param_3[3];
    param_3[3] = 0;
    puVar4[3] = uVar6;
    uVar2 = *(undefined2 *)(param_3 + 4);
    *(undefined1 *)((long)puVar4 + 0x22) = *(undefined1 *)((long)param_3 + 0x22);
    *(undefined2 *)(puVar4 + 4) = uVar2;
    *param_1 = puVar4;
    param_1[1] = param_2;
    param_1[2] = 0x28;
    param_1[3] = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


