/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03002934; name: FUN_03002934
 */


void FUN_03002934(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar6 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar6 * 2;
  if (uVar4 < 0x81) {
    uVar4 = 0x80;
  }
  if (0x7ffffffd < uVar4) {
    uVar4 = 0x7ffffffe;
  }
  __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar4 * 0x40,&local_38);
  memcpy(__dest,(void *)*param_1,(long)*(int *)(param_1 + 1) << 6);
  uVar1 = (uVar4 >> 1) << 7 | 0x40;
  if (uVar1 <= local_38) {
    local_38 = local_38 - 0x40;
    uVar5 = uVar4 | 1;
    lVar2 = uVar4 * -0x40;
    uVar4 = uVar5;
    if (uVar1 <= local_38) {
      uVar4 = uVar5 + (local_38 + lVar2 >> 6);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar6 << 6);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar4;
  *param_1 = __dest;
  return;
}


