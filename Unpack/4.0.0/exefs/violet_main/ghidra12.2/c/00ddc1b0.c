/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ddc1b0; name: FUN_00ddc1b0
 */


void FUN_00ddc1b0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_68 [16];
  undefined8 *local_58;
  
  uVar3 = FUN_00ddc338(param_1,(param_1[1] - *param_1 >> 3) * -0x3333333333333333 + 1);
  FUN_00ddc3fc(auStack_68,uVar3,(param_1[1] - *param_1 >> 3) * -0x3333333333333333,param_1 + 3);
  puVar1 = local_58;
  lVar6 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_00c96b7c(puVar1,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    puVar1[3] = *(undefined8 *)(param_2 + 0x18);
    puVar1[4] = uVar5;
    puVar1[2] = uVar3;
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_00c96b7c(puVar1,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    puVar1[3] = *(undefined8 *)(param_2 + 0x18);
    puVar1[4] = uVar5;
    puVar1[2] = uVar3;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_58 = local_58 + 5;
  FUN_00ddc394(param_1,auStack_68);
  FUN_00ddc490(auStack_68);
  return;
}


