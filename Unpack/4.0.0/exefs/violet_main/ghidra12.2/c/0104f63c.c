/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0104f63c; name: FUN_0104f63c
 */


void FUN_0104f63c(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar7;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  *param_2 = *param_3;
  uVar7 = *param_4;
  *param_4 = 0;
  *(undefined8 *)(param_2 + 4) = uVar7;
  uVar7 = param_4[1];
  uVar1 = *(undefined4 *)(param_4 + 2);
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[8] = uVar1;
  *(undefined8 *)(param_2 + 6) = uVar7;
  *(undefined8 *)(param_2 + 0x12) = 0;
  if ((code *)param_4[7] != (code *)0x0) {
    (*(code *)param_4[7])(param_4 + 8,param_2 + 0x14);
    uVar7 = param_4[4];
    uVar5 = param_4[5];
    *(undefined8 *)(param_2 + 0x12) = param_4[7];
    uVar6 = param_4[6];
    *(undefined8 *)(param_2 + 0xe) = uVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    *(undefined8 *)(param_2 + 0xc) = uVar7;
    pcVar4 = (code *)param_4[5];
    if (pcVar4 != (code *)0x0) {
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      (*pcVar4)(param_4 + 8);
    }
  }
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x32) = 0;
  *(undefined8 *)(param_2 + 0x2e) = 0;
  if ((code *)param_4[0x17] != (code *)0x0) {
    (*(code *)param_4[0x17])(param_4 + 0x18,param_2 + 0x34);
    uVar7 = param_4[0x14];
    uVar5 = param_4[0x15];
    *(undefined8 *)(param_2 + 0x32) = param_4[0x17];
    uVar6 = param_4[0x16];
    *(undefined8 *)(param_2 + 0x2e) = uVar5;
    *(undefined8 *)(param_2 + 0x30) = uVar6;
    *(undefined8 *)(param_2 + 0x2c) = uVar7;
    pcVar4 = (code *)param_4[0x15];
    if (pcVar4 != (code *)0x0) {
      param_4[0x16] = 0;
      param_4[0x17] = 0;
      param_4[0x14] = 0;
      param_4[0x15] = 0;
      (*pcVar4)(param_4 + 0x18);
    }
  }
  *(undefined8 *)(param_2 + 0x4c) = param_4[0x24];
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


