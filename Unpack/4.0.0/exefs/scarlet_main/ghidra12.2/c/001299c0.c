/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001299c0; name: FUN_001299c0
 */


void FUN_001299c0(long param_1,undefined8 *param_2,int param_3,int param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
  while ((lVar2 != 0 && (param_2 <= *(undefined8 **)(lVar2 + 0x10)))) {
    plVar4 = (long *)(lVar2 + 0x18);
    **(long **)(lVar2 + 0x20) = *plVar4;
    if (*plVar4 != 0) {
      *(undefined8 *)(*plVar4 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    }
    lVar3 = **(long **)(lVar2 + 0x10);
    *(long *)(lVar2 + 0x18) = lVar3;
    bVar1 = *(byte *)(*(long **)(lVar2 + 0x10) + 1);
    *(long **)(lVar2 + 0x10) = plVar4;
    *(byte *)(lVar2 + 0x20) = bVar1;
    if ((((*(byte *)(lVar2 + 9) & 0x18) == 0) &&
        (*(byte *)(lVar2 + 9) = *(byte *)(lVar2 + 9) | 0x20, (bVar1 >> 6 & 1) != 0)) &&
       ((*(byte *)(lVar3 + 9) & 0x18) != 0)) {
      FUN_00129d70(param_1);
    }
    lVar2 = *(long *)(param_1 + 0x38);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x40);
  if (param_2 <= puVar6) {
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    lVar8 = (long)param_2 - lVar8;
    if (param_3 == -1) {
      do {
        for (puVar7 = puVar6 + (ulong)*(ushort *)((long)puVar6 + 10) * -2;
            (puVar5 < puVar7 && (*(short *)((long)puVar7 + 10) == 0)); puVar7 = puVar7 + -0x1fffe) {
        }
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        lVar2 = *(long *)(param_1 + 0x18);
        *(undefined8 **)(param_1 + 0x40) = puVar7;
        puVar7 = (undefined8 *)FUN_0013df20(param_1,puVar6,0x18);
        *puVar5 = *puVar7;
        *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar7 + 1);
        puVar5[2] = *puVar6;
        *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(puVar6 + 1);
        puVar5[4] = *(undefined8 *)(lVar2 + 0x50);
        *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(lVar2 + 0x58);
        *(undefined8 **)(param_1 + 0x10) = puVar5 + 6;
        if (param_4 == 0) {
          FUN_00127da0(param_1,puVar5,0);
        }
        else {
          FUN_00127d10();
        }
        puVar5 = *(undefined8 **)(param_1 + 0x30);
        puVar6 = *(undefined8 **)(param_1 + 0x40);
      } while ((undefined8 *)((long)puVar5 + lVar8) <= puVar6);
    }
    else {
      do {
        for (puVar7 = puVar6 + (ulong)*(ushort *)((long)puVar6 + 10) * -2;
            (puVar5 < puVar7 && (*(short *)((long)puVar7 + 10) == 0)); puVar7 = puVar7 + -0x1fffe) {
        }
        *(undefined8 **)(param_1 + 0x40) = puVar7;
        FUN_00126b30(param_1,param_3,puVar6 + 2);
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        puVar5 = (undefined8 *)FUN_0013df20(param_1,puVar6,0x18);
        *puVar7 = *puVar5;
        *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar5 + 1);
        puVar7[2] = *puVar6;
        *(undefined1 *)(puVar7 + 3) = *(undefined1 *)(puVar6 + 1);
        puVar7[4] = puVar6[2];
        *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(puVar6 + 3);
        *(undefined8 **)(param_1 + 0x10) = puVar7 + 6;
        if (param_4 == 0) {
          FUN_00127da0(param_1,puVar7,0);
        }
        else {
          FUN_00127d10();
        }
        puVar5 = *(undefined8 **)(param_1 + 0x30);
        puVar6 = *(undefined8 **)(param_1 + 0x40);
      } while ((undefined8 *)((long)puVar5 + lVar8) <= puVar6);
    }
  }
  return;
}


