/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6bd20; name: FUN_00c6bd20
 */


void FUN_00c6bd20(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *param_1;
  if ((ulong)(param_1[2] - lVar6 >> 4) < param_2) {
    lVar7 = param_1[1];
    lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 4,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    lVar6 = lVar3 + (lVar7 - lVar6 >> 4) * 0x10;
    lVar7 = *param_1;
    lVar9 = param_1[1];
    lVar11 = lVar6;
    if (lVar9 != lVar7) {
      do {
        lVar10 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          uVar1 = *(undefined8 *)(lVar9 + -8);
          *(undefined8 *)(lVar11 + -0x10) = *(undefined8 *)(lVar9 + -0x10);
          *(undefined8 *)(lVar11 + -8) = uVar1;
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          uVar1 = *(undefined8 *)(lVar9 + -8);
          *(undefined8 *)(lVar11 + -0x10) = *(undefined8 *)(lVar9 + -0x10);
          *(undefined8 *)(lVar11 + -8) = uVar1;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar9 = lVar9 + -0x10;
        lVar11 = lVar11 + -0x10;
      } while (lVar7 != lVar9);
      lVar7 = *param_1;
    }
    lVar9 = param_1[2];
    param_1[2] = lVar3 + param_2 * 0x10;
    *param_1 = lVar11;
    param_1[1] = lVar6;
    if (lVar7 != 0) {
      plVar8 = (long *)param_1[3];
      uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c6be7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,lVar9 - lVar7,8);
        return;
      }
      FUN_00c48fe8(plVar8,lVar7,lVar9 - lVar7,8);
      return;
    }
  }
  return;
}


