/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bd1420; name: FUN_01bd1420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bd1420(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  
  puVar5 = (undefined1 *)(**(code **)(*param_2 + 0x10))(param_2,0x160,0x10);
  if (puVar5 == (undefined1 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    puVar1 = PTR_DAT_047d5400 + 0x10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar5 = 0;
    *(undefined **)(puVar5 + 0xb0) = puVar1;
    puVar1 = PTR_DAT_047d53f0;
    *(undefined8 *)(puVar5 + 0xe0) = 0;
    *(undefined4 *)(puVar5 + 0xa0) = 0;
    *(undefined8 *)(puVar5 + 200) = 0;
    *(undefined8 *)(puVar5 + 0xc0) = 0;
    *(undefined **)(puVar5 + 0xd0) = puVar1 + 0x10;
    *(undefined8 *)(puVar5 + 0xd8) = 0;
    *(undefined8 *)(puVar5 + 0xf8) = 0;
    *(undefined8 *)(puVar5 + 0xf0) = 0;
    puVar1 = PTR_DAT_047d53f8;
    *(undefined8 *)(puVar5 + 0x110) = 0;
    *(undefined8 *)(puVar5 + 0x118) = 0;
    *(undefined **)(puVar5 + 0x100) = puVar1 + 0x10;
    *(undefined8 *)(puVar5 + 0x108) = 0;
    *(undefined4 *)(puVar5 + 0x150) = 0;
    *(undefined8 *)(puVar5 + 0x120) = 0;
    *(undefined8 *)(puVar5 + 0x128) = 0;
    *(undefined8 *)(puVar5 + 0x130) = 0x33f4ccccd;
    *(undefined4 *)(puVar5 + 0x138) = 0x3f000000;
    uVar3 = _UNK_03caaf48;
    uVar2 = _DAT_03caaf40;
    puVar5[0x154] = 1;
    *(undefined8 *)(puVar5 + 0x148) = uVar3;
    *(undefined8 *)(puVar5 + 0x140) = uVar2;
    *param_1 = puVar5;
    param_1[1] = param_2;
    param_1[2] = 0x160;
    param_1[3] = 0x10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


