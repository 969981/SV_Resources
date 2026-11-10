/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348a328; name: FUN_0348a328
 */


void FUN_0348a328(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_047c3018;
  if ((((param_1[0x33] != 0) && (lVar6 = *(long *)(param_1[0x33] + 0x178), lVar6 != 0)) &&
      (plVar5 = *(long **)(lVar6 + 0x60), plVar5 != (long *)0x0)) && (*(int *)(param_1 + 0x31) == 1)
     ) {
    (**(code **)(*plVar5 + 0x48))(plVar5,param_1);
  }
  if (*(int *)(param_1 + 0x31) != 0) {
    iVar7 = *(int *)(param_1 + 0x31) + -1;
    do {
      FUN_0348a520(param_1 + 5,iVar7);
      iVar7 = iVar7 + -1;
    } while (iVar7 != -1);
  }
  puVar4 = PTR_PTR_047e71e0;
  puVar3 = PTR_DAT_047e2fd0;
  puVar8 = (undefined8 *)param_1[0x30];
  if (puVar8 != (undefined8 *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x31);
    if (uVar2 != 0) {
      lVar6 = 0;
      do {
        if (*(long *)((long)puVar8 + lVar6 + 0x128) != 0) {
          (**(code **)(puVar3 + 0x30))(5);
        }
        *(undefined8 *)((long)puVar8 + lVar6 + 0x128) = 0;
        *(undefined4 *)((long)puVar8 + lVar6 + 0x130) = 0;
        *(undefined8 *)((long)puVar8 + lVar6 + 0x138) = 0;
        *(undefined8 *)((long)puVar8 + lVar6 + 0x140) = 0;
        if (*(long *)((long)puVar8 + lVar6 + 0xc0) != 0) {
          (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
          *(undefined8 *)((long)puVar8 + lVar6 + 0xc0) = 0;
          *(undefined4 *)((long)puVar8 + lVar6 + 200) = 0;
        }
        if (*(long *)((long)puVar8 + lVar6 + 0xd0) != 0) {
          (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
          *(undefined8 *)((long)puVar8 + lVar6 + 0xd0) = 0;
          *(undefined4 *)((long)puVar8 + lVar6 + 0xd8) = 0;
        }
        if (*(long *)((long)puVar8 + lVar6 + 0xe0) != 0) {
          (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
          *(undefined8 *)((long)puVar8 + lVar6 + 0xe0) = 0;
          *(undefined4 *)((long)puVar8 + lVar6 + 0xe8) = 0;
        }
        if (*(long *)((long)puVar8 + lVar6 + 0xf0) != 0) {
          (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
          *(undefined8 *)((long)puVar8 + lVar6 + 0xf0) = 0;
          *(undefined4 *)((long)puVar8 + lVar6 + 0xf8) = 0;
        }
        if (*(long *)((long)puVar8 + lVar6 + 0x88) != 0) {
          *(undefined4 *)((long)puVar8 + lVar6 + 0x90) = 0;
          (**(code **)(**(long **)((long)puVar8 + lVar6 + 0x80) + 0x18))();
          *(undefined8 *)((long)puVar8 + lVar6 + 0x88) = 0;
          *(undefined4 *)((long)puVar8 + lVar6 + 0x94) = 0;
        }
        if ((*(long *)((long)puVar8 + lVar6 + 0xa8) != 0) &&
           (*(char *)((long)puVar8 + lVar6 + 0xb0) != '\0')) {
          (**(code **)(**(long **)((long)puVar8 + lVar6 + 0xa0) + 0x18))();
          *(undefined1 *)((long)puVar8 + lVar6 + 0xb0) = 0;
        }
        lVar1 = lVar6 + 0x158;
        *(undefined8 *)((long)puVar8 + lVar6 + 0xa8) = 0;
        lVar6 = lVar1;
      } while ((ulong)uVar2 * 0x158 != lVar1);
      puVar8 = (undefined8 *)param_1[0x30];
    }
    *(undefined4 *)(param_1 + 0x31) = 0;
    if (param_1 + 5 != puVar8) {
      (**(code **)(puVar3 + 0x30))(0,puVar8);
    }
    param_1[0x30] = 0;
    *(undefined4 *)((long)param_1 + 0x18c) = 0;
  }
  return;
}


