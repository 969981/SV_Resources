/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0345762c; name: FUN_0345762c
 */


void FUN_0345762c(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long local_38;
  
  puVar6 = (undefined8 *)param_1[8];
  *param_1 = &PTR_LAB_047c0688;
  if (puVar6 == (undefined8 *)0x0) goto LAB_034576f0;
  iVar1 = *(int *)(puVar6 + 0x10);
  uVar3 = iVar1 - 1;
  *(uint *)(puVar6 + 0x10) = uVar3;
  if (iVar1 == 0 || uVar3 == 0) {
    if (uVar3 != 0) goto LAB_034576f0;
LAB_03457680:
    lVar4 = puVar6[5];
    if (lVar4 != 0) {
      uVar3 = ((uint)lVar4 ^ (uint)lVar4 >> 0x10) * -0x7a143595;
      uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
      local_38 = lVar4;
      FUN_034c6294(&DAT_048b02b8,&local_38,uVar3 ^ uVar3 >> 0x10);
      uVar3 = *(uint *)(puVar6 + 0x10);
    }
  }
  else {
    if (1 < uVar3) goto LAB_034576f0;
    if (*(char *)((long)puVar6 + 0x84) != '\0') goto LAB_03457680;
  }
  if (uVar3 == 0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar6);
  }
LAB_034576f0:
  piVar5 = *(int **)((long)param_1 + 0x1c);
  if ((piVar5 == (int *)0x0) ||
     (iVar1 = *piVar5, *piVar5 = iVar1 + -1, puVar2 = PTR_DAT_047e2fd0, iVar1 + -1 != 0)) {
    return;
  }
  uVar3 = piVar5[1];
  if (uVar3 != 0) {
    uVar7 = 0;
    plVar8 = (long *)(piVar5 + 4);
    do {
      if (*plVar8 != 0) {
        (**(code **)(puVar2 + 0x30))(0);
        uVar3 = piVar5[1];
      }
      uVar7 = uVar7 + 1;
      plVar8 = plVar8 + 4;
    } while (uVar7 < uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x03457780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar5);
  return;
}


