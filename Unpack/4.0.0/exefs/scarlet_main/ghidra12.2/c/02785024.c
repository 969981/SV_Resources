/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02785024; name: FUN_02785024
 */


undefined8 * FUN_02785024(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x28) < 10) {
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x290,8);
    if (puVar5 == (undefined8 *)0x0) {
      uStack_38 = 0;
      local_40 = 0;
      param_2 = (long *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
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
      DAT_0485dcc0 = DAT_0485dcc0 + 1;
      uVar4 = (ulong)DAT_0485dcc0;
      *puVar5 = &PTR_FUN_045df700;
      puVar5[1] = uVar4;
      nn::bcat::DeliveryCacheProgress::DeliveryCacheProgress((DeliveryCacheProgress *)(puVar5 + 2));
      *(undefined4 *)(puVar5 + 0x4d) = 1;
      puVar5[0x4e] = 0;
      local_40 = 0x290;
      puVar5[0x4f] = 0;
      puVar5[0x50] = 0;
      *(undefined1 *)(puVar5 + 0x51) = 0;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      uStack_38 = 8;
    }
    local_50 = puVar5;
    plStack_48 = param_2;
    FUN_027852ac(*(undefined8 *)(param_1 + 0x20),&local_50);
    puVar1 = local_50;
    local_50 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_027853e8(&plStack_48);
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}


