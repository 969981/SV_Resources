/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124c458; name: FUN_0124c458
 */


bool FUN_0124c458(undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 local_d8;
  int *piStack_d0;
  undefined1 local_c8;
  int local_c0;
  undefined1 local_bb [2];
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 auStack_b7 [4];
  undefined1 local_b3;
  undefined5 local_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  undefined1 local_a3;
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined1 local_93;
  undefined5 local_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined1 local_83;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined1 local_73;
  undefined5 uStack_70;
  undefined3 local_6b;
  undefined5 uStack_68;
  undefined1 local_63;
  char local_48 [8];
  
  uVar3 = FUN_0124e498();
  _uStack_b8 = 0;
  _local_c0 = 0;
  _local_bb = 0;
  local_b3 = 1;
  local_b0 = 0;
  uStack_ab = 0;
  uStack_a8 = 0;
  local_a3 = 1;
  local_a0 = 0;
  uStack_9b = 0;
  uStack_98 = 0;
  local_93 = 1;
  local_90 = 0;
  uStack_8b = 0;
  uStack_88 = 0;
  local_83 = 1;
  local_80 = 0;
  uStack_7b = 0;
  uStack_78 = 0;
  local_73 = 1;
  uStack_68 = 0;
  uStack_70 = 0;
  local_6b = 0;
  local_63 = 1;
  bVar1 = FUN_00f7e274();
  if (bVar1 != 0) {
    uVar7 = 0;
    iVar8 = 0;
    puVar9 = auStack_b7;
    do {
      plVar4 = (long *)FUN_0124c614(uVar3,uVar7 & 0xffffffff);
      FUN_01582534(param_1);
      uVar5 = FUN_0124c60c();
      uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
      piVar6 = (int *)FUN_0124c634(uVar5,uVar2);
      if ((piVar6 != (int *)0x0) &&
         ((*piVar6 != 0 ||
          ((uint)*(ushort *)((long)piVar6 + 6) + (uint)*(ushort *)(piVar6 + 1) +
           (uint)*(ushort *)(piVar6 + 2) + (uint)*(ushort *)((long)piVar6 + 10) +
           (uint)*(ushort *)(piVar6 + 3) + (uint)*(ushort *)((long)piVar6 + 0xe) != 0)))) {
        *(int *)(puVar9 + -9) = *piVar6;
        puVar9[-4] = *(undefined1 *)((long)piVar6 + 6);
        puVar9[-3] = (char)piVar6[2];
        puVar9[-2] = *(undefined1 *)((long)piVar6 + 10);
        puVar9[-1] = (char)piVar6[3];
        iVar8 = iVar8 + 1;
        *puVar9 = *(undefined1 *)((long)piVar6 + 0xe);
      }
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 0x10;
    } while (bVar1 != uVar7);
    if (iVar8 != 0) {
      local_c8 = 0;
      local_48[0] = '\0';
      local_d8 = uVar3;
      piStack_d0 = &local_c0;
      FUN_01461214(param_1);
      uVar3 = FUN_0123fd24();
      FUN_01241994(uVar3,local_48,&local_d8);
      return local_48[0] != '\0';
    }
  }
  return false;
}


