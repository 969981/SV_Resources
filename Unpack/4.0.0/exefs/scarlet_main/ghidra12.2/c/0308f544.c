/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308f544; name: FUN_0308f544
 */


void FUN_0308f544(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar8 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar8 = FUN_0307d71c();
  }
  iVar6 = *(int *)(lVar8 + 0xf8);
  lVar9 = (long)iVar6 + (long)(int)param_3;
  iVar10 = (int)lVar9;
  if ((int)(*(uint *)(lVar8 + 0xfc) & 0x7fffffff) < iVar10) {
    FUN_02e8df28((long *)(lVar8 + 0xf0),PTR_PTR_047d1a50,lVar9);
  }
  if (0 < (int)param_3) {
    puVar5 = (undefined8 *)(*(long *)(lVar8 + 0xf0) + (long)iVar6 * 0x10);
    if (param_3 != 1) {
      iVar6 = -(param_3 & 0xfffffffe);
      puVar4 = puVar5;
      do {
        puVar4[1] = param_2[1];
        *puVar4 = *param_2;
        puVar4[3] = param_2[3];
        puVar1 = param_2 + 2;
        puVar5 = puVar4 + 4;
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 2;
        puVar4[2] = *puVar1;
        puVar4 = puVar5;
      } while (iVar6 != 0);
    }
    if ((param_3 & 1) != 0) {
      puVar5[1] = param_2[1];
      *puVar5 = *param_2;
    }
  }
  *(int *)(lVar8 + 0xf8) = iVar10;
  puVar2 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar7 = *(long **)(param_1 + 0x38);
    lVar8 = (long)*(int *)(param_1 + 0x40) * 0x18;
    do {
      lVar9 = *plVar7;
      if (lVar9 != 0) {
        if ((char)plVar7[2] != '\x01') {
          lVar9 = FUN_03065a74(plVar7);
        }
        if (*(float *)(lVar9 + 0x1c) + 0.001 < *(float *)(lVar9 + 0x18)) {
          uVar3 = *(uint *)(lVar9 + 0x68);
          iVar6 = uVar3 + param_3;
          if ((int)(*(uint *)(lVar9 + 0x6c) & 0x7fffffff) < iVar6) {
            FUN_00cb58c0(lVar9 + 0x60,puVar2,(long)iVar6);
            uVar3 = *(uint *)(lVar9 + 0x68);
          }
          if ((int)uVar3 < iVar6) {
            *(int *)(lVar9 + 0x68) = iVar6;
            memset((void *)(*(long *)(lVar9 + 0x60) + (long)(int)uVar3),0xff,
                   (ulong)(iVar6 + ~uVar3) + 1);
          }
          else if (iVar6 < (int)uVar3) {
            *(int *)(lVar9 + 0x68) = iVar6;
          }
        }
      }
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  return;
}


