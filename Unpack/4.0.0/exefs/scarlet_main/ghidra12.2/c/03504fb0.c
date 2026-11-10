/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03504fb0; name: FUN_03504fb0
 */


void FUN_03504fb0(long param_1)

{
  bool bVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  char local_44 [4];
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x168);
  plVar2 = (long *)(param_1 + 0x160);
  if (0 < (int)*(uint *)(param_1 + 0x168)) {
    uVar12 = uVar6;
    do {
      uVar13 = uVar12 - 1;
      plVar9 = plVar2;
      bVar3 = *(byte *)(param_1 + 0x170);
      if (-1 < (char)*(byte *)(param_1 + 0x170)) {
        do {
          bVar7 = bVar3;
          bVar3 = *(byte *)(param_1 + (char)bVar7 + 0x171);
        } while ((int)(char)bVar3 != (uint)bVar7 && (int)(uint)bVar7 <= (int)(char)bVar3);
        plVar9 = (long *)(param_1 + (ulong)bVar7 * 0x30 + 0xa8);
      }
      if (*(int *)(*plVar9 + (uVar13 & 0xffffffff) * 0x30 + 0xc) == 0x11) {
        lVar8 = *plVar2;
        if (1 < (uint)uVar6) {
          FUN_03504a74(lVar8 + (uVar13 & 0xffffffff) * 0x30,lVar8 + uVar6 * 0x30 + -0x30);
          uVar6 = (ulong)*(uint *)(param_1 + 0x168);
          lVar8 = *(long *)(param_1 + 0x160);
        }
        FUN_0350499c(lVar8 + uVar6 * 0x30 + -0x30);
        uVar4 = *(int *)(param_1 + 0x168) - 1;
        uVar6 = (ulong)uVar4;
        *(uint *)(param_1 + 0x168) = uVar4;
      }
      bVar1 = 1 < (long)uVar12;
      uVar12 = uVar13;
    } while (bVar1);
  }
  uVar5 = FUN_03501418(param_1 + 0x98,param_1,0,plVar2,local_44);
  if ((local_44[0] != '\0') && (*(char *)(param_1 + 0x170) == '\0')) {
    *(undefined1 *)(param_1 + 0x170) = 0xff;
  }
  uVar5 = FUN_03501418(param_1 + 200,param_1,1,uVar5,local_44);
  if (local_44[0] != '\0') {
    if (*(char *)(param_1 + 0x170) == '\x01') {
      *(undefined1 *)(param_1 + 0x170) = 0xff;
    }
    if (*(char *)(param_1 + 0x171) == '\x01') {
      *(undefined1 *)(param_1 + 0x171) = 0;
    }
  }
  uVar5 = FUN_03501418(param_1 + 0xf8,param_1,2,uVar5,local_44);
  if (local_44[0] != '\0') {
    if (*(char *)(param_1 + 0x170) == '\x02') {
      *(undefined1 *)(param_1 + 0x170) = 0xff;
    }
    if (*(char *)(param_1 + 0x171) == '\x02') {
      *(undefined1 *)(param_1 + 0x171) = 0;
    }
    if (*(char *)(param_1 + 0x172) == '\x02') {
      *(undefined1 *)(param_1 + 0x172) = 1;
    }
  }
  FUN_03501418(param_1 + 0x128,param_1,3,uVar5,local_44);
  if (local_44[0] != '\0') {
    if (*(char *)(param_1 + 0x170) == '\x03') {
      *(undefined1 *)(param_1 + 0x170) = 0xff;
    }
    if (*(char *)(param_1 + 0x171) == '\x03') {
      *(undefined1 *)(param_1 + 0x171) = 0;
    }
    if (*(char *)(param_1 + 0x172) == '\x03') {
      *(undefined1 *)(param_1 + 0x172) = 1;
    }
    if (*(char *)(param_1 + 0x173) == '\x03') {
      *(undefined1 *)(param_1 + 0x173) = 2;
    }
  }
  *(undefined4 *)(param_1 + 0x198) = 4;
  if (*(int *)(param_1 + 0x168) != 0) {
    puVar11 = (undefined8 *)*plVar2;
    do {
      memset((void *)*puVar11,0,(ulong)*(ushort *)(puVar11 + 2) * (ulong)*(byte *)(puVar11 + 1) * 4)
      ;
      lVar8 = puVar11[3];
      *(undefined4 *)((long)puVar11 + 0xc) = 0x11;
      *(undefined2 *)((long)puVar11 + 0x12) = 0;
      if (*(long *)(lVar8 + 0x68) != 0) {
        *(undefined4 *)(lVar8 + 0x70) = 0;
        (**(code **)(**(long **)(lVar8 + 0x60) + 0x18))();
        *(undefined8 *)(lVar8 + 0x68) = 0;
        *(undefined4 *)(lVar8 + 0x74) = 0;
      }
      if (*(char *)(lVar8 + 0x90) == '\0') {
        *(undefined8 *)(lVar8 + 0x88) = 0;
      }
      puVar11 = puVar11 + 6;
      *(undefined4 *)(param_1 + 0x198) = 1;
    } while (puVar11 !=
             (undefined8 *)(*(long *)(param_1 + 0x160) + (ulong)*(uint *)(param_1 + 0x168) * 0x30));
  }
  if (*(short *)(param_1 + 400) == 0) {
    if (((*(int *)(param_1 + 0xb0) != 0) && (*(short *)(param_1 + 0xc4) == 0)) &&
       (*(undefined4 *)(param_1 + 0x198) = 1, *(char *)(param_1 + 0xbf) == '\0')) {
      lVar8 = *(long *)(param_1 + 0xa8);
      do {
        lVar10 = *(long *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0xc) = 0x11;
        *(undefined2 *)(lVar8 + 0x12) = 0;
        if (*(long *)(lVar10 + 0x68) != 0) {
          *(undefined4 *)(lVar10 + 0x70) = 0;
          (**(code **)(**(long **)(lVar10 + 0x60) + 0x18))();
          *(undefined8 *)(lVar10 + 0x68) = 0;
          *(undefined4 *)(lVar10 + 0x74) = 0;
        }
        if (*(char *)(lVar10 + 0x90) == '\0') {
          *(undefined8 *)(lVar10 + 0x88) = 0;
        }
        lVar8 = lVar8 + 0x30;
      } while (lVar8 != *(long *)(param_1 + 0xa8) + (ulong)*(uint *)(param_1 + 0xb0) * 0x30);
    }
    if (((*(int *)(param_1 + 0xe0) != 0) && (*(short *)(param_1 + 0xf4) == 0)) &&
       (*(undefined4 *)(param_1 + 0x198) = 1, *(char *)(param_1 + 0xef) == '\0')) {
      lVar8 = *(long *)(param_1 + 0xd8);
      do {
        lVar10 = *(long *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0xc) = 0x11;
        *(undefined2 *)(lVar8 + 0x12) = 0;
        if (*(long *)(lVar10 + 0x68) != 0) {
          *(undefined4 *)(lVar10 + 0x70) = 0;
          (**(code **)(**(long **)(lVar10 + 0x60) + 0x18))();
          *(undefined8 *)(lVar10 + 0x68) = 0;
          *(undefined4 *)(lVar10 + 0x74) = 0;
        }
        if (*(char *)(lVar10 + 0x90) == '\0') {
          *(undefined8 *)(lVar10 + 0x88) = 0;
        }
        lVar8 = lVar8 + 0x30;
      } while (lVar8 != *(long *)(param_1 + 0xd8) + (ulong)*(uint *)(param_1 + 0xe0) * 0x30);
    }
    if (((*(int *)(param_1 + 0x110) != 0) && (*(short *)(param_1 + 0x124) == 0)) &&
       (*(undefined4 *)(param_1 + 0x198) = 1, *(char *)(param_1 + 0x11f) == '\0')) {
      lVar8 = *(long *)(param_1 + 0x108);
      do {
        lVar10 = *(long *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0xc) = 0x11;
        *(undefined2 *)(lVar8 + 0x12) = 0;
        if (*(long *)(lVar10 + 0x68) != 0) {
          *(undefined4 *)(lVar10 + 0x70) = 0;
          (**(code **)(**(long **)(lVar10 + 0x60) + 0x18))();
          *(undefined8 *)(lVar10 + 0x68) = 0;
          *(undefined4 *)(lVar10 + 0x74) = 0;
        }
        if (*(char *)(lVar10 + 0x90) == '\0') {
          *(undefined8 *)(lVar10 + 0x88) = 0;
        }
        lVar8 = lVar8 + 0x30;
      } while (lVar8 != *(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 0x110) * 0x30);
    }
    if (((*(int *)(param_1 + 0x140) != 0) && (*(short *)(param_1 + 0x154) == 0)) &&
       (*(undefined4 *)(param_1 + 0x198) = 1, *(char *)(param_1 + 0x14f) == '\0')) {
      lVar8 = *(long *)(param_1 + 0x138);
      do {
        lVar10 = *(long *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0xc) = 0x11;
        *(undefined2 *)(lVar8 + 0x12) = 0;
        if (*(long *)(lVar10 + 0x68) != 0) {
          *(undefined4 *)(lVar10 + 0x70) = 0;
          (**(code **)(**(long **)(lVar10 + 0x60) + 0x18))();
          *(undefined8 *)(lVar10 + 0x68) = 0;
          *(undefined4 *)(lVar10 + 0x74) = 0;
        }
        if (*(char *)(lVar10 + 0x90) == '\0') {
          *(undefined8 *)(lVar10 + 0x88) = 0;
        }
        lVar8 = lVar8 + 0x30;
      } while (lVar8 != *(long *)(param_1 + 0x138) + (ulong)*(uint *)(param_1 + 0x140) * 0x30);
    }
  }
  for (lVar8 = *(long *)(param_1 + 0x28); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x20)) {
    if (*(int *)(lVar8 + 0x188) != 0) {
      lVar10 = *(long *)(lVar8 + 0x180);
      do {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        lVar10 = lVar10 + 0x158;
      } while (lVar10 != *(long *)(lVar8 + 0x180) + (ulong)*(uint *)(lVar8 + 0x188) * 0x158);
    }
  }
  return;
}


