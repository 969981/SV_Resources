/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001a0a50; name: FUN_001a0a50
 */


long FUN_001a0a50(uint *param_1,uint *param_2,long param_3,long param_4,long param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  
  if (param_4 == 0) {
    return 0;
  }
  lVar4 = param_4 + -4;
  if (param_5 + 1 < 0xc00000) {
    iVar8 = 0;
    puVar10 = param_1;
    if (lVar4 < 0) {
      lVar4 = 0;
      if (param_4 < 1) goto LAB_001a0cf8;
    }
    else {
      if ((uint *)((long)param_1 + 0xdU) <= param_2) {
        lVar7 = 0;
        puVar9 = param_1;
        do {
          if (param_5 < (long)((ulong)*puVar9 & 0xffffff)) {
LAB_001a0d24:
            FUN_0015c3d0();
            pcVar5 = *(code **)PTR_PTR_047cb868;
            if (pcVar5 == (code *)0x0) goto LAB_001a0e04;
            pcVar3 = "OODLE ERROR : corruption : (SINTa)off24 <= max_offset\n";
            uVar2 = 0xcbb;
            goto LAB_001a0dfc;
          }
          *(int *)(param_3 + lVar7 * 4) = (int)((ulong)*puVar9 & 0xffffff);
          uVar6 = (ulong)*(uint *)((long)puVar9 + 3) & 0xffffff;
          if (param_5 < (long)uVar6) goto LAB_001a0d24;
          iVar8 = (int)lVar7;
          *(int *)(param_3 + (long)(iVar8 + 1) * 4) = (int)uVar6;
          uVar6 = (ulong)*(uint *)((long)puVar9 + 6) & 0xffffff;
          if (param_5 < (long)uVar6) goto LAB_001a0d24;
          *(int *)(param_3 + (long)(iVar8 + 2) * 4) = (int)uVar6;
          uVar6 = (ulong)*(uint *)((long)puVar9 + 9) & 0xffffff;
          if (param_5 < (long)uVar6) goto LAB_001a0d24;
          *(int *)(param_3 + (long)(iVar8 + 3) * 4) = (int)uVar6;
          iVar8 = iVar8 + 4;
          lVar7 = (long)iVar8;
          puVar10 = puVar9 + 3;
        } while ((lVar7 <= lVar4) &&
                (puVar1 = (uint *)((long)puVar9 + 0x19), puVar9 = puVar10, puVar1 <= param_2));
      }
      lVar4 = (long)iVar8;
      if (param_4 <= lVar4) goto LAB_001a0cf8;
    }
    iVar8 = (int)lVar4;
    puVar9 = puVar10;
    do {
      iVar8 = iVar8 + 1;
      puVar10 = (uint *)((long)puVar9 + 3);
      if (param_2 < puVar10) {
        FUN_0015c3d0();
        pcVar5 = *(code **)PTR_PTR_047cb868;
        if (pcVar5 == (code *)0x0) goto LAB_001a0e04;
        pcVar3 = "OODLE ERROR : corruption : (comp_ptr+3 <= comp_end)\n";
        uVar2 = 0xcc2;
        goto LAB_001a0dfc;
      }
      uVar6 = (ulong)*(byte *)((long)puVar9 + 2) << 0x10 | (ulong)*(byte *)((long)puVar9 + 1) << 8 |
              (ulong)(byte)*puVar9;
      if (param_5 < (long)uVar6) {
        FUN_0015c3d0();
        pcVar5 = *(code **)PTR_PTR_047cb868;
        if (pcVar5 == (code *)0x0) goto LAB_001a0e04;
        pcVar3 = "OODLE ERROR : corruption : (SINTa)off24 <= max_offset\n";
        uVar2 = 0xcc7;
LAB_001a0dfc:
        (*pcVar5)(0,"v:\\devel\\projects\\oodle2\\core\\newlzf.cpp",uVar2,pcVar3);
LAB_001a0e04:
        FUN_0015c3f0();
        return -1;
      }
      *(int *)(param_3 + lVar4 * 4) = (int)uVar6;
      lVar4 = (long)iVar8;
      puVar9 = puVar10;
    } while (lVar4 < param_4);
  }
  else {
    iVar8 = 0;
    puVar9 = param_1;
    if (lVar4 < 0) {
      lVar4 = 0;
      if (param_4 < 1) goto LAB_001a0d14;
    }
    else {
      if (param_1 + 4 <= param_2) {
        lVar7 = 0;
        do {
          puVar10 = (uint *)((long)puVar9 + 3);
          uVar6 = (ulong)*puVar9 & 0xffffff;
          if (0xbfffff < (uint)uVar6) {
            uVar6 = uVar6 + (ulong)*(byte *)((long)puVar9 + 3) * 0x400000;
            if ((long)uVar6 <= param_5) {
              puVar10 = puVar9 + 1;
              goto LAB_001a0bbc;
            }
LAB_001a0d50:
            FUN_0015c3d0();
            pcVar5 = *(code **)PTR_PTR_047cb868;
            if (pcVar5 == (code *)0x0) goto LAB_001a0e04;
            pcVar3 = "OODLE ERROR : corruption : (SINTa)off24 <= max_offset\n";
            uVar2 = 0xcdd;
            goto LAB_001a0dfc;
          }
LAB_001a0bbc:
          *(int *)(param_3 + lVar7 * 4) = (int)uVar6;
          puVar9 = (uint *)((long)puVar10 + 3);
          uVar6 = (ulong)*puVar10 & 0xffffff;
          if (0xbfffff < (uint)uVar6) {
            uVar6 = uVar6 + (ulong)*(byte *)((long)puVar10 + 3) * 0x400000;
            if (param_5 < (long)uVar6) goto LAB_001a0d50;
            puVar9 = puVar10 + 1;
          }
          iVar8 = (int)lVar7;
          *(int *)(param_3 + (long)(iVar8 + 1) * 4) = (int)uVar6;
          puVar10 = (uint *)((long)puVar9 + 3);
          uVar6 = (ulong)*puVar9 & 0xffffff;
          if (0xbfffff < (uint)uVar6) {
            uVar6 = uVar6 + (ulong)*(byte *)((long)puVar9 + 3) * 0x400000;
            if (param_5 < (long)uVar6) goto LAB_001a0d50;
            puVar10 = puVar9 + 1;
          }
          *(int *)(param_3 + (long)(iVar8 + 2) * 4) = (int)uVar6;
          puVar9 = (uint *)((long)puVar10 + 3);
          uVar6 = (ulong)*puVar10 & 0xffffff;
          if (0xbfffff < (uint)uVar6) {
            uVar6 = uVar6 + (ulong)*(byte *)((long)puVar10 + 3) * 0x400000;
            if (param_5 < (long)uVar6) goto LAB_001a0d50;
            puVar9 = puVar10 + 1;
          }
          *(int *)(param_3 + (long)(iVar8 + 3) * 4) = (int)uVar6;
          iVar8 = iVar8 + 4;
          lVar7 = (long)iVar8;
        } while ((lVar7 <= lVar4) && (puVar9 + 4 <= param_2));
      }
      lVar4 = (long)iVar8;
      if (param_4 <= lVar4) {
LAB_001a0d14:
        return (long)puVar9 - (long)param_1;
      }
    }
    iVar8 = (int)lVar4;
    do {
      iVar8 = iVar8 + 1;
      puVar10 = (uint *)((long)puVar9 + 3);
      if (param_2 < puVar10) {
        FUN_0015c3d0();
        pcVar5 = *(code **)PTR_PTR_047cb868;
        if (pcVar5 == (code *)0x0) goto LAB_001a0e04;
        pcVar3 = "OODLE ERROR : corruption : (comp_ptr+3 <= comp_end)\n";
        uVar2 = 0xce5;
        goto LAB_001a0dfc;
      }
      uVar6 = (ulong)*(byte *)((long)puVar9 + 2) << 0x10 | (ulong)*(byte *)((long)puVar9 + 1) << 8 |
              (ulong)(byte)*puVar9;
      if (0xbfffff < (uint)uVar6) {
        if (param_2 <= puVar10) {
          FUN_0015c3d0();
          pcVar5 = *(code **)PTR_PTR_047cb868;
          if (pcVar5 == (code *)0x0) goto LAB_001a0e04;
          pcVar3 = "OODLE ERROR : corruption : comp_ptr < comp_end\n";
          uVar2 = 0xcf0;
          goto LAB_001a0dfc;
        }
        uVar6 = uVar6 + (ulong)*(byte *)puVar10 * 0x400000;
        if (param_5 < (long)uVar6) {
          FUN_0015c3d0();
          pcVar5 = *(code **)PTR_PTR_047cb868;
          if (pcVar5 == (code *)0x0) goto LAB_001a0e04;
          pcVar3 = "OODLE ERROR : corruption : (SINTa)off24 <= max_offset\n";
          uVar2 = 0xcf4;
          goto LAB_001a0dfc;
        }
        puVar10 = puVar9 + 1;
      }
      *(int *)(param_3 + lVar4 * 4) = (int)uVar6;
      lVar4 = (long)iVar8;
      puVar9 = puVar10;
    } while (lVar4 < param_4);
  }
LAB_001a0cf8:
  return (long)puVar10 - (long)param_1;
}


