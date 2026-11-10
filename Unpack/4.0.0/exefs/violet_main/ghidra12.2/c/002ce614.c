/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ce614; name: FUN_002ce614
 */


void FUN_002ce614(ulong *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if ((*(uint *)(param_2 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x60) >> 3 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    puVar10 = *(undefined1 **)(param_2 + 0x10);
    puVar8 = *(undefined1 **)(param_2 + 0x20);
    uVar9 = (long)puVar8 - (long)puVar10;
    if (0xffffffffffffffef < uVar9) {
LAB_002ce830:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar9 < 0x17) {
      puVar6 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar9 << 1);
    }
    else {
      uVar7 = uVar9 + 0x10 & 0xfffffffffffffff0;
      puVar6 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      param_1[1] = uVar9;
      param_1[2] = (ulong)puVar6;
      *param_1 = uVar7 | 1;
    }
    if (puVar10 == puVar8) {
LAB_002ce78c:
      *puVar6 = 0;
      return;
    }
    if ((uVar9 < 0x40) || ((puVar6 < puVar8 && (puVar10 < puVar6 + uVar9)))) {
      puVar2 = puVar10;
    }
    else {
      uVar3 = uVar9 & 0xffffffffffffffc0;
      puVar2 = puVar10 + uVar3;
      puVar1 = puVar6 + uVar3;
      puVar4 = (undefined8 *)(puVar6 + 0x20);
      puVar5 = (undefined8 *)(puVar10 + 0x20);
      uVar7 = uVar3;
      do {
        uVar12 = puVar5[-3];
        uVar11 = puVar5[-4];
        uVar14 = puVar5[-1];
        uVar13 = puVar5[-2];
        uVar7 = uVar7 - 0x40;
        uVar15 = *puVar5;
        uVar17 = puVar5[3];
        uVar16 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar15;
        puVar4[3] = uVar17;
        puVar4[2] = uVar16;
        puVar4[-3] = uVar12;
        puVar4[-4] = uVar11;
        puVar4[-1] = uVar14;
        puVar4[-2] = uVar13;
        puVar4 = puVar4 + 8;
        puVar5 = puVar5 + 8;
      } while (uVar7 != 0);
      puVar6 = puVar1;
      if (uVar9 == uVar3) goto LAB_002ce81c;
    }
    do {
      puVar10 = puVar2 + 1;
      puVar1 = puVar6 + 1;
      *puVar6 = *puVar2;
      puVar6 = puVar1;
      puVar2 = puVar10;
    } while (puVar8 != puVar10);
  }
  else {
    puVar10 = *(undefined1 **)(param_2 + 0x30);
    puVar8 = *(undefined1 **)(param_2 + 0x58);
    if (*(undefined1 **)(param_2 + 0x58) < puVar10) {
      *(undefined1 **)(param_2 + 0x58) = puVar10;
      puVar8 = puVar10;
    }
    puVar10 = *(undefined1 **)(param_2 + 0x28);
    uVar9 = (long)puVar8 - (long)puVar10;
    if (0xffffffffffffffef < uVar9) goto LAB_002ce830;
    if (uVar9 < 0x17) {
      puVar6 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar9 << 1);
    }
    else {
      uVar7 = uVar9 + 0x10 & 0xfffffffffffffff0;
      puVar6 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      param_1[1] = uVar9;
      param_1[2] = (ulong)puVar6;
      *param_1 = uVar7 | 1;
    }
    if (puVar10 == puVar8) goto LAB_002ce78c;
    if ((uVar9 < 0x40) || ((puVar6 < puVar8 && (puVar10 < puVar6 + uVar9)))) {
      puVar2 = puVar10;
    }
    else {
      uVar3 = uVar9 & 0xffffffffffffffc0;
      puVar2 = puVar10 + uVar3;
      puVar1 = puVar6 + uVar3;
      puVar4 = (undefined8 *)(puVar6 + 0x20);
      puVar5 = (undefined8 *)(puVar10 + 0x20);
      uVar7 = uVar3;
      do {
        uVar11 = puVar5[-4];
        uVar13 = puVar5[-1];
        uVar12 = puVar5[-2];
        uVar7 = uVar7 - 0x40;
        uVar15 = puVar5[1];
        uVar14 = *puVar5;
        uVar17 = puVar5[3];
        uVar16 = puVar5[2];
        puVar4[-3] = puVar5[-3];
        puVar4[-4] = uVar11;
        puVar4[-1] = uVar13;
        puVar4[-2] = uVar12;
        puVar4[1] = uVar15;
        *puVar4 = uVar14;
        puVar4[3] = uVar17;
        puVar4[2] = uVar16;
        puVar4 = puVar4 + 8;
        puVar5 = puVar5 + 8;
      } while (uVar7 != 0);
      puVar6 = puVar1;
      if (uVar3 == uVar9) goto LAB_002ce81c;
    }
    do {
      puVar10 = puVar2 + 1;
      puVar1 = puVar6 + 1;
      *puVar6 = *puVar2;
      puVar6 = puVar1;
      puVar2 = puVar10;
    } while (puVar8 != puVar10);
  }
LAB_002ce81c:
  *puVar1 = 0;
  return;
}


