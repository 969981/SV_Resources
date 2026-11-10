/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012a1e0; name: FUN_0012a1e0
 */


void FUN_0012a1e0(long param_1,uint param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(byte *)(lVar3 + 0x66) != param_2) {
    if (param_2 == 1) {
      lVar4 = lVar3;
      if (*(char *)(lVar3 + 0x65) == '\b') goto LAB_0012a2d8;
      do {
        FUN_0012a6f0(param_1);
      } while (*(char *)(lVar3 + 0x65) != '\b');
      lVar4 = *(long *)(param_1 + 0x18);
      while (*(char *)(lVar4 + 0x65) != '\0') {
LAB_0012a2d8:
        FUN_0012a6f0(param_1);
      }
      FUN_0012bce0(param_1);
      plVar5 = (long *)(lVar3 + 0x70);
      *(undefined8 *)(lVar3 + 0x88) = 0;
      *(undefined8 *)(lVar3 + 0x90) = 0;
      *(undefined8 *)(lVar3 + 0x98) = 0;
      *(undefined8 *)(lVar3 + 0xa0) = 0;
      *(undefined8 *)(lVar3 + 0xa8) = 0;
      *(undefined1 *)(lVar3 + 0x65) = 3;
      lVar4 = 0;
      if ((long *)*plVar5 != (long *)0x0) {
        lVar4 = *(long *)(param_1 + 0x18);
        plVar6 = (long *)*plVar5;
        plVar7 = plVar5;
        do {
          while (plVar1 = plVar6, bVar2 = *(byte *)((long)plVar1 + 9), (bVar2 & 0x18) != 0) {
            *plVar7 = *plVar1;
            FUN_0012bbc0(param_1);
            plVar6 = (long *)*plVar7;
            if ((long *)*plVar7 == (long *)0x0) goto LAB_0012a3ac;
          }
          *(byte *)((long)plVar1 + 9) = bVar2 & 0xf8 | 4;
          if ((char)plVar1[1] == '\t') {
            if ((long *)plVar1[2] == plVar1 + 3) goto LAB_0012a398;
            bVar2 = bVar2 & 0xc0 | 4;
          }
          else if ((char)plVar1[1] == '\b') {
            plVar1[9] = *(long *)(lVar4 + 0x90);
            *(long **)(lVar4 + 0x90) = plVar1;
            bVar2 = *(byte *)((long)plVar1 + 9) & 199;
          }
          else {
LAB_0012a398:
            bVar2 = bVar2 & 0xf8 | 0x24;
          }
          *(byte *)((long)plVar1 + 9) = bVar2;
          plVar6 = (long *)*plVar1;
          plVar7 = plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
LAB_0012a3ac:
        lVar4 = *plVar5;
      }
      plVar5 = (long *)(lVar3 + 0x80);
      *(long *)(lVar3 + 0xc0) = lVar4;
      *(long *)(lVar3 + 200) = lVar4;
      *(long *)(lVar3 + 0xd0) = lVar4;
      *(undefined8 *)(lVar3 + 0xd8) = 0;
      lVar4 = 0;
      if ((long *)*plVar5 != (long *)0x0) {
        lVar4 = *(long *)(param_1 + 0x18);
        plVar6 = (long *)*plVar5;
        plVar7 = plVar5;
        do {
          while (plVar1 = plVar6, bVar2 = *(byte *)((long)plVar1 + 9), (bVar2 & 0x18) != 0) {
            *plVar7 = *plVar1;
            FUN_0012bbc0(param_1,plVar1);
            plVar6 = (long *)*plVar7;
            if ((long *)*plVar7 == (long *)0x0) goto LAB_0012a464;
          }
          *(byte *)((long)plVar1 + 9) = bVar2 & 0xf8 | 4;
          if ((char)plVar1[1] == '\t') {
            if ((long *)plVar1[2] == plVar1 + 3) goto LAB_0012a450;
            bVar2 = bVar2 & 0xc0 | 4;
          }
          else if ((char)plVar1[1] == '\b') {
            plVar1[9] = *(long *)(lVar4 + 0x90);
            *(long **)(lVar4 + 0x90) = plVar1;
            bVar2 = *(byte *)((long)plVar1 + 9) & 199;
          }
          else {
LAB_0012a450:
            bVar2 = bVar2 & 0xf8 | 0x24;
          }
          *(byte *)((long)plVar1 + 9) = bVar2;
          plVar6 = (long *)*plVar1;
          plVar7 = plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
LAB_0012a464:
        lVar4 = *plVar5;
      }
      plVar5 = *(long **)(lVar3 + 0xb0);
      *(long *)(lVar3 + 0xe0) = lVar4;
      *(long *)(lVar3 + 0xe8) = lVar4;
      *(long *)(lVar3 + 0xf0) = lVar4;
      if (plVar5 != (long *)0x0) {
        lVar4 = *(long *)(param_1 + 0x18);
        plVar6 = (long *)(lVar3 + 0xb0);
        do {
          while (plVar7 = plVar5, bVar2 = *(byte *)((long)plVar7 + 9), (bVar2 & 0x18) != 0) {
            *plVar6 = *plVar7;
            FUN_0012bbc0(param_1);
            plVar5 = (long *)*plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_0012a514;
          }
          *(byte *)((long)plVar7 + 9) = bVar2 & 0xf8 | 4;
          if ((char)plVar7[1] == '\t') {
            if ((long *)plVar7[2] == plVar7 + 3) goto LAB_0012a500;
            bVar2 = bVar2 & 0xc0 | 4;
          }
          else if ((char)plVar7[1] == '\b') {
            plVar7[9] = *(long *)(lVar4 + 0x90);
            *(long **)(lVar4 + 0x90) = plVar7;
            bVar2 = *(byte *)((long)plVar7 + 9) & 199;
          }
          else {
LAB_0012a500:
            bVar2 = bVar2 & 0xf8 | 0x24;
          }
          *(byte *)((long)plVar7 + 9) = bVar2;
          plVar5 = (long *)*plVar7;
          plVar6 = plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
LAB_0012a514:
      *(undefined1 *)(lVar3 + 0x66) = 1;
      *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x18) + *(long *)(lVar3 + 0x10);
      *(undefined8 *)(lVar3 + 0x28) = 0;
      FUN_0012d040(param_1,lVar3);
    }
    else {
      bVar2 = *(byte *)(lVar3 + 100) & 0x18;
      plVar5 = *(long **)(lVar3 + 0x70);
      if (plVar5 != (long *)0x0) {
        do {
          *(byte *)((long)plVar5 + 9) = *(byte *)((long)plVar5 + 9) & 0xc0 | bVar2;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
        bVar2 = *(byte *)(lVar3 + 100) & 0x18;
      }
      plVar5 = *(long **)(lVar3 + 0x80);
      *(undefined8 *)(lVar3 + 200) = 0;
      *(undefined8 *)(lVar3 + 0xd0) = 0;
      *(undefined8 *)(lVar3 + 0xc0) = 0;
      if (plVar5 != (long *)0x0) {
        do {
          *(byte *)((long)plVar5 + 9) = *(byte *)((long)plVar5 + 9) & 0xc0 | bVar2;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
        bVar2 = *(byte *)(lVar3 + 100) & 0x18;
      }
      for (plVar5 = *(long **)(lVar3 + 0xb0); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        *(byte *)((long)plVar5 + 9) = *(byte *)((long)plVar5 + 9) & 0xc0 | bVar2;
      }
      *(undefined8 *)(lVar3 + 0xe8) = 0;
      *(undefined8 *)(lVar3 + 0xf0) = 0;
      *(undefined8 *)(lVar3 + 0xe0) = 0;
      *(undefined2 *)(lVar3 + 0x65) = 8;
      *(undefined8 *)(lVar3 + 0x28) = 0;
    }
  }
  *(undefined8 *)(lVar3 + 0x28) = 0;
  return;
}


