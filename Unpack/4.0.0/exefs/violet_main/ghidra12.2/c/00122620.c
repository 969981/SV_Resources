/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00122620; name: FUN_00122620
 */


long FUN_00122620(long param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  long *plVar4;
  long lVar5;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 == 0xfff0b9d8) {
        plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_1 + 0x20);
        if (((char)plVar4[1] == '\x16') ||
           (lVar5 = *plVar4, (int)(uint)*(byte *)(lVar5 + 10) < (int)(-0xf4628 - param_2)))
        goto LAB_00122640;
        plVar4 = (long *)(lVar5 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar4) {
LAB_00122640:
      plVar4 = (long *)(*(long *)(param_1 + 0x18) + 0x50);
    }
  }
  bVar2 = *(byte *)(plVar4 + 1);
  bVar1 = bVar2 & 0x3f;
  if (bVar1 == 2 || bVar1 == 7) {
    if ((bVar2 & 0xf) == 2) {
LAB_001226dc:
      return *plVar4;
    }
    if ((bVar2 & 0xf) == 7) {
      uVar3 = *(ushort *)(*plVar4 + 10);
      lVar5 = 0x20;
      if (uVar3 != 0) {
        lVar5 = (ulong)uVar3 * 0x10 + 0x28;
      }
      return *plVar4 + lVar5;
    }
  }
  else if ((bVar1 == 0x16) || ((bVar2 >> 6 & 1) != 0)) goto LAB_001226dc;
  return 0;
}


