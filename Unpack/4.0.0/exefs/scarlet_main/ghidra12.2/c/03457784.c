/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03457784; name: FUN_03457784
 */


void FUN_03457784(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  long local_28;
  
  puVar5 = (undefined8 *)param_1[8];
  *param_1 = &PTR_LAB_047c0688;
  if (puVar5 == (undefined8 *)0x0) goto LAB_03457848;
  iVar2 = *(int *)(puVar5 + 0x10);
  uVar4 = iVar2 - 1;
  *(uint *)(puVar5 + 0x10) = uVar4;
  if (iVar2 == 0 || uVar4 == 0) {
    if (uVar4 != 0) goto LAB_03457848;
LAB_034577d8:
    lVar3 = puVar5[5];
    if (lVar3 != 0) {
      uVar4 = ((uint)lVar3 ^ (uint)lVar3 >> 0x10) * -0x7a143595;
      uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51cb;
      local_28 = lVar3;
      FUN_034c6294(&DAT_048b02b8,&local_28,uVar4 ^ uVar4 >> 0x10);
      uVar4 = *(uint *)(puVar5 + 0x10);
    }
  }
  else {
    if (1 < uVar4) goto LAB_03457848;
    if (*(char *)((long)puVar5 + 0x84) != '\0') goto LAB_034577d8;
  }
  if (uVar4 == 0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar5);
  }
LAB_03457848:
  piVar6 = *(int **)((long)param_1 + 0x1c);
  if ((piVar6 != (int *)0x0) &&
     (iVar2 = *piVar6, *piVar6 = iVar2 + -1, puVar1 = PTR_DAT_047e2fd0, iVar2 + -1 == 0)) {
    uVar4 = piVar6[1];
    if (uVar4 == 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar6);
    }
    else {
      uVar8 = 0;
      plVar7 = (long *)(piVar6 + 4);
      do {
        if (*plVar7 != 0) {
          (**(code **)(puVar1 + 0x30))(0);
          uVar4 = piVar6[1];
        }
        uVar8 = uVar8 + 1;
        plVar7 = plVar7 + 4;
      } while (uVar8 < uVar4);
      (**(code **)(puVar1 + 0x30))(0,piVar6);
      if (param_1 == (undefined8 *)0x0) {
        return;
      }
    }
  }
  lVar3 = tpidr_el0;
  plVar7 = *(long **)(lVar3 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar8 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x03457938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,param_1,0,8);
    return;
  }
  FUN_00c48fe8(plVar7,param_1,0,8);
  return;
}


