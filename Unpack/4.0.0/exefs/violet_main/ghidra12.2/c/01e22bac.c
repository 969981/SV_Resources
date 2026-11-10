/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e22bac; name: FUN_01e22bac
 */


void FUN_01e22bac(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  *param_2 = *param_3;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_00d0a71c(param_2 + 4,param_3 + 4);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  if (*(code **)(param_3 + 0xc) != (code *)0x0) {
    (**(code **)(param_3 + 0xc))(param_3 + 0x10,param_2 + 0x10);
    uVar4 = *(undefined8 *)(param_3 + 0xe);
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_2 + 0xe) = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_3 + 0xc);
    *(undefined8 *)(param_2 + 8) = uVar4;
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_2 + 0x2a) = 0;
  if (*(code **)(param_3 + 0x2c) != (code *)0x0) {
    (**(code **)(param_3 + 0x2c))(param_3 + 0x30,param_2 + 0x30);
    uVar4 = *(undefined8 *)(param_3 + 0x2e);
    *(undefined8 *)(param_2 + 0x2a) = *(undefined8 *)(param_3 + 0x2a);
    *(undefined8 *)(param_2 + 0x2e) = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_3 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = uVar4;
  }
  uVar1 = param_3[0x48];
  *(undefined8 *)(param_2 + 0x4a) = 0;
  *(undefined8 *)(param_2 + 0x4c) = 0;
  param_2[0x48] = uVar1;
  FUN_00d0a71c(param_2 + 0x4a,param_3 + 0x4a);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


