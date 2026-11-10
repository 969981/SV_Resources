/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02785b2c; name: FUN_02785b2c
 */


void FUN_02785b2c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    lVar2 = param_1[4] + 8;
    do {
      lVar3 = *(long *)(lVar2 + -8);
      lVar5 = lVar5 + -1;
      *(undefined8 *)(lVar2 + -8) = 0;
      if (lVar3 != 0) {
        FUN_027853e8(lVar2);
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar5 != 0);
  }
  if (param_1[6] == 0) {
    return;
  }
  plVar6 = (long *)*param_1;
  lVar5 = param_1[6] << 5;
  uVar4 = param_1[4];
  uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar6,uVar4,lVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02785be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,uVar4,lVar5,8);
  return;
}


