/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0217e1ec; name: FUN_0217e1ec
 */


void FUN_0217e1ec(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  
  plVar7 = param_1 + 3;
  lVar2 = FUN_0217b754(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar6 = *param_1;
  lVar8 = param_1[1];
  local_50 = 0;
  local_48 = plVar7;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar2 << 7,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)*plVar7 + 0xe8))();
    }
  }
  lVar6 = lVar3 + (lVar8 - lVar6 >> 7) * 0x80;
  local_50 = lVar3 + lVar2 * 0x80;
  lVar8 = *plVar7;
  local_60 = lVar6;
  local_58 = lVar6;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 == 0) {
    FUN_0217e440(lVar6,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    FUN_0217e440(lVar6,param_2);
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    lVar6 = local_58;
  }
  local_58 = lVar6 + 0x80;
  FUN_021798b8(plVar7,*param_1,param_1[1],&local_60);
  lVar2 = *param_1;
  lVar6 = param_1[1];
  lVar8 = param_1[2];
  *param_1 = local_60;
  param_1[1] = local_58;
  param_1[2] = local_50;
  local_60 = lVar2;
  local_58 = lVar6;
  local_50 = lVar8;
  while (lVar3 = lVar6, lVar3 != lVar2) {
    lVar6 = lVar3 + -0x80;
    pcVar5 = *(code **)(lVar3 + -0x78);
    local_58 = lVar6;
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar3 + -0x70) = 0;
      *(undefined8 *)(lVar3 + -0x68) = 0;
      *(undefined8 *)(lVar3 + -0x80) = 0;
      *(undefined8 *)(lVar3 + -0x78) = 0;
      (*pcVar5)(lVar3 + -0x60);
    }
  }
  if (lVar2 != 0) {
    lVar8 = lVar8 - lVar2;
    plVar7 = (long *)*local_48;
    uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar2,lVar8,0x10);
    }
    else {
      FUN_00c48fe8(plVar7,lVar2,lVar8,0x10);
    }
  }
  return;
}


