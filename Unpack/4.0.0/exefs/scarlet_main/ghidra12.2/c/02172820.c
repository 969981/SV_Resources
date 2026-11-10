/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02172820; name: FUN_02172820
 */


void FUN_02172820(undefined8 *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  long *plVar6;
  
  *param_1 = &PTR_FUN_0459c7c8;
  param_1[4] = &PTR_LAB_0459c800;
  if (*(char *)(param_1 + 0x18) == '\0') goto LAB_02172850;
  lVar4 = param_1[0xe];
  if (lVar4 != 0) {
    plVar6 = (long *)param_1[1];
    uVar1 = *(undefined4 *)(param_1[0xd] + 4);
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar2 & 1) == 0) {
LAB_021728d4:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,uVar1,8);
    }
    else {
      lVar3 = FUN_00c4e600();
      if (*(int *)(lVar3 + 0x12c8) < 1) goto LAB_021728d4;
      FUN_00c48fe8(plVar6,lVar4,uVar1,8);
    }
    param_1[0xe] = 0;
  }
  puVar5 = (ushort *)param_1[0xd];
  if (puVar5 == (ushort *)0x0) goto LAB_02172850;
  plVar6 = (long *)param_1[1];
  lVar4 = (ulong)*puVar5 * 4 + 0xc;
  uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar2 & 1) == 0) {
LAB_02172920:
    (**(code **)(*plVar6 + 0x18))(plVar6,puVar5,lVar4,8);
  }
  else {
    lVar3 = FUN_00c4e600();
    if (*(int *)(lVar3 + 0x12c8) < 1) goto LAB_02172920;
    FUN_00c48fe8(plVar6,puVar5,lVar4,8);
  }
  param_1[0xd] = 0;
LAB_02172850:
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_011fcdfc(param_1 + 0x19);
  FUN_011cbc68(param_1 + 0x10);
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x20))();
  }
  if ((long *)param_1[6] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x021728a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[6] + 0x20))();
  return;
}


