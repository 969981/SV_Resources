/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fa0c10; name: FUN_02fa0c10
 */


void FUN_02fa0c10(undefined8 *param_1,void *param_2)

{
  undefined *puVar1;
  void *__dest;
  uint uVar2;
  
  puVar1 = PTR_PTR_047d1a50;
  if ((param_2 == (void *)0x0) || (0x3ff < *(int *)(param_1 + 1))) {
    uVar2 = *(uint *)((long)param_1 + 0xc);
    if (0x3ff < (int)uVar2) {
      uVar2 = 0x400;
    }
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0x1000);
    memcpy(__dest,(void *)*param_1,-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2)
    ;
    (**(code **)(*(long *)puVar1 + 0x20))(puVar1,*param_1,(long)*(int *)((long)param_1 + 0xc) << 2);
    *param_1 = __dest;
    *(undefined4 *)((long)param_1 + 0xc) = 0x400;
  }
  else {
    memcpy(param_2,(void *)*param_1,(long)*(int *)(param_1 + 1) << 2);
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff) << 2);
    *param_1 = param_2;
    *(undefined4 *)((long)param_1 + 0xc) = 0x80000400;
  }
  return;
}


