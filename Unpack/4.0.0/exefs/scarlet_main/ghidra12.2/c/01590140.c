/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01590140; name: FUN_01590140
 */


void FUN_01590140(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x138,8);
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
    uVar4 = *param_3;
    puVar2[5] = 0x1ffffffffffffff;
    puVar2[6] = 0;
    puVar2[0xc] = 0xffffffffffffffff;
    puVar2[0xd] = 0;
    puVar2[0x13] = 0x1fffffffffffffff;
    puVar2[0x14] = 0;
    *(undefined4 *)(puVar2 + 0xe) = 0;
    puVar2[0x21] = 0;
    puVar2[0x22] = uVar4;
    puVar2[4] = uVar4;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)(puVar2 + 0x15) = 0;
    *(undefined4 *)(puVar2 + 0x1e) = 0;
    *(undefined4 *)(puVar2 + 0x25) = 0;
    puVar2[0x26] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = &PTR_LAB_04533690;
    puVar2[0x1c] = 0xaaaaaaaaaaaaaaa;
    puVar2[0x1d] = 0;
    *puVar2 = uVar4;
    puVar2[1] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = uVar4;
    puVar2[0x11] = 0;
    puVar2[0x12] = uVar4;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = uVar4;
    puVar2[0x23] = 0xfffffffffffffff;
    puVar2[0x24] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    *param_1 = (long)puVar2;
    param_1[1] = (long)param_2;
    param_1[2] = 0x138;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


