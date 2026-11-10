/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022dabd8; name: FUN_022dabd8
 */


void FUN_022dabd8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  lVar3 = param_1[1];
  if (param_1[1] == lVar6) {
    lVar3 = lVar6;
  }
  else {
    do {
      pcVar4 = *(code **)(lVar3 + -0x78);
      lVar5 = lVar3 + -0x80;
      if (pcVar4 != (code *)0x0) {
        *(undefined8 *)(lVar3 + -0x70) = 0;
        *(undefined8 *)(lVar3 + -0x68) = 0;
        *(undefined8 *)(lVar3 + -0x80) = 0;
        *(undefined8 *)(lVar3 + -0x78) = 0;
        (*pcVar4)(lVar3 + -0x60);
      }
      lVar3 = lVar5;
    } while (lVar6 != lVar5);
    lVar3 = *param_1;
  }
  param_1[1] = lVar6;
  lVar6 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar3,lVar6 - lVar3,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x022dac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar6 - lVar3,0x10);
  return;
}


