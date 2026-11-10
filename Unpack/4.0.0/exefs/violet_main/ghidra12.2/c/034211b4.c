/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034211b4; name: FUN_034211b4
 */


void FUN_034211b4(float param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  puVar5 = PTR_DAT_047e6cb8;
  puVar4 = PTR_DAT_047e6958;
  puVar3 = PTR_DAT_047e2fd0;
  plVar7 = *(long **)(param_3 + 0x30);
  if (plVar7 != (long *)0x0) {
    if (*(char *)((long)plVar7 + 0xe1) == '\0') {
      puVar1 = PTR_DAT_047e6e40 + 0x10;
      plVar7 = *(long **)PTR_DAT_047e6cb8;
      puVar2 = PTR_DAT_047e6e48 + 0x10;
      do {
        if (plVar7 == (long *)0x0) {
          plVar7 = (long *)(**(code **)(puVar3 + 0x10))(4,0xf0);
          *plVar7 = (long)puVar1;
          plVar7[1] = 0;
          lVar6 = *(long *)(puVar4 + 8);
          plVar7[2] = 0;
          plVar7[3] = lVar6;
          plVar8 = (long *)(puVar4 + 0x10);
          if (*(long *)(puVar4 + 0x10) != 0) {
            plVar8 = (long *)(lVar6 + 0x10);
          }
          *plVar8 = (long)plVar7;
          *(long **)(puVar4 + 8) = plVar7;
          *(int *)puVar4 = *(int *)puVar4 + 1;
          *plVar7 = (long)puVar2;
          plVar7[8] = 0;
          plVar7[9] = 0;
          plVar7[0xc] = 0;
          plVar7[0xd] = 0;
          plVar7[0x12] = 0;
          plVar7[0x13] = 0;
          plVar7[0x16] = 0;
          plVar7[0x17] = 0;
          plVar7[0x1a] = 0;
          plVar7[0x1b] = 0;
          *(long **)puVar5 = plVar7;
          *(undefined2 *)(plVar7 + 0x1c) = 0x101;
        }
      } while (*(char *)((long)plVar7 + 0xe1) == '\0');
    }
    if ((int)plVar7[0x17] != 0) {
      plVar8 = (long *)plVar7[0x16];
      do {
        lVar6 = -4;
        if (*(long *)(param_2 + 0x70) != -1) {
          lVar6 = *(long *)(param_2 + 0x70);
        }
        if ((*plVar8 != lVar6) && (lVar6 = FUN_034ebf54(param_5,param_4,*plVar8,0), lVar6 != 0)) {
          *(float *)(lVar6 + 0x48) = param_1 * 100.0;
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != (long *)(plVar7[0x16] + (ulong)*(uint *)(plVar7 + 0x17) * 8));
    }
    if (0.0 < *(float *)(param_2 + 0xa4)) {
      lVar6 = -4;
      if (*(long *)(param_2 + 0x70) != -1) {
        lVar6 = *(long *)(param_2 + 0x70);
      }
      lVar6 = FUN_034ebf54(param_5,param_4,lVar6,0);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x44) = 0;
      }
    }
  }
  return;
}


