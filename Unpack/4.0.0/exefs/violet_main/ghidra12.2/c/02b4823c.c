/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b4823c; name: FUN_02b4823c
 */


void FUN_02b4823c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = param_1[0x3e];
  *param_1 = &PTR_LAB_0459e6c8;
  param_1[4] = &PTR_FUN_0459e760;
  param_1[5] = &DAT_0459e7b0;
  param_1[0x3e] = 0;
  if (lVar5 != 0) {
    plVar1 = (long *)param_1[0x3f];
    uVar2 = param_1[0x40];
    uVar6 = param_1[0x41];
    uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,uVar2,uVar6);
        goto LAB_02b48278;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,uVar2,uVar6);
  }
LAB_02b48278:
  FUN_00db9ce0(param_1);
  return;
}


