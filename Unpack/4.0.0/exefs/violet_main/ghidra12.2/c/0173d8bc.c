/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173d8bc; name: FUN_0173d8bc
 */


void FUN_0173d8bc(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [16];
  undefined8 *local_58;
  
  uVar3 = FUN_0173da54(param_1,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7 + 1);
  FUN_0173dab8(auStack_68,uVar3,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7,param_1 + 3);
  puVar1 = local_58;
  lVar5 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar5;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[4] = *param_2;
  uVar3 = param_2[1];
  param_2[1] = 0;
  puVar1[5] = uVar3;
  *puVar1 = &LAB_0184d3d8;
  puVar1[1] = &LAB_02e02d98;
  puVar1[2] = &LAB_02e02e10;
  puVar1[3] = &LAB_02e02ed8;
  puVar1[0x10] = param_2[2];
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_58 = local_58 + 0x12;
  FUN_0173db4c(param_1,auStack_68);
  FUN_0173dbf4(auStack_68);
  return;
}


