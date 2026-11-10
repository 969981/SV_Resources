/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f4fbec; name: FUN_02f4fbec
 */


void FUN_02f4fbec(undefined8 *param_1,long *param_2,ulong param_3)

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
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 *puVar15;
  ulong local_68;
  
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar9 = uVar10 * 2;
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
  puVar7 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x10,&local_68);
  iVar4 = *(int *)(param_1 + 1);
  if (0 < iVar4) {
    puVar15 = (undefined4 *)*param_1;
    puVar11 = puVar7;
    puVar12 = puVar15;
    iVar8 = iVar4;
    do {
      uVar5 = *puVar12;
      iVar8 = iVar8 + -1;
      *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar12 + 1);
      *puVar11 = uVar5;
      *(undefined8 *)(puVar11 + 2) = *(undefined8 *)(puVar12 + 2);
      *(undefined8 *)(puVar12 + 2) = 0;
      puVar6 = PTR_DAT_047e3360;
      puVar11 = puVar11 + 4;
      puVar12 = puVar12 + 4;
    } while (iVar8 != 0);
    iVar8 = 0;
    do {
      if (*puVar6 != '\0') {
        plVar14 = (long *)(*(ulong *)(puVar15 + 2) & 0xfffffffffffffffc);
        if (plVar14 != (long *)0x0) {
          if ((*(ulong *)(puVar15 + 2) & 3) == 0) {
            *(ulong *)(puVar15 + 2) = (ulong)plVar14 | 1;
            do {
              lVar3 = *plVar14;
              plVar14 = (long *)(plVar14[1] & 0xfffffffffffffffc);
              (**(code **)(lVar3 + 8))();
            } while (plVar14 != (long *)0x0);
            *(undefined8 *)(puVar15 + 2) = 0;
          }
          else {
            do {
              plVar2 = (long *)(plVar14[1] & 0xfffffffffffffffc);
              plVar14[1] = (ulong)plVar2 | 1;
              plVar14 = plVar2;
            } while (plVar2 != (long *)0x0);
          }
        }
      }
      iVar8 = iVar8 + 1;
      puVar15 = puVar15 + 4;
    } while (iVar8 != iVar4);
  }
  uVar1 = uVar9 * 0x10 + 0x10;
  uVar13 = uVar9;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x10;
    uVar13 = uVar9 + 1 + (local_68 + uVar9 * -0x10 >> 4);
    if (local_68 < uVar1) {
      uVar13 = uVar9 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar10 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = puVar7;
  return;
}


