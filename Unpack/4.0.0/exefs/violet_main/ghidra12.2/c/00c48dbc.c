/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c48dbc; name: FUN_00c48dbc
 */


void FUN_00c48dbc(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = *param_1;
  if ((ulong)(param_1[2] - lVar5 >> 3) < param_2) {
    lVar7 = param_1[1];
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 3,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    lVar5 = lVar2 + (lVar7 - lVar5 >> 3) * 8;
    lVar7 = *param_1;
    lVar6 = param_1[1];
    lVar9 = lVar5;
    if (lVar6 != lVar7) {
      do {
        lVar10 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          *(undefined8 *)(lVar9 + -8) = *(undefined8 *)(lVar6 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          *(undefined8 *)(lVar9 + -8) = *(undefined8 *)(lVar6 + -8);
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar6 = lVar6 + -8;
        lVar9 = lVar9 + -8;
      } while (lVar7 != lVar6);
      lVar7 = *param_1;
    }
    *param_1 = lVar9;
    param_1[1] = lVar5;
    lVar5 = param_1[2];
    param_1[2] = lVar2 + param_2 * 8;
    if (lVar7 != 0) {
      plVar8 = (long *)param_1[3];
      uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00c48eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,lVar5 - lVar7,8);
        return;
      }
      FUN_00c48fe8(plVar8,lVar7,lVar5 - lVar7,8);
      return;
    }
  }
  return;
}


