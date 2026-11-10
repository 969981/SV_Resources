/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011648e0; name: FUN_011648e0
 */


void FUN_011648e0(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  plVar13 = param_1 + 3;
  lVar5 = FUN_0217b754(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar14 = *param_1;
  lVar7 = param_1[1];
  local_60 = 0;
  local_58 = plVar13;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,lVar5 << 7,0x10);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*plVar13 + 0xe8))();
    }
  }
  puVar11 = (undefined8 *)(lVar6 + (lVar7 - lVar14 >> 7) * 0x80);
  local_60 = lVar6 + lVar5 * 0x80;
  lVar14 = *plVar13;
  local_70 = puVar11;
  local_68 = puVar11;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar14;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  uVar9 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  puVar11[6] = param_2[2];
  puVar11[7] = uVar2;
  puVar11[4] = uVar9;
  puVar11[5] = uVar1;
  uVar9 = param_2[4];
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[8] = uVar9;
  FUN_01161be4(puVar11 + 9,param_2 + 5);
  *puVar11 = &LAB_0103fccc;
  puVar11[1] = &LAB_0218377c;
  puVar11[2] = &LAB_0218388c;
  puVar11[3] = &LAB_021838bc;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  local_68 = local_68 + 0x10;
  FUN_021798b8(plVar13,*param_1,param_1[1],&local_70);
  puVar12 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  lVar14 = param_1[2];
  *param_1 = (long)local_70;
  param_1[1] = (long)local_68;
  param_1[2] = local_60;
  local_70 = puVar12;
  local_68 = puVar11;
  local_60 = lVar14;
  while (puVar3 = puVar11, puVar3 != puVar12) {
    puVar11 = puVar3 + -0x10;
    pcVar10 = (code *)puVar3[-0xf];
    local_68 = puVar11;
    if (pcVar10 != (code *)0x0) {
      puVar3[-0xe] = 0;
      puVar3[-0xd] = 0;
      puVar3[-0x10] = 0;
      puVar3[-0xf] = 0;
      (*pcVar10)(puVar3 + -0xc);
    }
  }
  if (puVar12 != (undefined8 *)0x0) {
    lVar14 = lVar14 - (long)puVar12;
    plVar13 = (long *)*local_58;
    uVar8 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar12,lVar14,0x10);
    }
    else {
      FUN_00c48fe8(plVar13,puVar12,lVar14,0x10);
    }
  }
  return;
}


