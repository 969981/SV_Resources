/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045ef80; name: FUN_0045ef80
 */


int FUN_0045ef80(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((param_3 >> 1 & 1) != 0) {
    if (-1 < (int)param_2) {
      do {
        if (0x20 < *(byte *)(param_1 + (ulong)param_2)) goto LAB_0045f004;
        bVar1 = 0 < (int)param_2;
        param_2 = param_2 - 1;
      } while (bVar1);
      param_2 = 0xffffffff;
    }
LAB_0045f004:
    uVar4 = (ulong)(param_2 + 1);
    goto LAB_0045f050;
  }
  uVar5 = (ulong)param_2;
  if ((param_3 >> 2 & 1) == 0) {
    if ((int)param_2 < 1) {
LAB_0045f04c:
      uVar4 = 0;
      goto LAB_0045f050;
    }
    uVar4 = 0;
    do {
      cVar2 = *(char *)(param_1 + uVar4);
      if (cVar2 == '\n' || cVar2 == '\r') goto LAB_0045f050;
      iVar3 = FUN_003f6e20(cVar2,0x40);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + uVar4) = 0x20;
      }
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  else {
    if ((int)param_2 < 1) goto LAB_0045f04c;
    uVar4 = 0;
    do {
      iVar3 = FUN_003f6e20(*(undefined1 *)(param_1 + uVar4),0x400);
      if (((iVar3 == 0) || (*(char *)(param_1 + uVar4) == '\n')) ||
         (*(char *)(param_1 + uVar4) == '\r')) goto LAB_0045f050;
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  uVar4 = uVar5;
LAB_0045f050:
  *(undefined2 *)(param_1 + (int)uVar4) = 10;
  return (int)uVar4 + 1;
}


