/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012b840; name: FUN_0012b840
 */


undefined8 FUN_0012b840(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  *(undefined4 *)PTR_DAT_047cb850 = 1;
  plVar7 = (long *)(param_2 + 0x70);
  plVar4 = (long *)*plVar7;
  bVar3 = *(byte *)(param_2 + 100) & 0x18;
  if (plVar4 != (long *)0x0) {
    do {
      *(byte *)((long)plVar4 + 9) = *(byte *)((long)plVar4 + 9) & 0xc0 | bVar3;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
    bVar3 = *(byte *)(param_2 + 100) & 0x18;
  }
  plVar6 = (long *)(param_2 + 0x80);
  plVar4 = (long *)*plVar6;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  if (plVar4 != (long *)0x0) {
    do {
      *(byte *)((long)plVar4 + 9) = *(byte *)((long)plVar4 + 9) & 0xc0 | bVar3;
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
    bVar3 = *(byte *)(param_2 + 100) & 0x18;
  }
  for (plVar4 = *(long **)(param_2 + 0xb0); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    *(byte *)((long)plVar4 + 9) = *(byte *)((long)plVar4 + 9) & 0xc0 | bVar3;
  }
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined2 *)(param_2 + 0x65) = 8;
  *(undefined8 *)(param_2 + 0x28) = 0;
  lVar5 = *(long *)(param_1 + 0x18);
  if (*(char *)(lVar5 + 0x65) == '\b') goto LAB_0012b940;
  do {
    FUN_0012a6f0(param_1);
  } while (*(char *)(lVar5 + 0x65) != '\b');
  lVar5 = *(long *)(param_1 + 0x18);
  while (*(char *)(lVar5 + 0x65) != '\0') {
LAB_0012b940:
    FUN_0012a6f0(param_1);
  }
  uVar1 = FUN_0012bce0(param_1);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined1 *)(param_2 + 0x65) = 3;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  lVar5 = 0;
  if (*(long **)(param_2 + 0x70) != (long *)0x0) {
    lVar5 = *(long *)(param_1 + 0x18);
    plVar4 = *(long **)(param_2 + 0x70);
    plVar8 = plVar7;
    do {
      while (plVar2 = plVar4, bVar3 = *(byte *)((long)plVar2 + 9), (bVar3 & 0x18) != 0) {
        *plVar8 = *plVar2;
        FUN_0012bbc0(param_1);
        plVar4 = (long *)*plVar8;
        if ((long *)*plVar8 == (long *)0x0) goto LAB_0012ba14;
      }
      *(byte *)((long)plVar2 + 9) = bVar3 & 0xf8 | 4;
      if ((char)plVar2[1] == '\t') {
        if ((long *)plVar2[2] == plVar2 + 3) goto LAB_0012ba00;
        bVar3 = bVar3 & 0xc0 | 4;
      }
      else if ((char)plVar2[1] == '\b') {
        plVar2[9] = *(long *)(lVar5 + 0x90);
        *(long **)(lVar5 + 0x90) = plVar2;
        bVar3 = *(byte *)((long)plVar2 + 9) & 199;
      }
      else {
LAB_0012ba00:
        bVar3 = bVar3 & 0xf8 | 0x24;
      }
      *(byte *)((long)plVar2 + 9) = bVar3;
      plVar4 = (long *)*plVar2;
      plVar8 = plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
LAB_0012ba14:
    lVar5 = *plVar7;
  }
  *(long *)(param_2 + 0xc0) = lVar5;
  *(long *)(param_2 + 200) = lVar5;
  *(long *)(param_2 + 0xd0) = lVar5;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  lVar5 = 0;
  if (*(long **)(param_2 + 0x80) != (long *)0x0) {
    lVar5 = *(long *)(param_1 + 0x18);
    plVar4 = *(long **)(param_2 + 0x80);
    plVar7 = plVar6;
    do {
      while (plVar8 = plVar4, bVar3 = *(byte *)((long)plVar8 + 9), (bVar3 & 0x18) != 0) {
        *plVar7 = *plVar8;
        FUN_0012bbc0(param_1,plVar8);
        plVar4 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_0012bac8;
      }
      *(byte *)((long)plVar8 + 9) = bVar3 & 0xf8 | 4;
      if ((char)plVar8[1] == '\t') {
        if ((long *)plVar8[2] == plVar8 + 3) goto LAB_0012bab4;
        bVar3 = bVar3 & 0xc0 | 4;
      }
      else if ((char)plVar8[1] == '\b') {
        plVar8[9] = *(long *)(lVar5 + 0x90);
        *(long **)(lVar5 + 0x90) = plVar8;
        bVar3 = *(byte *)((long)plVar8 + 9) & 199;
      }
      else {
LAB_0012bab4:
        bVar3 = bVar3 & 0xf8 | 0x24;
      }
      *(byte *)((long)plVar8 + 9) = bVar3;
      plVar4 = (long *)*plVar8;
      plVar7 = plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
LAB_0012bac8:
    lVar5 = *plVar6;
  }
  *(long *)(param_2 + 0xe0) = lVar5;
  *(long *)(param_2 + 0xe8) = lVar5;
  *(long *)(param_2 + 0xf0) = lVar5;
  if (*(long **)(param_2 + 0xb0) != (long *)0x0) {
    lVar5 = *(long *)(param_1 + 0x18);
    plVar4 = *(long **)(param_2 + 0xb0);
    plVar7 = (long *)(param_2 + 0xb0);
    do {
      while (plVar6 = plVar4, bVar3 = *(byte *)((long)plVar6 + 9), (bVar3 & 0x18) != 0) {
        *plVar7 = *plVar6;
        FUN_0012bbc0(param_1);
        plVar4 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_0012bb74;
      }
      *(byte *)((long)plVar6 + 9) = bVar3 & 0xf8 | 4;
      if ((char)plVar6[1] == '\t') {
        if ((long *)plVar6[2] == plVar6 + 3) goto LAB_0012bb60;
        bVar3 = bVar3 & 0xc0 | 4;
      }
      else if ((char)plVar6[1] == '\b') {
        plVar6[9] = *(long *)(lVar5 + 0x90);
        *(long **)(lVar5 + 0x90) = plVar6;
        bVar3 = *(byte *)((long)plVar6 + 9) & 199;
      }
      else {
LAB_0012bb60:
        bVar3 = bVar3 & 0xf8 | 0x24;
      }
      *(byte *)((long)plVar6 + 9) = bVar3;
      plVar4 = (long *)*plVar6;
      plVar7 = plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
LAB_0012bb74:
  *(undefined1 *)(param_2 + 0x66) = 1;
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18) + *(long *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x28) = 0;
  FUN_0012d040(param_1,param_2);
  return uVar1;
}


