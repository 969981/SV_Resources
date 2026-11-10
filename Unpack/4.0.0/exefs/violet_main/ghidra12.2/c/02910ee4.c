/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02910ee4; name: FUN_02910ee4
 */


undefined4 FUN_02910ee4(long param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if ((cVar1 == '\0') ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x458))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90)),
     cVar1 == '\x03')) {
LAB_02910f40:
    uVar5 = 0;
  }
  else {
    if (*(short *)(param_1 + 0x90) == 0x20c) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x110))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      if (5 < iVar2) {
        plVar3 = *(long **)(param_1 + 0x30);
        uVar5 = *(undefined4 *)(param_1 + 0xb0);
        pcVar6 = *(code **)(*plVar3 + 0x118);
LAB_02910fc0:
        iVar2 = (*pcVar6)(plVar3,uVar5);
        if (iVar2 < 7) goto LAB_02910f40;
      }
    }
    else {
      if (*(short *)(param_1 + 0x90) != 0x1e0) goto LAB_02910f40;
      iVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x100))
                        (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
      if (5 < iVar2) {
        plVar3 = *(long **)(param_1 + 0x30);
        uVar5 = *(undefined4 *)(param_1 + 0xb0);
        pcVar6 = *(code **)(*plVar3 + 0x108);
        goto LAB_02910fc0;
      }
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
    uVar5 = 2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
  }
  return uVar5;
}


