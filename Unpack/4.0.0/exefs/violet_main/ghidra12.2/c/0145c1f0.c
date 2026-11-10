/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145c1f0; name: FUN_0145c1f0
 */


void FUN_0145c1f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar6 = param_3[3];
  uVar1 = param_3[4];
  uVar2 = param_3[6];
  param_2[5] = param_3[5];
  param_2[6] = uVar2;
  param_2[3] = uVar6;
  param_2[4] = uVar1;
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_2[7] = param_3[7];
  param_2[8] = param_3[8];
  param_2[9] = param_3[9];
  uVar6 = param_3[10];
  param_3[10] = 0;
  param_2[10] = uVar6;
  *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(param_3 + 0xb);
  uVar6 = param_3[0xc];
  param_3[0xc] = 0;
  param_2[0xc] = uVar6;
  uVar3 = *(undefined4 *)(param_3 + 0xd);
  *(undefined1 *)((long)param_2 + 0x6c) = *(undefined1 *)((long)param_3 + 0x6c);
  *(undefined4 *)(param_2 + 0xd) = uVar3;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


