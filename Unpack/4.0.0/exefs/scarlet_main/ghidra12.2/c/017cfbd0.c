/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017cfbd0; name: FUN_017cfbd0
 */


void FUN_017cfbd0(undefined8 *param_1,long *param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined1 *param_5,undefined1 *param_6,undefined1 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 *puVar9;
  long lVar10;
  
  puVar9 = (undefined2 *)(**(code **)(*param_2 + 0x10))(param_2,0x14,4);
  if (puVar9 == (undefined2 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    uVar7 = *param_4;
    uVar4 = *param_5;
    uVar5 = *param_6;
    uVar6 = *param_7;
    uVar1 = *param_8;
    uVar2 = *param_9;
    uVar3 = *param_10;
    *puVar9 = *param_3;
    puVar9[1] = uVar7;
    *(undefined1 *)(puVar9 + 2) = uVar4;
    *(undefined1 *)((long)puVar9 + 5) = uVar5;
    *(undefined1 *)(puVar9 + 3) = uVar6;
    *(undefined4 *)(puVar9 + 4) = uVar1;
    *(undefined4 *)(puVar9 + 6) = uVar2;
    *(undefined4 *)(puVar9 + 8) = uVar3;
    *param_1 = puVar9;
    param_1[1] = param_2;
    param_1[2] = 0x14;
    param_1[3] = 4;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  return;
}


