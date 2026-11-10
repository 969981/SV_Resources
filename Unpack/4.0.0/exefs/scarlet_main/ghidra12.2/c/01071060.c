/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01071060; name: FUN_01071060
 */


void FUN_01071060(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  if (puVar2 == (undefined8 *)0x0) {
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
    lVar4 = *param_4;
    *puVar2 = *param_3;
    puVar2[1] = lVar4;
    memset(puVar2 + 2,0,0x4a);
    *(undefined1 *)((long)puVar2 + 0x5c) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined1 *)((long)puVar2 + 100) = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    *(undefined1 *)((long)puVar2 + 0x6c) = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined1 *)((long)puVar2 + 0x74) = 0;
    *(undefined4 *)(puVar2 + 0xf) = 0;
    memcpy(puVar2 + 2,(void *)(*(long *)(lVar4 + 0x310) + 0x1c),0x4a);
    *(undefined1 *)((long)puVar2 + 0x5c) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined1 *)((long)puVar2 + 100) = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    *(undefined1 *)((long)puVar2 + 0x6c) = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    *(undefined1 *)((long)puVar2 + 0x74) = 0;
    puVar2[0xf] = 0;
    *param_1 = (long)puVar2;
    param_1[1] = (long)param_2;
    param_1[2] = 0x80;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


