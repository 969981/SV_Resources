/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db9c28; name: FUN_00db9c28
 */


void FUN_00db9c28(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = param_1[0x3e];
  *param_1 = &PTR_FUN_04540368;
  param_1[4] = &PTR_LAB_04540400;
  param_1[5] = &PTR_LAB_04540450;
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
        goto LAB_00db9c64;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,uVar2,uVar6);
  }
LAB_00db9c64:
  FUN_00db9ce0(param_1);
  return;
}


