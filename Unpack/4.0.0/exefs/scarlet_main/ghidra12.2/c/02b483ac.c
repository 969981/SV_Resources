/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b483ac; name: FUN_02b483ac
 */


void FUN_02b483ac(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[-4] = &PTR_LAB_0459e6c8;
  lVar5 = param_1[0x3a];
  param_1[0x3a] = 0;
  *param_1 = &PTR_FUN_0459e760;
  param_1[1] = &DAT_0459e7b0;
  if (lVar5 != 0) {
    plVar1 = (long *)param_1[0x3b];
    uVar2 = param_1[0x3c];
    uVar6 = param_1[0x3d];
    uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar5,uVar2,uVar6);
        goto LAB_02b483e8;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,uVar2,uVar6);
  }
LAB_02b483e8:
  FUN_00db9ce0(param_1 + -4);
  return;
}


