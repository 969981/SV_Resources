/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011a97d8; name: FUN_011a97d8
 */


void FUN_011a97d8(long param_1,long param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[5] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  FUN_011a8794(puVar5 + 4,param_2);
  uVar1 = *(undefined2 *)(param_2 + 0x10);
  *(undefined1 *)((long)puVar5 + 0x32) = *(undefined1 *)(param_2 + 0x12);
  *(undefined2 *)(puVar5 + 6) = uVar1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  puVar5[7] = uVar6;
  puVar2 = PTR_FUN_047d9410;
  *puVar5 = PTR_FUN_047d9408;
  puVar5[1] = puVar2;
  puVar2 = PTR_LAB_047d9420;
  puVar5[2] = PTR_FUN_047d9418;
  puVar5[3] = puVar2;
  puVar5[0x10] = *(undefined8 *)(param_2 + 0x20);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  *(undefined8 **)(param_1 + 8) = puVar5 + 0x12;
  return;
}


