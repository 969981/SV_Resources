/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015636a8; name: FUN_015636a8
 */


void FUN_015636a8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *param_1;
  *param_1 = 0;
  if (lVar3 == 0) {
    return;
  }
  if ((char)param_1[2] != '\0') {
    FUN_02af82fc(lVar3 + 0x18,*(undefined8 *)(lVar3 + 0x48));
    lVar5 = *(long *)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    if (lVar5 != 0) {
      plVar4 = *(long **)(lVar3 + 0x28);
      lVar6 = *(long *)(lVar3 + 0x20) << 3;
      uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if ((uVar1 & 1) != 0) {
        lVar2 = FUN_00c4e600();
        if (0 < *(int *)(lVar2 + 0x12c8)) {
          FUN_00c48fe8(plVar4,lVar5,lVar6,8);
          goto LAB_01563724;
        }
      }
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar6,8);
    }
  }
LAB_01563724:
  plVar4 = *(long **)param_1[1];
  uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar1 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar4,lVar3,0x80,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01563768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,0x80,8);
  return;
}


