/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00213290; name: FUN_00213290
 */


void FUN_00213290(ulong *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if ((*(uint *)(param_2 + 0x68) >> 4 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x68) >> 3 & 1) == 0) {
      uVar2 = *(ulong *)(param_2 + 0x58);
      param_1[2] = 0;
      param_1[3] = uVar2;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    puVar11 = *(undefined1 **)(param_2 + 0x10);
    puVar10 = *(undefined1 **)(param_2 + 0x20);
    uVar2 = (long)puVar10 - (long)puVar11;
    plVar1 = *(long **)(param_2 + 0x58);
    param_1[3] = (ulong)plVar1;
    if (0xffffffffffffffef < uVar2) {
LAB_002134c8:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar2 < 0x17) {
      puVar8 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar2 << 1);
    }
    else {
      uVar9 = uVar2 + 0x10 & 0xfffffffffffffff0;
      puVar8 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar9,1);
      param_1[1] = uVar2;
      param_1[2] = (ulong)puVar8;
      *param_1 = uVar9 | 1;
    }
    if (puVar11 == puVar10) {
LAB_00213424:
      *puVar8 = 0;
      return;
    }
    if ((uVar2 < 0x40) || ((puVar8 < puVar10 && (puVar11 < puVar8 + uVar2)))) {
      puVar4 = puVar11;
    }
    else {
      uVar5 = uVar2 & 0xffffffffffffffc0;
      puVar4 = puVar11 + uVar5;
      puVar3 = puVar8 + uVar5;
      puVar6 = (undefined8 *)(puVar8 + 0x20);
      puVar7 = (undefined8 *)(puVar11 + 0x20);
      uVar9 = uVar5;
      do {
        uVar13 = puVar7[-3];
        uVar12 = puVar7[-4];
        uVar15 = puVar7[-1];
        uVar14 = puVar7[-2];
        uVar9 = uVar9 - 0x40;
        uVar16 = *puVar7;
        uVar18 = puVar7[3];
        uVar17 = puVar7[2];
        puVar6[1] = puVar7[1];
        *puVar6 = uVar16;
        puVar6[3] = uVar18;
        puVar6[2] = uVar17;
        puVar6[-3] = uVar13;
        puVar6[-4] = uVar12;
        puVar6[-1] = uVar15;
        puVar6[-2] = uVar14;
        puVar6 = puVar6 + 8;
        puVar7 = puVar7 + 8;
      } while (uVar9 != 0);
      puVar8 = puVar3;
      if (uVar2 == uVar5) goto LAB_002134b4;
    }
    do {
      puVar11 = puVar4 + 1;
      puVar3 = puVar8 + 1;
      *puVar8 = *puVar4;
      puVar8 = puVar3;
      puVar4 = puVar11;
    } while (puVar10 != puVar11);
  }
  else {
    puVar11 = *(undefined1 **)(param_2 + 0x30);
    puVar10 = *(undefined1 **)(param_2 + 0x60);
    if (*(undefined1 **)(param_2 + 0x60) < puVar11) {
      *(undefined1 **)(param_2 + 0x60) = puVar11;
      puVar10 = puVar11;
    }
    puVar11 = *(undefined1 **)(param_2 + 0x28);
    uVar2 = (long)puVar10 - (long)puVar11;
    plVar1 = *(long **)(param_2 + 0x58);
    param_1[3] = (ulong)plVar1;
    if (0xffffffffffffffef < uVar2) goto LAB_002134c8;
    if (uVar2 < 0x17) {
      puVar8 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar2 << 1);
    }
    else {
      uVar9 = uVar2 + 0x10 & 0xfffffffffffffff0;
      puVar8 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar9,1);
      param_1[1] = uVar2;
      param_1[2] = (ulong)puVar8;
      *param_1 = uVar9 | 1;
    }
    if (puVar11 == puVar10) goto LAB_00213424;
    if ((uVar2 < 0x40) || ((puVar8 < puVar10 && (puVar11 < puVar8 + uVar2)))) {
      puVar4 = puVar11;
    }
    else {
      uVar5 = uVar2 & 0xffffffffffffffc0;
      puVar4 = puVar11 + uVar5;
      puVar3 = puVar8 + uVar5;
      puVar6 = (undefined8 *)(puVar8 + 0x20);
      puVar7 = (undefined8 *)(puVar11 + 0x20);
      uVar9 = uVar5;
      do {
        uVar12 = puVar7[-4];
        uVar14 = puVar7[-1];
        uVar13 = puVar7[-2];
        uVar9 = uVar9 - 0x40;
        uVar16 = puVar7[1];
        uVar15 = *puVar7;
        uVar18 = puVar7[3];
        uVar17 = puVar7[2];
        puVar6[-3] = puVar7[-3];
        puVar6[-4] = uVar12;
        puVar6[-1] = uVar14;
        puVar6[-2] = uVar13;
        puVar6[1] = uVar16;
        *puVar6 = uVar15;
        puVar6[3] = uVar18;
        puVar6[2] = uVar17;
        puVar6 = puVar6 + 8;
        puVar7 = puVar7 + 8;
      } while (uVar9 != 0);
      puVar8 = puVar3;
      if (uVar5 == uVar2) goto LAB_002134b4;
    }
    do {
      puVar11 = puVar4 + 1;
      puVar3 = puVar8 + 1;
      *puVar8 = *puVar4;
      puVar8 = puVar3;
      puVar4 = puVar11;
    } while (puVar10 != puVar11);
  }
LAB_002134b4:
  *puVar3 = 0;
  return;
}


