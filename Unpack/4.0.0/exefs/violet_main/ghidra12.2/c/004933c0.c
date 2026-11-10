/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004933c0; name: FUN_004933c0
 */


undefined8 FUN_004933c0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 1)) {
    uVar5 = *(undefined8 *)(param_1 + 2);
    lVar3 = FUN_0048b9f0(param_2);
    *(long *)(param_1 + 4) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_0047e430(uVar5);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar4 = FUN_0047e450(uVar5,iVar1);
        iVar2 = FUN_0048a580(*(undefined8 *)(param_1 + 4),uVar4,0xffffffff,iVar1 == 0);
        if (iVar2 == 0) goto LAB_0049346c;
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0047e430(uVar5);
      } while (iVar1 < iVar2);
    }
    iVar1 = FUN_0048b9c0(*(undefined8 *)(param_1 + 4),0);
    if (iVar1 < 0) {
LAB_0049346c:
      FUN_0048b9e0(*(undefined8 *)(param_1 + 4));
      param_1[4] = 0;
      param_1[5] = 0;
      return 0;
    }
  }
  return 1;
}


