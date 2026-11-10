/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01268590; name: FUN_01268590
 */


void FUN_01268590(long *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_68 [16];
  undefined8 *local_58;
  
  uVar2 = FUN_012686f4(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  FUN_012687b8(auStack_68,uVar2,(param_1[1] - *param_1 >> 3) * -0x5555555555555555,param_1 + 3);
  puVar5 = local_58;
  lVar6 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    uVar2 = *param_2;
    uVar4 = param_2[2];
    puVar5[1] = param_2[1];
    puVar5[2] = uVar4;
    *puVar5 = uVar2;
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    uVar4 = param_2[2];
    uVar2 = param_2[1];
    *puVar5 = *param_2;
    puVar5[1] = uVar2;
    puVar5[2] = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar5 = local_58;
  }
  local_58 = puVar5 + 3;
  FUN_01268750(param_1,auStack_68);
  FUN_0126884c(auStack_68);
  return;
}


