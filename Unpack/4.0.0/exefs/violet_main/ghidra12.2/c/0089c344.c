/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089c344; name: FUN_0089c344
 */


void FUN_0089c344(long *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *__s;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar3 = PTR_DAT_047d2268;
  puVar2 = PTR_DAT_047d2258;
  for (lVar11 = *(long *)(param_2 + 8); param_2 != lVar11; lVar11 = *(long *)(lVar11 + 8)) {
    plVar4 = (long *)(**(code **)puVar2)(0x20,4,*(undefined8 *)puVar3);
    if (plVar4 != (long *)0x0) {
      plVar4[2] = 0;
      plVar4[3] = 0;
      *plVar4 = (long)plVar4;
      plVar4[1] = (long)plVar4;
    }
    uVar1 = *(uint *)(lVar11 + 0x20);
    *(uint *)(plVar4 + 2) = uVar1;
    lVar5 = (**(code **)puVar2)((long)(int)uVar1 << 4,4,*(undefined8 *)puVar3);
    if ((lVar5 != 0) && (uVar9 = (ulong)uVar1, 0 < (int)uVar1)) {
      uVar6 = uVar9 & 3;
      if (uVar9 - 1 < 3) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        puVar10 = (undefined4 *)(lVar5 + 0x20);
        do {
          uVar7 = uVar7 + 4;
          puVar10[-8] = 0;
          *(undefined8 *)(puVar10 + -6) = 0;
          puVar10[-4] = 0;
          *(undefined8 *)(puVar10 + -2) = 0;
          *puVar10 = 0;
          *(undefined8 *)(puVar10 + 2) = 0;
          puVar10[4] = 0;
          *(undefined8 *)(puVar10 + 6) = 0;
          puVar10 = puVar10 + 0x10;
        } while ((uVar9 & 0xfffffffc) != uVar7);
      }
      if ((uVar1 & 3) != 0) {
        puVar8 = (undefined8 *)(lVar5 + uVar7 * 0x10 + 8);
        do {
          *(undefined4 *)(puVar8 + -1) = 0;
          uVar6 = uVar6 - 1;
          *puVar8 = 0;
          puVar8 = puVar8 + 2;
        } while (uVar6 != 0);
      }
    }
    plVar4[3] = lVar5;
    if (0 < (int)plVar4[2]) {
      lVar12 = 0;
      lVar13 = 1;
      while( true ) {
        uVar1 = *(uint *)(*(long *)(lVar11 + 0x28) + lVar12 + 4);
        *(uint *)(lVar5 + lVar12) = uVar1;
        __s = (void *)(**(code **)puVar2)((long)(int)uVar1 << 2,4,*(undefined8 *)puVar3);
        if ((__s != (void *)0x0) && (0 < (int)uVar1)) {
          memset(__s,0,(ulong)uVar1 << 2);
        }
        *(void **)(plVar4[3] + lVar12 + 8) = __s;
        if ((int)plVar4[2] <= lVar13) break;
        lVar5 = plVar4[3];
        lVar12 = lVar12 + 0x10;
        lVar13 = lVar13 + 1;
      }
    }
    lVar5 = *plVar4;
    *plVar4 = *param_1;
    *(long **)(lVar5 + 8) = param_1;
    *(long **)(*param_1 + 8) = plVar4;
    *param_1 = lVar5;
  }
  return;
}


