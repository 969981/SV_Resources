/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f2810; name: FUN_003f2810
 */


undefined8 FUN_003f2810(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [128];
  
  puVar8 = auStack_c0;
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  FUN_003ed410(param_3);
  puVar4 = param_1;
  if (param_2 == param_1) {
    puVar4 = (undefined8 *)FUN_003ed5c0(param_3);
  }
  puVar5 = (undefined8 *)FUN_003ed5c0(param_3);
  uVar9 = 0;
  if ((puVar4 == (undefined8 *)0x0) || (puVar5 == (undefined8 *)0x0)) goto LAB_003f2974;
  iVar2 = iVar1 << 1;
  lVar6 = FUN_003eb9a0(puVar4,iVar2);
  if (lVar6 == 0) goto LAB_003f2970;
  if (iVar1 == 8) {
    FUN_003eef80(*puVar4,*param_2);
LAB_003f2948:
    *(undefined4 *)(puVar4 + 2) = 0;
    *(int *)(puVar4 + 1) = iVar2;
    if ((puVar4 == param_1) || (lVar6 = FUN_003eb8f0(param_1,puVar4), lVar6 != 0)) {
      uVar9 = 1;
      goto LAB_003f2974;
    }
  }
  else {
    if (iVar1 == 4) {
      FUN_003ef4e0(*puVar4,*param_2);
      goto LAB_003f2948;
    }
    if (iVar1 < 0x10) {
      uVar9 = *puVar4;
      uVar7 = *param_2;
LAB_003f2940:
      FUN_003f29a0(uVar9,uVar7,iVar1,puVar8);
      goto LAB_003f2948;
    }
    iVar3 = FUN_003eb210(iVar1);
    if (iVar1 == 1 << (ulong)(iVar3 - 1U & 0x1f)) {
      lVar6 = FUN_003eb9a0(puVar5,iVar1 << 2);
      if (lVar6 != 0) {
        FUN_003f2a90(*puVar4,*param_2,iVar1,*puVar5);
        goto LAB_003f2948;
      }
    }
    else {
      lVar6 = FUN_003eb9a0(puVar5,iVar2);
      if (lVar6 != 0) {
        uVar9 = *puVar4;
        uVar7 = *param_2;
        puVar8 = (undefined1 *)*puVar5;
        goto LAB_003f2940;
      }
    }
  }
LAB_003f2970:
  uVar9 = 0;
LAB_003f2974:
  FUN_003ed530(param_3);
  return uVar9;
}


