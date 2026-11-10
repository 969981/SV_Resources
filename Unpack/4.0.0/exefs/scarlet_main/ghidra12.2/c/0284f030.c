/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284f030; name: FUN_0284f030
 */


void FUN_0284f030(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                 long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = param_1[4];
  puVar4 = param_2;
  if (lVar3 != 0 && lVar3 != param_4) {
    lVar2 = lVar3;
    do {
      FUN_0175a46c(param_1,puVar4,lVar2);
      lVar2 = lVar2 + 0x20;
      puVar4 = puVar4 + 4;
    } while (param_4 != lVar2);
  }
  uVar6 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 == 0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    FUN_00c43ef0(puVar4,param_5);
    uVar6 = *(undefined8 *)(param_5 + 0x10);
    *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(param_5 + 0x18);
    puVar4[2] = uVar6;
  }
  else {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    FUN_00c43ef0(puVar4,param_5);
    uVar6 = *(undefined8 *)(param_5 + 0x10);
    *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(param_5 + 0x18);
    puVar4[2] = uVar6;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  puVar4 = puVar4 + 4;
  if (lVar3 != 0) {
    lVar5 = param_1[5];
    lVar2 = lVar3 + lVar5 * 0x20;
    if (lVar2 != param_4) {
      do {
        FUN_0175a46c(param_1,puVar4,param_4);
        param_4 = param_4 + 0x20;
        puVar4 = puVar4 + 4;
      } while (lVar2 != param_4);
      lVar5 = param_1[5];
    }
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      FUN_0175a57c(lVar3);
      lVar3 = lVar3 + 0x20;
    }
    FUN_0175c55c(param_1,param_1[4],param_1[6]);
  }
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = (long)puVar4 - (long)param_2 >> 5;
  return;
}


