/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02051e98; name: FUN_02051e98
 */


void FUN_02051e98(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  plVar11 = param_1 + 3;
  lVar2 = FUN_020525bc(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar5 = *param_1;
  lVar12 = param_1[1];
  local_50 = 0;
  lVar3 = 0;
  local_48 = plVar11;
  if ((lVar2 != 0) &&
     (lVar3 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,lVar2 << 7,0x10), lVar3 == 0)
     ) {
    (**(code **)(*(long *)*plVar11 + 0xe8))((long *)*plVar11);
  }
  puVar9 = (undefined8 *)(lVar3 + (lVar12 - lVar5 >> 7) * 0x80);
  local_50 = lVar3 + lVar2 * 0x80;
  lVar12 = *plVar11;
  local_60 = puVar9;
  local_58 = puVar9;
  puVar4 = (undefined4 *)FUN_01053840();
  lVar5 = nn::os::GetTlsValue(*puVar4);
  if (lVar5 != 0) {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar12;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  }
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  uVar8 = *param_2;
  *puVar9 = &LAB_02a93ddc;
  puVar9[1] = &LAB_02a93e10;
  puVar9[2] = &LAB_02a93e14;
  puVar9[3] = &LAB_02a93e20;
  puVar9[4] = uVar8;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  local_58 = local_58 + 0x10;
  FUN_0205260c(plVar11,*param_1,param_1[1],&local_60);
  puVar10 = (undefined8 *)*param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar5 = param_1[2];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  param_1[2] = local_50;
  local_60 = puVar10;
  local_58 = puVar9;
  local_50 = lVar5;
  while (puVar1 = puVar9, puVar1 != puVar10) {
    puVar9 = puVar1 + -0x10;
    pcVar7 = (code *)puVar1[-0xf];
    local_58 = puVar9;
    if (pcVar7 != (code *)0x0) {
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      puVar1[-0x10] = 0;
      puVar1[-0xf] = 0;
      (*pcVar7)(puVar1 + -0xc);
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    lVar5 = lVar5 - (long)puVar10;
    plVar11 = (long *)*local_48;
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,lVar5,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,puVar10,lVar5,0x10);
    }
  }
  return;
}


