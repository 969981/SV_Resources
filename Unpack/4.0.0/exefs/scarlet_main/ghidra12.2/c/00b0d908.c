/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0d908; name: FUN_00b0d908
 */


void FUN_00b0d908(undefined4 param_1,long param_2,uint param_3,undefined4 param_4,undefined4 param_5
                 )

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *local_68 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38 [2];
  
  local_44 = param_1;
  local_40 = param_5;
  uStack_3c = param_4;
  FUN_016947d8(local_68);
  local_38[0] = 2;
  FUN_00b0f234(local_68,local_38);
  puVar5 = local_68[0];
  if (local_68[0] == (undefined8 *)0x0) goto LAB_00b0da0c;
  uVar11 = 0xffffff84;
  if (((int)(char)param_3 & 0xffffU) != (param_3 & 0xffff)) {
    uVar11 = 0xffffff85;
  }
  uVar1 = param_3;
  if (0xbf < (param_3 + 0x40 & 0xffff)) {
    uVar1 = uVar11;
  }
  lVar7 = FUN_0111b030(uVar1);
  if ((ulong)(puVar5[3] + lVar7) <= (ulong)puVar5[2]) {
    *(char *)(puVar5[1] + puVar5[3]) = (char)uVar1;
    lVar7 = puVar5[3] + 1;
    puVar5[3] = lVar7;
    if ((uVar1 & 0xff) == 0x85) {
      *(short *)(puVar5[1] + lVar7) = (short)param_3;
      lVar7 = puVar5[3] + 2;
    }
    else {
      if ((uVar1 & 0xff) != 0x84) goto LAB_00b0d9dc;
      *(char *)(puVar5[1] + lVar7) = (char)param_3;
      lVar7 = puVar5[3] + 1;
    }
    puVar5[3] = lVar7;
  }
LAB_00b0d9dc:
  if ((local_68[0] != (undefined8 *)0x0) &&
     (FUN_01e62d14(local_38,&uStack_3c,local_68[0] + 1), local_68[0] != (undefined8 *)0x0)) {
    FUN_01e62d14(local_38,&local_40,local_68[0] + 1);
  }
LAB_00b0da0c:
  FUN_01eba4d4(local_68,&local_44);
  piVar8 = (int *)(param_2 + 0xb8);
  *piVar8 = *piVar8 + 1;
  if (local_68[0] != (undefined8 *)0x0) {
    FUN_01e62d14(local_38,piVar8,local_68[0] + 1);
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar7 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar7;
  plVar2 = *(long **)(lVar7 + 0x1c8);
  plVar4 = *(long **)(lVar7 + 0x1c0);
  do {
    if (plVar4 == plVar2) goto LAB_00b0dabc;
    lVar7 = *plVar4;
    uVar9 = FUN_00a371b8(lVar7 + 0x28);
    plVar4 = plVar4 + 1;
  } while ((uVar9 & 1) == 0);
  FUN_00b0f37c(local_68,lVar7 + 0x40);
  if (local_68[0] == (undefined8 *)0x0) {
    uVar10 = 0;
    uVar3 = 0;
  }
  else {
    uVar10 = *local_68[0];
    uVar3 = *(undefined4 *)(local_68[0] + 3);
  }
  (**(code **)(**(long **)(param_2 + 0x70) + 0x70))(*(long **)(param_2 + 0x70),uVar10,uVar3);
LAB_00b0dabc:
  FUN_01694aa8(local_68);
  return;
}


