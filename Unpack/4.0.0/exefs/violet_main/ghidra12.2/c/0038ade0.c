/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038ade0; name: FUN_0038ade0
 */


undefined8 FUN_0038ade0(long param_1,void *param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + -0x10);
  lVar2 = *(long *)(param_1 + -8);
  if ((ulong)(lVar2 - lVar3) < param_3) {
    uVar1 = lVar2 * 2;
    if ((ulong)(lVar2 * 2) <= lVar2 + param_3) {
      uVar1 = lVar2 + param_3;
    }
    lVar2 = (*(code *)*param_4)(param_4,*(undefined8 *)(param_1 + -0x18),lVar2,uVar1);
    if (lVar2 == 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + -0x10);
    *(long *)(param_1 + -0x18) = lVar2;
    *(ulong *)(param_1 + -8) = uVar1;
  }
  else {
    lVar2 = *(long *)(param_1 + -0x18);
  }
  memcpy((void *)(lVar2 + lVar3),param_2,param_3);
  *(ulong *)(param_1 + -0x10) = *(long *)(param_1 + -0x10) + param_3;
  return 1;
}


