/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c071c; name: FUN_015c071c
 */


void FUN_015c071c(long *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_68 [16];
  undefined2 *local_58;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_015c0be4();
    return;
  }
  uVar4 = FUN_015c088c(param_1,(param_1[1] - *param_1) * -0x5555555555555555 + 1);
  FUN_015c094c(auStack_68,uVar4,(param_1[1] - *param_1) * -0x5555555555555555,param_1 + 3);
  puVar2 = local_58;
  lVar6 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    uVar1 = *param_2;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
    *puVar2 = uVar1;
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    uVar1 = *param_2;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
    *puVar2 = uVar1;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_58 = (undefined2 *)((long)local_58 + 3);
  FUN_015c08e4(param_1,auStack_68);
  FUN_015c09e0(auStack_68);
  return;
}


