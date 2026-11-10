/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02705b00; name: FUN_02705b00
 */


ulong * FUN_02705b00(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = param_2 + DAT_04859d48 + 0x3e & -DAT_04859d48;
  if (*(ulong *)(param_1 + 0x368) == 0) {
    if (uVar5 <= param_2) {
      return (ulong *)0x0;
    }
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x358) + uVar5;
    if ((uVar5 <= param_2 || uVar1 <= *(ulong *)(param_1 + 0x358)) ||
        *(ulong *)(param_1 + 0x368) < uVar1) {
      return (ulong *)0x0;
    }
  }
  pvVar3 = mmap((void *)0x0,uVar5,3,0x22,-1,0);
  if (pvVar3 == (void *)0xffffffffffffffff) {
    return (ulong *)0x0;
  }
  uVar1 = 0;
  if (((long)pvVar3 + 0x10U & 0xf) != 0) {
    uVar1 = (ulong)(uint)-(int)((long)pvVar3 + 0x10U) & 0xf;
  }
  lVar4 = uVar5 - uVar1;
  puVar2 = (ulong *)((long)pvVar3 + uVar1);
  *puVar2 = uVar1;
  puVar2[1] = lVar4 - 0x20;
  *(undefined8 *)((long)puVar2 + lVar4 + -0x18) = 0xb;
  *(undefined8 *)((long)puVar2 + lVar4 + -0x10) = 0;
  if ((*(void **)(param_1 + 0x18) == (void *)0x0) || (pvVar3 < *(void **)(param_1 + 0x18))) {
    *(void **)(param_1 + 0x18) = pvVar3;
  }
  uVar5 = *(long *)(param_1 + 0x358) + uVar5;
  *(ulong *)(param_1 + 0x358) = uVar5;
  if (*(ulong *)(param_1 + 0x360) < uVar5) {
    *(ulong *)(param_1 + 0x360) = uVar5;
  }
  return puVar2 + 2;
}


