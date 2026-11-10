/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0137e2b8; name: FUN_0137e2b8
 */


void FUN_0137e2b8(undefined4 *param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_5c;
  byte local_58 [4];
  byte local_54 [4];
  
  *(undefined8 *)(param_1 + 2) = 0x50000000000;
  *(undefined8 *)(param_1 + 4) = 0x50000000000;
  *(undefined8 *)(param_1 + 0x16) = 0x50000000000;
  *(undefined8 *)(param_1 + 6) = 0x50000000000;
  *(undefined8 *)(param_1 + 8) = 0x50000000000;
  *(undefined8 *)(param_1 + 10) = 0x50000000000;
  *(undefined8 *)(param_1 + 0xc) = 0x50000000000;
  *(undefined8 *)(param_1 + 0xe) = 0x50000000000;
  *(undefined8 *)(param_1 + 0x10) = 0x50000000000;
  *(undefined8 *)(param_1 + 0x12) = 0x50000000000;
  *(undefined8 *)(param_1 + 0x14) = 0x50000000000;
  if (*(uint *)(param_2 + 0x36c) < 3) {
    uVar5 = *(uint *)(&DAT_03d69db8 + (long)(int)*(uint *)(param_2 + 0x36c) * 4);
  }
  else {
    uVar5 = 3;
  }
  uVar4 = 0;
  pcVar7 = (char *)((long)param_1 + 0xd);
  do {
    uVar2 = FUN_0137e444(*(undefined8 *)(param_2 + 0x290),uVar4 & 0xffffffff);
    if ((((uVar2 & 1) != 0) && (pcVar7[-1] == '\0')) &&
       (cVar1 = FUN_00f1eea8(*(undefined8 *)(param_2 + 0x290),uVar4 & 0xffffffff), cVar1 != '\x05'))
    {
      pcVar7[-1] = '\x01';
      *pcVar7 = cVar1;
      pcVar7[-5] = '\0';
      pcVar7[-4] = '\0';
      pcVar7[-3] = '\0';
      pcVar7[-2] = '\0';
    }
    uVar4 = uVar4 + 1;
    pcVar7 = pcVar7 + 8;
  } while (uVar5 + 1 != uVar4);
  uVar4 = 0;
  puVar8 = param_1;
  do {
    puVar8 = puVar8 + 2;
    FUN_01253868(*(undefined8 *)(param_2 + 0x290),uVar4 & 0xffffffff,local_54,local_58);
    uVar2 = (ulong)local_54[0];
    if (uVar2 != 5) {
      if (((local_58[0] < *(byte *)(*(long *)(param_2 + 0x30) + uVar2 * 0x38 + 0x58)) &&
          (plVar6 = *(long **)(*(long *)(param_2 + 0x30) + uVar2 * 0x38 + (ulong)local_58[0] * 8 +
                              0x28), plVar6 != (long *)0x0)) &&
         (uVar2 = (**(code **)(*plVar6 + 0x200))(plVar6), (uVar2 & 1) == 0)) {
        local_5c = (**(code **)(*plVar6 + 0x98))(plVar6);
        *puVar8 = local_5c;
        puVar3 = (undefined1 *)FUN_010785a8(param_1 + 0x18,&local_5c);
        *puVar3 = (char)uVar4;
      }
      else {
        *puVar8 = 0;
      }
    }
    uVar4 = uVar4 + 1;
  } while ((ulong)uVar5 + 1 != uVar4);
  return;
}


