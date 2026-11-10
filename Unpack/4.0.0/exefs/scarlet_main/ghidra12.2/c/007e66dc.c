/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e66dc; name: FUN_007e66dc
 */


void FUN_007e66dc(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (*(long *)(param_2 + 0x70) == 0) {
    local_40[0] = 0x10408;
  }
  else {
    lVar1 = FUN_007ec4a8();
    if ((lVar1 != 0) && (uVar2 = FUN_007efb98(*(undefined8 *)(param_2 + 0x70)), (uVar2 & 1) != 0)) {
      if (*(short *)(param_2 + 0x5a) != 0) {
        uVar5 = 0;
        do {
          lVar1 = FUN_007e7184(*(undefined8 *)(param_2 + 0x70),uVar5);
          if (lVar1 != 0) {
            plVar3 = (long *)FUN_007ec554(param_2);
            uVar4 = FUN_007e7184(*(undefined8 *)(param_2 + 0x70),uVar5);
            uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,uVar4);
            if ((uVar2 & 1) == 0) goto LAB_007e6794;
          }
          uVar5 = uVar5 + 1;
        } while ((uVar5 & 0xffff) < (uint)*(ushort *)(param_2 + 0x5a));
      }
      uVar2 = FUN_007f2ae4(*(undefined8 *)(param_2 + 0x70));
      if ((uVar2 & 1) != 0) {
        local_40[0] = 0;
        goto LAB_007e679c;
      }
    }
LAB_007e6794:
    local_40[0] = 0x2c09;
  }
LAB_007e679c:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


