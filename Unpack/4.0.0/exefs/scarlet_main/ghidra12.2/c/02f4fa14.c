/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f4fa14; name: FUN_02f4fa14
 */


void FUN_02f4fa14(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined4 *puVar14;
  ulong local_68;
  
  uVar9 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar9 <= param_3) {
    uVar9 = param_3;
  }
  if (0x7ffffffe < uVar9) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar9 = 0x7ffffffe;
  }
  local_68 = uVar9 * 0x10;
  puVar7 = (undefined4 *)
           (**(code **)PTR_DAT_047d1a08)
                     (*(undefined1 *)(param_2 + 8),&local_68,*(undefined4 *)(param_2 + 0xc));
  iVar4 = *(int *)(param_1 + 1);
  if (0 < iVar4) {
    puVar14 = (undefined4 *)*param_1;
    puVar10 = puVar7;
    puVar11 = puVar14;
    iVar8 = iVar4;
    do {
      uVar5 = *puVar11;
      iVar8 = iVar8 + -1;
      *(undefined1 *)(puVar10 + 1) = *(undefined1 *)(puVar11 + 1);
      *puVar10 = uVar5;
      *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar11 + 2);
      *(undefined8 *)(puVar11 + 2) = 0;
      puVar6 = PTR_DAT_047e3360;
      puVar10 = puVar10 + 4;
      puVar11 = puVar11 + 4;
    } while (iVar8 != 0);
    iVar8 = 0;
    do {
      if (*puVar6 != '\0') {
        plVar13 = (long *)(*(ulong *)(puVar14 + 2) & 0xfffffffffffffffc);
        if (plVar13 != (long *)0x0) {
          if ((*(ulong *)(puVar14 + 2) & 3) == 0) {
            *(ulong *)(puVar14 + 2) = (ulong)plVar13 | 1;
            do {
              lVar3 = *plVar13;
              plVar13 = (long *)(plVar13[1] & 0xfffffffffffffffc);
              (**(code **)(lVar3 + 8))();
            } while (plVar13 != (long *)0x0);
            *(undefined8 *)(puVar14 + 2) = 0;
          }
          else {
            do {
              plVar2 = (long *)(plVar13[1] & 0xfffffffffffffffc);
              plVar13[1] = (ulong)plVar2 | 1;
              plVar13 = plVar2;
            } while (plVar2 != (long *)0x0);
          }
        }
      }
      iVar8 = iVar8 + 1;
      puVar14 = puVar14 + 4;
    } while (iVar8 != iVar4);
  }
  uVar1 = uVar9 * 0x10 + 0x10;
  uVar12 = uVar9;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x10;
    uVar12 = uVar9 + 1 + (local_68 + uVar9 * -0x10 >> 4);
    if (local_68 < uVar1) {
      uVar12 = uVar9 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = puVar7;
  return;
}


