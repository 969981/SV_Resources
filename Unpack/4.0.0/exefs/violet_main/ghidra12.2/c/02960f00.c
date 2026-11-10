/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02960f00; name: FUN_02960f00
 */


void FUN_02960f00(long *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x18);
  iVar1 = 0;
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0xc);
  }
  if ((((iVar1 == param_2) && ((*(byte *)(*(long *)(*param_1 + 0x38) + 0x499) >> 3 & 1) != 0)) &&
      (plVar3 = (long *)FUN_01248430(*(undefined8 *)(param_1[1] + 0x30),1,0), plVar3 != (long *)0x0)
      ) && (iVar1 = (**(code **)(*plVar3 + 0x98))(), iVar1 != param_2)) {
    lVar5 = param_1[1];
    uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    uVar4 = FUN_02959670(lVar5,uVar2);
    if ((((uVar4 & 1) != 0) && (lVar5 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x130), lVar5 != 0)
        ) && ((*(byte *)(lVar5 + 10) < 2 &&
              (*(undefined4 *)(lVar5 + 0xc) = 0x24, *(byte *)(lVar5 + 10) == 1)))) {
      *(undefined1 *)(lVar5 + 10) = 2;
    }
  }
  return;
}


