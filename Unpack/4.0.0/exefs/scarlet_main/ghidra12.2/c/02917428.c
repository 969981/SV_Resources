/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02917428; name: FUN_02917428
 */


undefined8 FUN_02917428(long param_1)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar1 = *(ushort *)(param_1 + 0xb4);
  uVar6 = (ulong)uVar1;
  if (uVar1 < 0x1eb) {
    if (uVar1 < 0x11e) {
      if ((uVar1 == 0xc) || (uVar1 == 0xeb)) {
LAB_029174a0:
        uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x55);
        if ((uVar6 & 1) != 0) {
          return 4;
        }
        uVar6 = (ulong)*(ushort *)(param_1 + 0xb4);
      }
    }
    else if ((uVar1 == 0x11e) || (uVar1 == 0x1d4)) goto LAB_029174a0;
  }
  else if (uVar1 < 0x292) {
    if ((uVar1 == 0x1eb) || (uVar1 == 0x24f)) goto LAB_029174a0;
  }
  else if ((uVar1 == 0x29a) || (uVar1 == 0x292)) goto LAB_029174a0;
  uVar5 = (uint)uVar6;
  if (((uVar5 < 0x30) && ((1L << (uVar6 & 0x3f) & 0x801000001000U) != 0)) || (uVar5 == 0x9d)) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x55);
    if ((uVar6 & 1) != 0) {
      return 3;
    }
    uVar5 = (uint)*(ushort *)(param_1 + 0xb4);
  }
  if (uVar5 < 0x71) {
    if ((uVar5 - 6 < 0x3f) && ((1L << ((ulong)(uVar5 - 6) & 0x3f) & 0x4000000100000001U) != 0))
    goto LAB_02917580;
LAB_029175a0:
    iVar2 = FUN_029196d8(param_1);
    if (iVar2 == 1) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0));
      plVar3 = *(long **)(param_1 + 0x30);
      if ((uVar6 & 1) == 0) {
        uVar6 = (**(code **)(*plVar3 + 0x4c8))(plVar3,0x55);
        if ((uVar6 & 1) != 0) {
          return 0xffffffff;
        }
      }
      else {
        uVar6 = (**(code **)(*plVar3 + 0x4c8))(plVar3,0x32);
        if ((uVar6 & 1) != 0) goto LAB_02917598;
      }
    }
    uVar4 = 0;
  }
  else {
    if (((0x25 < uVar5 - 0x71) || ((1L << ((ulong)(uVar5 - 0x71) & 0x3f) & 0x3000000001U) == 0)) &&
       ((uVar5 != 0x1eb && (uVar5 != 0xeb)))) goto LAB_029175a0;
LAB_02917580:
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32);
    if ((uVar6 & 1) == 0) goto LAB_029175a0;
LAB_02917598:
    uVar4 = 1;
  }
  return uVar4;
}


