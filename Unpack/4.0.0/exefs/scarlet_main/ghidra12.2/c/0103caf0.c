/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0103caf0; name: FUN_0103caf0
 */


void FUN_0103caf0(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x138,8);
  if (puVar3 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    uVar5 = *param_3;
    puVar3[5] = 0x1ffffffffffffff;
    puVar3[6] = 0;
    puVar3[0xc] = 0xffffffffffffffff;
    puVar3[0xd] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[4] = uVar5;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *puVar3 = uVar5;
    puVar3[1] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = uVar5;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = uVar5;
    puVar3[0x13] = 0x1fffffffffffffff;
    puVar3[0x14] = 0;
    puVar1 = PTR_DAT_047d8bc8 + 0x10;
    *(undefined4 *)(puVar3 + 0x15) = 0;
    *(undefined4 *)(puVar3 + 0x1e) = 0;
    *(undefined4 *)(puVar3 + 0x25) = 0;
    puVar3[0x26] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = uVar5;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = puVar1;
    puVar3[0x1c] = 0xaaaaaaaaaaaaaaa;
    puVar3[0x1d] = 0;
    puVar3[0x21] = 0;
    puVar3[0x22] = uVar5;
    puVar3[0x23] = 0xfffffffffffffff;
    puVar3[0x24] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    *param_1 = (long)puVar3;
    param_1[1] = (long)param_2;
    param_1[2] = 0x138;
    param_1[3] = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  return;
}


