/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02786030; name: FUN_02786030
 */


void FUN_02786030(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  lVar7 = param_1[4];
  puVar2 = param_2;
  if (lVar7 != 0) {
    puVar2 = (undefined8 *)FUN_02785da0(param_1,lVar7,param_4,param_2);
  }
  uVar9 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar9;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  uVar9 = *param_5;
  *param_5 = 0;
  *puVar2 = uVar9;
  uVar9 = param_5[1];
  uVar6 = param_5[3];
  puVar2[2] = param_5[2];
  puVar2[3] = uVar6;
  puVar2[1] = uVar9;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  puVar2 = puVar2 + 4;
  if (lVar7 != 0) {
    puVar2 = (undefined8 *)FUN_02785da0(param_1,param_4,lVar7 + param_1[5] * 0x20,puVar2);
    lVar3 = param_1[5];
    if (lVar3 != 0) {
      lVar7 = lVar7 + 8;
      do {
        lVar5 = *(long *)(lVar7 + -8);
        lVar3 = lVar3 + -1;
        *(undefined8 *)(lVar7 + -8) = 0;
        if (lVar5 != 0) {
          FUN_027853e8(lVar7);
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar3 != 0);
    }
    lVar7 = param_1[6];
    plVar8 = (long *)*param_1;
    uVar9 = param_1[4];
    uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if ((uVar4 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar8,uVar9,lVar7 << 5,8);
        goto LAB_02786180;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar9,lVar7 << 5,8);
  }
LAB_02786180:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = (long)puVar2 - (long)param_2 >> 5;
  return;
}


