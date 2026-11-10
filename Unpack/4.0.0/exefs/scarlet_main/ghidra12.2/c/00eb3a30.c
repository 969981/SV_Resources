/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00eb3a30; name: FUN_00eb3a30
 */


void FUN_00eb3a30(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined1 *)(**(code **)(*param_2 + 0x10))(param_2,0x210,8);
  if (puVar2 == (undefined1 *)0x0) {
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
    *(undefined4 *)(puVar2 + 0x40) = 0x3f800000;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x78) = 0x3f80000000000000;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x1e8) = 0;
    *(undefined8 *)(puVar2 + 0x1f0) = 0;
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x36) = 0;
    puVar2[0x44] = 0;
    puVar2[0x48] = 0;
    puVar2[0x80] = 0;
    puVar2[0xa0] = 0;
    puVar2[0xd8] = 0;
    puVar2[0x110] = 0;
    puVar2[0x9c] = 0;
    *(undefined8 *)(puVar2 + 0x94) = 0;
    *(undefined8 *)(puVar2 + 0x8c) = 0;
    *(undefined8 *)(puVar2 + 0x84) = 0;
    puVar2[0x108] = 0;
    puVar2[0x120] = 0;
    puVar2[0x130] = 0;
    puVar2[0x140] = 0;
    puVar2[0x150] = 0;
    puVar2[0x160] = 0;
    puVar2[0x170] = 0;
    puVar2[0x180] = 0;
    *(undefined4 *)(puVar2 + 0x1d0) = 0;
    puVar2[0x1d8] = 0;
    puVar2[0x208] = 0;
    *(undefined8 *)(puVar2 + 0x1b0) = 0;
    *(undefined8 *)(puVar2 + 0x1b8) = uVar4;
    *(undefined8 *)(puVar2 + 0x1c0) = 0xccccccccccccccc;
    *(undefined8 *)(puVar2 + 0x1c8) = 0;
    *(undefined8 *)(puVar2 + 0x58) = 0;
    *(undefined8 *)(puVar2 + 0x60) = 0;
    *(undefined8 *)(puVar2 + 0x68) = 0;
    *(undefined8 *)(puVar2 + 0x70) = 0;
    *(undefined8 *)(puVar2 + 0xb0) = 0;
    *(undefined8 *)(puVar2 + 0xb8) = 0;
    *(undefined8 *)(puVar2 + 0xc0) = 0;
    *(undefined8 *)(puVar2 + 200) = 0;
    *(undefined8 *)(puVar2 + 0xcd) = 0;
    *(undefined8 *)(puVar2 + 0xe8) = 0;
    *(undefined8 *)(puVar2 + 0xf0) = 0;
    *(undefined8 *)(puVar2 + 0xf8) = 0;
    *(undefined8 *)(puVar2 + 0x100) = 0;
    *(undefined8 *)(puVar2 + 0x1a0) = 0;
    *(undefined8 *)(puVar2 + 0x1a8) = 0;
    *(undefined8 *)(puVar2 + 400) = 0;
    *(undefined8 *)(puVar2 + 0x198) = 0;
    *(undefined8 *)(puVar2 + 0x1f8) = 0;
    *(undefined8 *)(puVar2 + 0x200) = 0;
    *param_1 = puVar2;
    param_1[1] = param_2;
    param_1[2] = 0x210;
    param_1[3] = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


