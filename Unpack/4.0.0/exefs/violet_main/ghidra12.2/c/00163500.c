/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00163500; name: FUN_00163500
 */


/* WARNING: Removing unreachable block (ram,0x001635d4) */

undefined8 FUN_00163500(long *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar1 = param_1[0x1e];
  if ((long)uVar1 < param_1[0x1d]) {
    param_1[0x1e] = uVar1 + 1;
    lVar6 = param_1[0x18];
    puVar3 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x70,0x10);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_0015ed40(0x70);
    }
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 0xd) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    FUN_001621e0(puVar3,param_1[0x19] + lVar6 * uVar1,param_1[0x18],(int)param_1[0x1b],
                 *(undefined4 *)((long)param_1 + 0xdc),*(undefined4 *)((long)param_1 + 0xe4));
    puVar2 = PTR_PTR_047cb898;
    uVar10 = uVar1;
    if ((uVar1 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      uVar8 = 1;
      puVar7 = puVar3;
      plVar9 = param_1;
      do {
        puVar3 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x70,0x10);
        if (puVar3 == (undefined8 *)0x0) {
          FUN_0015ed40(0x70);
        }
        *(undefined4 *)(puVar3 + 4) = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined4 *)(puVar3 + 0xd) = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        FUN_001631a0(puVar3,*(undefined8 *)(*plVar9 + uVar10 * 8 + -8),puVar7,
                     *(int *)((long)param_1 + 0xdc) + (int)param_1[0x1c] * ((int)uVar8 + -1));
        if (puVar7[5] != 0) {
          (**(code **)puVar2)();
          puVar7[5] = 0;
        }
        puVar7[0xc] = 0;
        if (puVar7[10] != 0) {
          (**(code **)puVar2)();
        }
        puVar7[10] = 0;
        puVar7[0xb] = 0;
        puVar7[3] = 0;
        if (puVar7[1] != 0) {
          (**(code **)puVar2)();
        }
        puVar7[1] = 0;
        puVar7[2] = 0;
        (**(code **)puVar2)(puVar7);
        uVar10 = (long)uVar1 >> (uVar8 & 0x3f);
        uVar8 = uVar8 + 1;
        plVar9 = plVar9 + 3;
        if ((uVar10 & 1) == 0) {
          iVar5 = (int)uVar8 + -1;
          goto LAB_001636cc;
        }
        puVar7 = puVar3;
      } while (uVar8 != 8);
      iVar5 = 7;
    }
LAB_001636cc:
    uVar4 = 1;
    *(undefined8 **)(param_1[(long)iVar5 * 3] + uVar10 * 8) = puVar3;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


