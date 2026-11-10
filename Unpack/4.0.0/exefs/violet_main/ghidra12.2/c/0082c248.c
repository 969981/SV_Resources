/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0082c248; name: FUN_0082c248
 */


void FUN_0082c248(long param_1)

{
  uint uVar1;
  void *__src;
  uint uVar2;
  undefined *puVar3;
  void *__dest;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x108) != '\0') {
    plVar7 = (long *)(param_1 + 0xc0);
    puVar4 = (undefined8 *)(*plVar7 + (long)plVar7);
    if ((((float)puVar4[0x12] < (float)puVar4[0x10] &&
         (float)((ulong)puVar4[0x12] >> 0x20) < (float)((ulong)puVar4[0x10] >> 0x20)) &&
        (float)puVar4[0x13] < (float)puVar4[0x11]) &&
        (float)((ulong)puVar4[0x13] >> 0x20) < (float)((ulong)puVar4[0x11] >> 0x20)) {
      uVar2 = *(uint *)(param_1 + 200);
      if (uVar2 != 2) {
        uVar6 = *(uint *)(param_1 + 0xcc);
        if (*(uint *)(param_1 + 0xcc) == 0) {
          *(uint *)(param_1 + 0xcc) = uVar2;
          uVar6 = uVar2;
        }
        puVar3 = PTR_DAT_047d1a08;
        if ((int)uVar2 < 2) {
          uVar1 = uVar6 & 0x7fffffff;
          if ((int)(uVar6 & 0x7fffffff) <= (int)uVar2) {
            uVar1 = uVar2;
          }
          if ((int)uVar1 < 2) {
            local_38 = 0x100;
            __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
            __src = (void *)0x0;
            if (*(long *)(param_1 + 0xc0) != 0) {
              __src = (void *)(*(long *)(param_1 + 0xc0) + (long)plVar7);
            }
            memcpy(__dest,__src,(long)*(int *)(param_1 + 200) << 7);
            if (*(int *)(param_1 + 0xcc) < 0) {
              lVar5 = 0;
              if (*plVar7 != 0) {
                lVar5 = *plVar7 + (long)plVar7;
              }
              (**(code **)(puVar3 + 8))(0,lVar5,0);
            }
            lVar5 = 0;
            if (__dest != (void *)0x0) {
              lVar5 = (long)__dest - (long)plVar7;
            }
            *(long *)(param_1 + 0xc0) = lVar5;
            puVar4 = (undefined8 *)(lVar5 + (long)plVar7);
            *(undefined4 *)(param_1 + 0xcc) = 0x80000002;
          }
        }
        *(undefined4 *)(param_1 + 200) = 2;
      }
      puVar3 = PTR_DAT_047d19b0;
      *(undefined2 *)(puVar4 + 0xe) = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      uVar9 = *(undefined8 *)(puVar3 + 0x248);
      uVar8 = *(undefined8 *)(puVar3 + 0x240);
      uVar11 = *(undefined8 *)(puVar3 + 0x298);
      uVar10 = *(undefined8 *)(puVar3 + 0x290);
      puVar4[1] = uVar9;
      *puVar4 = uVar8;
      puVar4[3] = uVar11;
      puVar4[2] = uVar10;
      puVar4[5] = uVar9;
      puVar4[4] = uVar8;
      puVar4[7] = uVar11;
      puVar4[6] = uVar10;
      puVar4[9] = uVar9;
      puVar4[8] = uVar8;
      puVar4[0xb] = uVar11;
      puVar4[10] = uVar10;
      lVar5 = *(long *)(param_1 + 0xc0);
      *(undefined8 *)((long)plVar7 + lVar5 + 0xe0) = 0;
      *(undefined8 *)((long)plVar7 + lVar5 + 0xe8) = 0;
      *(undefined2 *)((long)plVar7 + lVar5 + 0xf0) = 0;
      *(undefined8 *)((long)plVar7 + lVar5 + 0x88) = uVar9;
      *(undefined8 *)((long)plVar7 + lVar5 + 0x80) = uVar8;
      *(undefined8 *)((long)plVar7 + lVar5 + 0x98) = uVar11;
      *(undefined8 *)((long)plVar7 + lVar5 + 0x90) = uVar10;
      *(undefined8 *)((long)plVar7 + lVar5 + 0xa8) = uVar9;
      *(undefined8 *)((long)plVar7 + lVar5 + 0xa0) = uVar8;
      *(undefined8 *)((long)plVar7 + lVar5 + 0xb8) = uVar11;
      *(undefined8 *)((long)plVar7 + lVar5 + 0xb0) = uVar10;
      *(undefined8 *)((long)plVar7 + lVar5 + 200) = uVar9;
      *(undefined8 *)((long)plVar7 + lVar5 + 0xc0) = uVar8;
      *(undefined8 *)((long)plVar7 + lVar5 + 0xd8) = uVar11;
      *(undefined8 *)((long)plVar7 + lVar5 + 0xd0) = uVar10;
      *(undefined1 *)(param_1 + 0xd0) = 1;
      FUN_0082c3d0(param_1 + 0x20,plVar7);
    }
  }
  return;
}


